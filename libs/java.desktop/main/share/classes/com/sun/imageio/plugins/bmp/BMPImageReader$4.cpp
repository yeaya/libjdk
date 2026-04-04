#include <com/sun/imageio/plugins/bmp/BMPImageReader$4.h>
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

void BMPImageReader$4::init$() {
}

$Object* BMPImageReader$4::run() {
	return $of($Boolean::valueOf($Boolean::getBoolean("sun.imageio.plugins.bmp.disableLinkedProfiles"_s)));
}

BMPImageReader$4::BMPImageReader$4() {
}

$Class* BMPImageReader$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BMPImageReader$4, init$, void)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(BMPImageReader$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.imageio.plugins.bmp.BMPImageReader",
		"isLinkedProfileAllowed",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.bmp.BMPImageReader$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.bmp.BMPImageReader$4",
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
	$loadClass(BMPImageReader$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BMPImageReader$4);
	});
	return class$;
}

$Class* BMPImageReader$4::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com