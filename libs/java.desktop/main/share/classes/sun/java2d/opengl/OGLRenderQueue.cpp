#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Set.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLRenderQueue$QueueFlusher.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $OGLRenderQueue$QueueFlusher = ::sun::java2d::opengl::OGLRenderQueue$QueueFlusher;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;

namespace sun {
	namespace java2d {
		namespace opengl {

class OGLRenderQueue$$Lambda$lambda$new$0 : public $PrivilegedAction {
	$class(OGLRenderQueue$$Lambda$lambda$new$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(OGLRenderQueue* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$new$0();
	}
	OGLRenderQueue* inst$ = nullptr;
};
$Class* OGLRenderQueue$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(OGLRenderQueue$$Lambda$lambda$new$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/opengl/OGLRenderQueue;)V", nullptr, $PUBLIC, $method(OGLRenderQueue$$Lambda$lambda$new$0, init$, void, OGLRenderQueue*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(OGLRenderQueue$$Lambda$lambda$new$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.java2d.opengl.OGLRenderQueue$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OGLRenderQueue$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OGLRenderQueue$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* OGLRenderQueue$$Lambda$lambda$new$0::class$ = nullptr;

OGLRenderQueue* OGLRenderQueue::theInstance = nullptr;

$RenderBuffer* OGLRenderQueue::access$000(OGLRenderQueue* x0) {
	$init(OGLRenderQueue);
	return $nc(x0)->buf;
}

void OGLRenderQueue::init$() {
	$beforeCallerSensitive();
	$RenderQueue::init$();
	$set(this, flusher, $cast($OGLRenderQueue$QueueFlusher, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(OGLRenderQueue$$Lambda$lambda$new$0, this)))));
}

OGLRenderQueue* OGLRenderQueue::getInstance() {
	$init(OGLRenderQueue);
	$synchronized(class$) {
		if (OGLRenderQueue::theInstance == nullptr) {
			$assignStatic(OGLRenderQueue::theInstance, $new(OGLRenderQueue));
		}
		return OGLRenderQueue::theInstance;
	}
}

void OGLRenderQueue::sync() {
	$init(OGLRenderQueue);
	$useLocalObjectStack();
	if (OGLRenderQueue::theInstance != nullptr) {
		OGLRenderQueue::theInstance->lock();
		$var($Throwable, var$0, nullptr);
		try {
			$nc(OGLRenderQueue::theInstance)->ensureCapacity(4);
			$$nc($nc(OGLRenderQueue::theInstance)->getBuffer())->putInt(76);
			$nc(OGLRenderQueue::theInstance)->flushNow();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(OGLRenderQueue::theInstance)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void OGLRenderQueue::disposeGraphicsConfig(int64_t pConfigInfo) {
	$init(OGLRenderQueue);
	$useLocalObjectStack();
	$var(OGLRenderQueue, rq, getInstance());
	$nc(rq)->lock();
	$var($Throwable, var$0, nullptr);
	try {
		$OGLContext::setScratchSurface(pConfigInfo);
		$var($RenderBuffer, buf, rq->getBuffer());
		rq->ensureCapacityAndAlignment(12, 4);
		$nc(buf)->putInt(74);
		buf->putLong(pConfigInfo);
		rq->flushNow();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		rq->unlock();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool OGLRenderQueue::isQueueFlusherThread() {
	$init(OGLRenderQueue);
	return ($Thread::currentThread() == $nc($nc($(getInstance()))->flusher)->thread);
}

void OGLRenderQueue::flushNow() {
	try {
		$nc(this->flusher)->flushNow();
	} catch ($Exception& e) {
		$nc($System::err)->println("exception in flushNow:"_s);
		e->printStackTrace();
	}
}

void OGLRenderQueue::flushAndInvokeNow($Runnable* r) {
	try {
		$nc(this->flusher)->flushAndInvokeNow(r);
	} catch ($Exception& e) {
		$nc($System::err)->println("exception in flushAndInvokeNow:"_s);
		e->printStackTrace();
	}
}

void OGLRenderQueue::flushBuffer(int64_t buf, int32_t limit) {
	$prepareNative(flushBuffer, void, int64_t buf, int32_t limit);
	$invokeNative(buf, limit);
	$finishNative();
}

void OGLRenderQueue::flushBuffer() {
	int32_t limit = $nc(this->buf)->position();
	if (limit > 0) {
		flushBuffer($nc(this->buf)->getAddress(), limit);
	}
	$nc(this->buf)->clear();
	$nc(this->refSet)->clear();
}

$OGLRenderQueue$QueueFlusher* OGLRenderQueue::lambda$new$0() {
	return $new($OGLRenderQueue$QueueFlusher, this);
}

OGLRenderQueue::OGLRenderQueue() {
}

$Class* OGLRenderQueue::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.java2d.opengl.OGLRenderQueue$$Lambda$lambda$new$0")) {
			return OGLRenderQueue$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"theInstance", "Lsun/java2d/opengl/OGLRenderQueue;", nullptr, $PRIVATE | $STATIC, $staticField(OGLRenderQueue, theInstance)},
		{"flusher", "Lsun/java2d/opengl/OGLRenderQueue$QueueFlusher;", nullptr, $PRIVATE | $FINAL, $field(OGLRenderQueue, flusher)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(OGLRenderQueue, init$, void)},
		{"access$000", "(Lsun/java2d/opengl/OGLRenderQueue;)Lsun/java2d/pipe/RenderBuffer;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(OGLRenderQueue, access$000, $RenderBuffer*, OGLRenderQueue*)},
		{"disposeGraphicsConfig", "(J)V", nullptr, $PUBLIC | $STATIC, $staticMethod(OGLRenderQueue, disposeGraphicsConfig, void, int64_t)},
		{"flushAndInvokeNow", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $virtualMethod(OGLRenderQueue, flushAndInvokeNow, void, $Runnable*)},
		{"flushBuffer", "(JI)V", nullptr, $PRIVATE | $NATIVE, $method(OGLRenderQueue, flushBuffer, void, int64_t, int32_t)},
		{"flushBuffer", "()V", nullptr, $PRIVATE, $method(OGLRenderQueue, flushBuffer, void)},
		{"flushNow", "()V", nullptr, $PUBLIC, $virtualMethod(OGLRenderQueue, flushNow, void)},
		{"getInstance", "()Lsun/java2d/opengl/OGLRenderQueue;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(OGLRenderQueue, getInstance, OGLRenderQueue*)},
		{"isQueueFlusherThread", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(OGLRenderQueue, isQueueFlusherThread, bool)},
		{"lambda$new$0", "()Lsun/java2d/opengl/OGLRenderQueue$QueueFlusher;", nullptr, $PRIVATE | $SYNTHETIC, $method(OGLRenderQueue, lambda$new$0, $OGLRenderQueue$QueueFlusher*)},
		{"sync", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(OGLRenderQueue, sync, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.OGLRenderQueue$QueueFlusher", "sun.java2d.opengl.OGLRenderQueue", "QueueFlusher", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.opengl.OGLRenderQueue",
		"sun.java2d.pipe.RenderQueue",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.opengl.OGLRenderQueue$QueueFlusher"
	};
	$loadClass(OGLRenderQueue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OGLRenderQueue);
	});
	return class$;
}

$Class* OGLRenderQueue::class$ = nullptr;

		} // opengl
	} // java2d
} // sun