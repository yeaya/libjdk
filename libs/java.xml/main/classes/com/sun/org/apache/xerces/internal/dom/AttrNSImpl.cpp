#include <com/sun/org/apache/xerces/internal/dom/AttrNSImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <org/w3c/dom/DOMException.h>
#include <jcpp.h>

#undef DOM_DOMAIN
#undef DTD_URI
#undef INVALID_CHARACTER_ERR
#undef NAMESPACE_ERR
#undef NO_MODIFICATION_ALLOWED_ERR
#undef XMLNS_URI

using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _AttrNSImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AttrNSImpl, serialVersionUID)},
	{"xmlnsURI", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AttrNSImpl, xmlnsURI)},
	{"xmlURI", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AttrNSImpl, xmlURI)},
	{"namespaceURI", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AttrNSImpl, namespaceURI)},
	{"localName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AttrNSImpl, localName)},
	{}
};

$MethodInfo _AttrNSImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AttrNSImpl, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(AttrNSImpl, init$, void, $CoreDocumentImpl*, $String*, $String*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AttrNSImpl, init$, void, $CoreDocumentImpl*, $String*, $String*, $String*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(AttrNSImpl, init$, void, $CoreDocumentImpl*, $String*)},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrNSImpl, getLocalName, $String*)},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrNSImpl, getNamespaceURI, $String*)},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrNSImpl, getPrefix, $String*)},
	{"getTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrNSImpl, getTypeName, $String*)},
	{"getTypeNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttrNSImpl, getTypeNamespace, $String*)},
	{"isDerivedFrom", "(Ljava/lang/String;Ljava/lang/String;I)Z", nullptr, $PUBLIC, $virtualMethod(AttrNSImpl, isDerivedFrom, bool, $String*, $String*, int32_t)},
	{"rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(AttrNSImpl, rename, void, $String*, $String*)},
	{"setName", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(AttrNSImpl, setName, void, $String*, $String*)},
	{"setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AttrNSImpl, setPrefix, void, $String*), "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _AttrNSImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.AttrNSImpl",
	"com.sun.org.apache.xerces.internal.dom.AttrImpl",
	nullptr,
	_AttrNSImpl_FieldInfo_,
	_AttrNSImpl_MethodInfo_
};

$Object* allocate$AttrNSImpl($Class* clazz) {
	return $of($alloc(AttrNSImpl));
}

$String* AttrNSImpl::xmlnsURI = nullptr;
$String* AttrNSImpl::xmlURI = nullptr;

void AttrNSImpl::init$() {
	$AttrImpl::init$();
}

void AttrNSImpl::init$($CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName) {
	$AttrImpl::init$(ownerDocument, qualifiedName);
	setName(namespaceURI, qualifiedName);
}

void AttrNSImpl::setName($String* namespaceURI, $String* qname) {
	$useLocalCurrentObjectStackCache();
	$var($CoreDocumentImpl, ownerDocument, this->ownerDocument());
	$var($String, prefix, nullptr);
	$set(this, namespaceURI, namespaceURI);
	if (namespaceURI != nullptr) {
		$set(this, namespaceURI, (namespaceURI->length() == 0) ? ($String*)nullptr : namespaceURI);
	}
	int32_t colon1 = $nc(qname)->indexOf((int32_t)u':');
	int32_t colon2 = qname->lastIndexOf((int32_t)u':');
	$nc(ownerDocument)->checkNamespaceWF(qname, colon1, colon2);
	if (colon1 < 0) {
		$set(this, localName, qname);
		if (ownerDocument->errorChecking) {
			ownerDocument->checkQName(nullptr, this->localName);
			bool var$1 = qname->equals("xmlns"_s);
			$init($NamespaceContext);
			bool var$0 = var$1 && (namespaceURI == nullptr || !$nc(namespaceURI)->equals($NamespaceContext::XMLNS_URI));
			if (!var$0) {
				bool var$2 = namespaceURI != nullptr && namespaceURI->equals($NamespaceContext::XMLNS_URI);
				var$0 = (var$2 && !qname->equals("xmlns"_s));
			}
			if (var$0) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
			}
		}
	} else {
		$assign(prefix, qname->substring(0, colon1));
		$set(this, localName, qname->substring(colon2 + 1));
		ownerDocument->checkQName(prefix, this->localName);
		ownerDocument->checkDOMNSErr(prefix, namespaceURI);
	}
}

void AttrNSImpl::init$($CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName, $String* localName) {
	$AttrImpl::init$(ownerDocument, qualifiedName);
	$set(this, localName, localName);
	$set(this, namespaceURI, namespaceURI);
}

void AttrNSImpl::init$($CoreDocumentImpl* ownerDocument, $String* value) {
	$AttrImpl::init$(ownerDocument, value);
}

void AttrNSImpl::rename($String* namespaceURI, $String* qualifiedName) {
	if (needsSyncData()) {
		synchronizeData();
	}
	$set(this, name, qualifiedName);
	setName(namespaceURI, qualifiedName);
}

$String* AttrNSImpl::getNamespaceURI() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->namespaceURI;
}

$String* AttrNSImpl::getPrefix() {
	if (needsSyncData()) {
		synchronizeData();
	}
	int32_t index = $nc(this->name)->indexOf((int32_t)u':');
	return index < 0 ? ($String*)nullptr : $nc(this->name)->substring(0, index);
}

void AttrNSImpl::setPrefix($String* prefix) {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	if ($nc($(ownerDocument()))->errorChecking) {
		if (isReadOnly()) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
		}
		if (prefix != nullptr && prefix->length() != 0) {
			if (!$CoreDocumentImpl::isXMLName(prefix, $nc($(ownerDocument()))->isXML11Version())) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
			}
			if (this->namespaceURI == nullptr || prefix->indexOf((int32_t)u':') >= 0) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
			}
			if (prefix->equals("xmlns"_s)) {
				if (!$nc(this->namespaceURI)->equals(AttrNSImpl::xmlnsURI)) {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
					$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
				}
			} else if (prefix->equals("xml"_s)) {
				if (!$nc(this->namespaceURI)->equals(AttrNSImpl::xmlURI)) {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
					$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
				}
			} else if ($nc(this->name)->equals("xmlns"_s)) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
			}
		}
	}
	if (prefix != nullptr && prefix->length() != 0) {
		$set(this, name, $str({prefix, ":"_s, this->localName}));
	} else {
		$set(this, name, this->localName);
	}
}

