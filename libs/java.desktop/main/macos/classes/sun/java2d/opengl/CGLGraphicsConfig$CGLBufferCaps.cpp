#include <sun/java2d/opengl/CGLGraphicsConfig$CGLBufferCaps.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <jcpp.h>

#undef UNDEFINED

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CGLGraphicsConfig = ::sun::java2d::opengl::CGLGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace opengl {

void CGLGraphicsConfig$CGLBufferCaps::init$(bool dblBuf) {
	$init($CGLGraphicsConfig);
	$init($BufferCapabilities$FlipContents);
	$BufferCapabilities::init$($CGLGraphicsConfig::imageCaps, $CGLGraphicsConfig::imageCaps, dblBuf ? $BufferCapabilities$FlipContents::UNDEFINED : ($BufferCapabilities$FlipContents*)nullptr);
}

CGLGraphicsConfig$CGLBufferCaps::CGLGraphicsConfig$CGLBufferCaps() {
}

$Class* CGLGraphicsConfig$CGLBufferCaps::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(CGLGraphicsConfig$CGLBufferCaps, init$, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.CGLGraphicsConfig$CGLBufferCaps", "sun.java2d.opengl.CGLGraphicsConfig", "CGLBufferCaps", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.CGLGraphicsConfig$CGLBufferCaps",
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
		"sun.java2d.opengl.CGLGraphicsConfig"
	};
	$loadClass(CGLGraphicsConfig$CGLBufferCaps, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CGLGraphicsConfig$CGLBufferCaps);
	});
	return class$;
}

$Class* CGLGraphicsConfig$CGLBufferCaps::class$ = nullptr;

		} // opengl
	} // java2d
} // sun