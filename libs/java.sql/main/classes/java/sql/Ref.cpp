#include <java/sql/Ref.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace java {
	namespace sql {

$Class* Ref::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBaseTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Ref, getBaseTypeName, $String*), "java.sql.SQLException"},
		{"getObject", "(Ljava/util/Map;)Ljava/lang/Object;", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(Ref, getObject, $Object*, $Map*), "java.sql.SQLException"},
		{"getObject", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Ref, getObject, $Object*), "java.sql.SQLException"},
		{"setObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Ref, setObject, void, Object$*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.sql.Ref",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Ref, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Ref);
	});
	return class$;
}

$Class* Ref::class$ = nullptr;

	} // sql
} // java