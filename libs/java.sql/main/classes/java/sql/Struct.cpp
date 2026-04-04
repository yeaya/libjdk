#include <java/sql/Struct.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace java {
	namespace sql {

$Class* Struct::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAttributes", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Struct, getAttributes, $ObjectArray*), "java.sql.SQLException"},
		{"getAttributes", "(Ljava/util/Map;)[Ljava/lang/Object;", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)[Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(Struct, getAttributes, $ObjectArray*, $Map*), "java.sql.SQLException"},
		{"getSQLTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Struct, getSQLTypeName, $String*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.sql.Struct",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Struct, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Struct);
	});
	return class$;
}

$Class* Struct::class$ = nullptr;

	} // sql
} // java