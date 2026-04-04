#include <org/jcp/xml/dsig/internal/dom/DOMKeyInfoFactory.h>
#include <java/lang/ClassCastException.h>
#include <java/math/BigInteger.h>
#include <java/security/KeyException.h>
#include <java/security/Provider.h>
#include <java/security/PublicKey.h>
#include <java/security/interfaces/DSAPublicKey.h>
#include <java/security/interfaces/ECPublicKey.h>
#include <java/security/interfaces/RSAPublicKey.h>
#include <java/util/List.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/URIDereferencer.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfoFactory.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyName.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyValue.h>
#include <javax/xml/crypto/dsig/keyinfo/PGPData.h>
#include <javax/xml/crypto/dsig/keyinfo/RetrievalMethod.h>
#include <javax/xml/crypto/dsig/keyinfo/X509Data.h>
#include <javax/xml/crypto/dsig/keyinfo/X509IssuerSerial.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyInfo.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyInfoFactory$UnmarshalContext.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyName.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$DSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$EC.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$RSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMPGPData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMRetrievalMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMURIDereferencer.h>
#include <org/jcp/xml/dsig/internal/dom/DOMX509Data.h>
#include <org/jcp/xml/dsig/internal/dom/DOMX509IssuerSerial.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef INSTANCE
#undef XMLNS

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BigInteger = ::java::math::BigInteger;
using $KeyException = ::java::security::KeyException;
using $PublicKey = ::java::security::PublicKey;
using $DSAPublicKey = ::java::security::interfaces::DSAPublicKey;
using $ECPublicKey = ::java::security::interfaces::ECPublicKey;
using $RSAPublicKey = ::java::security::interfaces::RSAPublicKey;
using $List = ::java::util::List;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $URIDereferencer = ::javax::xml::crypto::URIDereferencer;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $KeyInfo = ::javax::xml::crypto::dsig::keyinfo::KeyInfo;
using $KeyInfoFactory = ::javax::xml::crypto::dsig::keyinfo::KeyInfoFactory;
using $KeyName = ::javax::xml::crypto::dsig::keyinfo::KeyName;
using $KeyValue = ::javax::xml::crypto::dsig::keyinfo::KeyValue;
using $PGPData = ::javax::xml::crypto::dsig::keyinfo::PGPData;
using $RetrievalMethod = ::javax::xml::crypto::dsig::keyinfo::RetrievalMethod;
using $X509Data = ::javax::xml::crypto::dsig::keyinfo::X509Data;
using $X509IssuerSerial = ::javax::xml::crypto::dsig::keyinfo::X509IssuerSerial;
using $DOMKeyInfo = ::org::jcp::xml::dsig::internal::dom::DOMKeyInfo;
using $DOMKeyInfoFactory$UnmarshalContext = ::org::jcp::xml::dsig::internal::dom::DOMKeyInfoFactory$UnmarshalContext;
using $DOMKeyName = ::org::jcp::xml::dsig::internal::dom::DOMKeyName;
using $DOMKeyValue$DSA = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$DSA;
using $DOMKeyValue$EC = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$EC;
using $DOMKeyValue$RSA = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$RSA;
using $DOMPGPData = ::org::jcp::xml::dsig::internal::dom::DOMPGPData;
using $DOMRetrievalMethod = ::org::jcp::xml::dsig::internal::dom::DOMRetrievalMethod;
using $DOMURIDereferencer = ::org::jcp::xml::dsig::internal::dom::DOMURIDereferencer;
using $DOMX509Data = ::org::jcp::xml::dsig::internal::dom::DOMX509Data;
using $DOMX509IssuerSerial = ::org::jcp::xml::dsig::internal::dom::DOMX509IssuerSerial;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

void DOMKeyInfoFactory::init$() {
	$KeyInfoFactory::init$();
}

$KeyInfo* DOMKeyInfoFactory::newKeyInfo($List* content) {
	return newKeyInfo(content, nullptr);
}

