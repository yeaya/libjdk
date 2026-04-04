#include <javax/xml/transform/Source.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace javax {
	namespace xml {
		namespace transform {

bool Source::isEmpty() {
	$throwNew($UnsupportedOperationException, "The isEmpty method is not supported."_s);
	$shouldNotReachHere();
}

$Class* Source::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Source, getSystemId, $String*)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(Source, isEmpty, bool)},
		{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Source, setSystemId, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.transform.Source",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Source, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Source);
	});
	return class$;
}

$Class* Source::class$ = nullptr;

		} // transform
	} // xml
} // javax