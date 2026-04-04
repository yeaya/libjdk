#include <javax/xml/crypto/AlgorithmMethod.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace javax {
	namespace xml {
		namespace crypto {

$Class* AlgorithmMethod::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AlgorithmMethod, getAlgorithm, $String*)},
		{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AlgorithmMethod, getParameterSpec, $AlgorithmParameterSpec*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.AlgorithmMethod",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AlgorithmMethod, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlgorithmMethod);
	});
	return class$;
}

$Class* AlgorithmMethod::class$ = nullptr;

		} // crypto
	} // xml
} // javax