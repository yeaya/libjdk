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

$CompoundAttribute _StringMonitorMBean_MethodAnnotations_getDerivedGauge0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _StringMonitorMBean_MethodAnnotations_getDerivedGaugeTimeStamp2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _StringMonitorMBean_MethodInfo_[] = {
	{"getDerivedGauge", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(StringMonitorMBean, getDerivedGauge, $String*), nullptr, nullptr, _StringMonitorMBean_MethodAnnotations_getDerivedGauge0},
	{"getDerivedGauge", "(Ljavax/management/ObjectName;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, getDerivedGauge, $String*, $ObjectName*)},
	{"getDerivedGaugeTimeStamp", "()J", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(StringMonitorMBean, getDerivedGaugeTimeStamp, int64_t), nullptr, nullptr, _StringMonitorMBean_MethodAnnotations_getDerivedGaugeTimeStamp2},
	{"getDerivedGaugeTimeStamp", "(Ljavax/management/ObjectName;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, getDerivedGaugeTimeStamp, int64_t, $ObjectName*)},
	{"getNotifyDiffer", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, getNotifyDiffer, bool)},
	{"getNotifyMatch", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, getNotifyMatch, bool)},
	{"getStringToCompare", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, getStringToCompare, $String*)},
	{"setNotifyDiffer", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, setNotifyDiffer, void, bool)},
	{"setNotifyMatch", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, setNotifyMatch, void, bool)},
	{"setStringToCompare", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StringMonitorMBean, setStringToCompare, void, $String*), "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _StringMonitorMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.monitor.StringMonitorMBean",
	nullptr,
	"javax.management.monitor.MonitorMBean",
	nullptr,
	_StringMonitorMBean_MethodInfo_
};

$Object* allocate$StringMonitorMBean($Class* clazz) {
	return $of($alloc(StringMonitorMBean));
}

$Class* StringMonitorMBean::load$($String* name, bool initialize) {
	$loadClass(StringMonitorMBean, name, initialize, &_StringMonitorMBean_ClassInfo_, allocate$StringMonitorMBean);
	return class$;
}

$Class* StringMonitorMBean::class$ = nullptr;

		} // monitor
	} // management
} // javax