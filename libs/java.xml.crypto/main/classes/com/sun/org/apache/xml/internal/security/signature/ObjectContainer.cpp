#include <com/sun/org/apache/xml/internal/security/signature/ObjectContainer.h>

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef _ATT_ENCODING
#undef _ATT_ID
#undef _ATT_MIMETYPE
#undef _TAG_OBJECT

using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

$MethodInfo _ObjectContainer_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(ObjectContainer, init$, void, $Document*)},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ObjectContainer, init$, void, $Element*, $String*), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ObjectContainer, appendChild, $Node*, $Node*)},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectContainer, getBaseLocalName, $String*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectContainer, getEncoding, $String*)},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectContainer, getId, $String*)},
	{"getMimeType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ObjectContainer, getMimeType, $String*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ObjectContainer, setEncoding, void, $String*)},
	{"setId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ObjectContainer, setId, void, $String*)},
	{"setMimeType", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ObjectContainer, setMimeType, void, $String*)},
	{}
};

$ClassInfo _ObjectContainer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.ObjectContainer",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	nullptr,
	nullptr,
	_ObjectContainer_MethodInfo_
};

$Object* allocate$ObjectContainer($Class* clazz) {
	return $of($alloc(ObjectContainer));
}

void ObjectContainer::init$($Document* doc) {
	$SignatureElementProxy::init$(doc);
}

void ObjectContainer::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

void ObjectContainer::setId($String* Id) {
	if (Id != nullptr) {
		$init($Constants);
		setLocalIdAttribute($Constants::_ATT_ID, Id);
	}
}

$String* ObjectContainer::getId() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ID);
}

void ObjectContainer::setMimeType($String* MimeType) {
	if (MimeType != nullptr) {
		$init($Constants);
		setLocalAttribute($Constants::_ATT_MIMETYPE, MimeType);
	}
}

$String* ObjectContainer::getMimeType() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_MIMETYPE);
}

void ObjectContainer::setEncoding($String* Encoding) {
	if (Encoding != nullptr) {
		$init($Constants);
		setLocalAttribute($Constants::_ATT_ENCODING, Encoding);
	}
}

$String* ObjectContainer::getEncoding() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ENCODING);
}

$Node* ObjectContainer::appendChild($Node* node) {
	appendSelf(node);
	return node;
}

$String* ObjectContainer::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_OBJECT;
}

ObjectContainer::ObjectContainer() {
}

$Class* ObjectContainer::load$($String* name, bool initialize) {
	$loadClass(ObjectContainer, name, initialize, &_ObjectContainer_ClassInfo_, allocate$ObjectContainer);
	return class$;
}

$Class* ObjectContainer::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com