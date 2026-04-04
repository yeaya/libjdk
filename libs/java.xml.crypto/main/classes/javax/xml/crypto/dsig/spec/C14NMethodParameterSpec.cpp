#include <javax/xml/crypto/dsig/spec/C14NMethodParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$Class* C14NMethodParameterSpec::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.spec.C14NMethodParameterSpec",
		nullptr,
		"javax.xml.crypto.dsig.spec.TransformParameterSpec"
	};
	$loadClass(C14NMethodParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C14NMethodParameterSpec);
	});
	return class$;
}

$Class* C14NMethodParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax