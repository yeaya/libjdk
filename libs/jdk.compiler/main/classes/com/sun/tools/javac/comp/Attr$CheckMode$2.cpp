#include <com/sun/tools/javac/comp/Attr$CheckMode$2.h>
#include <com/sun/tools/javac/comp/Attr$CheckMode.h>
#include <jcpp.h>

using $Attr$CheckMode = ::com::sun::tools::javac::comp::Attr$CheckMode;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Attr$CheckMode$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Attr$CheckMode::init$($enum$name, $enum$ordinal);
}

bool Attr$CheckMode$2::installPostInferenceHook() {
	return false;
}

Attr$CheckMode$2::Attr$CheckMode$2() {
}

$Class* Attr$CheckMode$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Attr$CheckMode$2, init$, void, $String*, int32_t)},
		{"installPostInferenceHook", "()Z", nullptr, $PUBLIC, $virtualMethod(Attr$CheckMode$2, installPostInferenceHook, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Attr$CheckMode",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Attr$CheckMode", "com.sun.tools.javac.comp.Attr", "CheckMode", $STATIC | $ENUM},
		{"com.sun.tools.javac.comp.Attr$CheckMode$2", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.comp.Attr$CheckMode$2",
		"com.sun.tools.javac.comp.Attr$CheckMode",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Attr"
	};
	$loadClass(Attr$CheckMode$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Attr$CheckMode$2));
	});
	return class$;
}

$Class* Attr$CheckMode$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com