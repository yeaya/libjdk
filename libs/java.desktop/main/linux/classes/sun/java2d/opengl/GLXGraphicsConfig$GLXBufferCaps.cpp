#include <sun/java2d/opengl/GLXGraphicsConfig$GLXBufferCaps.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <jcpp.h>

#undef UNDEFINED

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace opengl {

void GLXGraphicsConfig$GLXBufferCaps::init$(bool dblBuf) {
	$init($GLXGraphicsConfig);
	$init($BufferCapabilities$FlipContents);
	$BufferCapabilities::init$($GLXGraphicsConfig::imageCaps, $GLXGraphicsConfig::imageCaps, dblBuf ? $BufferCapabilities$FlipContents::UNDEFINED : ($BufferCapabilities$FlipContents*)nullptr);
}

GLXGraphicsConfig$GLXBufferCaps::GLXGraphicsConfig$GLXBufferCaps() {
}

$Class* GLXGraphicsConfig$GLXBufferCaps::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(GLXGraphicsConfig$GLXBufferCaps, init$, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.GLXGraphicsConfig$GLXBufferCaps", "sun.java2d.opengl.GLXGraphicsConfig", "GLXBufferCaps", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.GLXGraphicsConfig$GLXBufferCaps",
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
		"sun.java2d.opengl.GLXGraphicsConfig"
	};
	$loadClass(GLXGraphicsConfig$GLXBufferCaps, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GLXGraphicsConfig$GLXBufferCaps);
	});
	return class$;
}

$Class* GLXGraphicsConfig$GLXBufferCaps::class$ = nullptr;

		} // opengl
	} // java2d
} // sun