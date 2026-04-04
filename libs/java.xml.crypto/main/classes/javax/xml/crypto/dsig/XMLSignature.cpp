#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <java/util/List.h>
#include <javax/xml/crypto/KeySelectorResult.h>
#include <javax/xml/crypto/dsig/SignedInfo.h>
#include <javax/xml/crypto/dsig/XMLSignContext.h>
#include <javax/xml/crypto/dsig/XMLSignature$SignatureValue.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <jcpp.h>

#undef XMLNS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $KeySelectorResult = ::javax::xml::crypto::KeySelectorResult;
using $SignedInfo = ::javax::xml::crypto::dsig::SignedInfo;
using $XMLSignContext = ::javax::xml::crypto::dsig::XMLSignContext;
using $XMLSignature$SignatureValue = ::javax::xml::crypto::dsig::XMLSignature$SignatureValue;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;
using $KeyInfo = ::javax::xml::crypto::dsig::keyinfo::KeyInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$String* XMLSignature::XMLNS = nullptr;

void XMLSignature::clinit$($Class* clazz) {
	$assignStatic(XMLSignature::XMLNS, "http://www.w3.org/2000/09/xmldsig#"_s);
}

$Class* XMLSignature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"XMLNS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, XMLNS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSignature, getId, $String*)},
		{"getKeyInfo", "()Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSignature, getKeyInfo, $KeyInfo*)},
		{"getKeySelectorResult", "()Ljavax/xml/crypto/KeySelectorResult;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSignature, getKeySelectorResult, $KeySelectorResult*)},
		{"getObjects", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/XMLObject;>;", $PUBLIC | $ABSTRACT, $virtualMethod(XMLSignature, getObjects, $List*)},
		{"getSignatureValue", "()Ljavax/xml/crypto/dsig/XMLSignature$SignatureValue;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSignature, getSignatureValue, $XMLSignature$SignatureValue*)},
		{"getSignedInfo", "()Ljavax/xml/crypto/dsig/SignedInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSignature, getSignedInfo, $SignedInfo*)},
		{"sign", "(Ljavax/xml/crypto/dsig/XMLSignContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSignature, sign, void, $XMLSignContext*), "javax.xml.crypto.MarshalException,javax.xml.crypto.dsig.XMLSignatureException"},
		{"validate", "(Ljavax/xml/crypto/dsig/XMLValidateContext;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSignature, validate, bool, $XMLValidateContext*), "javax.xml.crypto.dsig.XMLSignatureException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.crypto.dsig.XMLSignature$SignatureValue", "javax.xml.crypto.dsig.XMLSignature", "SignatureValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.XMLSignature",
		nullptr,
		"javax.xml.crypto.XMLStructure",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.xml.crypto.dsig.XMLSignature$SignatureValue"
	};
	$loadClass(XMLSignature, name, initialize, &classInfo$$, XMLSignature::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XMLSignature);
	});
	return class$;
}

$Class* XMLSignature::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax