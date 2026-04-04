#include <com/sun/tools/javac/comp/Infer$InferenceStep$4.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <com/sun/tools/javac/code/Type$UndetVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Infer$InferenceException.h>
#include <com/sun/tools/javac/comp/Infer$InferenceStep.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef ERROR

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$UndetVar = ::com::sun::tools::javac::code::Type$UndetVar;
using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Infer = ::com::sun::tools::javac::comp::Infer;
using $Infer$InferenceStep = ::com::sun::tools::javac::comp::Infer$InferenceStep;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Infer$InferenceStep$4::init$($String* $enum$name, int32_t $enum$ordinal, $Type$UndetVar$InferenceBound* ib) {
	$Infer$InferenceStep::init$($enum$name, $enum$ordinal, ib);
}

$Type* Infer$InferenceStep$4::solve($Type$UndetVar* uv, $InferenceContext* inferenceContext) {
	$useLocalObjectStack();
	$var($Infer, infer, $nc(inferenceContext)->infer);
	$var($List, hibounds, filterBounds(uv, inferenceContext));
	$var($Type, owntype, $nc($nc(hibounds)->tail)->tail == nullptr ? $cast($Type, hibounds->head) : $nc($nc(infer)->types)->glb(hibounds));
	bool var$0 = $nc(owntype)->isPrimitive();
	$init($TypeTag);
	if (var$0 || owntype->hasTag($TypeTag::ERROR)) {
		$throw($($nc(infer)->error($($nc($nc(infer)->diags)->fragment($($CompilerProperties$Fragments::NoUniqueMaximalInstanceExists($nc(uv)->qtype, hibounds)))))));
	} else {
		return owntype;
	}
}

Infer$InferenceStep$4::Infer$InferenceStep$4() {
}

$Class* Infer$InferenceStep$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;)V", nullptr, $PRIVATE, $method(Infer$InferenceStep$4, init$, void, $String*, int32_t, $Type$UndetVar$InferenceBound*)},
		{"solve", "(Lcom/sun/tools/javac/code/Type$UndetVar;Lcom/sun/tools/javac/comp/InferenceContext;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $virtualMethod(Infer$InferenceStep$4, solve, $Type*, $Type$UndetVar*, $InferenceContext*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Infer$InferenceStep",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$InferenceStep", "com.sun.tools.javac.comp.Infer", "InferenceStep", $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.comp.Infer$InferenceStep$4", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.comp.Infer$InferenceStep$4",
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
	$loadClass(Infer$InferenceStep$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Infer$InferenceStep$4));
	});
	return class$;
}

$Class* Infer$InferenceStep$4::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com