#include <javax/xml/crypto/dsig/XMLSignature$SignatureValue.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$Class* XMLSignature$SignatureValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSignature$SignatureValue, getId, $String*)},
		{"getValue", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSignature$SignatureValue, getValue, $bytes*)},
		{"validate", "(Ljavax/xml/crypto/dsig/XMLValidateContext;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSignature$SignatureValue, validate, bool, $XMLValidateContext*), "javax.xml.crypto.dsig.XMLSignatureException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.crypto.dsig.XMLSignature$SignatureValue", "javax.xml.crypto.dsig.XMLSignature", "SignatureValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.XMLSignature$SignatureValue",
		nullptr,
		"javax.xml.crypto.XMLStructure",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.xml.crypto.dsig.XMLSignature"
	};
	$loadClass(XMLSignature$SignatureValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLSignature$SignatureValue);
	});
	return class$;
}

$Class* XMLSignature$SignatureValue::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax