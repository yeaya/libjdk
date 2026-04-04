#include <javax/management/monitor/StringMonitorMBean.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {
		namespace monitor {

$Class* StringMonitorMBean::load$($String* name, bool initialize) {
	$CompoundAttribute getDerivedGaugemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getDerivedGaugeTimeStampmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getDerivedGauge", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(StringMonitorMBean, getDerivedGauge, $String*), nullptr, nullptr, getDerivedGaugemethodAnnotations$$},
		{"getDerivedGauge", "(Ljavax/management/ObjectName;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, getDerivedGauge, $String*, $ObjectName*)},
		{"getDerivedGaugeTimeStamp", "()J", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(StringMonitorMBean, getDerivedGaugeTimeStamp, int64_t), nullptr, nullptr, getDerivedGaugeTimeStampmethodAnnotations$$},
		{"getDerivedGaugeTimeStamp", "(Ljavax/management/ObjectName;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, getDerivedGaugeTimeStamp, int64_t, $ObjectName*)},
		{"getNotifyDiffer", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, getNotifyDiffer, bool)},
		{"getNotifyMatch", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, getNotifyMatch, bool)},
		{"getStringToCompare", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, getStringToCompare, $String*)},
		{"setNotifyDiffer", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, setNotifyDiffer, void, bool)},
		{"setNotifyMatch", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, setNotifyMatch, void, bool)},
		{"setStringToCompare", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, setStringToCompare, void, $String*), "java.lang.IllegalArgumentException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.monitor.StringMonitorMBean",
		nullptr,
		"javax.management.monitor.MonitorMBean",
		nullptr,
		methodInfos$$
	};
	$loadClass(StringMonitorMBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringMonitorMBean);
	});
	return class$;
}

$Class* StringMonitorMBean::class$ = nullptr;

		} // monitor
	} // management
} // javax