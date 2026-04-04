#include <javax/management/monitor/Monitor$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/management/monitor/Monitor$NumericalType.h>
#include <javax/management/monitor/Monitor.h>
#include <jcpp.h>

#undef BYTE
#undef DOUBLE
#undef FLOAT
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

$ints* Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType = nullptr;

void Monitor$1::clinit$($Class* clazz) {
	$assignStatic(Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType, $new($ints, $($Monitor$NumericalType::values())->length));
	{
		try {
			Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType->set($Monitor$NumericalType::BYTE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType->set($Monitor$NumericalType::SHORT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType->set($Monitor$NumericalType::INTEGER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType->set($Monitor$NumericalType::LONG->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType->set($Monitor$NumericalType::FLOAT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Monitor$1::$SwitchMap$javax$management$monitor$Monitor$NumericalType->set($Monitor$NumericalType::DOUBLE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Monitor$1::Monitor$1() {
}

$Class* Monitor$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$management$monitor$Monitor$NumericalType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Monitor$1, $SwitchMap$javax$management$monitor$Monitor$NumericalType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.management.monitor.Monitor",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.monitor.Monitor$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.management.monitor.Monitor$1",
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
		"javax.management.monitor.Monitor"
	};
	$loadClass(Monitor$1, name, initialize, &classInfo$$, Monitor$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Monitor$1);
	});
	return class$;
}

$Class* Monitor$1::class$ = nullptr;

		} // monitor
	} // management
} // javax