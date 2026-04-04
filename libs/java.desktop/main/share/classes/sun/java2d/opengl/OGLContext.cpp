#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLGraphicsConfig.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OGLGraphicsConfig = ::sun::java2d::opengl::OGLGraphicsConfig;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace opengl {

void OGLContext::init$($RenderQueue* rq) {
	$BufferedContext::init$(rq);
}

void OGLContext::setScratchSurface($OGLGraphicsConfig* gc) {
	$init(OGLContext);
	setScratchSurface($nc(gc)->getNativeConfigInfo());
}

void OGLContext::setScratchSurface(int64_t pConfigInfo) {
	$init(OGLContext);
	$useLocalObjectStack();
	$init($BufferedContext);
	$assignStatic($BufferedContext::currentContext, nullptr);
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$var($RenderBuffer, buf, $nc(rq)->getBuffer());
	rq->ensureCapacityAndAlignment(12, 4);
	$nc(buf)->putInt(71);
	buf->putLong(pConfigInfo);
}

void OGLContext::invalidateCurrentContext() {
	$init(OGLContext);
	$useLocalObjectStack();
	$init($BufferedContext);
	if ($BufferedContext::currentContext != nullptr) {
		$BufferedContext::currentContext->invalidateContext();
		$assignStatic($BufferedContext::currentContext, nullptr);
	}
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->ensureCapacity(4);
	$$nc(rq->getBuffer())->putInt(75);
	rq->flushNow();
}

$String* OGLContext::getOGLIdString() {
	$init(OGLContext);
	$prepareNativeStatic(getOGLIdString, $String*);
	$var($String, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

OGLContext::OGLContext() {
}

$Class* OGLContext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/pipe/RenderQueue;)V", nullptr, 0, $method(OGLContext, init$, void, $RenderQueue*)},
		{"getOGLIdString", "()Ljava/lang/String;", nullptr, $STATIC | $FINAL | $NATIVE, $staticMethod(OGLContext, getOGLIdString, $String*)},
		{"invalidateCurrentContext", "()V", nullptr, $STATIC, $staticMethod(OGLContext, invalidateCurrentContext, void)},
		{"setScratchSurface", "(Lsun/java2d/opengl/OGLGraphicsConfig;)V", nullptr, $STATIC, $staticMethod(OGLContext, setScratchSurface, void, $OGLGraphicsConfig*)},
		{"setScratchSurface", "(J)V", nullptr, $STATIC, $staticMethod(OGLContext, setScratchSurface, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.OGLContext$OGLContextCaps", "sun.java2d.opengl.OGLContext", "OGLContextCaps", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.java2d.opengl.OGLContext",
		"sun.java2d.pipe.BufferedContext",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.opengl.OGLContext$OGLContextCaps"
	};
	$loadClass(OGLContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OGLContext);
	});
	return class$;
}

$Class* OGLContext::class$ = nullptr;

		} // opengl
	} // java2d
} // sun