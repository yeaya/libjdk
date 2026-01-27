#include <com/sun/org/apache/xerces/internal/util/XMLDocumentFilterImpl.h>

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

$FieldInfo _XMLDocumentFilterImpl_FieldInfo_[] = {
	{"next", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PRIVATE, $field(XMLDocumentFilterImpl, next)},
	{"source", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PRIVATE, $field(XMLDocumentFilterImpl, source)},
	{}
};

$MethodInfo _XMLDocumentFilterImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLDocumentFilterImpl, init$, void)},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, doctypeDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, endGeneralEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, getDocumentHandler, $XMLDocumentHandler*)},
	{"getDocumentSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, getDocumentSource, $XMLDocumentSource*)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, setDocumentHandler, void, $XMLDocumentHandler*)},
	{"setDocumentSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, setDocumentSource, void, $XMLDocumentSource*)},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, startGeneralEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDocumentFilterImpl, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _XMLDocumentFilterImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLDocumentFilterImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter",
	_XMLDocumentFilterImpl_FieldInfo_,
	_XMLDocumentFilterImpl_MethodInfo_
};

$Object* allocate$XMLDocumentFilterImpl($Class* clazz) {
	return $of($alloc(XMLDocumentFilterImpl));
}

void XMLDocumentFilterImpl::init$() {
}

void XMLDocumentFilterImpl::setDocumentHandler($XMLDocumentHandler* handler) {
	$set(this, next, handler);
}

$XMLDocumentHandler* XMLDocumentFilterImpl::getDocumentHandler() {
	return this->next;
}

void XMLDocumentFilterImpl::setDocumentSource($XMLDocumentSource* source) {
	$set(this, source, source);
}

$XMLDocumentSource* XMLDocumentFilterImpl::getDocumentSource() {
	return this->source;
}

void XMLDocumentFilterImpl::characters($XMLString* text, $Augmentations* augs) {
	$nc(this->next)->characters(text, augs);
}

void XMLDocumentFilterImpl::comment($XMLString* text, $Augmentations* augs) {
	$nc(this->next)->comment(text, augs);
}

void XMLDocumentFilterImpl::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
	$nc(this->next)->doctypeDecl(rootElement, publicId, systemId, augs);
}

void XMLDocumentFilterImpl::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$nc(this->next)->emptyElement(element, attributes, augs);
}

void XMLDocumentFilterImpl::endCDATA($Augmentations* augs) {
	$nc(this->next)->endCDATA(augs);
}

void XMLDocumentFilterImpl::endDocument($Augmentations* augs) {
	$nc(this->next)->endDocument(augs);
}

void XMLDocumentFilterImpl::endElement($QName* element, $Augmentations* augs) {
	$nc(this->next)->endElement(element, augs);
}

void XMLDocumentFilterImpl::endGeneralEntity($String* name, $Augmentations* augs) {
	$nc(this->next)->endGeneralEntity(name, augs);
}

void XMLDocumentFilterImpl::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	$nc(this->next)->ignorableWhitespace(text, augs);
}

void XMLDocumentFilterImpl::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
	$nc(this->next)->processingInstruction(target, data, augs);
}

void XMLDocumentFilterImpl::startCDATA($Augmentations* augs) {
	$nc(this->next)->startCDATA(augs);
}

void XMLDocumentFilterImpl::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
	$nc(this->next)->startDocument(locator, encoding, namespaceContext, augs);
}

void XMLDocumentFilterImpl::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$nc(this->next)->startElement(element, attributes, augs);
}

void XMLDocumentFilterImpl::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	$nc(this->next)->startGeneralEntity(name, identifier, encoding, augs);
}

void XMLDocumentFilterImpl::textDecl($String* version, $String* encoding, $Augmentations* augs) {
	$nc(this->next)->textDecl(version, encoding, augs);
}

void XMLDocumentFilterImpl::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
	$nc(this->next)->xmlDecl(version, encoding, standalone, augs);
}

XMLDocumentFilterImpl::XMLDocumentFilterImpl() {
}

$Class* XMLDocumentFilterImpl::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentFilterImpl, name, initialize, &_XMLDocumentFilterImpl_ClassInfo_, allocate$XMLDocumentFilterImpl);
	return class$;
}

$Class* XMLDocumentFilterImpl::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com