$KeyInfo* DOMKeyInfoFactory::newKeyInfo($List* content, $String* id) {
	return $new($DOMKeyInfo, content, id);
}

$KeyName* DOMKeyInfoFactory::newKeyName($String* name) {
	return $new($DOMKeyName, name);
}

$KeyValue* DOMKeyInfoFactory::newKeyValue($PublicKey* key) {
	$useLocalObjectStack();
	$var($String, algorithm, $nc(key)->getAlgorithm());
	if ("DSA"_s->equals(algorithm)) {
		return $new($DOMKeyValue$DSA, $cast($DSAPublicKey, key));
	} else if ("RSA"_s->equals(algorithm)) {
		return $new($DOMKeyValue$RSA, $cast($RSAPublicKey, key));
	} else if ("EC"_s->equals(algorithm)) {
		return $new($DOMKeyValue$EC, $cast($ECPublicKey, key));
	} else {
		$throwNew($KeyException, $$str({"unsupported key algorithm: "_s, algorithm}));
	}
}

$PGPData* DOMKeyInfoFactory::newPGPData($bytes* keyId) {
	return newPGPData(keyId, nullptr, nullptr);
}

$PGPData* DOMKeyInfoFactory::newPGPData($bytes* keyId, $bytes* keyPacket, $List* other) {
	return $new($DOMPGPData, keyId, keyPacket, other);
}

$PGPData* DOMKeyInfoFactory::newPGPData($bytes* keyPacket, $List* other) {
	return $new($DOMPGPData, keyPacket, other);
}

$RetrievalMethod* DOMKeyInfoFactory::newRetrievalMethod($String* uri) {
	return newRetrievalMethod(uri, nullptr, nullptr);
}

$RetrievalMethod* DOMKeyInfoFactory::newRetrievalMethod($String* uri, $String* type, $List* transforms) {
	if (uri == nullptr) {
		$throwNew($NullPointerException, "uri must not be null"_s);
	}
	return $new($DOMRetrievalMethod, uri, type, transforms);
}

$X509Data* DOMKeyInfoFactory::newX509Data($List* content) {
	return $new($DOMX509Data, content);
}

$X509IssuerSerial* DOMKeyInfoFactory::newX509IssuerSerial($String* issuerName, $BigInteger* serialNumber) {
	return $new($DOMX509IssuerSerial, issuerName, serialNumber);
}

bool DOMKeyInfoFactory::isFeatureSupported($String* feature) {
	if (feature == nullptr) {
		$throwNew($NullPointerException);
	} else {
		return false;
	}
}

$URIDereferencer* DOMKeyInfoFactory::getURIDereferencer() {
	$init($DOMURIDereferencer);
	return $DOMURIDereferencer::INSTANCE;
}

$KeyInfo* DOMKeyInfoFactory::unmarshalKeyInfo($XMLStructure* xmlStructure) {
	$useLocalObjectStack();
	if (xmlStructure == nullptr) {
		$throwNew($NullPointerException, "xmlStructure cannot be null"_s);
	}
	if (!($instanceOf($DOMStructure, xmlStructure))) {
		$throwNew($ClassCastException, "xmlStructure must be of type DOMStructure"_s);
	}
	$var($Node, node, $nc($cast($DOMStructure, xmlStructure))->getNode());
	$nc(node)->normalize();
	$var($Element, element, nullptr);
	if (node->getNodeType() == $Node::DOCUMENT_NODE) {
		$assign(element, $cast($Document, node)->getDocumentElement());
	} else if (node->getNodeType() == $Node::ELEMENT_NODE) {
		$assign(element, $cast($Element, node));
	} else {
		$throwNew($MarshalException, "xmlStructure does not contain a proper Node"_s);
	}
	$var($String, tag, $nc(element)->getLocalName());
	$var($String, namespace$, element->getNamespaceURI());
	if (tag == nullptr || namespace$ == nullptr) {
		$throwNew($MarshalException, "Document implementation must support DOM Level 2 and be namespace aware"_s);
	}
	bool var$0 = "KeyInfo"_s->equals(tag);
	$init($XMLSignature);
	if (var$0 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
		try {
			$var($XMLCryptoContext, var$1, $new($DOMKeyInfoFactory$UnmarshalContext));
			return $new($DOMKeyInfo, element, var$1, $(getProvider()));
		} catch ($MarshalException& me) {
			$throw(me);
		} catch ($Exception& e) {
			$throwNew($MarshalException, e);
		}
	} else {
		$throwNew($MarshalException, $$str({"Invalid KeyInfo tag: "_s, namespace$, ":"_s, tag}));
	}
	$shouldNotReachHere();
}

