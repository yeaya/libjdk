#include <javax/xml/crypto/URIReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace crypto {

$Class* URIReference::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(URIReference, getType, $String*)},
		{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(URIReference, getURI, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.URIReference",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(URIReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URIReference);
	});
	return class$;
}

$Class* URIReference::class$ = nullptr;

		} // crypto
	} // xml
} // javax