#include <javax/xml/crypto/dsig/spec/DigestMethodParameterSpec.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$ClassInfo _DigestMethodParameterSpec_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.spec.DigestMethodParameterSpec",
	nullptr,
	"java.security.spec.AlgorithmParameterSpec"
};

$Object* allocate$DigestMethodParameterSpec($Class* clazz) {
	return $of($alloc(DigestMethodParameterSpec));
}

$Class* DigestMethodParameterSpec::load$($String* name, bool initialize) {
	$loadClass(DigestMethodParameterSpec, name, initialize, &_DigestMethodParameterSpec_ClassInfo_, allocate$DigestMethodParameterSpec);
	return class$;
}

$Class* DigestMethodParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax