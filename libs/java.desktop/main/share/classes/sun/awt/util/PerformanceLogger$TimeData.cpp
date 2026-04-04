#include <sun/awt/util/PerformanceLogger$TimeData.h>
#include <sun/awt/util/PerformanceLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace util {

void PerformanceLogger$TimeData::init$($String* message, int64_t time) {
	$set(this, message, message);
	this->time = time;
}

$String* PerformanceLogger$TimeData::getMessage() {
	return this->message;
}

int64_t PerformanceLogger$TimeData::getTime() {
	return this->time;
}

PerformanceLogger$TimeData::PerformanceLogger$TimeData() {
}

$Class* PerformanceLogger$TimeData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"message", "Ljava/lang/String;", nullptr, 0, $field(PerformanceLogger$TimeData, message)},
		{"time", "J", nullptr, 0, $field(PerformanceLogger$TimeData, time)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;J)V", nullptr, 0, $method(PerformanceLogger$TimeData, init$, void, $String*, int64_t)},
		{"getMessage", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(PerformanceLogger$TimeData, getMessage, $String*)},
		{"getTime", "()J", nullptr, 0, $virtualMethod(PerformanceLogger$TimeData, getTime, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.util.PerformanceLogger$TimeData", "sun.awt.util.PerformanceLogger", "TimeData", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.util.PerformanceLogger$TimeData",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.util.PerformanceLogger"
	};
	$loadClass(PerformanceLogger$TimeData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PerformanceLogger$TimeData);
	});
	return class$;
}

$Class* PerformanceLogger$TimeData::class$ = nullptr;

		} // util
	} // awt
} // sun