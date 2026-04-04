#include <com/sun/tools/javac/comp/Infer$InferenceStep$5.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef UPPER

using $Type$UndetVar$InferenceBoundArray = $Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
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

void Infer$InferenceStep$5::init$($String* $enum$name, int32_t $enum$ordinal, $Type$UndetVar$InferenceBound* ib) {
	$Infer$InferenceStep::init$($enum$name, $enum$ordinal, ib);
}

bool Infer$InferenceStep$5::accepts($Type$UndetVar* t, $InferenceContext* inferenceContext) {
	$useLocalObjectStack();
	bool var$0 = !$nc(inferenceContext)->free($($nc(t)->getBounds($$new($Type$UndetVar$InferenceBoundArray, {this->ib}))));
	return var$0 && !t->isCaptured();
}

$Type* Infer$InferenceStep$5::solve($Type$UndetVar* uv, $InferenceContext* inferenceContext) {
	$init($Infer$InferenceStep);
	return $Infer$InferenceStep::UPPER->solve(uv, inferenceContext);
}

Infer$InferenceStep$5::Infer$InferenceStep$5() {
}

$Class* Infer$InferenceStep$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, $PRIVATE, $method(Infer$InferenceStep$5, init$, void, $String*, int32_t, $Type$UndetVar$InferenceBound*)},
		{"accepts", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Z", nullptr, $PUBLIC, $virtualMethod(Infer$InferenceStep$5, accepts, bool, $Type$UndetVar*, $InferenceContext*)},
		{"solve", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Infer$InferenceStep$5, solve, $Type*, $Type$UndetVar*, $InferenceContext*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Infer$InferenceStep",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$InferenceStep", "com.sun.tools.javac.comp.Infer", "InferenceStep", $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.comp.Infer$InferenceStep$5", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.comp.Infer$InferenceStep$5",
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
	$loadClass(Infer$InferenceStep$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Infer$InferenceStep$5));
	});
	return class$;
}

$Class* Infer$InferenceStep$5::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com