#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/math/BigInteger.h>
#include <java/security/KeyException.h>
#include <java/security/KeyFactory.h>
#include <java/security/PublicKey.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/spec/KeySpec.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyValue.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$DSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$EC.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$RSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$Unknown.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef XMLDSIG_11_XMLNS
#undef XMLNS

using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BigInteger = ::java::math::BigInteger;
using $KeyException = ::java::security::KeyException;
using $KeyFactory = ::java::security::KeyFactory;
using $PublicKey = ::java::security::PublicKey;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $KeyValue = ::javax::xml::crypto::dsig::keyinfo::KeyValue;
using $DOMKeyValue$DSA = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$DSA;
using $DOMKeyValue$EC = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$EC;
using $DOMKeyValue$RSA = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$RSA;
using $DOMKeyValue$Unknown = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$Unknown;
using $DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

bool DOMKeyValue::isFeatureSupported($String* feature) {
	 return this->$DOMStructure::isFeatureSupported(feature);
}

$Object* DOMKeyValue::clone() {
	 return this->$DOMStructure::clone();
}

$String* DOMKeyValue::toString() {
	 return this->$DOMStructure::toString();
}

void DOMKeyValue::finalize() {
	this->$DOMStructure::finalize();
}

$String* DOMKeyValue::XMLDSIG_11_XMLNS = nullptr;

void DOMKeyValue::init$($PublicKey* key) {
	$DOMStructure::init$();
	if (key == nullptr) {
		$throwNew($NullPointerException, "key cannot be null"_s);
	}
	$set(this, publicKey, key);
}

void DOMKeyValue::init$($Element* kvtElem) {
	$DOMStructure::init$();
	$set(this, publicKey, unmarshalKeyValue(kvtElem));
}

$KeyValue* DOMKeyValue::unmarshal($Element* kvElem) {
	$init(DOMKeyValue);
	$useLocalObjectStack();
	$var($Element, kvtElem, $DOMUtils::getFirstChildElement(kvElem));
	if (kvtElem == nullptr) {
		$throwNew($MarshalException, "KeyValue must contain at least one type"_s);
	}
	$var($String, namespace$, $nc(kvtElem)->getNamespaceURI());
	bool var$0 = "DSAKeyValue"_s->equals($(kvtElem->getLocalName()));
	$init($XMLSignature);
	if (var$0 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
		return $new($DOMKeyValue$DSA, kvtElem);
	} else {
		bool var$1 = "RSAKeyValue"_s->equals($(kvtElem->getLocalName()));
		if (var$1 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
			return $new($DOMKeyValue$RSA, kvtElem);
		} else {
			bool var$2 = "ECKeyValue"_s->equals($(kvtElem->getLocalName()));
			if (var$2 && DOMKeyValue::XMLDSIG_11_XMLNS->equals(namespace$)) {
				return $new($DOMKeyValue$EC, kvtElem);
			} else {
				return $new($DOMKeyValue$Unknown, kvtElem);
			}
		}
	}
}

$PublicKey* DOMKeyValue::getPublicKey() {
	if (this->publicKey == nullptr) {
		$throwNew($KeyException, "can\'t convert KeyValue to PublicKey"_s);
	} else {
		return this->publicKey;
	}
}

void DOMKeyValue::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$useLocalObjectStack();
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, kvElem, $DOMUtils::createElement(ownerDoc, "KeyValue"_s, $XMLSignature::XMLNS, dsPrefix));
	marshalPublicKey(kvElem, ownerDoc, dsPrefix, context);
	$nc(parent)->appendChild(kvElem);
}

$PublicKey* DOMKeyValue::generatePublicKey($KeyFactory* kf, $KeySpec* keyspec) {
	$init(DOMKeyValue);
	try {
		return $nc(kf)->generatePublic(keyspec);
	} catch ($InvalidKeySpecException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

bool DOMKeyValue::equals(Object$* obj) {
	$useLocalObjectStack();
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf($KeyValue, obj))) {
		return false;
	}
	try {
		$var($KeyValue, kv, $cast($KeyValue, obj));
		if (this->publicKey == nullptr) {
			if ($nc(kv)->getPublicKey() != nullptr) {
				return false;
			}
		} else if (!this->publicKey->equals($($nc(kv)->getPublicKey()))) {
			return false;
		}
	} catch ($KeyException& ke) {
		return false;
	}
	return true;
}

$BigInteger* DOMKeyValue::decode($Element* elem) {
	$init(DOMKeyValue);
	$useLocalObjectStack();
	try {
		$var($String, base64str, $$nc($nc(elem)->getFirstChild())->getNodeValue());
		return $new($BigInteger, 1, $($XMLUtils::decode(base64str)));
	} catch ($Exception& ex) {
		$throwNew($MarshalException, ex);
	}
	$shouldNotReachHere();
}

