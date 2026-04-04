#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$DSA.h>
#include <java/math/BigInteger.h>
#include <java/security/KeyFactory.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PublicKey.h>
#include <java/security/interfaces/DSAParams.h>
#include <java/security/interfaces/DSAPublicKey.h>
#include <java/security/spec/DSAPublicKeySpec.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <org/jcp/xml/dsig/internal/dom/DOMCryptoBinary.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef XMLNS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;
using $KeyFactory = ::java::security::KeyFactory;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PublicKey = ::java::security::PublicKey;
using $DSAParams = ::java::security::interfaces::DSAParams;
using $DSAPublicKey = ::java::security::interfaces::DSAPublicKey;
using $DSAPublicKeySpec = ::java::security::spec::DSAPublicKeySpec;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $DOMCryptoBinary = ::org::jcp::xml::dsig::internal::dom::DOMCryptoBinary;
using $DOMKeyValue = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue;
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

void DOMKeyValue$DSA::init$($DSAPublicKey* key) {
	$useLocalObjectStack();
	$DOMKeyValue::init$(key);
	$var($DSAPublicKey, dkey, key);
	$var($DSAParams, params, $nc(dkey)->getParams());
	$set(this, p, $new($DOMCryptoBinary, $($nc(params)->getP())));
	$set(this, q, $new($DOMCryptoBinary, $(params->getQ())));
	$set(this, g, $new($DOMCryptoBinary, $(params->getG())));
	$set(this, y, $new($DOMCryptoBinary, $(dkey->getY())));
}

void DOMKeyValue$DSA::init$($Element* elem) {
	$DOMKeyValue::init$(elem);
}

void DOMKeyValue$DSA::marshalPublicKey($Node* parent, $Document* doc, $String* dsPrefix, $DOMCryptoContext* context) {
	$useLocalObjectStack();
	$init($XMLSignature);
	$var($Element, dsaElem, $DOMUtils::createElement(doc, "DSAKeyValue"_s, $XMLSignature::XMLNS, dsPrefix));
	$var($Element, pElem, $DOMUtils::createElement(doc, "P"_s, $XMLSignature::XMLNS, dsPrefix));
	$var($Element, qElem, $DOMUtils::createElement(doc, "Q"_s, $XMLSignature::XMLNS, dsPrefix));
	$var($Element, gElem, $DOMUtils::createElement(doc, "G"_s, $XMLSignature::XMLNS, dsPrefix));
	$var($Element, yElem, $DOMUtils::createElement(doc, "Y"_s, $XMLSignature::XMLNS, dsPrefix));
	$nc(this->p)->marshal(pElem, dsPrefix, context);
	$nc(this->q)->marshal(qElem, dsPrefix, context);
	$nc(this->g)->marshal(gElem, dsPrefix, context);
	$nc(this->y)->marshal(yElem, dsPrefix, context);
	$nc(dsaElem)->appendChild(pElem);
	dsaElem->appendChild(qElem);
	dsaElem->appendChild(gElem);
	dsaElem->appendChild(yElem);
	$nc(parent)->appendChild(dsaElem);
}

$PublicKey* DOMKeyValue$DSA::unmarshalKeyValue($Element* kvtElem) {
	$useLocalObjectStack();
	if (this->dsakf == nullptr) {
		try {
			$set(this, dsakf, $KeyFactory::getInstance("DSA"_s));
		} catch ($NoSuchAlgorithmException& e) {
			$throwNew($RuntimeException, $$str({"unable to create DSA KeyFactory: "_s, $(e->getMessage())}));
		}
	}
	$var($Element, curElem, $DOMUtils::getFirstChildElement(kvtElem));
	if (curElem == nullptr) {
		$throwNew($MarshalException, "KeyValue must contain at least one type"_s);
	}
	$var($BigInteger, p, nullptr);
	$var($BigInteger, q, nullptr);
	bool var$0 = "P"_s->equals($($nc(curElem)->getLocalName()));
	$init($XMLSignature);
	if (var$0 && $nc($XMLSignature::XMLNS)->equals($(curElem->getNamespaceURI()))) {
		$assign(p, decode(curElem));
		$assign(curElem, $DOMUtils::getNextSiblingElement(curElem, "Q"_s, $XMLSignature::XMLNS));
		$assign(q, decode(curElem));
		$assign(curElem, $DOMUtils::getNextSiblingElement(curElem));
	}
	$var($BigInteger, g, nullptr);
	bool var$1 = curElem != nullptr && "G"_s->equals($(curElem->getLocalName()));
	if (var$1 && $nc($XMLSignature::XMLNS)->equals($(curElem->getNamespaceURI()))) {
		$assign(g, decode(curElem));
		$assign(curElem, $DOMUtils::getNextSiblingElement(curElem, "Y"_s, $XMLSignature::XMLNS));
	}
	$var($BigInteger, y, nullptr);
	if (curElem != nullptr) {
		$assign(y, decode(curElem));
		$assign(curElem, $DOMUtils::getNextSiblingElement(curElem));
	}
	$var($DSAPublicKeySpec, spec, $new($DSAPublicKeySpec, y, p, q, g));
	return $cast($DSAPublicKey, $DOMKeyValue::generatePublicKey(this->dsakf, spec));
}

DOMKeyValue$DSA::DOMKeyValue$DSA() {
}

$Class* DOMKeyValue$DSA::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"p", "Lorg/jcp/xml/dsig/internal/dom/DOMCryptoBinary;", nullptr, $PRIVATE, $field(DOMKeyValue$DSA, p)},
		{"q", "Lorg/jcp/xml/dsig/internal/dom/DOMCryptoBinary;", nullptr, $PRIVATE, $field(DOMKeyValue$DSA, q)},
		{"g", "Lorg/jcp/xml/dsig/internal/dom/DOMCryptoBinary;", nullptr, $PRIVATE, $field(DOMKeyValue$DSA, g)},
		{"y", "Lorg/jcp/xml/dsig/internal/dom/DOMCryptoBinary;", nullptr, $PRIVATE, $field(DOMKeyValue$DSA, y)},
		{"dsakf", "Ljava/security/KeyFactory;", nullptr, $PRIVATE, $field(DOMKeyValue$DSA, dsakf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/interfaces/DSAPublicKey;)V", nullptr, 0, $method(DOMKeyValue$DSA, init$, void, $DSAPublicKey*), "java.security.KeyException"},
		{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(DOMKeyValue$DSA, init$, void, $Element*), "javax.xml.crypto.MarshalException"},
		{"marshalPublicKey", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Document;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, 0, $virtualMethod(DOMKeyValue$DSA, marshalPublicKey, void, $Node*, $Document*, $String*, $DOMCryptoContext*), "javax.xml.crypto.MarshalException"},
		{"unmarshalKeyValue", "(Lorg/w3c/dom/Element;)Ljava/security/interfaces/DSAPublicKey;", nullptr, 0, $virtualMethod(DOMKeyValue$DSA, unmarshalKeyValue, $PublicKey*, $Element*), "javax.xml.crypto.MarshalException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$DSA", "org.jcp.xml.dsig.internal.dom.DOMKeyValue", "DSA", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMKeyValue$DSA",
		"org.jcp.xml.dsig.internal.dom.DOMKeyValue",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lorg/jcp/xml/dsig/internal/dom/DOMKeyValue<Ljava/security/interfaces/DSAPublicKey;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.jcp.xml.dsig.internal.dom.DOMKeyValue"
	};
	$loadClass(DOMKeyValue$DSA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMKeyValue$DSA));
	});
	return class$;
}

$Class* DOMKeyValue$DSA::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org