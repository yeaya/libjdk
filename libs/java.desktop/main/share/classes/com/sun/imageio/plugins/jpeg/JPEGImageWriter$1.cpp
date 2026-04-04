#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter$1.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

void JPEGImageWriter$1::init$() {
}

$Object* JPEGImageWriter$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("javajpeg"_s);
	return nullptr;
}

JPEGImageWriter$1::JPEGImageWriter$1() {
}

$Class* JPEGImageWriter$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JPEGImageWriter$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(JPEGImageWriter$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.imageio.plugins.jpeg.JPEGImageWriter",
		"initStatic",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.JPEGImageWriter$1",
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
		"com.sun.imageio.plugins.jpeg.JPEGImageWriter"
	};
	$loadClass(JPEGImageWriter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JPEGImageWriter$1);
	});
	return class$;
}

$Class* JPEGImageWriter$1::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com