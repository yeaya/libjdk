#include <javax/swing/SwingWorker$6.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Executors = ::java::util::concurrent::Executors;

namespace javax {
	namespace swing {

void SwingWorker$6::init$() {
	$set(this, defaultFactory, $Executors::defaultThreadFactory());
}

$Thread* SwingWorker$6::newThread($Runnable* r) {
	$useLocalObjectStack();
	$var($Thread, thread, $nc(this->defaultFactory)->newThread(r));
	$nc(thread)->setName($$str({"SwingWorker-"_s, $($nc(thread)->getName())}));
	thread->setDaemon(true);
	return thread;
}

SwingWorker$6::SwingWorker$6() {
}

$Class* SwingWorker$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultFactory", "Ljava/util/concurrent/ThreadFactory;", nullptr, $FINAL, $field(SwingWorker$6, defaultFactory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SwingWorker$6, init$, void)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(SwingWorker$6, newThread, $Thread*, $Runnable*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.SwingWorker",
		"getWorkersExecutorService",
		"()Ljava/util/concurrent/ExecutorService;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.SwingWorker$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.SwingWorker$6",
		"java.lang.Object",
		"java.util.concurrent.ThreadFactory",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.SwingWorker"
	};
	$loadClass(SwingWorker$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingWorker$6);
	});
	return class$;
}

$Class* SwingWorker$6::class$ = nullptr;

	} // swing
} // javax