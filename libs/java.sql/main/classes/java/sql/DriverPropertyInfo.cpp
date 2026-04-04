#include <java/sql/DriverPropertyInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

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
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DriverPropertyInfo, name)},
		{"description", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DriverPropertyInfo, description)},
		{"required", "Z", nullptr, $PUBLIC, $field(DriverPropertyInfo, required)},
		{"value", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DriverPropertyInfo, value)},
		{"choices", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(DriverPropertyInfo, choices)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DriverPropertyInfo, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.sql.DriverPropertyInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DriverPropertyInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DriverPropertyInfo);
	});
	return class$;
}

$Class* DriverPropertyInfo::class$ = nullptr;

	} // sql
} // java