DOMKeyInfoFactory::DOMKeyInfoFactory() {
}

$Class* DOMKeyInfoFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DOMKeyInfoFactory, init$, void)},
		{"getURIDereferencer", "()Ljavax/xml/crypto/URIDereferencer;", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, getURIDereferencer, $URIDereferencer*)},
		{"isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, isFeatureSupported, bool, $String*)},
		{"newKeyInfo", "(Ljava/util/List;)Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, newKeyInfo, $KeyInfo*, $List*)},
		{"newKeyInfo", "(Ljava/util/List;Ljava/lang/String;)Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, newKeyInfo, $KeyInfo*, $List*, $String*)},
		{"newKeyName", "(Ljava/lang/String;)Ljavax/xml/crypto/dsig/keyinfo/KeyName;", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, newKeyName, $KeyName*, $String*)},
		{"newKeyValue", "(Ljava/security/PublicKey;)Ljavax/xml/crypto/dsig/keyinfo/KeyValue;", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, newKeyValue, $KeyValue*, $PublicKey*), "java.security.KeyException"},
		{"newPGPData", "([B)Ljavax/xml/crypto/dsig/keyinfo/PGPData;", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, newPGPData, $PGPData*, $bytes*)},
		{"newPGPData", "([B[BLjava/util/List;)Ljavax/xml/crypto/dsig/keyinfo/PGPData;", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, newPGPData, $PGPData*, $bytes*, $bytes*, $List*)},
		{"newPGPData", "([BLjava/util/List;)Ljavax/xml/crypto/dsig/keyinfo/PGPData;", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, newPGPData, $PGPData*, $bytes*, $List*)},
		{"newRetrievalMethod", "(Ljava/lang/String;)Ljavax/xml/crypto/dsig/keyinfo/RetrievalMethod;", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, newRetrievalMethod, $RetrievalMethod*, $String*)},
		{"newRetrievalMethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)Ljavax/xml/crypto/dsig/keyinfo/RetrievalMethod;", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, newRetrievalMethod, $RetrievalMethod*, $String*, $String*, $List*)},
		{"newX509Data", "(Ljava/util/List;)Ljavax/xml/crypto/dsig/keyinfo/X509Data;", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, newX509Data, $X509Data*, $List*)},
		{"newX509IssuerSerial", "(Ljava/lang/String;Ljava/math/BigInteger;)Ljavax/xml/crypto/dsig/keyinfo/X509IssuerSerial;", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, newX509IssuerSerial, $X509IssuerSerial*, $String*, $BigInteger*)},
		{"unmarshalKeyInfo", "(Ljavax/xml/crypto/XMLStructure;)Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;", nullptr, $PUBLIC, $virtualMethod(DOMKeyInfoFactory, unmarshalKeyInfo, $KeyInfo*, $XMLStructure*), "javax.xml.crypto.MarshalException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory$UnmarshalContext", "org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory", "UnmarshalContext", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory",
		"javax.xml.crypto.dsig.keyinfo.KeyInfoFactory",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory$UnmarshalContext"
	};
	$loadClass(DOMKeyInfoFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMKeyInfoFactory);
	});
	return class$;
}

$Class* DOMKeyInfoFactory::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org