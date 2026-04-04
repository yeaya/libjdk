#include <javax/xml/crypto/dsig/spec/XSLTTransformParameterSpec.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

void XSLTTransformParameterSpec::init$($XMLStructure* stylesheet) {
	if (stylesheet == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, stylesheet, stylesheet);
}

$XMLStructure* XSLTTransformParameterSpec::getStylesheet() {
	return this->stylesheet;
}

XSLTTransformParameterSpec::XSLTTransformParameterSpec() {
}

$Class* XSLTTransformParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stylesheet", "Ljavax/xml/crypto/XMLStructure;", nullptr, $PRIVATE, $field(XSLTTransformParameterSpec, stylesheet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/xml/crypto/XMLStructure;)V", nullptr, $PUBLIC, $method(XSLTTransformParameterSpec, init$, void, $XMLStructure*)},
		{"getStylesheet", "()Ljavax/xml/crypto/XMLStructure;", nullptr, $PUBLIC, $method(XSLTTransformParameterSpec, getStylesheet, $XMLStructure*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.xml.crypto.dsig.spec.XSLTTransformParameterSpec",
		"java.lang.Object",
		"javax.xml.crypto.dsig.spec.TransformParameterSpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XSLTTransformParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSLTTransformParameterSpec);
	});
	return class$;
}

$Class* XSLTTransformParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax