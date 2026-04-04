#include <sun/java2d/opengl/OGLRenderQueue$QueueFlusher.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <jcpp.h>

#undef MAX_PRIORITY

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;

namespace sun {
	namespace java2d {
		namespace opengl {

void OGLRenderQueue$QueueFlusher::init$($OGLRenderQueue* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$var($String, name, "Java2D Queue Flusher"_s);
	$set(this, thread, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), this, name, 0, false));
	this->thread->setDaemon(true);
	this->thread->setPriority($Thread::MAX_PRIORITY);
	this->thread->start();
}

void OGLRenderQueue$QueueFlusher::flushNow() {
	$synchronized(this) {
		this->needsFlush = true;
		$of(this)->notify();
		while (this->needsFlush) {
			try {
				$of(this)->wait();
			} catch ($InterruptedException& e) {
			}
		}
		if (this->error != nullptr) {
			$throw(this->error);
		}
	}
}

void OGLRenderQueue$QueueFlusher::flushAndInvokeNow($Runnable* task) {
	$synchronized(this) {
		$set(this, task, task);
		flushNow();
	}
}

void OGLRenderQueue$QueueFlusher::run() {
	$synchronized(this) {
		$useLocalObjectStack();
		bool timedOut = false;
		while (true) {
			while (!this->needsFlush) {
				try {
					timedOut = false;
					$of(this)->wait(100);
					if (!this->needsFlush && (timedOut = this->this$0->tryLock())) {
						if ($$nc($OGLRenderQueue::access$000(this->this$0))->position() > 0) {
							this->needsFlush = true;
						} else {
							this->this$0->unlock();
						}
					}
				} catch ($InterruptedException& e) {
				}
			}
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$set(this, error, nullptr);
					this->this$0->flushBuffer();
					if (this->task != nullptr) {
						this->task->run();
					}
				} catch ($Error& e) {
					$set(this, error, e);
				} catch ($Exception& x) {
					$nc($System::err)->println("exception in QueueFlusher:"_s);
					x->printStackTrace();
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (timedOut) {
					this->this$0->unlock();
				}
				$set(this, task, nullptr);
				this->needsFlush = false;
				$of(this)->notify();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

OGLRenderQueue$QueueFlusher::OGLRenderQueue$QueueFlusher() {
}

$Class* OGLRenderQueue$QueueFlusher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/opengl/OGLRenderQueue;", nullptr, $FINAL | $SYNTHETIC, $field(OGLRenderQueue$QueueFlusher, this$0)},
		{"needsFlush", "Z", nullptr, $PRIVATE, $field(OGLRenderQueue$QueueFlusher, needsFlush)},
		{"task", "Ljava/lang/Runnable;", nullptr, $PRIVATE, $field(OGLRenderQueue$QueueFlusher, task)},
		{"error", "Ljava/lang/Error;", nullptr, $PRIVATE, $field(OGLRenderQueue$QueueFlusher, error)},
		{"thread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $FINAL, $field(OGLRenderQueue$QueueFlusher, thread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/opengl/OGLRenderQueue;)V", nullptr, $PUBLIC, $method(OGLRenderQueue$QueueFlusher, init$, void, $OGLRenderQueue*)},
		{"flushAndInvokeNow", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(OGLRenderQueue$QueueFlusher, flushAndInvokeNow, void, $Runnable*)},
		{"flushNow", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(OGLRenderQueue$QueueFlusher, flushNow, void)},
		{"run", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(OGLRenderQueue$QueueFlusher, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.opengl.OGLRenderQueue$QueueFlusher", "sun.java2d.opengl.OGLRenderQueue", "QueueFlusher", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.opengl.OGLRenderQueue$QueueFlusher",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.opengl.OGLRenderQueue"
	};
	$loadClass(OGLRenderQueue$QueueFlusher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OGLRenderQueue$QueueFlusher);
	});
	return class$;
}

$Class* OGLRenderQueue$QueueFlusher::class$ = nullptr;

		} // opengl
	} // java2d
} // sun