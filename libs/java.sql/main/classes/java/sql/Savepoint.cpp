#include <java/sql/Savepoint.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$MethodInfo _Savepoint_MethodInfo_[] = {
	{"getSavepointId", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getSavepointName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _Savepoint_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.Savepoint",
	nullptr,
	nullptr,
	nullptr,
	_Savepoint_MethodInfo_
};

$Object* allocate$Savepoint($Class* clazz) {
	return $of($alloc(Savepoint));
}

$Class* Savepoint::load$($String* name, bool initialize) {
	$loadClass(Savepoint, name, initialize, &_Savepoint_ClassInfo_, allocate$Savepoint);
	return class$;
}

$Class* Savepoint::class$ = nullptr;

	} // sql
} // java