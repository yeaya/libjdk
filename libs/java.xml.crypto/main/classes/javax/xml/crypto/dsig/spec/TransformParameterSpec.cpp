#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$ClassInfo _TransformParameterSpec_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.spec.TransformParameterSpec",
	nullptr,
	"java.security.spec.AlgorithmParameterSpec"
};

$Object* allocate$TransformParameterSpec($Class* clazz) {
	return $of($alloc(TransformParameterSpec));
}

$Class* TransformParameterSpec::load$($String* name, bool initialize) {
	$loadClass(TransformParameterSpec, name, initialize, &_TransformParameterSpec_ClassInfo_, allocate$TransformParameterSpec);
	return class$;
}

$Class* TransformParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax