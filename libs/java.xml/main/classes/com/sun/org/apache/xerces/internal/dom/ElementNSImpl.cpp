#include <com/sun/org/apache/xerces/internal/dom/ElementNSImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/AttributeMap.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef DOM_DOMAIN
#undef INVALID_CHARACTER_ERR
#undef NAMESPACE_ERR
#undef NO_MODIFICATION_ALLOWED_ERR
#undef XMLNS_URI
#undef XML_URI

using $AttributeMap = ::com::sun::org::apache::xerces::internal::dom::AttributeMap;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $DOMException = ::org::w3c::dom::DOMException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _ElementNSImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ElementNSImpl, serialVersionUID)},
	{"xmlURI", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ElementNSImpl, xmlURI)},
	{"namespaceURI", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ElementNSImpl, namespaceURI)},
	{"localName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ElementNSImpl, localName)},
	{"type", "Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $TRANSIENT, $field(ElementNSImpl, type)},
	{}
};

$MethodInfo _ElementNSImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(ElementNSImpl, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(ElementNSImpl, init$, void, $CoreDocumentImpl*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(ElementNSImpl, init$, void, $CoreDocumentImpl*, $String*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(ElementNSImpl, init$, void, $CoreDocumentImpl*, $String*)},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementNSImpl, getLocalName, $String*)},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementNSImpl, getNamespaceURI, $String*)},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementNSImpl, getPrefix, $String*)},
	{"getTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementNSImpl, getTypeName, $String*)},
	{"getTypeNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementNSImpl, getTypeNamespace, $String*)},
	{"getXMLBaseAttribute", "()Lorg/w3c/dom/Attr;", nullptr, $PROTECTED, $virtualMethod(ElementNSImpl, getXMLBaseAttribute, $Attr*)},
	{"isDerivedFrom", "(Ljava/lang/String;Ljava/lang/String;I)Z", nullptr, $PUBLIC, $virtualMethod(ElementNSImpl, isDerivedFrom, bool, $String*, $String*, int32_t)},
	{"rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(ElementNSImpl, rename, void, $String*, $String*)},
	{"setName", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(ElementNSImpl, setName, void, $String*, $String*)},
	{"setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ElementNSImpl, setPrefix, void, $String*), "org.w3c.dom.DOMException"},
	{"setType", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;)V", nullptr, $PUBLIC, $virtualMethod(ElementNSImpl, setType, void, $XSTypeDefinition*)},
	{}
};

$ClassInfo _ElementNSImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.ElementNSImpl",
	"com.sun.org.apache.xerces.internal.dom.ElementImpl",
	nullptr,
	_ElementNSImpl_FieldInfo_,
	_ElementNSImpl_MethodInfo_
};

$Object* allocate$ElementNSImpl($Class* clazz) {
	return $of($alloc(ElementNSImpl));
}

$String* ElementNSImpl::xmlURI = nullptr;

void ElementNSImpl::init$() {
	$ElementImpl::init$();
}

void ElementNSImpl::init$($CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName) {
	$ElementImpl::init$(ownerDocument, qualifiedName);
	setName(namespaceURI, qualifiedName);
}

void ElementNSImpl::setName($String* namespaceURI, $String* qname) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, nullptr);
	$set(this, namespaceURI, namespaceURI);
	if (namespaceURI != nullptr) {
		$set(this, namespaceURI, (namespaceURI->length() == 0) ? ($String*)nullptr : namespaceURI);
	}
	int32_t colon1 = 0;
	int32_t colon2 = 0;
	if (qname == nullptr) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
	} else {
		colon1 = $nc(qname)->indexOf((int32_t)u':');
		colon2 = qname->lastIndexOf((int32_t)u':');
	}
	$nc(this->ownerDocument$)->checkNamespaceWF(qname, colon1, colon2);
	if (colon1 < 0) {
		$set(this, localName, qname);
		if ($nc(this->ownerDocument$)->errorChecking) {
			$nc(this->ownerDocument$)->checkQName(nullptr, this->localName);
			bool var$1 = $nc(qname)->equals("xmlns"_s);
			$init($NamespaceContext);
			bool var$0 = var$1 && (namespaceURI == nullptr || !$nc(namespaceURI)->equals($NamespaceContext::XMLNS_URI));
			if (!var$0) {
				bool var$2 = namespaceURI != nullptr && namespaceURI->equals($NamespaceContext::XMLNS_URI);
				var$0 = (var$2 && !$nc(qname)->equals("xmlns"_s));
			}
			if (var$0) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
			}
		}
	} else {
		$assign(prefix, $nc(qname)->substring(0, colon1));
		$set(this, localName, qname->substring(colon2 + 1));
		if ($nc(this->ownerDocument$)->errorChecking) {
			bool var$3 = namespaceURI == nullptr;
			if (!var$3) {
				bool var$4 = prefix->equals("xml"_s);
				$init($NamespaceContext);
				var$3 = (var$4 && !$nc(namespaceURI)->equals($NamespaceContext::XML_URI));
			}
			if (var$3) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
			}
			$nc(this->ownerDocument$)->checkQName(prefix, this->localName);
			$nc(this->ownerDocument$)->checkDOMNSErr(prefix, namespaceURI);
		}
	}
}

void ElementNSImpl::init$($CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName, $String* localName) {
	$ElementImpl::init$(ownerDocument, qualifiedName);
	$set(this, localName, localName);
	$set(this, namespaceURI, namespaceURI);
}

void ElementNSImpl::init$($CoreDocumentImpl* ownerDocument, $String* value) {
	$ElementImpl::init$(ownerDocument, value);
}

void ElementNSImpl::rename($String* namespaceURI, $String* qualifiedName) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, name, qualifiedName);
	setName(namespaceURI, qualifiedName);
	reconcileDefaultAttributes();
}

$String* ElementNSImpl::getNamespaceURI() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->namespaceURI;
}

$String* ElementNSImpl::getPrefix() {
	if (needsSyncData()) {
		synchronizeData();
	}
	int32_t index = $nc(this->name)->indexOf((int32_t)u':');
	return index < 0 ? ($String*)nullptr : $nc(this->name)->substring(0, index);
}

void ElementNSImpl::setPrefix($String* prefix) {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	if ($nc(this->ownerDocument$)->errorChecking) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (prefix != nullptr && prefix->length() != 0) {
			if (!$CoreDocumentImpl::isXMLName(prefix, $nc(this->ownerDocument$)->isXML11Version())) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
			}
			if (this->namespaceURI == nullptr || prefix->indexOf((int32_t)u':') >= 0) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
			} else if (prefix->equals("xml"_s)) {
				if (!$nc(this->namespaceURI)->equals(ElementNSImpl::xmlURI)) {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
					$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
				}
			}
		}
	}
	if (prefix != nullptr && prefix->length() != 0) {
		$set(this, name, $str({prefix, ":"_s, this->localName}));
	} else {
		$set(this, name, this->localName);
	}
}

$String* ElementNSImpl::getLocalName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->localName;
}

$Attr* ElementNSImpl::getXMLBaseAttribute() {
	return $cast($Attr, $nc(this->attributes)->getNamedItemNS("http://www.w3.org/XML/1998/namespace"_s, "base"_s));
}

$String* ElementNSImpl::getTypeName() {
	if (this->type != nullptr) {
		if ($instanceOf($XSSimpleTypeDecl, this->type)) {
			return $nc(($cast($XSSimpleTypeDecl, this->type)))->getTypeName();
		} else if ($instanceOf($XSComplexTypeDecl, this->type)) {
			return $nc(($cast($XSComplexTypeDecl, this->type)))->getTypeName();
		}
	}
	return nullptr;
}

$String* ElementNSImpl::getTypeNamespace() {
	if (this->type != nullptr) {
		return $nc(this->type)->getNamespace();
	}
	return nullptr;
}

bool ElementNSImpl::isDerivedFrom($String* typeNamespaceArg, $String* typeNameArg, int32_t derivationMethod) {
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->type != nullptr) {
		if ($instanceOf($XSSimpleTypeDecl, this->type)) {
			return $nc(($cast($XSSimpleTypeDecl, this->type)))->isDOMDerivedFrom(typeNamespaceArg, typeNameArg, derivationMethod);
		} else if ($instanceOf($XSComplexTypeDecl, this->type)) {
			return $nc(($cast($XSComplexTypeDecl, this->type)))->isDOMDerivedFrom(typeNamespaceArg, typeNameArg, derivationMethod);
		}
	}
	return false;
}

void ElementNSImpl::setType($XSTypeDefinition* type) {
	$set(this, type, type);
}

ElementNSImpl::ElementNSImpl() {
}

void clinit$ElementNSImpl($Class* class$) {
	$assignStatic(ElementNSImpl::xmlURI, "http://www.w3.org/XML/1998/namespace"_s);
}

$Class* ElementNSImpl::load$($String* name, bool initialize) {
	$loadClass(ElementNSImpl, name, initialize, &_ElementNSImpl_ClassInfo_, clinit$ElementNSImpl, allocate$ElementNSImpl);
	return class$;
}

$Class* ElementNSImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com