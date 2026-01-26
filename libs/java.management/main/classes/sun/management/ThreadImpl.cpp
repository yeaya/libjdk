#include <sun/management/ThreadImpl.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/ThreadInfo.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <javax/management/ObjectName.h>
#include <sun/management/Util.h>
#include <sun/management/VMManagement.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef THREAD_MXBEAN_NAME

using $ThreadInfoArray = $Array<::java::lang::management::ThreadInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $ThreadInfo = ::java::lang::management::ThreadInfo;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $ObjectName = ::javax::management::ObjectName;
using $Util = ::sun::management::Util;
using $VMManagement = ::sun::management::VMManagement;

namespace sun {
	namespace management {

$FieldInfo _ThreadImpl_FieldInfo_[] = {
	{"jvm", "Lsun/management/VMManagement;", nullptr, $PRIVATE | $FINAL, $field(ThreadImpl, jvm)},
	{"contentionMonitoringEnabled", "Z", nullptr, $PRIVATE, $field(ThreadImpl, contentionMonitoringEnabled)},
	{"cpuTimeEnabled", "Z", nullptr, $PRIVATE, $field(ThreadImpl, cpuTimeEnabled)},
	{"allocatedMemoryEnabled", "Z", nullptr, $PRIVATE, $field(ThreadImpl, allocatedMemoryEnabled)},
	{}
};

$MethodInfo _ThreadImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/management/VMManagement;)V", nullptr, $PROTECTED, $method(ThreadImpl, init$, void, $VMManagement*)},
	{"dumpAllThreads", "(ZZ)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, dumpAllThreads, $ThreadInfoArray*, bool, bool)},
	{"dumpAllThreads", "(ZZI)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, dumpAllThreads, $ThreadInfoArray*, bool, bool, int32_t)},
	{"dumpThreads0", "([JZZI)[Ljava/lang/management/ThreadInfo;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, dumpThreads0, $ThreadInfoArray*, $longs*, bool, bool, int32_t)},
	{"ensureThreadAllocatedMemorySupported", "()V", nullptr, $PRIVATE, $method(ThreadImpl, ensureThreadAllocatedMemorySupported, void)},
	{"findDeadlockedThreads", "()[J", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, findDeadlockedThreads, $longs*)},
	{"findDeadlockedThreads0", "()[Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, findDeadlockedThreads0, $ThreadArray*)},
	{"findMonitorDeadlockedThreads", "()[J", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, findMonitorDeadlockedThreads, $longs*)},
	{"findMonitorDeadlockedThreads0", "()[Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, findMonitorDeadlockedThreads0, $ThreadArray*)},
	{"getAllThreadIds", "()[J", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getAllThreadIds, $longs*)},
	{"getCurrentThreadAllocatedBytes", "()J", nullptr, $PROTECTED, $virtualMethod(ThreadImpl, getCurrentThreadAllocatedBytes, int64_t)},
	{"getCurrentThreadCpuTime", "()J", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getCurrentThreadCpuTime, int64_t)},
	{"getCurrentThreadUserTime", "()J", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getCurrentThreadUserTime, int64_t)},
	{"getDaemonThreadCount", "()I", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getDaemonThreadCount, int32_t)},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getObjectName, $ObjectName*)},
	{"getPeakThreadCount", "()I", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getPeakThreadCount, int32_t)},
	{"getThreadAllocatedBytes", "(J)J", nullptr, $PROTECTED, $virtualMethod(ThreadImpl, getThreadAllocatedBytes, int64_t, int64_t)},
	{"getThreadAllocatedBytes", "([J)[J", nullptr, $PROTECTED, $virtualMethod(ThreadImpl, getThreadAllocatedBytes, $longs*, $longs*)},
	{"getThreadAllocatedMemory0", "(J)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, getThreadAllocatedMemory0, int64_t, int64_t)},
	{"getThreadAllocatedMemory1", "([J[J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, getThreadAllocatedMemory1, void, $longs*, $longs*)},
	{"getThreadCount", "()I", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getThreadCount, int32_t)},
	{"getThreadCpuTime", "(J)J", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getThreadCpuTime, int64_t, int64_t)},
	{"getThreadCpuTime", "([J)[J", nullptr, $PROTECTED, $virtualMethod(ThreadImpl, getThreadCpuTime, $longs*, $longs*)},
	{"getThreadInfo", "(J)Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getThreadInfo, $ThreadInfo*, int64_t)},
	{"getThreadInfo", "(JI)Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getThreadInfo, $ThreadInfo*, int64_t, int32_t)},
	{"getThreadInfo", "([J)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getThreadInfo, $ThreadInfoArray*, $longs*)},
	{"getThreadInfo", "([JI)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getThreadInfo, $ThreadInfoArray*, $longs*, int32_t)},
	{"getThreadInfo", "([JZZ)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getThreadInfo, $ThreadInfoArray*, $longs*, bool, bool)},
	{"getThreadInfo", "([JZZI)[Ljava/lang/management/ThreadInfo;", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getThreadInfo, $ThreadInfoArray*, $longs*, bool, bool, int32_t)},
	{"getThreadInfo1", "([JI[Ljava/lang/management/ThreadInfo;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, getThreadInfo1, void, $longs*, int32_t, $ThreadInfoArray*)},
	{"getThreadTotalCpuTime0", "(J)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, getThreadTotalCpuTime0, int64_t, int64_t)},
	{"getThreadTotalCpuTime1", "([J[J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, getThreadTotalCpuTime1, void, $longs*, $longs*)},
	{"getThreadUserCpuTime0", "(J)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, getThreadUserCpuTime0, int64_t, int64_t)},
	{"getThreadUserCpuTime1", "([J[J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, getThreadUserCpuTime1, void, $longs*, $longs*)},
	{"getThreadUserTime", "(J)J", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getThreadUserTime, int64_t, int64_t)},
	{"getThreadUserTime", "([J)[J", nullptr, $PROTECTED, $virtualMethod(ThreadImpl, getThreadUserTime, $longs*, $longs*)},
	{"getThreads", "()[Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, getThreads, $ThreadArray*)},
	{"getTotalStartedThreadCount", "()J", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, getTotalStartedThreadCount, int64_t)},
	{"isCurrentThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, isCurrentThreadCpuTimeSupported, bool)},
	{"isObjectMonitorUsageSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, isObjectMonitorUsageSupported, bool)},
	{"isSynchronizerUsageSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, isSynchronizerUsageSupported, bool)},
	{"isThreadAllocatedMemoryEnabled", "()Z", nullptr, $PROTECTED, $virtualMethod(ThreadImpl, isThreadAllocatedMemoryEnabled, bool)},
	{"isThreadAllocatedMemorySupported", "()Z", nullptr, $PROTECTED, $virtualMethod(ThreadImpl, isThreadAllocatedMemorySupported, bool)},
	{"isThreadContentionMonitoringEnabled", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ThreadImpl, isThreadContentionMonitoringEnabled, bool)},
	{"isThreadContentionMonitoringSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, isThreadContentionMonitoringSupported, bool)},
	{"isThreadCpuTimeEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, isThreadCpuTimeEnabled, bool)},
	{"isThreadCpuTimeSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, isThreadCpuTimeSupported, bool)},
	{"resetContentionTimes0", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, resetContentionTimes0, void, int64_t)},
	{"resetPeakThreadCount", "()V", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, resetPeakThreadCount, void)},
	{"resetPeakThreadCount0", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, resetPeakThreadCount0, void)},
	{"setThreadAllocatedMemoryEnabled", "(Z)V", nullptr, $PROTECTED, $virtualMethod(ThreadImpl, setThreadAllocatedMemoryEnabled, void, bool)},
	{"setThreadAllocatedMemoryEnabled0", "(Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, setThreadAllocatedMemoryEnabled0, void, bool)},
	{"setThreadContentionMonitoringEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, setThreadContentionMonitoringEnabled, void, bool)},
	{"setThreadContentionMonitoringEnabled0", "(Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, setThreadContentionMonitoringEnabled0, void, bool)},
	{"setThreadCpuTimeEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ThreadImpl, setThreadCpuTimeEnabled, void, bool)},
	{"setThreadCpuTimeEnabled0", "(Z)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(ThreadImpl, setThreadCpuTimeEnabled0, void, bool)},
	{"verifyCurrentThreadCpuTime", "()Z", nullptr, $PRIVATE, $method(ThreadImpl, verifyCurrentThreadCpuTime, bool)},
	{"verifyDumpThreads", "(ZZ)V", nullptr, $PRIVATE, $method(ThreadImpl, verifyDumpThreads, void, bool, bool)},
	{"verifyThreadAllocatedMemory", "(J)Z", nullptr, $PRIVATE, $method(ThreadImpl, verifyThreadAllocatedMemory, bool, int64_t)},
	{"verifyThreadAllocatedMemory", "([J)Z", nullptr, $PRIVATE, $method(ThreadImpl, verifyThreadAllocatedMemory, bool, $longs*)},
	{"verifyThreadCpuTime", "([J)Z", nullptr, $PRIVATE, $method(ThreadImpl, verifyThreadCpuTime, bool, $longs*)},
	{"verifyThreadId", "(J)V", nullptr, $PRIVATE, $method(ThreadImpl, verifyThreadId, void, int64_t)},
	{"verifyThreadIds", "([J)V", nullptr, $PRIVATE, $method(ThreadImpl, verifyThreadIds, void, $longs*)},
	{}
};

#define _METHOD_INDEX_dumpThreads0 3
#define _METHOD_INDEX_findDeadlockedThreads0 6
#define _METHOD_INDEX_findMonitorDeadlockedThreads0 8
#define _METHOD_INDEX_getThreadAllocatedMemory0 18
#define _METHOD_INDEX_getThreadAllocatedMemory1 19
#define _METHOD_INDEX_getThreadInfo1 29
#define _METHOD_INDEX_getThreadTotalCpuTime0 30
#define _METHOD_INDEX_getThreadTotalCpuTime1 31
#define _METHOD_INDEX_getThreadUserCpuTime0 32
#define _METHOD_INDEX_getThreadUserCpuTime1 33
#define _METHOD_INDEX_getThreads 36
#define _METHOD_INDEX_resetContentionTimes0 47
#define _METHOD_INDEX_resetPeakThreadCount0 49
#define _METHOD_INDEX_setThreadAllocatedMemoryEnabled0 51
#define _METHOD_INDEX_setThreadContentionMonitoringEnabled0 53
#define _METHOD_INDEX_setThreadCpuTimeEnabled0 55

$ClassInfo _ThreadImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.ThreadImpl",
	"java.lang.Object",
	"java.lang.management.ThreadMXBean",
	_ThreadImpl_FieldInfo_,
	_ThreadImpl_MethodInfo_
};

$Object* allocate$ThreadImpl($Class* clazz) {
	return $of($alloc(ThreadImpl));
}

void ThreadImpl::init$($VMManagement* vm) {
	this->contentionMonitoringEnabled = false;
	$set(this, jvm, vm);
	this->cpuTimeEnabled = $nc(this->jvm)->isThreadCpuTimeEnabled();
	this->allocatedMemoryEnabled = $nc(this->jvm)->isThreadAllocatedMemoryEnabled();
}

int32_t ThreadImpl::getThreadCount() {
	return $nc(this->jvm)->getLiveThreadCount();
}

int32_t ThreadImpl::getPeakThreadCount() {
	return $nc(this->jvm)->getPeakThreadCount();
}

int64_t ThreadImpl::getTotalStartedThreadCount() {
	return $nc(this->jvm)->getTotalThreadCount();
}

int32_t ThreadImpl::getDaemonThreadCount() {
	return $nc(this->jvm)->getDaemonThreadCount();
}

bool ThreadImpl::isThreadContentionMonitoringSupported() {
	return $nc(this->jvm)->isThreadContentionMonitoringSupported();
}

bool ThreadImpl::isThreadContentionMonitoringEnabled() {
	$synchronized(this) {
		if (!isThreadContentionMonitoringSupported()) {
			$throwNew($UnsupportedOperationException, "Thread contention monitoring is not supported."_s);
		}
		return this->contentionMonitoringEnabled;
	}
}

bool ThreadImpl::isThreadCpuTimeSupported() {
	return $nc(this->jvm)->isOtherThreadCpuTimeSupported();
}

bool ThreadImpl::isCurrentThreadCpuTimeSupported() {
	return $nc(this->jvm)->isCurrentThreadCpuTimeSupported();
}

bool ThreadImpl::isThreadAllocatedMemorySupported() {
	return $nc(this->jvm)->isThreadAllocatedMemorySupported();
}

bool ThreadImpl::isThreadCpuTimeEnabled() {
	bool var$0 = !isThreadCpuTimeSupported();
	if (var$0 && !isCurrentThreadCpuTimeSupported()) {
		$throwNew($UnsupportedOperationException, "Thread CPU time measurement is not supported"_s);
	}
	return this->cpuTimeEnabled;
}

void ThreadImpl::ensureThreadAllocatedMemorySupported() {
	if (!isThreadAllocatedMemorySupported()) {
		$throwNew($UnsupportedOperationException, "Thread allocated memory measurement is not supported."_s);
	}
}

bool ThreadImpl::isThreadAllocatedMemoryEnabled() {
	ensureThreadAllocatedMemorySupported();
	return this->allocatedMemoryEnabled;
}

$longs* ThreadImpl::getAllThreadIds() {
	$useLocalCurrentObjectStackCache();
	$Util::checkMonitorAccess();
	$var($ThreadArray, threads, getThreads());
	int32_t length = $nc(threads)->length;
	$var($longs, ids, $new($longs, length));
	for (int32_t i = 0; i < length; ++i) {
		$var($Thread, t, threads->get(i));
		ids->set(i, $nc(t)->getId());
	}
	return ids;
}

$ThreadInfo* ThreadImpl::getThreadInfo(int64_t id) {
	$useLocalCurrentObjectStackCache();
	$var($longs, ids, $new($longs, 1));
	ids->set(0, id);
	$var($ThreadInfoArray, infos, getThreadInfo(ids, 0));
	return $nc(infos)->get(0);
}

$ThreadInfo* ThreadImpl::getThreadInfo(int64_t id, int32_t maxDepth) {
	$useLocalCurrentObjectStackCache();
	$var($longs, ids, $new($longs, 1));
	ids->set(0, id);
	$var($ThreadInfoArray, infos, getThreadInfo(ids, maxDepth));
	return $nc(infos)->get(0);
}

$ThreadInfoArray* ThreadImpl::getThreadInfo($longs* ids) {
	return getThreadInfo(ids, 0);
}

void ThreadImpl::verifyThreadId(int64_t id) {
	$useLocalCurrentObjectStackCache();
	if (id <= 0) {
		$throwNew($IllegalArgumentException, $$str({"Invalid thread ID parameter: "_s, $$str(id)}));
	}
}

void ThreadImpl::verifyThreadIds($longs* ids) {
	$Objects::requireNonNull(ids);
	for (int32_t i = 0; i < ids->length; ++i) {
		verifyThreadId(ids->get(i));
	}
}

$ThreadInfoArray* ThreadImpl::getThreadInfo($longs* ids, int32_t maxDepth) {
	$useLocalCurrentObjectStackCache();
	verifyThreadIds(ids);
	if (maxDepth < 0) {
		$throwNew($IllegalArgumentException, $$str({"Invalid maxDepth parameter: "_s, $$str(maxDepth)}));
	}
	if ($nc(ids)->length == 0) {
		return $new($ThreadInfoArray, 0);
	}
	$Util::checkMonitorAccess();
	$var($ThreadInfoArray, infos, $new($ThreadInfoArray, $nc(ids)->length));
	if (maxDepth == $Integer::MAX_VALUE) {
		getThreadInfo1(ids, -1, infos);
	} else {
		getThreadInfo1(ids, maxDepth, infos);
	}
	return infos;
}

void ThreadImpl::setThreadContentionMonitoringEnabled(bool enable) {
	if (!isThreadContentionMonitoringSupported()) {
		$throwNew($UnsupportedOperationException, "Thread contention monitoring is not supported"_s);
	}
	$Util::checkControlAccess();
	$synchronized(this) {
		if (this->contentionMonitoringEnabled != enable) {
			if (enable) {
				resetContentionTimes0(0);
			}
			setThreadContentionMonitoringEnabled0(enable);
			this->contentionMonitoringEnabled = enable;
		}
	}
}

bool ThreadImpl::verifyCurrentThreadCpuTime() {
	if (!isCurrentThreadCpuTimeSupported()) {
		$throwNew($UnsupportedOperationException, "Current thread CPU time measurement is not supported."_s);
	}
	return isThreadCpuTimeEnabled();
}

int64_t ThreadImpl::getCurrentThreadCpuTime() {
	if (verifyCurrentThreadCpuTime()) {
		return getThreadTotalCpuTime0(0);
	}
	return -1;
}

int64_t ThreadImpl::getThreadCpuTime(int64_t id) {
	$useLocalCurrentObjectStackCache();
	$var($longs, ids, $new($longs, 1));
	ids->set(0, id);
	$var($longs, times, getThreadCpuTime(ids));
	return $nc(times)->get(0);
}

bool ThreadImpl::verifyThreadCpuTime($longs* ids) {
	$useLocalCurrentObjectStackCache();
	verifyThreadIds(ids);
	bool var$0 = !isThreadCpuTimeSupported();
	if (var$0 && !isCurrentThreadCpuTimeSupported()) {
		$throwNew($UnsupportedOperationException, "Thread CPU time measurement is not supported."_s);
	}
	if (!isThreadCpuTimeSupported()) {
		for (int32_t i = 0; i < $nc(ids)->length; ++i) {
			if (ids->get(i) != $($Thread::currentThread())->getId()) {
				$throwNew($UnsupportedOperationException, "Thread CPU time measurement is only supported for the current thread."_s);
			}
		}
	}
	return isThreadCpuTimeEnabled();
}

$longs* ThreadImpl::getThreadCpuTime($longs* ids) {
	$useLocalCurrentObjectStackCache();
	bool verified = verifyThreadCpuTime(ids);
	int32_t length = $nc(ids)->length;
	$var($longs, times, $new($longs, length));
	$Arrays::fill(times, (int64_t)-1);
	if (verified) {
		if (length == 1) {
			int64_t id = ids->get(0);
			if (id == $($Thread::currentThread())->getId()) {
				id = 0;
			}
			times->set(0, getThreadTotalCpuTime0(id));
		} else {
			getThreadTotalCpuTime1(ids, times);
		}
	}
	return times;
}

int64_t ThreadImpl::getCurrentThreadUserTime() {
	if (verifyCurrentThreadCpuTime()) {
		return getThreadUserCpuTime0(0);
	}
	return -1;
}

int64_t ThreadImpl::getThreadUserTime(int64_t id) {
	$useLocalCurrentObjectStackCache();
	$var($longs, ids, $new($longs, 1));
	ids->set(0, id);
	$var($longs, times, getThreadUserTime(ids));
	return $nc(times)->get(0);
}

$longs* ThreadImpl::getThreadUserTime($longs* ids) {
	$useLocalCurrentObjectStackCache();
	bool verified = verifyThreadCpuTime(ids);
	int32_t length = $nc(ids)->length;
	$var($longs, times, $new($longs, length));
	$Arrays::fill(times, (int64_t)-1);
	if (verified) {
		if (length == 1) {
			int64_t id = ids->get(0);
			if (id == $($Thread::currentThread())->getId()) {
				id = 0;
			}
			times->set(0, getThreadUserCpuTime0(id));
		} else {
			getThreadUserCpuTime1(ids, times);
		}
	}
	return times;
}

void ThreadImpl::setThreadCpuTimeEnabled(bool enable) {
	bool var$0 = !isThreadCpuTimeSupported();
	if (var$0 && !isCurrentThreadCpuTimeSupported()) {
		$throwNew($UnsupportedOperationException, "Thread CPU time measurement is not supported"_s);
	}
	$Util::checkControlAccess();
	$synchronized(this) {
		if (this->cpuTimeEnabled != enable) {
			setThreadCpuTimeEnabled0(enable);
			this->cpuTimeEnabled = enable;
		}
	}
}

int64_t ThreadImpl::getCurrentThreadAllocatedBytes() {
	if (isThreadAllocatedMemoryEnabled()) {
		return getThreadAllocatedMemory0(0);
	}
	return -1;
}

bool ThreadImpl::verifyThreadAllocatedMemory(int64_t id) {
	verifyThreadId(id);
	return isThreadAllocatedMemoryEnabled();
}

int64_t ThreadImpl::getThreadAllocatedBytes(int64_t id) {
	bool verified = verifyThreadAllocatedMemory(id);
	if (verified) {
		return getThreadAllocatedMemory0($($Thread::currentThread())->getId() == id ? (int64_t)0 : id);
	}
	return -1;
}

bool ThreadImpl::verifyThreadAllocatedMemory($longs* ids) {
	verifyThreadIds(ids);
	return isThreadAllocatedMemoryEnabled();
}

$longs* ThreadImpl::getThreadAllocatedBytes($longs* ids) {
	$Objects::requireNonNull(ids);
	if (ids->length == 1) {
		int64_t size = getThreadAllocatedBytes(ids->get(0));
		return $new($longs, {size});
	}
	bool verified = verifyThreadAllocatedMemory(ids);
	$var($longs, sizes, $new($longs, ids->length));
	$Arrays::fill(sizes, (int64_t)-1);
	if (verified) {
		getThreadAllocatedMemory1(ids, sizes);
	}
	return sizes;
}

void ThreadImpl::setThreadAllocatedMemoryEnabled(bool enable) {
	ensureThreadAllocatedMemorySupported();
	$Util::checkControlAccess();
	$synchronized(this) {
		if (this->allocatedMemoryEnabled != enable) {
			setThreadAllocatedMemoryEnabled0(enable);
			this->allocatedMemoryEnabled = enable;
		}
	}
}

$longs* ThreadImpl::findMonitorDeadlockedThreads() {
	$useLocalCurrentObjectStackCache();
	$Util::checkMonitorAccess();
	$var($ThreadArray, threads, findMonitorDeadlockedThreads0());
	if (threads == nullptr) {
		return nullptr;
	}
	$var($longs, ids, $new($longs, $nc(threads)->length));
	for (int32_t i = 0; i < threads->length; ++i) {
		$var($Thread, t, threads->get(i));
		ids->set(i, $nc(t)->getId());
	}
	return ids;
}

$longs* ThreadImpl::findDeadlockedThreads() {
	$useLocalCurrentObjectStackCache();
	if (!isSynchronizerUsageSupported()) {
		$throwNew($UnsupportedOperationException, "Monitoring of Synchronizer Usage is not supported."_s);
	}
	$Util::checkMonitorAccess();
	$var($ThreadArray, threads, findDeadlockedThreads0());
	if (threads == nullptr) {
		return nullptr;
	}
	$var($longs, ids, $new($longs, $nc(threads)->length));
	for (int32_t i = 0; i < threads->length; ++i) {
		$var($Thread, t, threads->get(i));
		ids->set(i, $nc(t)->getId());
	}
	return ids;
}

void ThreadImpl::resetPeakThreadCount() {
	$Util::checkControlAccess();
	resetPeakThreadCount0();
}

bool ThreadImpl::isObjectMonitorUsageSupported() {
	return $nc(this->jvm)->isObjectMonitorUsageSupported();
}

bool ThreadImpl::isSynchronizerUsageSupported() {
	return $nc(this->jvm)->isSynchronizerUsageSupported();
}

void ThreadImpl::verifyDumpThreads(bool lockedMonitors, bool lockedSynchronizers) {
	if (lockedMonitors && !isObjectMonitorUsageSupported()) {
		$throwNew($UnsupportedOperationException, "Monitoring of Object Monitor Usage is not supported."_s);
	}
	if (lockedSynchronizers && !isSynchronizerUsageSupported()) {
		$throwNew($UnsupportedOperationException, "Monitoring of Synchronizer Usage is not supported."_s);
	}
	$Util::checkMonitorAccess();
}

$ThreadInfoArray* ThreadImpl::getThreadInfo($longs* ids, bool lockedMonitors, bool lockedSynchronizers) {
	return dumpThreads0(ids, lockedMonitors, lockedSynchronizers, $Integer::MAX_VALUE);
}

$ThreadInfoArray* ThreadImpl::getThreadInfo($longs* ids, bool lockedMonitors, bool lockedSynchronizers, int32_t maxDepth) {
	$useLocalCurrentObjectStackCache();
	if (maxDepth < 0) {
		$throwNew($IllegalArgumentException, $$str({"Invalid maxDepth parameter: "_s, $$str(maxDepth)}));
	}
	verifyThreadIds(ids);
	if ($nc(ids)->length == 0) {
		return $new($ThreadInfoArray, 0);
	}
	verifyDumpThreads(lockedMonitors, lockedSynchronizers);
	return dumpThreads0(ids, lockedMonitors, lockedSynchronizers, maxDepth);
}

$ThreadInfoArray* ThreadImpl::dumpAllThreads(bool lockedMonitors, bool lockedSynchronizers) {
	return dumpAllThreads(lockedMonitors, lockedSynchronizers, $Integer::MAX_VALUE);
}

$ThreadInfoArray* ThreadImpl::dumpAllThreads(bool lockedMonitors, bool lockedSynchronizers, int32_t maxDepth) {
	$useLocalCurrentObjectStackCache();
	if (maxDepth < 0) {
		$throwNew($IllegalArgumentException, $$str({"Invalid maxDepth parameter: "_s, $$str(maxDepth)}));
	}
	verifyDumpThreads(lockedMonitors, lockedSynchronizers);
	return dumpThreads0(nullptr, lockedMonitors, lockedSynchronizers, maxDepth);
}

$ThreadArray* ThreadImpl::getThreads() {
	$init(ThreadImpl);
	$var($ThreadArray, $ret, nullptr);
	$prepareNativeStatic(ThreadImpl, getThreads, $ThreadArray*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

void ThreadImpl::getThreadInfo1($longs* ids, int32_t maxDepth, $ThreadInfoArray* result) {
	$init(ThreadImpl);
	$prepareNativeStatic(ThreadImpl, getThreadInfo1, void, $longs* ids, int32_t maxDepth, $ThreadInfoArray* result);
	$invokeNativeStatic(ids, maxDepth, result);
	$finishNativeStatic();
}

int64_t ThreadImpl::getThreadTotalCpuTime0(int64_t id) {
	$init(ThreadImpl);
	int64_t $ret = 0;
	$prepareNativeStatic(ThreadImpl, getThreadTotalCpuTime0, int64_t, int64_t id);
	$ret = $invokeNativeStatic(id);
	$finishNativeStatic();
	return $ret;
}

void ThreadImpl::getThreadTotalCpuTime1($longs* ids, $longs* result) {
	$init(ThreadImpl);
	$prepareNativeStatic(ThreadImpl, getThreadTotalCpuTime1, void, $longs* ids, $longs* result);
	$invokeNativeStatic(ids, result);
	$finishNativeStatic();
}

int64_t ThreadImpl::getThreadUserCpuTime0(int64_t id) {
	$init(ThreadImpl);
	int64_t $ret = 0;
	$prepareNativeStatic(ThreadImpl, getThreadUserCpuTime0, int64_t, int64_t id);
	$ret = $invokeNativeStatic(id);
	$finishNativeStatic();
	return $ret;
}

void ThreadImpl::getThreadUserCpuTime1($longs* ids, $longs* result) {
	$init(ThreadImpl);
	$prepareNativeStatic(ThreadImpl, getThreadUserCpuTime1, void, $longs* ids, $longs* result);
	$invokeNativeStatic(ids, result);
	$finishNativeStatic();
}

int64_t ThreadImpl::getThreadAllocatedMemory0(int64_t id) {
	$init(ThreadImpl);
	int64_t $ret = 0;
	$prepareNativeStatic(ThreadImpl, getThreadAllocatedMemory0, int64_t, int64_t id);
	$ret = $invokeNativeStatic(id);
	$finishNativeStatic();
	return $ret;
}

void ThreadImpl::getThreadAllocatedMemory1($longs* ids, $longs* result) {
	$init(ThreadImpl);
	$prepareNativeStatic(ThreadImpl, getThreadAllocatedMemory1, void, $longs* ids, $longs* result);
	$invokeNativeStatic(ids, result);
	$finishNativeStatic();
}

void ThreadImpl::setThreadCpuTimeEnabled0(bool enable) {
	$init(ThreadImpl);
	$prepareNativeStatic(ThreadImpl, setThreadCpuTimeEnabled0, void, bool enable);
	$invokeNativeStatic(enable);
	$finishNativeStatic();
}

void ThreadImpl::setThreadAllocatedMemoryEnabled0(bool enable) {
	$init(ThreadImpl);
	$prepareNativeStatic(ThreadImpl, setThreadAllocatedMemoryEnabled0, void, bool enable);
	$invokeNativeStatic(enable);
	$finishNativeStatic();
}

void ThreadImpl::setThreadContentionMonitoringEnabled0(bool enable) {
	$init(ThreadImpl);
	$prepareNativeStatic(ThreadImpl, setThreadContentionMonitoringEnabled0, void, bool enable);
	$invokeNativeStatic(enable);
	$finishNativeStatic();
}

$ThreadArray* ThreadImpl::findMonitorDeadlockedThreads0() {
	$init(ThreadImpl);
	$var($ThreadArray, $ret, nullptr);
	$prepareNativeStatic(ThreadImpl, findMonitorDeadlockedThreads0, $ThreadArray*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

$ThreadArray* ThreadImpl::findDeadlockedThreads0() {
	$init(ThreadImpl);
	$var($ThreadArray, $ret, nullptr);
	$prepareNativeStatic(ThreadImpl, findDeadlockedThreads0, $ThreadArray*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

void ThreadImpl::resetPeakThreadCount0() {
	$init(ThreadImpl);
	$prepareNativeStatic(ThreadImpl, resetPeakThreadCount0, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$ThreadInfoArray* ThreadImpl::dumpThreads0($longs* ids, bool lockedMonitors, bool lockedSynchronizers, int32_t maxDepth) {
	$init(ThreadImpl);
	$var($ThreadInfoArray, $ret, nullptr);
	$prepareNativeStatic(ThreadImpl, dumpThreads0, $ThreadInfoArray*, $longs* ids, bool lockedMonitors, bool lockedSynchronizers, int32_t maxDepth);
	$assign($ret, $invokeNativeStaticObject(ids, lockedMonitors, lockedSynchronizers, maxDepth));
	$finishNativeStatic();
	return $ret;
}

void ThreadImpl::resetContentionTimes0(int64_t tid) {
	$init(ThreadImpl);
	$prepareNativeStatic(ThreadImpl, resetContentionTimes0, void, int64_t tid);
	$invokeNativeStatic(tid);
	$finishNativeStatic();
}

$ObjectName* ThreadImpl::getObjectName() {
	$init($ManagementFactory);
	return $Util::newObjectName($ManagementFactory::THREAD_MXBEAN_NAME);
}

ThreadImpl::ThreadImpl() {
}

$Class* ThreadImpl::load$($String* name, bool initialize) {
	$loadClass(ThreadImpl, name, initialize, &_ThreadImpl_ClassInfo_, allocate$ThreadImpl);
	return class$;
}

$Class* ThreadImpl::class$ = nullptr;

	} // management
} // sun