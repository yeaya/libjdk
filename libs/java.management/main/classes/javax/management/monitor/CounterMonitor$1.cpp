#include <javax/management/monitor/CounterMonitor$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/management/monitor/CounterMonitor.h>
#include <javax/management/monitor/Monitor$NumericalType.h>
#include <javax/management/monitor/Monitor.h>
#include <jcpp.h>

#undef BYTE
#undef INTEGER
#undef LONG
#undef SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Monitor$NumericalType = ::javax::management::monitor::Monitor$NumericalType;

namespace javax {
	namespace management {
		namespace monitor {

$ints* CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType = nullptr;

void CounterMonitor$1::clinit$($Class* clazz) {
	$assignStatic(CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType, $new($ints, $($Monitor$NumericalType::values())->length));
	{
		try {
			CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType->set($Monitor$NumericalType::INTEGER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType->set($Monitor$NumericalType::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType->set($Monitor$NumericalType::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CounterMonitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType->set($Monitor$NumericalType::LONG->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

CounterMonitor$1::CounterMonitor$1() {
}

$Class* CounterMonitor$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$management$monitor$Monitor$NumericalType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CounterMonitor$1, $SwitchMap$javax$management$monitor$Monitor$NumericalType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.monitor.CounterMonitor",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.monitor.CounterMonitor$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.management.monitor.CounterMonitor$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.monitor.CounterMonitor"
	};
	$loadClass(CounterMonitor$1, name, initialize, &classInfo$$, CounterMonitor$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CounterMonitor$1);
	});
	return class$;
}

$Class* CounterMonitor$1::class$ = nullptr;

		} // monitor
	} // management
} // javax