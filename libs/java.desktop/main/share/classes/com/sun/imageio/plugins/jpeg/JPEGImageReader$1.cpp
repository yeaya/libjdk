#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$1.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
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

void JPEGImageReader$1::init$() {
}

$Object* JPEGImageReader$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("javajpeg"_s);
	return nullptr;
}

JPEGImageReader$1::JPEGImageReader$1() {
}

$Class* JPEGImageReader$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JPEGImageReader$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(JPEGImageReader$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.imageio.plugins.jpeg.JPEGImageReader",
		"initStatic",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.jpeg.JPEGImageReader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.JPEGImageReader$1",
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
		"com.sun.imageio.plugins.jpeg.JPEGImageReader"
	};
	$loadClass(JPEGImageReader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JPEGImageReader$1);
	});
	return class$;
}

$Class* JPEGImageReader$1::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com