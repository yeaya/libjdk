#include <sun/awt/image/JPEGImageDecoder$1.h>
#include <sun/awt/image/JPEGImageDecoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

void JPEGImageDecoder$1::init$() {
}

$Object* JPEGImageDecoder$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("javajpeg"_s);
	return nullptr;
}

JPEGImageDecoder$1::JPEGImageDecoder$1() {
}

$Class* JPEGImageDecoder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JPEGImageDecoder$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(JPEGImageDecoder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.image.JPEGImageDecoder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.JPEGImageDecoder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.image.JPEGImageDecoder$1",
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
		"sun.awt.image.JPEGImageDecoder"
	};
	$loadClass(JPEGImageDecoder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JPEGImageDecoder$1);
	});
	return class$;
}

$Class* JPEGImageDecoder$1::class$ = nullptr;

		} // image
	} // awt
} // sun