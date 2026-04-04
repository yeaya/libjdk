#include <javax/xml/crypto/dsig/spec/SignatureMethodParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$Class* SignatureMethodParameterSpec::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.spec.SignatureMethodParameterSpec",
		nullptr,
		"java.security.spec.AlgorithmParameterSpec"
	};
	$loadClass(SignatureMethodParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureMethodParameterSpec);
	});
	return class$;
}

$Class* SignatureMethodParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax