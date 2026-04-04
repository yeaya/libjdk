#include <sun/awt/image/ImagingLib$1.h>
#include <java/lang/UnsatisfiedLinkError.h>
#include <sun/awt/image/ImagingLib.h>
#include <jcpp.h>

#undef FALSE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsatisfiedLinkError = ::java::lang::UnsatisfiedLinkError;
using $ImagingLib = ::sun::awt::image::ImagingLib;

namespace sun {
	namespace awt {
		namespace image {

void ImagingLib$1::init$() {
}

$Object* ImagingLib$1::run() {
	$beforeCallerSensitive();
	$var($String, arch, $System::getProperty("os.arch"_s));
	try {
		$System::loadLibrary("mlib_image"_s);
	} catch ($UnsatisfiedLinkError& e) {
		return $of($Boolean::FALSE);
	}
	bool success = $ImagingLib::init();
	return $of($Boolean::valueOf(success));
}

ImagingLib$1::ImagingLib$1() {
}

$Class* ImagingLib$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ImagingLib$1, init$, void)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(ImagingLib$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.image.ImagingLib",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.image.ImagingLib$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.image.ImagingLib$1",
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
		"sun.awt.image.ImagingLib"
	};
	$loadClass(ImagingLib$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImagingLib$1);
	});
	return class$;
}

$Class* ImagingLib$1::class$ = nullptr;

		} // image
	} // awt
} // sun