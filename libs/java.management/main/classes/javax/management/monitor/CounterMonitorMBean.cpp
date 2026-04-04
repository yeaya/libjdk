#include <javax/management/monitor/CounterMonitorMBean.h>
#include <java/lang/Number.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {
		namespace monitor {

$Class* CounterMonitorMBean::load$($String* name, bool initialize) {
	$CompoundAttribute getDerivedGaugemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getDerivedGaugeTimeStampmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getThresholdmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute setThresholdmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getDerivedGauge", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(CounterMonitorMBean, getDerivedGauge, $Number*), nullptr, nullptr, getDerivedGaugemethodAnnotations$$},
		{"getDerivedGauge", "(Ljavax/management/ObjectName;)Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CounterMonitorMBean, getDerivedGauge, $Number*, $ObjectName*)},
		{"getDerivedGaugeTimeStamp", "()J", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(CounterMonitorMBean, getDerivedGaugeTimeStamp, int64_t), nullptr, nullptr, getDerivedGaugeTimeStampmethodAnnotations$$},
		{"getDerivedGaugeTimeStamp", "(Ljavax/management/ObjectName;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CounterMonitorMBean, getDerivedGaugeTimeStamp, int64_t, $ObjectName*)},
		{"getDifferenceMode", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CounterMonitorMBean, getDifferenceMode, bool)},
		{"getInitThreshold", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CounterMonitorMBean, getInitThreshold, $Number*)},
		{"getModulus", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CounterMonitorMBean, getModulus, $Number*)},
		{"getNotify", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CounterMonitorMBean, getNotify, bool)},
		{"getOffset", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CounterMonitorMBean, getOffset, $Number*)},
		{"getThreshold", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(CounterMonitorMBean, getThreshold, $Number*), nullptr, nullptr, getThresholdmethodAnnotations$$},
		{"getThreshold", "(Ljavax/management/ObjectName;)Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CounterMonitorMBean, getThreshold, $Number*, $ObjectName*)},
		{"setDifferenceMode", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CounterMonitorMBean, setDifferenceMode, void, bool)},
		{"setInitThreshold", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CounterMonitorMBean, setInitThreshold, void, $Number*), "java.lang.IllegalArgumentException"},
		{"setModulus", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CounterMonitorMBean, setModulus, void, $Number*), "java.lang.IllegalArgumentException"},
		{"setNotify", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CounterMonitorMBean, setNotify, void, bool)},
		{"setOffset", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CounterMonitorMBean, setOffset, void, $Number*), "java.lang.IllegalArgumentException"},
		{"setThreshold", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(CounterMonitorMBean, setThreshold, void, $Number*), "java.lang.IllegalArgumentException", nullptr, setThresholdmethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.monitor.CounterMonitorMBean",
		nullptr,
		"javax.management.monitor.MonitorMBean",
		nullptr,
		methodInfos$$
	};
	$loadClass(CounterMonitorMBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CounterMonitorMBean);
	});
	return class$;
}

$Class* CounterMonitorMBean::class$ = nullptr;

		} // monitor
	} // management
} // javax