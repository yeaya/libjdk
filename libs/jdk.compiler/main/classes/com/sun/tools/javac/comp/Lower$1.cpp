#include <com/sun/tools/javac/comp/Lower$1.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef NON_RECURSIVE
#undef SYNTHETIC
#undef TYP

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Lower$1::init$($Lower* this$0) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
}

void Lower$1::visitMethodDef($JCTree$JCMethodDecl* that) {
	checkConflicts($($nc(that)->pos()), $nc(that)->sym, this->currentClass);
	$TreeScanner::visitMethodDef(that);
}

void Lower$1::visitVarDef($JCTree$JCVariableDecl* that) {
	$init($Kinds$Kind);
	if ($nc($nc($nc(that)->sym)->owner)->kind == $Kinds$Kind::TYP) {
		checkConflicts($(that->pos()), that->sym, this->currentClass);
	}
	$TreeScanner::visitVarDef(that);
}

void Lower$1::visitClassDef($JCTree$JCClassDecl* that) {
	$useLocalObjectStack();
	$var($Symbol$TypeSymbol, prevCurrentClass, this->currentClass);
	$set(this, currentClass, $nc(that)->sym);
	$var($Throwable, var$0, nullptr);
	try {
		$TreeScanner::visitClassDef(that);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$set(this, currentClass, prevCurrentClass);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Lower$1::checkConflicts($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym, $Symbol$TypeSymbol* c) {
	$useLocalObjectStack();
	$init($Type);
	$var($Type, ct, $nc(c)->type);
	for (; !$equals(ct, $Type::noType); $assign(ct, $nc(this->this$0->types)->supertype(ct))) {
		$init($Scope$LookupKind);
		$var($Iterator, i$, $$nc($$nc($nc($nc(ct)->tsym)->members())->getSymbolsByName($nc(sym)->name, $Scope$LookupKind::NON_RECURSIVE))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym2, $cast($Symbol, i$->next()));
			{
				bool var$3 = sym->kind == $nc(sym2)->kind;
				if (var$3) {
					$var($Type, var$4, $nc(this->this$0->types)->erasure(sym->type));
					var$3 = $nc(this->this$0->types)->isSameType(var$4, $(this->this$0->types->erasure(sym2->type)));
				}
				bool var$2 = var$3 && sym != sym2;
				if (var$2) {
					int64_t var$5 = sym->flags() & $Flags::SYNTHETIC;
					var$2 = var$5 != (sym2->flags() & $Flags::SYNTHETIC);
				}
				bool var$1 = var$2;
				bool var$0 = var$1 && (sym->flags() & (int64_t)0x80000000) == 0;
				if (var$0 && (sym2->flags() & (int64_t)0x80000000) == 0) {
					syntheticError(pos, (sym2->flags() & 0x1000) == 0 ? sym2 : sym);
					return;
				}
			}
		}
	}
}

void Lower$1::syntheticError($JCDiagnostic$DiagnosticPosition* pos, $Symbol* sym) {
	$useLocalObjectStack();
	if (!$nc($nc(sym)->type)->isErroneous()) {
		$var($Symbol, var$0, sym->location());
		$nc(this->this$0->log)->error(pos, $($CompilerProperties$Errors::CannotGenerateClass(var$0, $($CompilerProperties$Fragments::SyntheticNameConflict(sym, $(sym->location()))))));
	}
}

Lower$1::Lower$1() {
}

$Class* Lower$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$1, this$0)},
		{"currentClass", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, 0, $field(Lower$1, currentClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Lower;)V", nullptr, 0, $method(Lower$1, init$, void, $Lower*)},
		{"checkConflicts", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $virtualMethod(Lower$1, checkConflicts, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Symbol$TypeSymbol*)},
		{"syntheticError", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PRIVATE, $method(Lower$1, syntheticError, void, $JCDiagnostic$DiagnosticPosition*, $Symbol*)},
		{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(Lower$1, visitClassDef, void, $JCTree$JCClassDecl*)},
		{"visitMethodDef", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", nullptr, $PUBLIC, $virtualMethod(Lower$1, visitMethodDef, void, $JCTree$JCMethodDecl*)},
		{"visitVarDef", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)V", nullptr, $PUBLIC, $virtualMethod(Lower$1, visitVarDef, void, $JCTree$JCVariableDecl*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Lower",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Lower$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Lower$1",
		"com.sun.tools.javac.tree.TreeScanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Lower"
	};
	$loadClass(Lower$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Lower$1);
	});
	return class$;
}

$Class* Lower$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com