#include <java/sql/DriverPropertyInfo.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$FieldInfo _DriverPropertyInfo_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DriverPropertyInfo, name)},
	{"description", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DriverPropertyInfo, description)},
	{"required", "Z", nullptr, $PUBLIC, $field(DriverPropertyInfo, required)},
	{"value", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DriverPropertyInfo, value)},
	{"choices", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(DriverPropertyInfo, choices)},
	{}
};

$MethodInfo _DriverPropertyInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DriverPropertyInfo::*)($String*,$String*)>(&DriverPropertyInfo::init$))},
	{}
};

$ClassInfo _DriverPropertyInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.DriverPropertyInfo",
	"java.lang.Object",
	nullptr,
	_DriverPropertyInfo_FieldInfo_,
	_DriverPropertyInfo_MethodInfo_
};

$Object* allocate$DriverPropertyInfo($Class* clazz) {
	return $of($alloc(DriverPropertyInfo));
}

void DriverPropertyInfo::init$($String* name, $String* value) {
	$set(this, description, nullptr);
	this->required = false;
	$set(this, value, nullptr);
	$set(this, choices, nullptr);
	$set(this, name, name);
	$set(this, value, value);
}

DriverPropertyInfo::DriverPropertyInfo() {
}

$Class* DriverPropertyInfo::load$($String* name, bool initialize) {
	$loadClass(DriverPropertyInfo, name, initialize, &_DriverPropertyInfo_ClassInfo_, allocate$DriverPropertyInfo);
	return class$;
}

$Class* DriverPropertyInfo::class$ = nullptr;

	} // sql
} // java