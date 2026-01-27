#include <com/sun/org/apache/xml/internal/utils/ThreadControllerWrapper.h>

#include <com/sun/org/apache/xml/internal/utils/ThreadControllerWrapper$ThreadController.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ThreadControllerWrapper$ThreadController = ::com::sun::org::apache::xml::internal::utils::ThreadControllerWrapper$ThreadController;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _ThreadControllerWrapper_FieldInfo_[] = {
	{"m_tpool", "Lcom/sun/org/apache/xml/internal/utils/ThreadControllerWrapper$ThreadController;", nullptr, $PRIVATE | $STATIC, $staticField(ThreadControllerWrapper, m_tpool)},
	{}
};

$MethodInfo _ThreadControllerWrapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadControllerWrapper, init$, void)},
	{"runThread", "(Ljava/lang/Runnable;I)Ljava/lang/Thread;", nullptr, $PUBLIC | $STATIC, $staticMethod(ThreadControllerWrapper, runThread, $Thread*, $Runnable*, int32_t)},
	{"waitThread", "(Ljava/lang/Thread;Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ThreadControllerWrapper, waitThread, void, $Thread*, $Runnable*), "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _ThreadControllerWrapper_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper$ThreadController", "com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper", "ThreadController", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ThreadControllerWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper",
	"java.lang.Object",
	nullptr,
	_ThreadControllerWrapper_FieldInfo_,
	_ThreadControllerWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadControllerWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.utils.ThreadControllerWrapper$ThreadController"
};

$Object* allocate$ThreadControllerWrapper($Class* clazz) {
	return $of($alloc(ThreadControllerWrapper));
}

$ThreadControllerWrapper$ThreadController* ThreadControllerWrapper::m_tpool = nullptr;

void ThreadControllerWrapper::init$() {
}

$Thread* ThreadControllerWrapper::runThread($Runnable* runnable, int32_t priority) {
	$init(ThreadControllerWrapper);
	return $nc(ThreadControllerWrapper::m_tpool)->run(runnable, priority);
}

void ThreadControllerWrapper::waitThread($Thread* worker, $Runnable* task) {
	$init(ThreadControllerWrapper);
	$nc(ThreadControllerWrapper::m_tpool)->waitThread(worker, task);
}

void clinit$ThreadControllerWrapper($Class* class$) {
	$assignStatic(ThreadControllerWrapper::m_tpool, $new($ThreadControllerWrapper$ThreadController));
}

ThreadControllerWrapper::ThreadControllerWrapper() {
}

$Class* ThreadControllerWrapper::load$($String* name, bool initialize) {
	$loadClass(ThreadControllerWrapper, name, initialize, &_ThreadControllerWrapper_ClassInfo_, clinit$ThreadControllerWrapper, allocate$ThreadControllerWrapper);
	return class$;
}

$Class* ThreadControllerWrapper::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com