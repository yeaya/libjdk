#include <com/sun/tools/javac/comp/Infer$InferenceStep$6.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

#undef LOWER
#undef UPPER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$InferenceStep = ::com::sun::tools::javac::comp::Infer$InferenceStep;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Infer$InferenceStep$6::init$($String* $enum$name, int32_t $enum$ordinal, $Type$UndetVar$InferenceBound* ib) {
	$Infer$InferenceStep::init$($enum$name, $enum$ordinal, ib);
}

bool Infer$InferenceStep$6::accepts($Type$UndetVar* t, $InferenceContext* inferenceContext) {
	$useLocalObjectStack();
	bool var$0 = $nc(t)->isCaptured();
	$init($Type$UndetVar$InferenceBound);
	return var$0 && !$nc(inferenceContext)->free($(t->getBounds($$new($Type$UndetVar$InferenceBoundArray, {
		$Type$UndetVar$InferenceBound::UPPER,
		$Type$UndetVar$InferenceBound::LOWER
	}))));
}

$Type* Infer$InferenceStep$6::solve($Type$UndetVar* uv, $InferenceContext* inferenceContext) {
	$useLocalObjectStack();
	$var($Infer, infer, $nc(inferenceContext)->infer);
	$init($Infer$InferenceStep);
	$var($Type, upper, $$nc($Infer$InferenceStep::UPPER->filterBounds(uv, inferenceContext))->nonEmpty() ? $Infer$InferenceStep::UPPER->solve(uv, inferenceContext) : $nc($nc(infer)->syms)->objectType);
	$var($Type, lower, $$nc($Infer$InferenceStep::LOWER->filterBounds(uv, inferenceContext))->nonEmpty() ? $Infer$InferenceStep::LOWER->solve(uv, inferenceContext) : $nc($nc(infer)->syms)->botType);
	$var($Type$CapturedType, prevCaptured, $cast($Type$CapturedType, $nc(uv)->qtype));
	return $new($Type$CapturedType, $nc($nc(prevCaptured)->tsym)->name, $nc($nc(prevCaptured)->tsym)->owner, upper, lower, $nc(prevCaptured)->wildcard);
}

Infer$InferenceStep$6::Infer$InferenceStep$6() {
}

$Class* Infer$InferenceStep$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, $PRIVATE, $method(Infer$InferenceStep$6, init$, void, $String*, int32_t, $Type$UndetVar$InferenceBound*)},
		{"accepts", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Z", nullptr, $PUBLIC, $virtualMethod(Infer$InferenceStep$6, accepts, bool, $Type$UndetVar*, $InferenceContext*)},
		{"solve", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Infer$InferenceStep$6, solve, $Type*, $Type$UndetVar*, $InferenceContext*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Infer$InferenceStep",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$InferenceStep", "com.sun.tools.javac.comp.Infer", "InferenceStep", $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.comp.Infer$InferenceStep$6", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.comp.Infer$InferenceStep$6",
		"com.sun.tools.javac.comp.Infer$InferenceStep",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$InferenceStep$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Infer$InferenceStep$6));
	});
	return class$;
}

$Class* Infer$InferenceStep$6::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com