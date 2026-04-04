#include <javax/xml/crypto/dsig/spec/HMACParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

void HMACParameterSpec::init$(int32_t outputLength) {
	this->outputLength = outputLength;
}

int32_t HMACParameterSpec::getOutputLength() {
	return this->outputLength;
}

HMACParameterSpec::HMACParameterSpec() {
}

$Class* HMACParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"outputLength", "I", nullptr, $PRIVATE, $field(HMACParameterSpec, outputLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(HMACParameterSpec, init$, void, int32_t)},
		{"getOutputLength", "()I", nullptr, $PUBLIC, $method(HMACParameterSpec, getOutputLength, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.xml.crypto.dsig.spec.HMACParameterSpec",
		"java.lang.Object",
		"javax.xml.crypto.dsig.spec.SignatureMethodParameterSpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HMACParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HMACParameterSpec);
	});
	return class$;
}

$Class* HMACParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax