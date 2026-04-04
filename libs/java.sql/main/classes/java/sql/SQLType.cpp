#include <java/sql/SQLType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$Class* SQLType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLType, getName, $String*)},
		{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLType, getVendor, $String*)},
		{"getVendorTypeNumber", "()Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLType, getVendorTypeNumber, $Integer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.sql.SQLType",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SQLType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SQLType);
	});
	return class$;
}

$Class* SQLType::class$ = nullptr;

	} // sql
} // java