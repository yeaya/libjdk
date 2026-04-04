#include <sun/java2d/metal/MTLGraphicsConfig$MTLBufferCaps.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <jcpp.h>

#undef UNDEFINED

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLGraphicsConfig$MTLBufferCaps::init$(bool dblBuf) {
	$init($MTLGraphicsConfig);
	$init($BufferCapabilities$FlipContents);
	$BufferCapabilities::init$($MTLGraphicsConfig::imageCaps, $MTLGraphicsConfig::imageCaps, dblBuf ? $BufferCapabilities$FlipContents::UNDEFINED : ($BufferCapabilities$FlipContents*)nullptr);
}

MTLGraphicsConfig$MTLBufferCaps::MTLGraphicsConfig$MTLBufferCaps() {
}

$Class* MTLGraphicsConfig$MTLBufferCaps::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(MTLGraphicsConfig$MTLBufferCaps, init$, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.metal.MTLGraphicsConfig$MTLBufferCaps", "sun.java2d.metal.MTLGraphicsConfig", "MTLBufferCaps", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.metal.MTLGraphicsConfig$MTLBufferCaps",
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
		"sun.java2d.metal.MTLGraphicsConfig"
	};
	$loadClass(MTLGraphicsConfig$MTLBufferCaps, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLGraphicsConfig$MTLBufferCaps);
	});
	return class$;
}

$Class* MTLGraphicsConfig$MTLBufferCaps::class$ = nullptr;

		} // metal
	} // java2d
} // sun