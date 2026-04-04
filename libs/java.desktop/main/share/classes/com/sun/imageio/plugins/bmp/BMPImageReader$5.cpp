#include <com/sun/imageio/plugins/bmp/BMPImageReader$5.h>
#include <com/sun/imageio/plugins/bmp/BMPImageReader.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

void BMPImageReader$5::init$() {
}

$Object* BMPImageReader$5::run() {
	$useLocalObjectStack();
	$var($String, osname, $System::getProperty("os.name"_s));
	return $of($Boolean::valueOf((osname != nullptr && $(osname->toLowerCase())->startsWith("win"_s))));
}

BMPImageReader$5::BMPImageReader$5() {
}

$Class* BMPImageReader$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BMPImageReader$5, init$, void)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(BMPImageReader$5, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.imageio.plugins.bmp.BMPImageReader",
		"isUncOrDevicePath",
		"([B)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.bmp.BMPImageReader$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.bmp.BMPImageReader$5",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.imageio.plugins.bmp.BMPImageReader"
	};
	$loadClass(BMPImageReader$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BMPImageReader$5);
	});
	return class$;
}

$Class* BMPImageReader$5::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com