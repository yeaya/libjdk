#include <javax/xml/crypto/XMLStructure.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace crypto {

$Class* XMLStructure::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStructure, isFeatureSupported, bool, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.XMLStructure",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLStructure, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLStructure);
	});
	return class$;
}

$Class* XMLStructure::class$ = nullptr;

		} // crypto
	} // xml
} // javax