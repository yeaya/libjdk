#include <javax/xml/crypto/dsig/spec/DigestMethodParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$Class* DigestMethodParameterSpec::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.spec.DigestMethodParameterSpec",
		nullptr,
		"java.security.spec.AlgorithmParameterSpec"
	};
	$loadClass(DigestMethodParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DigestMethodParameterSpec);
	});
	return class$;
}

$Class* DigestMethodParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax