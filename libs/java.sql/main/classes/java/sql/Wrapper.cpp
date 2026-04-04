#include <java/sql/Wrapper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$Class* Wrapper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isWrapperFor", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Wrapper, isWrapperFor, bool, $Class*), "java.sql.SQLException"},
		{"unwrap", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(Wrapper, unwrap, $Object*, $Class*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.sql.Wrapper",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Wrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Wrapper);
	});
	return class$;
}

$Class* Wrapper::class$ = nullptr;

	} // sql
} // java