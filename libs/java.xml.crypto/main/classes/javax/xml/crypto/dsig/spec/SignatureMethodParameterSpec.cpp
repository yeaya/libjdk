#include <javax/xml/crypto/dsig/spec/SignatureMethodParameterSpec.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$ClassInfo _SignatureMethodParameterSpec_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.spec.SignatureMethodParameterSpec",
	nullptr,
	"java.security.spec.AlgorithmParameterSpec"
};

$Object* allocate$SignatureMethodParameterSpec($Class* clazz) {
	return $of($alloc(SignatureMethodParameterSpec));
}

$Class* SignatureMethodParameterSpec::load$($String* name, bool initialize) {
	$loadClass(SignatureMethodParameterSpec, name, initialize, &_SignatureMethodParameterSpec_ClassInfo_, allocate$SignatureMethodParameterSpec);
	return class$;
}

$Class* SignatureMethodParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax