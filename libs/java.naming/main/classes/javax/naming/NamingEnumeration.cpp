#include <javax/naming/NamingEnumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {

$Class* NamingEnumeration::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamingEnumeration, close, void), "javax.naming.NamingException"},
		{"hasMore", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamingEnumeration, hasMore, bool), "javax.naming.NamingException"},
		{"next", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(NamingEnumeration, next, $Object*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.NamingEnumeration",
		nullptr,
		"java.util.Enumeration",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Enumeration<TT;>;"
	};
	$loadClass(NamingEnumeration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamingEnumeration);
	});
	return class$;
}

$Class* NamingEnumeration::class$ = nullptr;

	} // naming
} // javax