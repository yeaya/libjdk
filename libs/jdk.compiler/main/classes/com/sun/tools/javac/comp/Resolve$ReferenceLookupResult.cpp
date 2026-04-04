#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupResult.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Resolve$18.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolError.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableSymbolsError.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheckDiag.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef ARITY_MISMATCH
#undef UNDEFINED

using $Resolve$MethodResolutionDiagHelper$TemplateArray = $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Resolve$18 = ::com::sun::tools::javac::comp::Resolve$18;
using $Resolve$InapplicableSymbolError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolError;
using $Resolve$InapplicableSymbolsError = ::com::sun::tools::javac::comp::Resolve$InapplicableSymbolsError;
using $Resolve$MethodCheckDiag = ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag;
using $Resolve$MethodResolutionContext = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext;
using $Resolve$MethodResolutionContext$Candidate = ::com::sun::tools::javac::comp::Resolve$MethodResolutionContext$Candidate;
using $Resolve$MethodResolutionDiagHelper$Template = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template;
using $Resolve$ReferenceLookupResult$StaticKind = ::com::sun::tools::javac::comp::Resolve$ReferenceLookupResult$StaticKind;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0 : public $Predicate {
	$class(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Resolve$MethodResolutionContext* resolutionContext) {
		$set(this, resolutionContext, resolutionContext);
	}
	virtual bool test(Object$* c) override {
		 return Resolve$ReferenceLookupResult::lambda$staticKind$0(resolutionContext, $cast($Resolve$MethodResolutionContext$Candidate, c));
	}
	$Resolve$MethodResolutionContext* resolutionContext = nullptr;
};
$Class* Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"resolutionContext", "Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;", nullptr, $PUBLIC, $field(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0, resolutionContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)V", nullptr, $PUBLIC, $method(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0, init$, void, $Resolve$MethodResolutionContext*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0);
	});
	return class$;
}
$Class* Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0::class$ = nullptr;

class Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1 : public $Function {
	$class(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(Resolve$ReferenceLookupResult::lambda$staticKind$1($cast($Resolve$MethodResolutionContext$Candidate, c)));
	}
};
$Class* Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1);
	});
	return class$;
}
$Class* Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1::class$ = nullptr;

class Resolve$ReferenceLookupResult$$Lambda$reduce$2 : public $BinaryOperator {
	$class(Resolve$ReferenceLookupResult$$Lambda$reduce$2, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* sk1, Object$* sk2) override {
		 return $of($Resolve$ReferenceLookupResult$StaticKind::reduce($cast($Resolve$ReferenceLookupResult$StaticKind, sk1), $cast($Resolve$ReferenceLookupResult$StaticKind, sk2)));
	}
};
$Class* Resolve$ReferenceLookupResult$$Lambda$reduce$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resolve$ReferenceLookupResult$$Lambda$reduce$2, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Resolve$ReferenceLookupResult$$Lambda$reduce$2, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$$Lambda$reduce$2",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Resolve$ReferenceLookupResult$$Lambda$reduce$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$ReferenceLookupResult$$Lambda$reduce$2);
	});
	return class$;
}
$Class* Resolve$ReferenceLookupResult$$Lambda$reduce$2::class$ = nullptr;

void Resolve$ReferenceLookupResult::init$($Symbol* sym, $Resolve$MethodResolutionContext* resolutionContext) {
	Resolve$ReferenceLookupResult::init$(sym, $(staticKind(sym, resolutionContext)));
}

void Resolve$ReferenceLookupResult::init$($Symbol* sym, $Resolve$ReferenceLookupResult$StaticKind* staticKind) {
	$set(this, staticKind$, staticKind);
	$set(this, sym, sym);
}

$Resolve$ReferenceLookupResult$StaticKind* Resolve$ReferenceLookupResult::staticKind($Symbol* sym, $Resolve$MethodResolutionContext* resolutionContext) {
	$useLocalObjectStack();
	$init($Resolve$18);
	switch ($nc($Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(sym)->kind))->ordinal())) {
	case 4:
	case 5:
		$init($Resolve$ReferenceLookupResult$StaticKind);
		return $cast($Resolve$ReferenceLookupResult$StaticKind, $$nc($$nc($$nc($$nc($nc($nc(resolutionContext)->candidates)->stream())->filter($$new(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0, resolutionContext)))->map($$new(Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1)))->reduce($$new(Resolve$ReferenceLookupResult$$Lambda$reduce$2)))->orElse($Resolve$ReferenceLookupResult$StaticKind::UNDEFINED));
	default:
		$init($Resolve$ReferenceLookupResult$StaticKind);
		return $Resolve$ReferenceLookupResult$StaticKind::UNDEFINED;
	}
}

bool Resolve$ReferenceLookupResult::isSuccess() {
	$init($Resolve$ReferenceLookupResult$StaticKind);
	return this->staticKind$ != $Resolve$ReferenceLookupResult$StaticKind::UNDEFINED;
}

bool Resolve$ReferenceLookupResult::hasKind($Resolve$ReferenceLookupResult$StaticKind* sk) {
	return this->staticKind$ == sk;
}

