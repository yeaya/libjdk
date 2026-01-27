#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef DOM_DOMAIN
#undef WRONG_DOCUMENT_ERR

using $CoreDOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _DOMImplementationImpl_FieldInfo_[] = {
	{"singleton", "Lcom/sun/org/apache/xerces/internal/dom/DOMImplementationImpl;", nullptr, $STATIC, $staticField(DOMImplementationImpl, singleton)},
	{}
};

$MethodInfo _DOMImplementationImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMImplementationImpl, init$, void)},
	{"createDocument", "(Ljava/lang/String;Ljava/lang/String;Lorg/w3c/dom/DocumentType;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(DOMImplementationImpl, createDocument, $Document*, $String*, $String*, $DocumentType*), "org.w3c.dom.DOMException"},
	{"getDOMImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMImplementationImpl, getDOMImplementation, $DOMImplementation*)},
	{"hasFeature", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DOMImplementationImpl, hasFeature, bool, $String*, $String*)},
	{}
};

$ClassInfo _DOMImplementationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DOMImplementationImpl",
	"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl",
	nullptr,
	_DOMImplementationImpl_FieldInfo_,
	_DOMImplementationImpl_MethodInfo_
};

$Object* allocate$DOMImplementationImpl($Class* clazz) {
	return $of($alloc(DOMImplementationImpl));
}

DOMImplementationImpl* DOMImplementationImpl::singleton = nullptr;

void DOMImplementationImpl::init$() {
	$CoreDOMImplementationImpl::init$();
}

$DOMImplementation* DOMImplementationImpl::getDOMImplementation() {
	$init(DOMImplementationImpl);
	return DOMImplementationImpl::singleton;
}

bool DOMImplementationImpl::hasFeature($String* feature$renamed, $String* version) {
	$var($String, feature, feature$renamed);
	if (feature == nullptr || $nc(feature)->length() == 0) {
		return false;
	}
	bool result = $CoreDOMImplementationImpl::hasFeature(feature, version);
	if (!result) {
		bool anyVersion = version == nullptr || $nc(version)->length() == 0;
		if ($nc(feature)->startsWith("+"_s)) {
			$assign(feature, feature->substring(1));
		}
		bool var$4 = $nc(feature)->equalsIgnoreCase("Events"_s);
		bool var$3 = (var$4 && (anyVersion || version->equals("2.0"_s)));
		if (!var$3) {
			bool var$5 = $nc(feature)->equalsIgnoreCase("MutationEvents"_s);
			var$3 = (var$5 && (anyVersion || version->equals("2.0"_s)));
		}
		bool var$2 = var$3;
		if (!var$2) {
			bool var$6 = $nc(feature)->equalsIgnoreCase("Traversal"_s);
			var$2 = (var$6 && (anyVersion || version->equals("2.0"_s)));
		}
		bool var$1 = var$2;
		if (!var$1) {
			bool var$7 = $nc(feature)->equalsIgnoreCase("Range"_s);
			var$1 = (var$7 && (anyVersion || version->equals("2.0"_s)));
		}
		bool var$0 = var$1;
		if (!var$0) {
			bool var$8 = $nc(feature)->equalsIgnoreCase("MutationEvents"_s);
			var$0 = (var$8 && (anyVersion || version->equals("2.0"_s)));
		}
		return (var$0);
	}
	return result;
}

$Document* DOMImplementationImpl::createDocument($String* namespaceURI, $String* qualifiedName, $DocumentType* doctype) {
	$useLocalCurrentObjectStackCache();
	if (namespaceURI == nullptr && qualifiedName == nullptr && doctype == nullptr) {
		return $new($DocumentImpl);
	} else if (doctype != nullptr && doctype->getOwnerDocument() != nullptr) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, msg);
	}
	$var($DocumentImpl, doc, $new($DocumentImpl, doctype));
	$var($Element, e, doc->createElementNS(namespaceURI, qualifiedName));
	doc->appendChild(e);
	return doc;
}

void clinit$DOMImplementationImpl($Class* class$) {
	$assignStatic(DOMImplementationImpl::singleton, $new(DOMImplementationImpl));
}

DOMImplementationImpl::DOMImplementationImpl() {
}

$Class* DOMImplementationImpl::load$($String* name, bool initialize) {
	$loadClass(DOMImplementationImpl, name, initialize, &_DOMImplementationImpl_ClassInfo_, clinit$DOMImplementationImpl, allocate$DOMImplementationImpl);
	return class$;
}

$Class* DOMImplementationImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com