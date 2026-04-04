#include <java/sql/DriverInfo.h>
#include <java/sql/Driver.h>
#include <java/sql/DriverAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Driver = ::java::sql::Driver;
using $DriverAction = ::java::sql::DriverAction;

namespace java {
	namespace sql {

void DriverInfo::init$($Driver* driver, $DriverAction* action) {
	$set(this, driver, driver);
	$set(this, da, action);
}

bool DriverInfo::equals(Object$* other) {
	return ($instanceOf(DriverInfo, other)) && this->driver == $cast(DriverInfo, other)->driver;
}

int32_t DriverInfo::hashCode() {
	return $nc(this->driver)->hashCode();
}

$String* DriverInfo::toString() {
	return ($str({"driver[className="_s, this->driver, "]"_s}));
}

$DriverAction* DriverInfo::action() {
	return this->da;
}

DriverInfo::DriverInfo() {
}

$Class* DriverInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"driver", "Ljava/sql/Driver;", nullptr, $FINAL, $field(DriverInfo, driver)},
		{"da", "Ljava/sql/DriverAction;", nullptr, 0, $field(DriverInfo, da)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/sql/Driver;Ljava/sql/DriverAction;)V", nullptr, 0, $method(DriverInfo, init$, void, $Driver*, $DriverAction*)},
		{"action", "()Ljava/sql/DriverAction;", nullptr, 0, $virtualMethod(DriverInfo, action, $DriverAction*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DriverInfo, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(DriverInfo, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DriverInfo, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.sql.DriverInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DriverInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DriverInfo);
	});
	return class$;
}

$Class* DriverInfo::class$ = nullptr;

	} // sql
} // java