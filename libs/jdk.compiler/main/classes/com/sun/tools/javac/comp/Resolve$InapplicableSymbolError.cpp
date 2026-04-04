#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/AttrRecover.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef WRONG_MTH

using $Kinds = ::com::sun::tools::javac::code::Kinds;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionContext$Candidate = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext$Candidate;
using $Resolve$MethodResolutionDiagHelper = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$InapplicableSymbolError::init$($Resolve* this$0, $Resolve$MethodResolutionContext* context) {
	$init($Kinds$Kind);
	Resolve$InapplicableSymbolError::init$(this$0, $Kinds$Kind::WRONG_MTH, "inapplicable symbol error"_s, context);
}

void Resolve$InapplicableSymbolError::init$($Resolve* this$0, $Kinds$Kind* kind, $String* debugName, $Resolve$MethodResolutionContext* context) {
	$set(this, this$0, this$0);
	$Resolve$ResolveError::init$(this$0, kind, debugName);
	$set(this, resolveContext, context);
}

$String* Resolve$InapplicableSymbolError::toString() {
	return $Resolve$ResolveError::toString();
}

bool Resolve$InapplicableSymbolError::exists() {
	return true;
}

$JCDiagnostic* Resolve$InapplicableSymbolError::getDiagnostic($JCDiagnostic$DiagnosticType* dkind, $JCDiagnostic$DiagnosticPosition* pos, $Symbol* location, $Type* site, $Name* name, $List* argtypes, $List* typeargtypes) {
	$useLocalObjectStack();
	if (name == $nc(this->this$0->names)->error) {
		return nullptr;
	}
	$var($Pair, c, errCandidate());
	if (this->this$0->compactMethodDiags) {
		$var($JCDiagnostic, simpleDiag, $Resolve$MethodResolutionDiagHelper::rewrite(this->this$0->diags, pos, $($nc(this->this$0->log)->currentSource()), dkind, $cast($JCDiagnostic, $nc(c)->snd)));
		if (simpleDiag != nullptr) {
			return simpleDiag;
		}
	}
	$var($Symbol, ws, $nc($cast($Symbol, $nc(c)->fst))->asMemberOf(site, this->this$0->types));
	$var($DiagnosticSource, var$0, $nc(this->this$0->log)->currentSource());
	$var($String, var$1, "cant.apply.symbol"_s);
	return $nc(this->this$0->diags)->create(dkind, var$0, pos, var$1, $$new($ObjectArray, {
		$($Kinds::kindName(ws)),
		$nc(ws)->name == $nc(this->this$0->names)->init ? $nc(ws->owner)->name : ws->name,
		$(this->this$0->methodArguments($($nc(ws->type)->getParameterTypes()))),
		$(this->this$0->methodArguments(argtypes)),
		$($Kinds::kindName(ws->owner)),
		$nc(ws->owner)->type,
		c->snd
	}));
}

$Symbol* Resolve$InapplicableSymbolError::access($Name* name, $Symbol$TypeSymbol* location) {
	$useLocalObjectStack();
	$var($Pair, cand, errCandidate());
	$var($Symbol$TypeSymbol, errSymbol, $nc($($nc(this->this$0->types)->createErrorType(name, location, cand != nullptr ? $nc(($cast($Symbol, cand->fst)))->type : $nc($nc(this->this$0->syms)->errSymbol)->type)))->tsym);
	if (cand != nullptr) {
		$nc(this->this$0->attrRecover)->wrongMethodSymbolCandidate(errSymbol, $cast($Symbol, cand->fst), $cast($JCDiagnostic, cand->snd));
	}
	return errSymbol;
}

$Pair* Resolve$InapplicableSymbolError::errCandidate() {
	$useLocalObjectStack();
	$var($Resolve$MethodResolutionContext$Candidate, bestSoFar, nullptr);
	{
		$var($Iterator, i$, $nc($nc(this->resolveContext)->candidates)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Resolve$MethodResolutionContext$Candidate, c, $cast($Resolve$MethodResolutionContext$Candidate, i$->next()));
			{
				if ($nc(c)->isApplicable()) {
					continue;
				}
				$assign(bestSoFar, c);
			}
		}
	}
	$Assert::checkNonNull(bestSoFar);
	return $new($Pair, $nc(bestSoFar)->sym, $nc(bestSoFar)->details);
}

Resolve$InapplicableSymbolError::Resolve$InapplicableSymbolError() {
}

$Class* Resolve$InapplicableSymbolError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$InapplicableSymbolError, this$0)},
		{"resolveContext", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;", nullptr, $PROTECTED, $field(Resolve$InapplicableSymbolError, resolveContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)V", nullptr, 0, $method(Resolve$InapplicableSymbolError, init$, void, $Resolve*, $Resolve$MethodResolutionContext*)},
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;Lcom/sun/tools/javac/code/Kinds$Kind;Ljava/lang/String;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)V", nullptr, $PROTECTED, $method(Resolve$InapplicableSymbolError, init$, void, $Resolve*, $Kinds$Kind*, $String*, $Resolve$MethodResolutionContext*)},
		{"access", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC, $virtualMethod(Resolve$InapplicableSymbolError, access, $Symbol*, $Name*, $Symbol$TypeSymbol*)},
		{"errCandidate", "()Lcom/sun/tools/javac/util/Pair;", "()Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/JCDiagnostic;>;", $PROTECTED, $virtualMethod(Resolve$InapplicableSymbolError, errCandidate, $Pair*)},
		{"exists", "()Z", nullptr, $PUBLIC, $virtualMethod(Resolve$InapplicableSymbolError, exists, bool)},
		{"getDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic;", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic;", 0, $virtualMethod(Resolve$InapplicableSymbolError, getDiagnostic, $JCDiagnostic*, $JCDiagnostic$DiagnosticType*, $JCDiagnostic$DiagnosticPosition*, $Symbol*, $Type*, $Name*, $List*, $List*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Resolve$InapplicableSymbolError, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError", "com.sun.tools.javac.comp.Resolve", "InapplicableSymbolError", 0},
		{"com.sun.tools.javac.comp.Resolve$ResolveError", "com.sun.tools.javac.comp.Resolve", "ResolveError", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$InapplicableSymbolError",
		"com.sun.tools.javac.comp.Resolve$ResolveError",
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
	$loadClass(Resolve$InapplicableSymbolError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Resolve$InapplicableSymbolError));
	});
	return class$;
}

$Class* Resolve$InapplicableSymbolError::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com