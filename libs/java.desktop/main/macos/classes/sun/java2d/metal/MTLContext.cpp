#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace metal {

void MTLContext::init$($RenderQueue* rq) {
	$BufferedContext::init$(rq);
}

void MTLContext::setScratchSurface($MTLGraphicsConfig* gc) {
	$init(MTLContext);
	setScratchSurface($nc(gc)->getNativeConfigInfo());
}

void MTLContext::setScratchSurface(int64_t pConfigInfo) {
	$init(MTLContext);
	$useLocalObjectStack();
	$init($BufferedContext);
	$assignStatic($BufferedContext::currentContext, nullptr);
	$var($MTLRenderQueue, rq, $MTLRenderQueue::getInstance());
	$var($RenderBuffer, buf, $nc(rq)->getBuffer());
	rq->ensureCapacityAndAlignment(12, 4);
	$nc(buf)->putInt(71);
	buf->putLong(pConfigInfo);
}

MTLContext::MTLContext() {
}

$Class* MTLContext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, $PUBLIC, $method(MTLContext, init$, void, $RenderQueue*)},
		{"setScratchSurface", "(Lsun/java2d/metal/MTLGraphicsConfig;)V", nullptr, $STATIC, $staticMethod(MTLContext, setScratchSurface, void, $MTLGraphicsConfig*)},
		{"setScratchSurface", "(J)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MTLContext, setScratchSurface, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.metal.MTLContext$MTLContextCaps", "sun.java2d.metal.MTLContext", "MTLContextCaps", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.java2d.metal.MTLContext",
		"sun.java2d.pipe.BufferedContext",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.metal.MTLContext$MTLContextCaps"
	};
	$loadClass(MTLContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MTLContext);
	});
	return class$;
}

$Class* MTLContext::class$ = nullptr;

		} // metal
	} // java2d
} // sun