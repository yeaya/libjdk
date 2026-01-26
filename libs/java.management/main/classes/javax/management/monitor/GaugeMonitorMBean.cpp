#include <javax/management/monitor/GaugeMonitorMBean.h>

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

$CompoundAttribute _GaugeMonitorMBean_MethodAnnotations_getDerivedGauge0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _GaugeMonitorMBean_MethodAnnotations_getDerivedGaugeTimeStamp2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _GaugeMonitorMBean_MethodInfo_[] = {
	{"getDerivedGauge", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(GaugeMonitorMBean, getDerivedGauge, $Number*), nullptr, nullptr, _GaugeMonitorMBean_MethodAnnotations_getDerivedGauge0},
	{"getDerivedGauge", "(Ljavax/management/ObjectName;)Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GaugeMonitorMBean, getDerivedGauge, $Number*, $ObjectName*)},
	{"getDerivedGaugeTimeStamp", "()J", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(GaugeMonitorMBean, getDerivedGaugeTimeStamp, int64_t), nullptr, nullptr, _GaugeMonitorMBean_MethodAnnotations_getDerivedGaugeTimeStamp2},
	{"getDerivedGaugeTimeStamp", "(Ljavax/management/ObjectName;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GaugeMonitorMBean, getDerivedGaugeTimeStamp, int64_t, $ObjectName*)},
	{"getDifferenceMode", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GaugeMonitorMBean, getDifferenceMode, bool)},
	{"getHighThreshold", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GaugeMonitorMBean, getHighThreshold, $Number*)},
	{"getLowThreshold", "()Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GaugeMonitorMBean, getLowThreshold, $Number*)},
	{"getNotifyHigh", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GaugeMonitorMBean, getNotifyHigh, bool)},
	{"getNotifyLow", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GaugeMonitorMBean, getNotifyLow, bool)},
	{"setDifferenceMode", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GaugeMonitorMBean, setDifferenceMode, void, bool)},
	{"setNotifyHigh", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GaugeMonitorMBean, setNotifyHigh, void, bool)},
	{"setNotifyLow", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GaugeMonitorMBean, setNotifyLow, void, bool)},
	{"setThresholds", "(Ljava/lang/Number;Ljava/lang/Number;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GaugeMonitorMBean, setThresholds, void, $Number*, $Number*), "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _GaugeMonitorMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.monitor.GaugeMonitorMBean",
	nullptr,
	"javax.management.monitor.MonitorMBean",
	nullptr,
	_GaugeMonitorMBean_MethodInfo_
};

$Object* allocate$GaugeMonitorMBean($Class* clazz) {
	return $of($alloc(GaugeMonitorMBean));
}

$Class* GaugeMonitorMBean::load$($String* name, bool initialize) {
	$loadClass(GaugeMonitorMBean, name, initialize, &_GaugeMonitorMBean_ClassInfo_, allocate$GaugeMonitorMBean);
	return class$;
}

$Class* GaugeMonitorMBean::class$ = nullptr;

		} // monitor
	} // management
} // javax