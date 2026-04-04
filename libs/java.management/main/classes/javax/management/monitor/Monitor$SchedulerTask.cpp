#include <javax/management/monitor/Monitor$SchedulerTask.h>
#include <java/util/concurrent/Future.h>
#include <javax/management/monitor/Monitor$MonitorTask.h>
#include <javax/management/monitor/Monitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Monitor = ::javax::management::monitor::Monitor;
using $Monitor$MonitorTask = ::javax::management::monitor::Monitor$MonitorTask;

namespace javax {
	namespace management {
		namespace monitor {

void Monitor$SchedulerTask::init$($Monitor* this$0) {
	$set(this, this$0, this$0);
}

void Monitor$SchedulerTask::setMonitorTask($Monitor$MonitorTask* task) {
	$set(this, task, task);
}

void Monitor$SchedulerTask::run() {
	$synchronized(this->this$0) {
		$set(this->this$0, monitorFuture, $nc(this->task)->submit());
	}
}

Monitor$SchedulerTask::Monitor$SchedulerTask() {
}

$Class* Monitor$SchedulerTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/monitor/Monitor;", nullptr, $FINAL | $SYNTHETIC, $field(Monitor$SchedulerTask, this$0)},
		{"task", "Ljavax/management/monitor/Monitor$MonitorTask;", nullptr, $PRIVATE, $field(Monitor$SchedulerTask, task)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/monitor/Monitor;)V", nullptr, $PUBLIC, $method(Monitor$SchedulerTask, init$, void, $Monitor*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Monitor$SchedulerTask, run, void)},
		{"setMonitorTask", "(Ljavax/management/monitor/Monitor$MonitorTask;)V", nullptr, $PUBLIC, $virtualMethod(Monitor$SchedulerTask, setMonitorTask, void, $Monitor$MonitorTask*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.monitor.Monitor$SchedulerTask", "javax.management.monitor.Monitor", "SchedulerTask", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.monitor.Monitor$SchedulerTask",
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
	$loadClass(Monitor$SchedulerTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Monitor$SchedulerTask);
	});
	return class$;
}

$Class* Monitor$SchedulerTask::class$ = nullptr;

		} // monitor
	} // management
} // javax