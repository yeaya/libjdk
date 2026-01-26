#include <java/sql/Struct.h>

#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace java {
	namespace sql {

$MethodInfo _Struct_MethodInfo_[] = {
	{"getAttributes", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Struct, getAttributes, $ObjectArray*), "java.sql.SQLException"},
	{"getAttributes", "(Ljava/util/Map;)[Ljava/lang/Object;", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)[Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(Struct, getAttributes, $ObjectArray*, $Map*), "java.sql.SQLException"},
	{"getSQLTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Struct, getSQLTypeName, $String*), "java.sql.SQLException"},
	{}
};

$ClassInfo _Struct_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.Struct",
	nullptr,
	nullptr,
	nullptr,
	_Struct_MethodInfo_
};

$Object* allocate$Struct($Class* clazz) {
	return $of($alloc(Struct));
}

$Class* Struct::load$($String* name, bool initialize) {
	$loadClass(Struct, name, initialize, &_Struct_ClassInfo_, allocate$Struct);
	return class$;
}

$Class* Struct::class$ = nullptr;

	} // sql
} // java