int32_t DOMKeyValue::hashCode() {
	int32_t result = 17;
	if (this->publicKey != nullptr) {
		result = 31 * result + this->publicKey->hashCode();
	}
	return result;
}

$BigInteger* DOMKeyValue::bigInt($String* s) {
	$init(DOMKeyValue);
	return $new($BigInteger, s, 16);
}

DOMKeyValue::DOMKeyValue() {
}

void DOMKeyValue::clinit$($Class* clazz) {
	$assignStatic(DOMKeyValue::XMLDSIG_11_XMLNS, "http://www.w3.org/2009/xmldsig11#"_s);
}

$Class* DOMKeyValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"XMLDSIG_11_XMLNS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMKeyValue, XMLDSIG_11_XMLNS)},
		{"publicKey", "Ljava/security/PublicKey;", "TK;", $PRIVATE | $FINAL, $field(DOMKeyValue, publicKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/security/PublicKey;)V", "(TK;)V", $PUBLIC, $method(DOMKeyValue, init$, void, $PublicKey*), "java.security.KeyException"},
		{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $method(DOMKeyValue, init$, void, $Element*), "javax.xml.crypto.MarshalException"},
		{"bigInt", "(Ljava/lang/String;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOMKeyValue, bigInt, $BigInteger*, $String*)},
		{"decode", "(Lorg/w3c/dom/Element;)Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMKeyValue, decode, $BigInteger*, $Element*), "javax.xml.crypto.MarshalException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DOMKeyValue, equals, bool, Object$*)},
		{"generatePublicKey", "(Ljava/security/KeyFactory;Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOMKeyValue, generatePublicKey, $PublicKey*, $KeyFactory*, $KeySpec*)},
		{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC, $virtualMethod(DOMKeyValue, getPublicKey, $PublicKey*), "java.security.KeyException"},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(DOMKeyValue, hashCode, int32_t)},
		{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
		{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, $virtualMethod(DOMKeyValue, marshal, void, $Node*, $String*, $DOMCryptoContext*), "javax.xml.crypto.MarshalException"},
		{"marshalPublicKey", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Document;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $ABSTRACT, $virtualMethod(DOMKeyValue, marshalPublicKey, void, $Node*, $Document*, $String*, $DOMCryptoContext*), "javax.xml.crypto.MarshalException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"unmarshal", "(Lorg/w3c/dom/Element;)Ljavax/xml/crypto/dsig/keyinfo/KeyValue;", nullptr, $STATIC, $staticMethod(DOMKeyValue, unmarshal, $KeyValue*, $Element*), "javax.xml.crypto.MarshalException"},
		{"unmarshalKeyValue", "(Lorg/w3c/dom/Element;)Ljava/security/PublicKey;", "(Lorg/w3c/dom/Element;)TK;", $ABSTRACT, $virtualMethod(DOMKeyValue, unmarshalKeyValue, $PublicKey*, $Element*), "javax.xml.crypto.MarshalException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$Unknown", "org.jcp.xml.dsig.internal.dom.DOMKeyValue", "Unknown", $STATIC | $FINAL},
		{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC", "org.jcp.xml.dsig.internal.dom.DOMKeyValue", "EC", $STATIC | $FINAL},
		{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$DSA", "org.jcp.xml.dsig.internal.dom.DOMKeyValue", "DSA", $STATIC | $FINAL},
		{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$RSA", "org.jcp.xml.dsig.internal.dom.DOMKeyValue", "RSA", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"org.jcp.xml.dsig.internal.dom.DOMKeyValue",
		"org.jcp.xml.dsig.internal.dom.DOMStructure",
		"javax.xml.crypto.dsig.keyinfo.KeyValue",
		fieldInfos$$,
		methodInfos$$,
		"<K::Ljava/security/PublicKey;>Lorg/jcp/xml/dsig/internal/dom/DOMStructure;Ljavax/xml/crypto/dsig/keyinfo/KeyValue;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"org.jcp.xml.dsig.internal.dom.DOMKeyValue$Unknown,org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC,org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC$Curve,org.jcp.xml.dsig.internal.dom.DOMKeyValue$DSA,org.jcp.xml.dsig.internal.dom.DOMKeyValue$RSA"
	};
	$loadClass(DOMKeyValue, name, initialize, &classInfo$$, DOMKeyValue::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMKeyValue));
	});
	return class$;
}

$Class* DOMKeyValue::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org