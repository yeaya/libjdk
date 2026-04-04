#include <java/awt/image/ColorModel$1.h>
#include <java/awt/image/ColorModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

void ColorModel$1::init$() {
}

$Object* ColorModel$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return nullptr;
}

ColorModel$1::ColorModel$1() {
}

$Class* ColorModel$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ColorModel$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ColorModel$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.image.ColorModel",
		"loadLibraries",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.image.ColorModel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.image.ColorModel$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.image.ColorModel"
	};
	$loadClass(ColorModel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ColorModel$1);
	});
	return class$;
}

$Class* ColorModel$1::class$ = nullptr;

		} // image
	} // awt
} // java