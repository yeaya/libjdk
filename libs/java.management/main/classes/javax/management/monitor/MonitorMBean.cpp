#include <javax/management/monitor/MonitorMBean.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ObjectNameArray = $Array<::javax::management::ObjectName>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {
		namespace monitor {

$Class* MonitorMBean::load$($String* name, bool initialize) {
	$CompoundAttribute getObservedObjectmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute setObservedObjectmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"addObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MonitorMBean, addObservedObject, void, $ObjectName*), "java.lang.IllegalArgumentException"},
		{"containsObservedObject", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MonitorMBean, containsObservedObject, bool, $ObjectName*)},
		{"getGranularityPeriod", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MonitorMBean, getGranularityPeriod, int64_t)},
		{"getObservedAttribute", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MonitorMBean, getObservedAttribute, $String*)},
		{"getObservedObject", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(MonitorMBean, getObservedObject, $ObjectName*), nullptr, nullptr, getObservedObjectmethodAnnotations$$},
		{"getObservedObjects", "()[Ljavax/management/ObjectName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MonitorMBean, getObservedObjects, $ObjectNameArray*)},
		{"isActive", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MonitorMBean, isActive, bool)},
		{"removeObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MonitorMBean, removeObservedObject, void, $ObjectName*)},
		{"setGranularityPeriod", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MonitorMBean, setGranularityPeriod, void, int64_t), "java.lang.IllegalArgumentException"},
		{"setObservedAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MonitorMBean, setObservedAttribute, void, $String*)},
		{"setObservedObject", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(MonitorMBean, setObservedObject, void, $ObjectName*), nullptr, nullptr, setObservedObjectmethodAnnotations$$},
		{"start", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MonitorMBean, start, void)},
		{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MonitorMBean, stop, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.monitor.MonitorMBean",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MonitorMBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MonitorMBean);
	});
	return class$;
}

$Class* MonitorMBean::class$ = nullptr;

		} // monitor
	} // management
} // javax