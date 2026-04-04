#include <sun/management/HotspotCompilation.h>
#include <java/lang/AssertionError.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/TreeMap.h>
#include <sun/management/CompilerThreadStat.h>
#include <sun/management/HotspotCompilation$CompilerThreadInfo.h>
#include <sun/management/MethodInfo.h>
#include <sun/management/VMManagement.h>
#include <sun/management/counter/Counter.h>
#include <sun/management/counter/LongCounter.h>
#include <sun/management/counter/StringCounter.h>
#include <jcpp.h>

#undef CI_COUNTER_NAME_PATTERN
#undef COM_SUN_CI
#undef JAVA_CI
#undef SUN_CI

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $1MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $TreeMap = ::java::util::TreeMap;
using $HotspotCompilation$CompilerThreadInfo = ::sun::management::HotspotCompilation$CompilerThreadInfo;
using $MethodInfo = ::sun::management::MethodInfo;
using $VMManagement = ::sun::management::VMManagement;
using $Counter = ::sun::management::counter::Counter;
using $LongCounter = ::sun::management::counter::LongCounter;
using $StringCounter = ::sun::management::counter::StringCounter;

namespace sun {
	namespace management {

$String* HotspotCompilation::JAVA_CI = nullptr;
$String* HotspotCompilation::COM_SUN_CI = nullptr;
$String* HotspotCompilation::SUN_CI = nullptr;
$String* HotspotCompilation::CI_COUNTER_NAME_PATTERN = nullptr;

void HotspotCompilation::init$($VMManagement* vm) {
	$set(this, jvm, vm);
	initCompilerCounters();
}

$Counter* HotspotCompilation::lookup($String* name) {
	$useLocalObjectStack();
	$var($Counter, c, nullptr);
	if (($assign(c, $cast($Counter, $nc(this->counters)->get($$str({HotspotCompilation::SUN_CI, name}))))) != nullptr) {
		return c;
	}
	if (($assign(c, $cast($Counter, this->counters->get($$str({HotspotCompilation::COM_SUN_CI, name}))))) != nullptr) {
		return c;
	}
	if (($assign(c, $cast($Counter, this->counters->get($$str({HotspotCompilation::JAVA_CI, name}))))) != nullptr) {
		return c;
	}
	$throwNew($AssertionError, $$of($str({"Counter "_s, name, " does not exist"_s})));
}

void HotspotCompilation::initCompilerCounters() {
	$useLocalObjectStack();
	$set(this, counters, $cast($AbstractMap, $new($TreeMap)));
	{
		$var($Iterator, i$, $$nc(getInternalCompilerCounters())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Counter, c, $cast($Counter, i$->next()));
			{
				$nc(this->counters)->put($($nc(c)->getName()), c);
			}
		}
	}
	$set(this, compilerThreads, $cast($LongCounter, lookup("threads"_s)));
	$set(this, totalCompiles, $cast($LongCounter, lookup("totalCompiles"_s)));
	$set(this, totalBailouts, $cast($LongCounter, lookup("totalBailouts"_s)));
	$set(this, totalInvalidates, $cast($LongCounter, lookup("totalInvalidates"_s)));
	$set(this, nmethodCodeSize, $cast($LongCounter, lookup("nmethodCodeSize"_s)));
	$set(this, nmethodSize, $cast($LongCounter, lookup("nmethodSize"_s)));
	$set(this, lastMethod, $cast($StringCounter, lookup("lastMethod"_s)));
	$set(this, lastSize, $cast($LongCounter, lookup("lastSize"_s)));
	$set(this, lastType, $cast($LongCounter, lookup("lastType"_s)));
	$set(this, lastFailedMethod, $cast($StringCounter, lookup("lastFailedMethod"_s)));
	$set(this, lastFailedType, $cast($LongCounter, lookup("lastFailedType"_s)));
	$set(this, lastInvalidatedMethod, $cast($StringCounter, lookup("lastInvalidatedMethod"_s)));
	$set(this, lastInvalidatedType, $cast($LongCounter, lookup("lastInvalidatedType"_s)));
	this->numActiveThreads = (int32_t)$nc(this->compilerThreads)->longValue();
	$set(this, threads, $new($ArrayList));
	for (int32_t i = 0; i < this->numActiveThreads; ++i) {
		if ($nc(this->counters)->containsKey($$str({HotspotCompilation::SUN_CI, "compilerThread."_s, $$str(i), ".method"_s}))) {
			this->threads->add($$new($HotspotCompilation$CompilerThreadInfo, this, "compilerThread"_s, i));
		}
	}
}

int32_t HotspotCompilation::getCompilerThreadCount() {
	return this->numActiveThreads;
}

int64_t HotspotCompilation::getTotalCompileCount() {
	return $nc(this->totalCompiles)->longValue();
}

int64_t HotspotCompilation::getBailoutCompileCount() {
	return $nc(this->totalBailouts)->longValue();
}

int64_t HotspotCompilation::getInvalidatedCompileCount() {
	return $nc(this->totalInvalidates)->longValue();
}

int64_t HotspotCompilation::getCompiledMethodCodeSize() {
	return $nc(this->nmethodCodeSize)->longValue();
}

int64_t HotspotCompilation::getCompiledMethodSize() {
	return $nc(this->nmethodSize)->longValue();
}

$List* HotspotCompilation::getCompilerThreadStats() {
	$useLocalObjectStack();
	$var($List, list, $new($ArrayList, $nc(this->threads)->size()));
	{
		$var($Iterator, i$, this->threads->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($HotspotCompilation$CompilerThreadInfo, info, $cast($HotspotCompilation$CompilerThreadInfo, i$->next()));
			{
				list->add($($nc(info)->getCompilerThreadStat()));
			}
		}
	}
	return list;
}

$MethodInfo* HotspotCompilation::getLastCompile() {
	$var($String, var$0, $nc(this->lastMethod)->stringValue());
	int64_t var$1 = (int32_t)$nc(this->lastType)->longValue();
	return $new($MethodInfo, var$0, var$1, (int32_t)$nc(this->lastSize)->longValue());
}

$MethodInfo* HotspotCompilation::getFailedCompile() {
	$var($String, var$0, $nc(this->lastFailedMethod)->stringValue());
	return $new($MethodInfo, var$0, (int32_t)$nc(this->lastFailedType)->longValue(), -1);
}

$MethodInfo* HotspotCompilation::getInvalidatedCompile() {
	$var($String, var$0, $nc(this->lastInvalidatedMethod)->stringValue());
	return $new($MethodInfo, var$0, (int32_t)$nc(this->lastInvalidatedType)->longValue(), -1);
}

$List* HotspotCompilation::getInternalCompilerCounters() {
	return $nc(this->jvm)->getInternalCounters(HotspotCompilation::CI_COUNTER_NAME_PATTERN);
}

HotspotCompilation::HotspotCompilation() {
}

void HotspotCompilation::clinit$($Class* clazz) {
	$assignStatic(HotspotCompilation::JAVA_CI, "java.ci."_s);
	$assignStatic(HotspotCompilation::COM_SUN_CI, "com.sun.ci."_s);
	$assignStatic(HotspotCompilation::SUN_CI, "sun.ci."_s);
	$assignStatic(HotspotCompilation::CI_COUNTER_NAME_PATTERN, $str({HotspotCompilation::JAVA_CI, "|"_s, HotspotCompilation::COM_SUN_CI, "|"_s, HotspotCompilation::SUN_CI}));
}

$Class* HotspotCompilation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"jvm", "Lsun/management/VMManagement;", nullptr, $PRIVATE, $field(HotspotCompilation, jvm)},
		{"JAVA_CI", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotCompilation, JAVA_CI)},
		{"COM_SUN_CI", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotCompilation, COM_SUN_CI)},
		{"SUN_CI", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotCompilation, SUN_CI)},
		{"CI_COUNTER_NAME_PATTERN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HotspotCompilation, CI_COUNTER_NAME_PATTERN)},
		{"compilerThreads", "Lsun/management/counter/LongCounter;", nullptr, $PRIVATE, $field(HotspotCompilation, compilerThreads)},
		{"totalCompiles", "Lsun/management/counter/LongCounter;", nullptr, $PRIVATE, $field(HotspotCompilation, totalCompiles)},
		{"totalBailouts", "Lsun/management/counter/LongCounter;", nullptr, $PRIVATE, $field(HotspotCompilation, totalBailouts)},
		{"totalInvalidates", "Lsun/management/counter/LongCounter;", nullptr, $PRIVATE, $field(HotspotCompilation, totalInvalidates)},
		{"nmethodCodeSize", "Lsun/management/counter/LongCounter;", nullptr, $PRIVATE, $field(HotspotCompilation, nmethodCodeSize)},
		{"nmethodSize", "Lsun/management/counter/LongCounter;", nullptr, $PRIVATE, $field(HotspotCompilation, nmethodSize)},
		{"lastMethod", "Lsun/management/counter/StringCounter;", nullptr, $PRIVATE, $field(HotspotCompilation, lastMethod)},
		{"lastSize", "Lsun/management/counter/LongCounter;", nullptr, $PRIVATE, $field(HotspotCompilation, lastSize)},
		{"lastType", "Lsun/management/counter/LongCounter;", nullptr, $PRIVATE, $field(HotspotCompilation, lastType)},
		{"lastFailedMethod", "Lsun/management/counter/StringCounter;", nullptr, $PRIVATE, $field(HotspotCompilation, lastFailedMethod)},
		{"lastFailedType", "Lsun/management/counter/LongCounter;", nullptr, $PRIVATE, $field(HotspotCompilation, lastFailedType)},
		{"lastInvalidatedMethod", "Lsun/management/counter/StringCounter;", nullptr, $PRIVATE, $field(HotspotCompilation, lastInvalidatedMethod)},
		{"lastInvalidatedType", "Lsun/management/counter/LongCounter;", nullptr, $PRIVATE, $field(HotspotCompilation, lastInvalidatedType)},
		{"threads", "Ljava/util/List;", "Ljava/util/List<Lsun/management/HotspotCompilation$CompilerThreadInfo;>;", $PRIVATE, $field(HotspotCompilation, threads)},
		{"numActiveThreads", "I", nullptr, $PRIVATE, $field(HotspotCompilation, numActiveThreads)},
		{"counters", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lsun/management/counter/Counter;>;", $PRIVATE, $field(HotspotCompilation, counters)},
		{}
	};
	$CompoundAttribute getCompilerThreadStatsmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$1MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/management/VMManagement;)V", nullptr, 0, $method(HotspotCompilation, init$, void, $VMManagement*)},
		{"getBailoutCompileCount", "()J", nullptr, $PUBLIC, $virtualMethod(HotspotCompilation, getBailoutCompileCount, int64_t)},
		{"getCompiledMethodCodeSize", "()J", nullptr, $PUBLIC, $virtualMethod(HotspotCompilation, getCompiledMethodCodeSize, int64_t)},
		{"getCompiledMethodSize", "()J", nullptr, $PUBLIC, $virtualMethod(HotspotCompilation, getCompiledMethodSize, int64_t)},
		{"getCompilerThreadCount", "()I", nullptr, $PUBLIC, $virtualMethod(HotspotCompilation, getCompilerThreadCount, int32_t)},
		{"getCompilerThreadStats", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/CompilerThreadStat;>;", $PUBLIC | $DEPRECATED, $virtualMethod(HotspotCompilation, getCompilerThreadStats, $List*), nullptr, nullptr, getCompilerThreadStatsmethodAnnotations$$},
		{"getFailedCompile", "()Lsun/management/MethodInfo;", nullptr, $PUBLIC, $virtualMethod(HotspotCompilation, getFailedCompile, $MethodInfo*)},
		{"getInternalCompilerCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC, $virtualMethod(HotspotCompilation, getInternalCompilerCounters, $List*)},
		{"getInvalidatedCompile", "()Lsun/management/MethodInfo;", nullptr, $PUBLIC, $virtualMethod(HotspotCompilation, getInvalidatedCompile, $MethodInfo*)},
		{"getInvalidatedCompileCount", "()J", nullptr, $PUBLIC, $virtualMethod(HotspotCompilation, getInvalidatedCompileCount, int64_t)},
		{"getLastCompile", "()Lsun/management/MethodInfo;", nullptr, $PUBLIC, $virtualMethod(HotspotCompilation, getLastCompile, $MethodInfo*)},
		{"getTotalCompileCount", "()J", nullptr, $PUBLIC, $virtualMethod(HotspotCompilation, getTotalCompileCount, int64_t)},
		{"initCompilerCounters", "()V", nullptr, $PRIVATE, $method(HotspotCompilation, initCompilerCounters, void)},
		{"lookup", "(Ljava/lang/String;)Lsun/management/counter/Counter;", nullptr, $PRIVATE, $method(HotspotCompilation, lookup, $Counter*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.HotspotCompilation$CompilerThreadInfo", "sun.management.HotspotCompilation", "CompilerThreadInfo", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.HotspotCompilation",
		"java.lang.Object",
		"sun.management.HotspotCompilationMBean",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.management.HotspotCompilation$CompilerThreadInfo"
	};
	$loadClass(HotspotCompilation, name, initialize, &classInfo$$, HotspotCompilation::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HotspotCompilation);
	});
	return class$;
}

$Class* HotspotCompilation::class$ = nullptr;

	} // management
} // sun