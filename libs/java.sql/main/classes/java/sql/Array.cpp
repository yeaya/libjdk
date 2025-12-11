#include <java/sql/Array.h>

#include <java/sql/ResultSet.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$MethodInfo _Array_MethodInfo_[] = {
	{"free", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getArray", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getArray", "(Ljava/util/Map;)Ljava/lang/Object;", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getArray", "(JI)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getArray", "(JILjava/util/Map;)Ljava/lang/Object;", "(JILjava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBaseType", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBaseTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getResultSet", "()Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getResultSet", "(Ljava/util/Map;)Ljava/sql/ResultSet;", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/sql/ResultSet;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getResultSet", "(JI)Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getResultSet", "(JILjava/util/Map;)Ljava/sql/ResultSet;", "(JILjava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/sql/ResultSet;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _Array_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.Array",
	nullptr,
	nullptr,
	nullptr,
	_Array_MethodInfo_
};

$Object* allocate$Array($Class* clazz) {
	return $of($alloc(Array));
}

$Class* Array::load$($String* name, bool initialize) {
	$loadClass(Array, name, initialize, &_Array_ClassInfo_, allocate$Array);
	return class$;
}

$Class* Array::class$ = nullptr;

	} // sql
} // java