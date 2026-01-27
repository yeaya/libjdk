#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/parsers/DOMParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef ANNOTATION
#undef SAX_CONTENTHANDLER
#undef W3C_DOM_DOCUMENT
#undef W3C_DOM_ELEMENT

using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $DOMParser = ::com::sun::org::apache::xerces::internal::parsers::DOMParser;
using $SAXParser = ::com::sun::org::apache::xerces::internal::parsers::SAXParser;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XSAnnotationImpl_FieldInfo_[] = {
	{"fData", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSAnnotationImpl, fData)},
	{"fGrammar", "Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, $PRIVATE, $field(XSAnnotationImpl, fGrammar)},
	{}
};

$MethodInfo _XSAnnotationImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PUBLIC, $method(XSAnnotationImpl, init$, void, $String*, $SchemaGrammar*)},
	{"getAnnotationString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSAnnotationImpl, getAnnotationString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSAnnotationImpl, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSAnnotationImpl, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSAnnotationImpl, getNamespaceItem, $XSNamespaceItem*)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSAnnotationImpl, getType, int16_t)},
	{"writeAnnotation", "(Ljava/lang/Object;S)Z", nullptr, $PUBLIC, $virtualMethod(XSAnnotationImpl, writeAnnotation, bool, Object$*, int16_t)},
	{"writeToDOM", "(Lorg/w3c/dom/Node;S)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(XSAnnotationImpl, writeToDOM, void, $Node*, int16_t)},
	{"writeToSAX", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(XSAnnotationImpl, writeToSAX, void, $ContentHandler*)},
	{}
};

$ClassInfo _XSAnnotationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSAnnotationImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSAnnotation",
	_XSAnnotationImpl_FieldInfo_,
	_XSAnnotationImpl_MethodInfo_
};

$Object* allocate$XSAnnotationImpl($Class* clazz) {
	return $of($alloc(XSAnnotationImpl));
}

void XSAnnotationImpl::init$($String* contents, $SchemaGrammar* grammar) {
	$set(this, fData, nullptr);
	$set(this, fGrammar, nullptr);
	$set(this, fData, contents);
	$set(this, fGrammar, grammar);
}

bool XSAnnotationImpl::writeAnnotation(Object$* target, int16_t targetType) {
	if (targetType == $XSAnnotation::W3C_DOM_ELEMENT || targetType == $XSAnnotation::W3C_DOM_DOCUMENT) {
		writeToDOM($cast($Node, target), targetType);
		return true;
	} else if (targetType == $XSAnnotation::SAX_CONTENTHANDLER) {
		writeToSAX($cast($ContentHandler, target));
		return true;
	}
	return false;
}

$String* XSAnnotationImpl::getAnnotationString() {
	return this->fData;
}

int16_t XSAnnotationImpl::getType() {
	return $XSConstants::ANNOTATION;
}

$String* XSAnnotationImpl::getName() {
	return nullptr;
}

$String* XSAnnotationImpl::getNamespace() {
	return nullptr;
}

$XSNamespaceItem* XSAnnotationImpl::getNamespaceItem() {
	return nullptr;
}

void XSAnnotationImpl::writeToSAX($ContentHandler* handler) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($SAXParser, parser, $nc(this->fGrammar)->getSAXParser());
		$var($StringReader, aReader, $new($StringReader, this->fData));
		$var($InputSource, aSource, $new($InputSource, static_cast<$Reader*>(aReader)));
		$nc(parser)->setContentHandler(handler);
		try {
			parser->parse(aSource);
		} catch ($SAXException& e) {
		} catch ($IOException& i) {
		}
		parser->setContentHandler(nullptr);
	}
}

void XSAnnotationImpl::writeToDOM($Node* target, int16_t type) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Document, futureOwner, (type == $XSAnnotation::W3C_DOM_ELEMENT) ? $nc(target)->getOwnerDocument() : $cast($Document, target));
		$var($DOMParser, parser, $nc(this->fGrammar)->getDOMParser());
		$var($StringReader, aReader, $new($StringReader, this->fData));
		$var($InputSource, aSource, $new($InputSource, static_cast<$Reader*>(aReader)));
		try {
			$nc(parser)->parse(aSource);
		} catch ($SAXException& e) {
		} catch ($IOException& i) {
		}
		$var($Document, aDocument, $nc(parser)->getDocument());
		parser->dropDocumentReferences();
		$var($Element, annotation, $nc(aDocument)->getDocumentElement());
		$var($Node, newElem, nullptr);
		if ($instanceOf($CoreDocumentImpl, futureOwner)) {
			$assign(newElem, $nc(futureOwner)->adoptNode(annotation));
			if (newElem == nullptr) {
				$assign(newElem, futureOwner->importNode(annotation, true));
			}
		} else {
			$assign(newElem, $nc(futureOwner)->importNode(annotation, true));
		}
		target->insertBefore(newElem, $(target->getFirstChild()));
	}
}

XSAnnotationImpl::XSAnnotationImpl() {
}

$Class* XSAnnotationImpl::load$($String* name, bool initialize) {
	$loadClass(XSAnnotationImpl, name, initialize, &_XSAnnotationImpl_ClassInfo_, allocate$XSAnnotationImpl);
	return class$;
}

$Class* XSAnnotationImpl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com