#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$Class* TransformParameterSpec::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.spec.TransformParameterSpec",
		nullptr,
		"java.security.spec.AlgorithmParameterSpec"
	};
	$loadClass(TransformParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransformParameterSpec);
	});
	return class$;
}

$Class* TransformParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax