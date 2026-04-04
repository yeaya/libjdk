#include <javax/script/Bindings.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace script {

$Object* Bindings::put(Object$* name, Object$* value) {
	return this->put($cast($String, name), value);
}

$Class* Bindings::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"put", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Bindings, put, $Object*, $String*, Object$*)},
		{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Bindings, put, $Object*, Object$*, Object$*)},
		{"putAll", "(Ljava/util/Map;)V", nullptr, $PUBLIC | $ABSTRACT},
		{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.script.Bindings",
		nullptr,
		"java.util.Map",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
	};
	$loadClass(Bindings, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bindings);
	});
	return class$;
}

$Class* Bindings::class$ = nullptr;

	} // script
} // javax