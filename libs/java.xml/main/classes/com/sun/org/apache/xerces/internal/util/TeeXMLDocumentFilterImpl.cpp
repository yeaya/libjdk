#include <com/sun/org/apache/xerces/internal/util/TeeXMLDocumentFilterImpl.h>

#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <jcpp.h>

using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _TeeXMLDocumentFilterImpl_FieldInfo_[] = {
	{"next", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PRIVATE, $field(TeeXMLDocumentFilterImpl, next)},
	{"side", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PRIVATE, $field(TeeXMLDocumentFilterImpl, side)},
	{"source", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PRIVATE, $field(TeeXMLDocumentFilterImpl, source)},
	{}
};

$MethodInfo _TeeXMLDocumentFilterImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TeeXMLDocumentFilterImpl, init$, void)},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, doctypeDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, endGeneralEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, getDocumentHandler, $XMLDocumentHandler*)},
	{"getDocumentSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, getDocumentSource, $XMLDocumentSource*)},
	{"getSide", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, getSide, $XMLDocumentHandler*)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, setDocumentHandler, void, $XMLDocumentHandler*)},
	{"setDocumentSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, setDocumentSource, void, $XMLDocumentSource*)},
	{"setSide", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, setSide, void, $XMLDocumentHandler*)},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, startGeneralEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(TeeXMLDocumentFilterImpl, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _TeeXMLDocumentFilterImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.TeeXMLDocumentFilterImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter",
	_TeeXMLDocumentFilterImpl_FieldInfo_,
	_TeeXMLDocumentFilterImpl_MethodInfo_
};

$Object* allocate$TeeXMLDocumentFilterImpl($Class* clazz) {
	return $of($alloc(TeeXMLDocumentFilterImpl));
}

void TeeXMLDocumentFilterImpl::init$() {
}

$XMLDocumentHandler* TeeXMLDocumentFilterImpl::getSide() {
	return this->side;
}

void TeeXMLDocumentFilterImpl::setSide($XMLDocumentHandler* side) {
	$set(this, side, side);
}

$XMLDocumentSource* TeeXMLDocumentFilterImpl::getDocumentSource() {
	return this->source;
}

void TeeXMLDocumentFilterImpl::setDocumentSource($XMLDocumentSource* source) {
	$set(this, source, source);
}

$XMLDocumentHandler* TeeXMLDocumentFilterImpl::getDocumentHandler() {
	return this->next;
}

void TeeXMLDocumentFilterImpl::setDocumentHandler($XMLDocumentHandler* handler) {
	$set(this, next, handler);
}

void TeeXMLDocumentFilterImpl::characters($XMLString* text, $Augmentations* augs) {
	$nc(this->side)->characters(text, augs);
	$nc(this->next)->characters(text, augs);
}

void TeeXMLDocumentFilterImpl::comment($XMLString* text, $Augmentations* augs) {
	$nc(this->side)->comment(text, augs);
	$nc(this->next)->comment(text, augs);
}

void TeeXMLDocumentFilterImpl::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
	$nc(this->side)->doctypeDecl(rootElement, publicId, systemId, augs);
	$nc(this->next)->doctypeDecl(rootElement, publicId, systemId, augs);
}

void TeeXMLDocumentFilterImpl::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$nc(this->side)->emptyElement(element, attributes, augs);
	$nc(this->next)->emptyElement(element, attributes, augs);
}

void TeeXMLDocumentFilterImpl::endCDATA($Augmentations* augs) {
	$nc(this->side)->endCDATA(augs);
	$nc(this->next)->endCDATA(augs);
}

void TeeXMLDocumentFilterImpl::endDocument($Augmentations* augs) {
	$nc(this->side)->endDocument(augs);
	$nc(this->next)->endDocument(augs);
}

void TeeXMLDocumentFilterImpl::endElement($QName* element, $Augmentations* augs) {
	$nc(this->side)->endElement(element, augs);
	$nc(this->next)->endElement(element, augs);
}

void TeeXMLDocumentFilterImpl::endGeneralEntity($String* name, $Augmentations* augs) {
	$nc(this->side)->endGeneralEntity(name, augs);
	$nc(this->next)->endGeneralEntity(name, augs);
}

void TeeXMLDocumentFilterImpl::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	$nc(this->side)->ignorableWhitespace(text, augs);
	$nc(this->next)->ignorableWhitespace(text, augs);
}

void TeeXMLDocumentFilterImpl::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
	$nc(this->side)->processingInstruction(target, data, augs);
	$nc(this->next)->processingInstruction(target, data, augs);
}

void TeeXMLDocumentFilterImpl::startCDATA($Augmentations* augs) {
	$nc(this->side)->startCDATA(augs);
	$nc(this->next)->startCDATA(augs);
}

void TeeXMLDocumentFilterImpl::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
	$nc(this->side)->startDocument(locator, encoding, namespaceContext, augs);
	$nc(this->next)->startDocument(locator, encoding, namespaceContext, augs);
}

void TeeXMLDocumentFilterImpl::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$nc(this->side)->startElement(element, attributes, augs);
	$nc(this->next)->startElement(element, attributes, augs);
}

void TeeXMLDocumentFilterImpl::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	$nc(this->side)->startGeneralEntity(name, identifier, encoding, augs);
	$nc(this->next)->startGeneralEntity(name, identifier, encoding, augs);
}

void TeeXMLDocumentFilterImpl::textDecl($String* version, $String* encoding, $Augmentations* augs) {
	$nc(this->side)->textDecl(version, encoding, augs);
	$nc(this->next)->textDecl(version, encoding, augs);
}

void TeeXMLDocumentFilterImpl::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
	$nc(this->side)->xmlDecl(version, encoding, standalone, augs);
	$nc(this->next)->xmlDecl(version, encoding, standalone, augs);
}

TeeXMLDocumentFilterImpl::TeeXMLDocumentFilterImpl() {
}

$Class* TeeXMLDocumentFilterImpl::load$($String* name, bool initialize) {
	$loadClass(TeeXMLDocumentFilterImpl, name, initialize, &_TeeXMLDocumentFilterImpl_ClassInfo_, allocate$TeeXMLDocumentFilterImpl);
	return class$;
}

$Class* TeeXMLDocumentFilterImpl::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com