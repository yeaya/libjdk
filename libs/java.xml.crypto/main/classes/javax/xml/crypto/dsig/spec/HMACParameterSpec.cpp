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

$FieldInfo _HMACParameterSpec_FieldInfo_[] = {
	{"outputLength", "I", nullptr, $PRIVATE, $field(HMACParameterSpec, outputLength)},
	{}
};

$MethodInfo _HMACParameterSpec_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(HMACParameterSpec, init$, void, int32_t)},
	{"getOutputLength", "()I", nullptr, $PUBLIC, $method(HMACParameterSpec, getOutputLength, int32_t)},
	{}
};

$ClassInfo _HMACParameterSpec_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.xml.crypto.dsig.spec.HMACParameterSpec",
	"java.lang.Object",
	"javax.xml.crypto.dsig.spec.SignatureMethodParameterSpec",
	_HMACParameterSpec_FieldInfo_,
	_HMACParameterSpec_MethodInfo_
};

$Object* allocate$HMACParameterSpec($Class* clazz) {
	return $of($alloc(HMACParameterSpec));
}

void HMACParameterSpec::init$(int32_t outputLength) {
	this->outputLength = outputLength;
}

int32_t HMACParameterSpec::getOutputLength() {
	return this->outputLength;
}

HMACParameterSpec::HMACParameterSpec() {
}

$Class* HMACParameterSpec::load$($String* name, bool initialize) {
	$loadClass(HMACParameterSpec, name, initialize, &_HMACParameterSpec_ClassInfo_, allocate$HMACParameterSpec);
	return class$;
}

$Class* HMACParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax