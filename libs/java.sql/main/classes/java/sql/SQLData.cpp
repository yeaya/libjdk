#include <java/sql/SQLData.h>

#include <java/sql/SQLInput.h>
#include <java/sql/SQLOutput.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$MethodInfo _SQLData_MethodInfo_[] = {
	{"getSQLTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readSQL", "(Ljava/sql/SQLInput;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeSQL", "(Ljava/sql/SQLOutput;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _SQLData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.SQLData",
	nullptr,
	nullptr,
	nullptr,
	_SQLData_MethodInfo_
};

$Object* allocate$SQLData($Class* clazz) {
	return $of($alloc(SQLData));
}

$Class* SQLData::load$($String* name, bool initialize) {
	$loadClass(SQLData, name, initialize, &_SQLData_ClassInfo_, allocate$SQLData);
	return class$;
}

$Class* SQLData::class$ = nullptr;

	} // sql
} // java