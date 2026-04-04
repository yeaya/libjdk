#include <com/sun/tools/javac/comp/Lower$FreeVarCollector.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Lower$BasicFreeVarCollector.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef MTH
#undef SELECT
#undef VAR

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $Lower$BasicFreeVarCollector = ::com::sun::tools::javac::comp::Lower$BasicFreeVarCollector;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Lower$FreeVarCollector::init$($Lower* this$0, $Symbol$ClassSymbol* clazz) {
	$set(this, this$0, this$0);
	$Lower$BasicFreeVarCollector::init$(this$0);
	$set(this, clazz, clazz);
	$set(this, owner, $nc(clazz)->owner);
	$set(this, fvs, $List::nil());
}

void Lower$FreeVarCollector::addFreeVar($Symbol$VarSymbol* v) {
	{
		$var($List, l, this->fvs);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			if ($equals(l->head, v)) {
				return;
			}
		}
	}
	$set(this, fvs, $nc(this->fvs)->prepend(v));
}

void Lower$FreeVarCollector::addFreeVars($Symbol$ClassSymbol* c) {
	$useLocalObjectStack();
	$var($List, fvs, $cast($List, $nc(this->this$0->freevarCache)->get(c)));
	if (fvs != nullptr) {
		$var($List, l, fvs);
		for (; $nc(l)->nonEmpty(); $assign(l, l->tail)) {
			addFreeVar($cast($Symbol$VarSymbol, l->head));
		}
	}
}

void Lower$FreeVarCollector::visitSymbol($Symbol* _sym) {
	$useLocalObjectStack();
	$var($Symbol, sym, _sym);
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::VAR || sym->kind == $Kinds$Kind::MTH) {
		if (sym != nullptr && sym->owner != this->owner) {
			$assign(sym, $cast($Symbol, $nc(this->this$0->proxies)->get(sym)));
		}
		if (sym != nullptr && sym->owner == this->owner) {
			$var($Symbol$VarSymbol, v, $cast($Symbol$VarSymbol, sym));
			if (v->getConstValue() == nullptr) {
				addFreeVar(v);
			}
		} else if ($nc(this->this$0->outerThisStack)->head != nullptr && !$equals(this->this$0->outerThisStack->head, _sym)) {
			visitSymbol($cast($Symbol, this->this$0->outerThisStack->head));
		}
	}
}

void Lower$FreeVarCollector::visitNewClass($JCTree$JCNewClass* tree) {
	$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, $nc($nc(tree)->constructor)->owner));
	if (tree->encl == nullptr && $nc(c)->hasOuterInstance() && $nc(this->this$0->outerThisStack)->head != nullptr) {
		visitSymbol($cast($Symbol, $nc(this->this$0->outerThisStack)->head));
	}
	$Lower$BasicFreeVarCollector::visitNewClass(tree);
}

void Lower$FreeVarCollector::visitSelect($JCTree$JCFieldAccess* tree) {
	if (($nc(tree)->name == $nc(this->this$0->names)->_this || tree->name == this->this$0->names->_super) && !$equals($nc($nc(tree->selected)->type)->tsym, this->clazz) && $nc(this->this$0->outerThisStack)->head != nullptr) {
		visitSymbol($cast($Symbol, this->this$0->outerThisStack->head));
	}
	$Lower$BasicFreeVarCollector::visitSelect(tree);
}

void Lower$FreeVarCollector::visitApply($JCTree$JCMethodInvocation* tree) {
	$useLocalObjectStack();
	if ($TreeInfo::name($nc(tree)->meth) == $nc(this->this$0->names)->_super) {
		$var($Symbol, constructor, $TreeInfo::symbol(tree->meth));
		$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, $nc(constructor)->owner));
		bool var$0 = $nc(c)->hasOuterInstance();
		$init($JCTree$Tag);
		if (var$0 && !$nc(tree->meth)->hasTag($JCTree$Tag::SELECT) && $nc(this->this$0->outerThisStack)->head != nullptr) {
			visitSymbol($cast($Symbol, $nc(this->this$0->outerThisStack)->head));
		}
	}
	$Lower$BasicFreeVarCollector::visitApply(tree);
}

Lower$FreeVarCollector::Lower$FreeVarCollector() {
}

$Class* Lower$FreeVarCollector::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$FreeVarCollector, this$0)},
		{"owner", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Lower$FreeVarCollector, owner)},
		{"clazz", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, 0, $field(Lower$FreeVarCollector, clazz)},
		{"fvs", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;", 0, $field(Lower$FreeVarCollector, fvs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0, $method(Lower$FreeVarCollector, init$, void, $Lower*, $Symbol$ClassSymbol*)},
		{"addFreeVar", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", nullptr, $PRIVATE, $method(Lower$FreeVarCollector, addFreeVar, void, $Symbol$VarSymbol*)},
		{"addFreeVars", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, 0, $virtualMethod(Lower$FreeVarCollector, addFreeVars, void, $Symbol$ClassSymbol*)},
		{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC, $virtualMethod(Lower$FreeVarCollector, visitApply, void, $JCTree$JCMethodInvocation*)},
		{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC, $virtualMethod(Lower$FreeVarCollector, visitNewClass, void, $JCTree$JCNewClass*)},
		{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC, $virtualMethod(Lower$FreeVarCollector, visitSelect, void, $JCTree$JCFieldAccess*)},
		{"visitSymbol", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $virtualMethod(Lower$FreeVarCollector, visitSymbol, void, $Symbol*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Lower$FreeVarCollector", "com.sun.tools.javac.comp.Lower", "FreeVarCollector", 0},
		{"com.sun.tools.javac.comp.Lower$BasicFreeVarCollector", "com.sun.tools.javac.comp.Lower", "BasicFreeVarCollector", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Lower$FreeVarCollector",
		"com.sun.tools.javac.comp.Lower$BasicFreeVarCollector",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Lower"
	};
	$loadClass(Lower$FreeVarCollector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Lower$FreeVarCollector);
	});
	return class$;
}

$Class* Lower$FreeVarCollector::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com