#include <javax/script/Bindings.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace javax {
	namespace script {

$MethodInfo _Bindings_MethodInfo_[] = {
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"putAll", "(Ljava/util/Map;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Bindings_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.script.Bindings",
	nullptr,
	"java.util.Map",
	nullptr,
	_Bindings_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
};

$Object* allocate$Bindings($Class* clazz) {
	return $of($alloc(Bindings));
}

$Object* Bindings::put(Object$* name, Object$* value) {
	return $of(this->put($cast($String, name), value));
}

$Class* Bindings::load$($String* name, bool initialize) {
	$loadClass(Bindings, name, initialize, &_Bindings_ClassInfo_, allocate$Bindings);
	return class$;
}

$Class* Bindings::class$ = nullptr;

	} // script
} // javax