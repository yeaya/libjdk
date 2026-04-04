#include <sun/awt/X11GraphicsConfig$XDBECapabilities.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <jcpp.h>

#undef UNDEFINED

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;

namespace sun {
	namespace awt {

void X11GraphicsConfig$XDBECapabilities::init$() {
	$init($X11GraphicsConfig);
	$init($BufferCapabilities$FlipContents);
	$BufferCapabilities::init$($X11GraphicsConfig::imageCaps, $X11GraphicsConfig::imageCaps, $BufferCapabilities$FlipContents::UNDEFINED);
}

X11GraphicsConfig$XDBECapabilities::X11GraphicsConfig$XDBECapabilities() {
}

$Class* X11GraphicsConfig$XDBECapabilities::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(X11GraphicsConfig$XDBECapabilities, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11GraphicsConfig$XDBECapabilities", "sun.awt.X11GraphicsConfig", "XDBECapabilities", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.X11GraphicsConfig$XDBECapabilities",
		"java.awt.BufferCapabilities",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11GraphicsConfig"
	};
	$loadClass(X11GraphicsConfig$XDBECapabilities, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X11GraphicsConfig$XDBECapabilities);
	});
	return class$;
}

$Class* X11GraphicsConfig$XDBECapabilities::class$ = nullptr;

	} // awt
} // sun