$String* AttrNSImpl::getLocalName() {
	if (needsSyncData()) {
		synchronizeData();
	}
	return this->localName;
}

$String* AttrNSImpl::getTypeName() {
	if (this->type != nullptr) {
		if ($instanceOf($XSSimpleTypeDecl, this->type)) {
			return $nc(($cast($XSSimpleTypeDecl, this->type)))->getName();
		}
		return $cast($String, this->type);
	}
	return nullptr;
}

bool AttrNSImpl::isDerivedFrom($String* typeNamespaceArg, $String* typeNameArg, int32_t derivationMethod) {
	if (this->type != nullptr) {
		if ($instanceOf($XSSimpleTypeDecl, this->type)) {
			return $nc(($cast($XSSimpleTypeDecl, this->type)))->isDOMDerivedFrom(typeNamespaceArg, typeNameArg, derivationMethod);
		}
	}
	return false;
}

$String* AttrNSImpl::getTypeNamespace() {
	if (this->type != nullptr) {
		if ($instanceOf($XSSimpleTypeDecl, this->type)) {
			return $nc(($cast($XSSimpleTypeDecl, this->type)))->getNamespace();
		}
		$init($AttrImpl);
		return $AttrImpl::DTD_URI;
	}
	return nullptr;
}

AttrNSImpl::AttrNSImpl() {
}

void clinit$AttrNSImpl($Class* class$) {
	$assignStatic(AttrNSImpl::xmlnsURI, "http://www.w3.org/2000/xmlns/"_s);
	$assignStatic(AttrNSImpl::xmlURI, "http://www.w3.org/XML/1998/namespace"_s);
}

$Class* AttrNSImpl::load$($String* name, bool initialize) {
	$loadClass(AttrNSImpl, name, initialize, &_AttrNSImpl_ClassInfo_, clinit$AttrNSImpl, allocate$AttrNSImpl);
	return class$;
}

$Class* AttrNSImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com