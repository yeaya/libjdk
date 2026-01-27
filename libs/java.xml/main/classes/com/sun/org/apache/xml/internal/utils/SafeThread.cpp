#include <com/sun/org/apache/xml/internal/utils/SafeThread.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _SafeThread_FieldInfo_[] = {
	{"ran", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SafeThread, ran)},
	{"threadNumber", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SafeThread, threadNumber)},
	{}
};

$MethodInfo _SafeThread_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(SafeThread, init$, void, $Runnable*)},
	{"<init>", "(Ljava/lang/Runnable;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SafeThread, init$, void, $Runnable*, $String*)},
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SafeThread, init$, void, $ThreadGroup*, $Runnable*, $String*)},
	{"run", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SafeThread, run, void)},
	{"threadName", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SafeThread, threadName, $String*)},
	{}
};

$ClassInfo _SafeThread_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.SafeThread",
	"java.lang.Thread",
	nullptr,
	_SafeThread_FieldInfo_,
	_SafeThread_MethodInfo_
};

$Object* allocate$SafeThread($Class* clazz) {
	return $of($alloc(SafeThread));
}

$AtomicInteger* SafeThread::threadNumber = nullptr;

$String* SafeThread::threadName() {
	$init(SafeThread);
	return $str({"SafeThread-"_s, $$str($nc(SafeThread::threadNumber)->getAndIncrement())});
}

void SafeThread::init$($Runnable* target) {
	SafeThread::init$(nullptr, target, $(threadName()));
}

void SafeThread::init$($Runnable* target, $String* name) {
	SafeThread::init$(nullptr, target, name);
}

void SafeThread::init$($ThreadGroup* group, $Runnable* target, $String* name) {
	$Thread::init$(group, target, name, 0, false);
	this->ran = false;
}

void SafeThread::run() {
	if (!$equals($Thread::currentThread(), this)) {
		$throwNew($IllegalStateException, "The run() method in a SafeThread cannot be called from another thread."_s);
	}
	$synchronized(this) {
		if (!this->ran) {
			this->ran = true;
		} else {
			$throwNew($IllegalStateException, "The run() method in a SafeThread cannot be called more than once."_s);
		}
	}
	$Thread::run();
}

void clinit$SafeThread($Class* class$) {
	$assignStatic(SafeThread::threadNumber, $new($AtomicInteger, 1));
}

SafeThread::SafeThread() {
}

$Class* SafeThread::load$($String* name, bool initialize) {
	$loadClass(SafeThread, name, initialize, &_SafeThread_ClassInfo_, clinit$SafeThread, allocate$SafeThread);
	return class$;
}

$Class* SafeThread::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com