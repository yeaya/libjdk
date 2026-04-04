#include <sun/java2d/marlin/stats/Monitor.h>
#include <sun/java2d/marlin/stats/StatLong.h>
#include <jcpp.h>

#undef INVALID

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StatLong = ::sun::java2d::marlin::stats::StatLong;

namespace sun {
	namespace java2d {
		namespace marlin {
			namespace stats {

void Monitor::init$($String* name) {
	$StatLong::init$(name);
	this->start$ = Monitor::INVALID;
}

void Monitor::start() {
	this->start$ = $System::nanoTime();
}

void Monitor::stop() {
	int64_t elapsed = $System::nanoTime() - this->start$;
	if (this->start$ != Monitor::INVALID && elapsed > 0) {
		add(elapsed);
	}
	this->start$ = Monitor::INVALID;
}

Monitor::Monitor() {
}

$Class* Monitor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INVALID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Monitor, INVALID)},
		{"start", "J", nullptr, $PRIVATE, $field(Monitor, start$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Monitor, init$, void, $String*)},
		{"start", "()V", nullptr, $PUBLIC, $method(Monitor, start, void)},
		{"stop", "()V", nullptr, $PUBLIC, $method(Monitor, stop, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.java2d.marlin.stats.Monitor",
		"sun.java2d.marlin.stats.StatLong",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Monitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Monitor);
	});
	return class$;
}

$Class* Monitor::class$ = nullptr;

			} // stats
		} // marlin
	} // java2d
} // sun