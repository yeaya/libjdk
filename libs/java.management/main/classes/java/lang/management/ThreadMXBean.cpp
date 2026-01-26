#include <java/lang/management/ThreadMXBean.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/management/ThreadInfo.h>
#include <jcpp.h>

using $ThreadInfoArray = $Array<::java::lang::management::ThreadInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ThreadInfo = ::java::lang::management::ThreadInfo;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _ThreadMXBean_MethodInfo_[] = {
	{"dumpAllThreads", "(ZZ)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, dumpAllThreads, $ThreadInfoArray*, bool, bool)},
	{"dumpAllThreads", "(ZZI)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC, $virtualMethod(ThreadMXBean, dumpAllThreads, $ThreadInfoArray*, bool, bool, int32_t)},
	{"findDeadlockedThreads", "()[J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, findDeadlockedThreads, $longs*)},
	{"findMonitorDeadlockedThreads", "()[J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, findMonitorDeadlockedThreads, $longs*)},
	{"getAllThreadIds", "()[J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getAllThreadIds, $longs*)},
	{"getCurrentThreadCpuTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getCurrentThreadCpuTime, int64_t)},
	{"getCurrentThreadUserTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getCurrentThreadUserTime, int64_t)},
	{"getDaemonThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getDaemonThreadCount, int32_t)},
	{"getPeakThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getPeakThreadCount, int32_t)},
	{"getThreadCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getThreadCount, int32_t)},
	{"getThreadCpuTime", "(J)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getThreadCpuTime, int64_t, int64_t)},
	{"getThreadInfo", "(J)Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getThreadInfo, $ThreadInfo*, int64_t)},
	{"getThreadInfo", "([J)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getThreadInfo, $ThreadInfoArray*, $longs*)},
	{"getThreadInfo", "(JI)Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getThreadInfo, $ThreadInfo*, int64_t, int32_t)},
	{"getThreadInfo", "([JI)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getThreadInfo, $ThreadInfoArray*, $longs*, int32_t)},
	{"getThreadInfo", "([JZZ)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getThreadInfo, $ThreadInfoArray*, $longs*, bool, bool)},
	{"getThreadInfo", "([JZZI)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC, $virtualMethod(ThreadMXBean, getThreadInfo, $ThreadInfoArray*, $longs*, bool, bool, int32_t)},
	{"getThreadUserTime", "(J)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getThreadUserTime, int64_t, int64_t)},
	{"getTotalStartedThreadCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, getTotalStartedThreadCount, int64_t)},
	{"isCurrentThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, isCurrentThreadCpuTimeSupported, bool)},
	{"isObjectMonitorUsageSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, isObjectMonitorUsageSupported, bool)},
	{"isSynchronizerUsageSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, isSynchronizerUsageSupported, bool)},
	{"isThreadContentionMonitoringEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, isThreadContentionMonitoringEnabled, bool)},
	{"isThreadContentionMonitoringSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, isThreadContentionMonitoringSupported, bool)},
	{"isThreadCpuTimeEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, isThreadCpuTimeEnabled, bool)},
	{"isThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, isThreadCpuTimeSupported, bool)},
	{"resetPeakThreadCount", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, resetPeakThreadCount, void)},
	{"setThreadContentionMonitoringEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, setThreadContentionMonitoringEnabled, void, bool)},
	{"setThreadCpuTimeEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ThreadMXBean, setThreadCpuTimeEnabled, void, bool)},
	{}
};

$ClassInfo _ThreadMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.ThreadMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_ThreadMXBean_MethodInfo_
};

$Object* allocate$ThreadMXBean($Class* clazz) {
	return $of($alloc(ThreadMXBean));
}

$ThreadInfoArray* ThreadMXBean::getThreadInfo($longs* ids, bool lockedMonitors, bool lockedSynchronizers, int32_t maxDepth) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$ThreadInfoArray* ThreadMXBean::dumpAllThreads(bool lockedMonitors, bool lockedSynchronizers, int32_t maxDepth) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Class* ThreadMXBean::load$($String* name, bool initialize) {
	$loadClass(ThreadMXBean, name, initialize, &_ThreadMXBean_ClassInfo_, allocate$ThreadMXBean);
	return class$;
}

$Class* ThreadMXBean::class$ = nullptr;

		} // management
	} // lang
} // java