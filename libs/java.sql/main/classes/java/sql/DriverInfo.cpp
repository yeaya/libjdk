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

$FieldInfo _DriverInfo_FieldInfo_[] = {
	{"driver", "Ljava/sql/Driver;", nullptr, $FINAL, $field(DriverInfo, driver)},
	{"da", "Ljava/sql/DriverAction;", nullptr, 0, $field(DriverInfo, da)},
	{}
};

$MethodInfo _DriverInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/sql/Driver;Ljava/sql/DriverAction;)V", nullptr, 0, $method(static_cast<void(DriverInfo::*)($Driver*,$DriverAction*)>(&DriverInfo::init$))},
	{"action", "()Ljava/sql/DriverAction;", nullptr, 0},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DriverInfo_ClassInfo_ = {
	$ACC_SUPER,
	"java.sql.DriverInfo",
	"java.lang.Object",
	nullptr,
	_DriverInfo_FieldInfo_,
	_DriverInfo_MethodInfo_
};

$Object* allocate$DriverInfo($Class* clazz) {
	return $of($alloc(DriverInfo));
}

void DriverInfo::init$($Driver* driver, $DriverAction* action) {
	$set(this, driver, driver);
	$set(this, da, action);
}

bool DriverInfo::equals(Object$* other) {
	return ($instanceOf(DriverInfo, other)) && this->driver == $nc(($cast(DriverInfo, other)))->driver;
}

int32_t DriverInfo::hashCode() {
	return $nc($of(this->driver))->hashCode();
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
	$loadClass(DriverInfo, name, initialize, &_DriverInfo_ClassInfo_, allocate$DriverInfo);
	return class$;
}

$Class* DriverInfo::class$ = nullptr;

	} // sql
} // java