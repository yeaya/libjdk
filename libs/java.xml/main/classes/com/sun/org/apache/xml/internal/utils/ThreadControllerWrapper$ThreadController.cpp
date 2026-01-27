#include <com/sun/org/apache/xml/internal/utils/ThreadControllerWrapper$ThreadController.h>

#include <com/sun/org/apache/xml/internal/utils/SafeThread.h>
#include <com/sun/org/apache/xml/internal/utils/ThreadControllerWrapper.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $SafeThread = ::com::sun::org::apache::xml::internal::utils::SafeThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$MethodInfo _ThreadControllerWrapper$ThreadController_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadControllerWrapper$ThreadController, init$, void)},
	{"run", "(Ljava/lang/Runnable;I)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(ThreadControllerWrapper$ThreadController, run, $Thread*, $Runnable*, int32_t)},
	{"waitThread", "(Ljava/lang/Thread;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $virtualMethod(ThreadControllerWrapper$ThreadController, waitThread, void, $Thread*, $Runnable*), "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _ThreadControllerWrapper$ThreadController_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper$ThreadController", "com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper", "ThreadController", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ThreadControllerWrapper$ThreadController_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper$ThreadController",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ThreadControllerWrapper$ThreadController_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadControllerWrapper$ThreadController_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper"
};

$Object* allocate$ThreadControllerWrapper$ThreadController($Class* clazz) {
	return $of($alloc(ThreadControllerWrapper$ThreadController));
}

void ThreadControllerWrapper$ThreadController::init$() {
}

$Thread* ThreadControllerWrapper$ThreadController::run($Runnable* task, int32_t priority) {
	$var($Thread, t, $new($SafeThread, task));
	t->start();
	return t;
}

void ThreadControllerWrapper$ThreadController::waitThread($Thread* worker, $Runnable* task) {
	$nc(worker)->join();
}

ThreadControllerWrapper$ThreadController::ThreadControllerWrapper$ThreadController() {
}

$Class* ThreadControllerWrapper$ThreadController::load$($String* name, bool initialize) {
	$loadClass(ThreadControllerWrapper$ThreadController, name, initialize, &_ThreadControllerWrapper$ThreadController_ClassInfo_, allocate$ThreadControllerWrapper$ThreadController);
	return class$;
}

$Class* ThreadControllerWrapper$ThreadController::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com