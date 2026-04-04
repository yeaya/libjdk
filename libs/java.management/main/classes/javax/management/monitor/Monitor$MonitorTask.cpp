#include <javax/management/monitor/Monitor$MonitorTask.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/BlockingQueue.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <java/util/concurrent/ScheduledExecutorService.h>
#include <java/util/concurrent/ScheduledFuture.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/management/monitor/Monitor$DaemonThreadFactory.h>
#include <javax/management/monitor/Monitor$MonitorTask$1.h>
#include <javax/management/monitor/Monitor$SchedulerTask.h>
#include <javax/management/monitor/Monitor.h>
#include <jcpp.h>

#undef MILLISECONDS
#undef SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $Future = ::java::util::concurrent::Future;
using $LinkedBlockingQueue = ::java::util::concurrent::LinkedBlockingQueue;
using $ScheduledFuture = ::java::util::concurrent::ScheduledFuture;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Monitor = ::javax::management::monitor::Monitor;
using $Monitor$DaemonThreadFactory = ::javax::management::monitor::Monitor$DaemonThreadFactory;
using $Monitor$MonitorTask$1 = ::javax::management::monitor::Monitor$MonitorTask$1;

namespace javax {
	namespace management {
		namespace monitor {

void Monitor$MonitorTask::init$($Monitor* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$var($SecurityManager, s, $System::getSecurityManager());
	$var($ThreadGroup, group, (s != nullptr) ? s->getThreadGroup() : $($Thread::currentThread())->getThreadGroup());
	$init($Monitor);
	$synchronized($Monitor::executorsLock) {
		{
			$var($Iterator, i$, $$nc($nc($Monitor::executors)->keySet())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ThreadPoolExecutor, e, $cast($ThreadPoolExecutor, i$->next()));
				{
					$var($Monitor$DaemonThreadFactory, tf, $cast($Monitor$DaemonThreadFactory, $nc(e)->getThreadFactory()));
					$var($ThreadGroup, tg, $nc(tf)->getThreadGroup());
					if (tg == group) {
						$set(this, executor, e);
						break;
					}
				}
			}
		}
		if (this->executor == nullptr) {
			int32_t var$0 = $Monitor::maximumPoolSize;
			int32_t var$1 = $Monitor::maximumPoolSize;
			$init($TimeUnit);
			$var($TimeUnit, var$2, $TimeUnit::SECONDS);
			$var($BlockingQueue, var$3, $new($LinkedBlockingQueue));
			$set(this, executor, $new($ThreadPoolExecutor, var$0, var$1, 60, var$2, var$3, $$new($Monitor$DaemonThreadFactory, $$str({"ThreadGroup<"_s, $($nc(group)->getName()), "> Executor"_s}), group)));
			this->executor->allowCoreThreadTimeOut(true);
			$Monitor::executors->put(this->executor, nullptr);
		}
	}
}

$Future* Monitor$MonitorTask::submit() {
	return $nc(this->executor)->submit(this);
}

void Monitor$MonitorTask::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ScheduledFuture, sf, nullptr);
	$var($AccessControlContext, ac, nullptr);
	$synchronized(this->this$0) {
		$assign(sf, this->this$0->schedulerFuture);
		$assign(ac, this->this$0->acc);
	}
	$var($PrivilegedAction, action, $new($Monitor$MonitorTask$1, this));
	if (ac == nullptr) {
		$throwNew($SecurityException, "AccessControlContext cannot be null"_s);
	}
	$AccessController::doPrivileged(action, ac);
	$synchronized(this->this$0) {
		if (this->this$0->isActive() && this->this$0->schedulerFuture == sf) {
			$set(this->this$0, monitorFuture, nullptr);
			$init($TimeUnit);
			$set(this->this$0, schedulerFuture, $nc($Monitor::scheduler)->schedule(this->this$0->schedulerTask, this->this$0->getGranularityPeriod(), $TimeUnit::MILLISECONDS));
		}
	}
}

Monitor$MonitorTask::Monitor$MonitorTask() {
}

$Class* Monitor$MonitorTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/monitor/Monitor;", nullptr, $FINAL | $SYNTHETIC, $field(Monitor$MonitorTask, this$0)},
		{"executor", "Ljava/util/concurrent/ThreadPoolExecutor;", nullptr, $PRIVATE, $field(Monitor$MonitorTask, executor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/monitor/Monitor;)V", nullptr, $PUBLIC, $method(Monitor$MonitorTask, init$, void, $Monitor*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Monitor$MonitorTask, run, void)},
		{"submit", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<*>;", $PUBLIC, $virtualMethod(Monitor$MonitorTask, submit, $Future*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.monitor.Monitor$MonitorTask", "javax.management.monitor.Monitor", "MonitorTask", $PRIVATE},
		{"javax.management.monitor.Monitor$MonitorTask$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.monitor.Monitor$MonitorTask",
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
		"javax.management.monitor.Monitor"
	};
	$loadClass(Monitor$MonitorTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Monitor$MonitorTask);
	});
	return class$;
}

$Class* Monitor$MonitorTask::class$ = nullptr;

		} // monitor
	} // management
} // javax