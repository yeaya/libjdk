#include <javax/management/monitor/Monitor$MonitorTask$1.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/management/monitor/Monitor$MonitorTask.h>
#include <javax/management/monitor/Monitor$ObservedObject.h>
#include <javax/management/monitor/Monitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Monitor$MonitorTask = ::javax::management::monitor::Monitor$MonitorTask;
using $Monitor$ObservedObject = ::javax::management::monitor::Monitor$ObservedObject;

namespace javax {
	namespace management {
		namespace monitor {

void Monitor$MonitorTask$1::init$($Monitor$MonitorTask* this$1) {
	$set(this, this$1, this$1);
}

$Object* Monitor$MonitorTask$1::run() {
	$useLocalObjectStack();
	if ($nc(this->this$1->this$0)->isActive()) {
		$var($ints, an, this->this$1->this$0->alreadyNotifieds);
		int32_t index = 0;
		{
			$var($Iterator, i$, $nc(this->this$1->this$0->observedObjects)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Monitor$ObservedObject, o, $cast($Monitor$ObservedObject, i$->next()));
				if (this->this$1->this$0->isActive()) {
					this->this$1->this$0->monitor(o, index++, an);
				}
			}
		}
	}
	return nullptr;
}

Monitor$MonitorTask$1::Monitor$MonitorTask$1() {
}

$Class* Monitor$MonitorTask$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/management/monitor/Monitor$MonitorTask;", nullptr, $FINAL | $SYNTHETIC, $field(Monitor$MonitorTask$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/monitor/Monitor$MonitorTask;)V", nullptr, 0, $method(Monitor$MonitorTask$1, init$, void, $Monitor$MonitorTask*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Monitor$MonitorTask$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.monitor.Monitor$MonitorTask",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.monitor.Monitor$MonitorTask", "javax.management.monitor.Monitor", "MonitorTask", $PRIVATE},
		{"javax.management.monitor.Monitor$MonitorTask$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.monitor.Monitor$MonitorTask$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.monitor.Monitor"
	};
	$loadClass(Monitor$MonitorTask$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Monitor$MonitorTask$1);
	});
	return class$;
}

$Class* Monitor$MonitorTask$1::class$ = nullptr;

		} // monitor
	} // management
} // javax