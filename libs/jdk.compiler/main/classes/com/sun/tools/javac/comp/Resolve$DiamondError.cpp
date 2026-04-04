#include <com/sun/tools/javac/comp/Resolve$DiamondError.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <jcpp.h>

#undef WRONG_MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$InapplicableSymbolError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionDiagHelper = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$DiamondError::init$($Resolve* this$0, $Symbol* sym, $Resolve$MethodResolutionContext* context) {
	$set(this, this$0, this$0);
	$Resolve$InapplicableSymbolError::init$(this$0, $nc(sym)->kind, "diamondError"_s, context);
	$set(this, sym, sym);
}

$JCDiagnostic* Resolve$DiamondError::getDetails() {
	$useLocalObjectStack();
	$init($Kinds$Kind);
	return ($nc(this->sym)->kind == $Kinds$Kind::WRONG_MTH) ? $cast($JCDiagnostic, $nc($($$sure($Resolve$InapplicableSymbolError, this->sym->baseSymbol())->errCandidate()))->snd) : ($JCDiagnostic*)nullptr;
}

$JCDiagnostic* Resolve$DiamondError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalObjectStack();
	$var($JCDiagnostic, details, getDetails());
	if (details != nullptr && this->this$0->compactMethodDiags) {
		$var($JCDiagnostic, simpleDiag, $Resolve$MethodResolutionDiagHelper::rewrite(this->this$0->diags, pos, $($nc(this->this$0->log)->currentSource()), dkind, details));
		if (simpleDiag != nullptr) {
			return simpleDiag;
		}
	}
	$var($String, key, details == nullptr ? "cant.apply.diamond"_s : "cant.apply.diamond.1"_s);
	$var($DiagnosticSource, var$0, $nc(this->this$0->log)->currentSource());
	return $nc(this->this$0->diags)->create(dkind, var$0, pos, key, $$new($ObjectArray, {
		$($CompilerProperties$Fragments::Diamond($nc(site)->tsym)),
		details
	}));
}

Resolve$DiamondError::Resolve$DiamondError() {
}

$Class* Resolve$DiamondError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$DiamondError, this$0)},
		{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Resolve$DiamondError, sym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)V", nullptr, $PUBLIC, $method(Resolve$DiamondError, init$, void, $Resolve*, $Symbol*, $Resolve$MethodResolutionContext*)},
		{"getDetails", "()Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, 0, $virtualMethod(Resolve$DiamondError, getDetails, $JCDiagnostic*)},
		{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0, $virtualMethod(Resolve$DiamondError, getDiagnostic, $JCDiagnostic*, $JCDiagnostic$DiagnosticType*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, $List*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$DiamondError", "com.sun.tools.javac.comp.Resolve", "DiamondError", 0},
		{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError", "com.sun.tools.javac.comp.Resolve", "InapplicableSymbolError", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$DiamondError",
		"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$DiamondError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Resolve$DiamondError));
	});
	return class$;
}

$Class* Resolve$DiamondError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com