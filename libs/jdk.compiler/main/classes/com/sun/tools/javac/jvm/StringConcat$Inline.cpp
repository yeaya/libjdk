#include <com/sun/tools/javac/jvm/StringConcat$Inline.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/jvm/StringConcat.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCBinary.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $StringConcat = ::com::sun::tools::javac::jvm::StringConcat;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCBinary = ::com::sun::tools::javac::tree::JCTree$JCBinary;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void StringConcat$Inline::init$($Context* context) {
	$StringConcat::init$(context);
}

$Items$Item* StringConcat$Inline::makeConcat($JCTree$JCAssignOp* tree) {
	$useLocalObjectStack();
	$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->pos());
	newStringBuilder(tree);
	$var($Items$Item, l, $nc(this->gen)->genExpr(tree->lhs, $nc(tree->lhs)->type));
	if ($nc(l)->width() > 0) {
		$$nc(this->gen->getCode())->emitop0(90 + 3 * (l->width() - 1));
	}
	l->load();
	appendString(tree->lhs);
	$var($List, args, collectAll(tree->rhs));
	{
		$var($Iterator, i$, $nc(args)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, t, $cast($JCTree, i$->next()));
			{
				$$nc(this->gen->genExpr(t, $nc(t)->type))->load();
				appendString(t);
			}
		}
	}
	builderToString(pos);
	return l;
}

$Items$Item* StringConcat$Inline::makeConcat($JCTree$JCBinary* tree) {
	$useLocalObjectStack();
	$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->pos());
	newStringBuilder(tree);
	$var($List, args, collectAll(tree));
	{
		$var($Iterator, i$, $nc(args)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree, t, $cast($JCTree, i$->next()));
			{
				$$nc($nc(this->gen)->genExpr(t, $nc(t)->type))->load();
				appendString(t);
			}
		}
	}
	builderToString(pos);
	return $$nc($nc(this->gen)->getItems())->makeStackItem($nc(this->syms)->stringType);
}

$JCDiagnostic$DiagnosticPosition* StringConcat$Inline::newStringBuilder($JCTree* tree) {
	$useLocalObjectStack();
	$var($JCDiagnostic$DiagnosticPosition, pos, $nc(tree)->pos());
	$$nc($nc(this->gen)->getCode())->emitop2(187, $nc(this->gen)->makeRef(pos, $nc(this->syms)->stringBuilderType), $nc(this->syms)->stringBuilderType);
	$$nc(this->gen->getCode())->emitop0(89);
	this->gen->callMethod(pos, this->syms->stringBuilderType, $nc(this->names)->init, $($List::nil()), false);
	return pos;
}

void StringConcat$Inline::appendString($JCTree* tree) {
	$useLocalObjectStack();
	$var($Type, t, $nc($nc(tree)->type)->baseType());
	if (!$nc(t)->isPrimitive() && t->tsym != $nc($nc(this->syms)->stringType)->tsym) {
		$assign(t, this->syms->objectType);
	}
	$Assert::checkNull($($nc(t)->constValue()));
	$var($Symbol, method, $cast($Symbol, $nc(this->sbAppends)->get(t)));
	if (method == nullptr) {
		$var($JCDiagnostic$DiagnosticPosition, var$0, tree->pos());
		$var($Env, var$1, $nc(this->gen)->getAttrEnv());
		$var($Type, var$2, $nc(this->syms)->stringBuilderType);
		$var($Name, var$3, $nc(this->names)->append);
		$assign(method, $nc(this->rs)->resolveInternalMethod(var$0, var$1, var$2, var$3, $($List::of(t)), nullptr));
		this->sbAppends->put(t, method);
	}
	$$nc($$nc($nc(this->gen)->getItems())->makeMemberItem(method, false))->invoke();
}

void StringConcat$Inline::builderToString($JCDiagnostic$DiagnosticPosition* pos) {
	$nc(this->gen)->callMethod(pos, $nc(this->syms)->stringBuilderType, $nc(this->names)->toString$, $($List::nil()), false);
}

StringConcat$Inline::StringConcat$Inline() {
}

$Class* StringConcat$Inline::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC, $method(StringConcat$Inline, init$, void, $Context*)},
		{"appendString", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PRIVATE, $method(StringConcat$Inline, appendString, void, $JCTree*)},
		{"builderToString", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PRIVATE, $method(StringConcat$Inline, builderToString, void, $JCDiagnostic$DiagnosticPosition*)},
		{"makeConcat", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, $PUBLIC, $virtualMethod(StringConcat$Inline, makeConcat, $Items$Item*, $JCTree$JCAssignOp*)},
		{"makeConcat", "(Lcom/sun/tools/javac/tree/JCTree$JCBinary;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, $PUBLIC, $virtualMethod(StringConcat$Inline, makeConcat, $Items$Item*, $JCTree$JCBinary*)},
		{"newStringBuilder", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE, $method(StringConcat$Inline, newStringBuilder, $JCDiagnostic$DiagnosticPosition*, $JCTree*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.StringConcat$Inline", "com.sun.tools.javac.jvm.StringConcat", "Inline", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.StringConcat$Inline",
		"com.sun.tools.javac.jvm.StringConcat",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.StringConcat"
	};
	$loadClass(StringConcat$Inline, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringConcat$Inline);
	});
	return class$;
}

$Class* StringConcat$Inline::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com