bool Resolve$ReferenceLookupResult::canIgnore() {
	$useLocalObjectStack();
	$init($Resolve$18);
	$var($Resolve$InapplicableSymbolError, errSym, nullptr);
	$var($Resolve$InapplicableSymbolsError, errSyms, nullptr);
	switch ($nc($Resolve$18::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(this->sym)->kind))->ordinal())) {
	case 1:
		return true;
	case 3:
		$assign(errSym, $cast($Resolve$InapplicableSymbolError, this->sym->baseSymbol()));
		$init($Resolve$MethodCheckDiag);
		return $$new($Resolve$MethodResolutionDiagHelper$Template, $($Resolve$MethodCheckDiag::ARITY_MISMATCH->regex()), $$new($Resolve$MethodResolutionDiagHelper$TemplateArray, 0))->matches($nc($($nc(errSym)->errCandidate()))->snd);
	case 6:
		$assign(errSyms, $cast($Resolve$InapplicableSymbolsError, this->sym->baseSymbol()));
		return $$nc($nc(errSyms)->filterCandidates($($nc(errSyms)->mapCandidates())))->isEmpty();
	default:
		return false;
	}
}

Resolve$ReferenceLookupResult* Resolve$ReferenceLookupResult::error($Symbol* sym) {
	$init($Resolve$ReferenceLookupResult$StaticKind);
	return $new(Resolve$ReferenceLookupResult, sym, $Resolve$ReferenceLookupResult$StaticKind::UNDEFINED);
}

$Resolve$ReferenceLookupResult$StaticKind* Resolve$ReferenceLookupResult::lambda$staticKind$1($Resolve$MethodResolutionContext$Candidate* c) {
	return $Resolve$ReferenceLookupResult$StaticKind::from($nc(c)->sym);
}

bool Resolve$ReferenceLookupResult::lambda$staticKind$0($Resolve$MethodResolutionContext* resolutionContext, $Resolve$MethodResolutionContext$Candidate* c) {
	return $nc(c)->isApplicable() && c->step == $nc(resolutionContext)->step;
}

Resolve$ReferenceLookupResult::Resolve$ReferenceLookupResult() {
}

$Class* Resolve$ReferenceLookupResult::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0")) {
			return Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1")) {
			return Resolve$ReferenceLookupResult$$Lambda$lambda$staticKind$1$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$$Lambda$reduce$2")) {
			return Resolve$ReferenceLookupResult$$Lambda$reduce$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"staticKind", "Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, 0, $field(Resolve$ReferenceLookupResult, staticKind$)},
		{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Resolve$ReferenceLookupResult, sym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)V", nullptr, 0, $method(Resolve$ReferenceLookupResult, init$, void, $Symbol*, $Resolve$MethodResolutionContext*)},
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;)V", nullptr, $PRIVATE, $method(Resolve$ReferenceLookupResult, init$, void, $Symbol*, $Resolve$ReferenceLookupResult$StaticKind*)},
		{"canIgnore", "()Z", nullptr, 0, $virtualMethod(Resolve$ReferenceLookupResult, canIgnore, bool)},
		{"error", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult;", nullptr, $STATIC, $staticMethod(Resolve$ReferenceLookupResult, error, Resolve$ReferenceLookupResult*, $Symbol*)},
		{"hasKind", "(Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;)Z", nullptr, 0, $virtualMethod(Resolve$ReferenceLookupResult, hasKind, bool, $Resolve$ReferenceLookupResult$StaticKind*)},
		{"isSuccess", "()Z", nullptr, 0, $virtualMethod(Resolve$ReferenceLookupResult, isSuccess, bool)},
		{"lambda$staticKind$0", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Resolve$ReferenceLookupResult, lambda$staticKind$0, bool, $Resolve$MethodResolutionContext*, $Resolve$MethodResolutionContext$Candidate*)},
		{"lambda$staticKind$1", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext$Candidate;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Resolve$ReferenceLookupResult, lambda$staticKind$1, $Resolve$ReferenceLookupResult$StaticKind*, $Resolve$MethodResolutionContext$Candidate*)},
		{"staticKind", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/comp/Resolve$MethodResolutionContext;)Lcom/sun/tools/javac/comp/Resolve$ReferenceLookupResult$StaticKind;", nullptr, $PRIVATE | $STATIC, $staticMethod(Resolve$ReferenceLookupResult, staticKind, $Resolve$ReferenceLookupResult$StaticKind*, $Symbol*, $Resolve$MethodResolutionContext*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult", "com.sun.tools.javac.comp.Resolve", "ReferenceLookupResult", $STATIC},
		{"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult$StaticKind", "com.sun.tools.javac.comp.Resolve$ReferenceLookupResult", "StaticKind", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$ReferenceLookupResult",
		"java.lang.Object",
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
	$loadClass(Resolve$ReferenceLookupResult, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$ReferenceLookupResult);
	});
	return class$;
}

$Class* Resolve$ReferenceLookupResult::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com