#include <sun/management/HotspotThread.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/management/VMManagement.h>
#include <jcpp.h>

#undef COM_SUN_THREADS
#undef JAVA_THREADS
#undef SUN_THREADS
#undef THREADS_COUNTER_NAME_PATTERN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $VMManagement = ::sun::management::VMManagement;

namespace sun {
	namespace management {

$String* HotspotThread::JAVA_THREADS = nullptr;
$String* HotspotThread::COM_SUN_THREADS = nullptr;
$String* HotspotThread::SUN_THREADS = nullptr;
$String* HotspotThread::THREADS_COUNTER_NAME_PATTERN = nullptr;

void HotspotThread::init$($VMManagement* vm) {
	$set(this, jvm, vm);
}

int32_t HotspotThread::getInternalThreadCount() {
	$prepareNative(getInternalThreadCount, int32_t);
	int32_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

$Map* HotspotThread::getInternalThreadCpuTimes() {
	$useLocalObjectStack();
	int32_t count = getInternalThreadCount();
	if (count == 0) {
		return $Collections::emptyMap();
	}
	$var($StringArray, names, $new($StringArray, count));
	$var($longs, times, $new($longs, count));
	int32_t numThreads = getInternalThreadTimes0(names, times);
	$var($Map, result, $new($HashMap, numThreads));
	for (int32_t i = 0; i < numThreads; ++i) {
		result->put(names->get(i), $($Long::valueOf(times->get(i))));
	}
	return result;
}

int32_t HotspotThread::getInternalThreadTimes0($StringArray* names, $longs* times) {
	$prepareNative(getInternalThreadTimes0, int32_t, $StringArray* names, $longs* times);
	int32_t $ret = $invokeNative(names, times);
	$finishNative();
	return $ret;
}

$List* HotspotThread::getInternalThreadingCounters() {
	return $nc(this->jvm)->getInternalCounters(HotspotThread::THREADS_COUNTER_NAME_PATTERN);
}

HotspotThread::HotspotThread() {
}

void HotspotThread::clinit$($Class* clazz) {
	$assignStatic(HotspotThread::JAVA_THREADS, "java.threads."_s);
	$assignStatic(HotspotThread::COM_SUN_THREADS, "com.sun.threads."_s);
	$assignStatic(HotspotThread::SUN_THREADS, "sun.threads."_s);
	$assignStatic(HotspotThread::THREADS_COUNTER_NAME_PATTERN, $str({HotspotThread::JAVA_THREADS, "|"_s, HotspotThread::COM_SUN_THREADS, "|"_s, HotspotThread::SUN_THREADS}));
}

$Class* HotspotThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"jvm", "Lsun/management/VMManagement;", nullptr, $PRIVATE, $field(HotspotThread, jvm)},
		{"JAVA_THREADS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotThread, JAVA_THREADS)},
		{"COM_SUN_THREADS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotThread, COM_SUN_THREADS)},
		{"SUN_THREADS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotThread, SUN_THREADS)},
		{"THREADS_COUNTER_NAME_PATTERN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotThread, THREADS_COUNTER_NAME_PATTERN)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/management/VMManagement;)V", nullptr, 0, $method(HotspotThread, init$, void, $VMManagement*)},
		{"getInternalThreadCount", "()I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(HotspotThread, getInternalThreadCount, int32_t)},
		{"getInternalThreadCpuTimes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Long;>;", $PUBLIC, $virtualMethod(HotspotThread, getInternalThreadCpuTimes, $Map*)},
		{"getInternalThreadTimes0", "([Ljava/lang/String;[J)I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(HotspotThread, getInternalThreadTimes0, int32_t, $StringArray*, $longs*)},
		{"getInternalThreadingCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC, $virtualMethod(HotspotThread, getInternalThreadingCounters, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.HotspotThread",
		"java.lang.Object",
		"sun.management.HotspotThreadMBean",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HotspotThread, name, initialize, &classInfo$$, HotspotThread::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HotspotThread);
	});
	return class$;
}

$Class* HotspotThread::class$ = nullptr;

	} // management
} // sun