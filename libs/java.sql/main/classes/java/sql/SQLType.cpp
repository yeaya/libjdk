#include <java/sql/SQLType.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$MethodInfo _SQLType_MethodInfo_[] = {
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVendorTypeNumber", "()Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SQLType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.SQLType",
	nullptr,
	nullptr,
	nullptr,
	_SQLType_MethodInfo_
};

$Object* allocate$SQLType($Class* clazz) {
	return $of($alloc(SQLType));
}

$Class* SQLType::load$($String* name, bool initialize) {
	$loadClass(SQLType, name, initialize, &_SQLType_ClassInfo_, allocate$SQLType);
	return class$;
}

$Class* SQLType::class$ = nullptr;

	} // sql
} // java