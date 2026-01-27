#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultXMLDocumentHandler.h>

#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
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
using $XMLDTDContentModelSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource;
using $XMLDTDSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource;
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
						namespace impl {
							namespace xs {
								namespace opti {

$FieldInfo _DefaultXMLDocumentHandler_FieldInfo_[] = {
	{"fDocumentSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PRIVATE, $field(DefaultXMLDocumentHandler, fDocumentSource)},
	{"fDTDSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PRIVATE, $field(DefaultXMLDocumentHandler, fDTDSource)},
	{"fCMSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;", nullptr, $PRIVATE, $field(DefaultXMLDocumentHandler, fCMSource)},
	{}
};

$MethodInfo _DefaultXMLDocumentHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultXMLDocumentHandler, init$, void)},
	{"any", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, any, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, attributeDecl, void, $String*, $String*, $String*, $StringArray*, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, doctypeDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"element", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, element, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, elementDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"empty", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, empty, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endAttlist", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, endAttlist, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endConditional", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, endConditional, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endContentModel", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, endContentModel, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDTD", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, endDTD, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, endExternalSubset, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, endGeneralEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, endGroup, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, endParameterEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endPrefixMapping", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, endPrefixMapping, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"externalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, externalEntityDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDTDContentModelSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, getDTDContentModelSource, $XMLDTDContentModelSource*)},
	{"getDTDSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, getDTDSource, $XMLDTDSource*)},
	{"getDocumentSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, getDocumentSource, $XMLDocumentSource*)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"ignoredCharacters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, ignoredCharacters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"internalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, internalEntityDecl, void, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"notationDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, notationDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"occurrence", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, occurrence, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"pcdata", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, pcdata, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"separator", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, separator, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDContentModelSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, setDTDContentModelSource, void, $XMLDTDContentModelSource*)},
	{"setDTDSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, setDTDSource, void, $XMLDTDSource*)},
	{"setDocumentSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, setDocumentSource, void, $XMLDocumentSource*)},
	{"startAttlist", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, startAttlist, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startConditional", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, startConditional, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startContentModel", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, startContentModel, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDTD", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, startDTD, void, $XMLLocator*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, startExternalSubset, void, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, startGeneralEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, startGroup, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, startParameterEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, startPrefixMapping, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, unparsedEntityDecl, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DefaultXMLDocumentHandler, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _DefaultXMLDocumentHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultXMLDocumentHandler",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLDocumentHandler,com.sun.org.apache.xerces.internal.xni.XMLDTDHandler,com.sun.org.apache.xerces.internal.xni.XMLDTDContentModelHandler",
	_DefaultXMLDocumentHandler_FieldInfo_,
	_DefaultXMLDocumentHandler_MethodInfo_
};

$Object* allocate$DefaultXMLDocumentHandler($Class* clazz) {
	return $of($alloc(DefaultXMLDocumentHandler));
}

int32_t DefaultXMLDocumentHandler::hashCode() {
	 return this->$XMLDocumentHandler::hashCode();
}

bool DefaultXMLDocumentHandler::equals(Object$* arg0) {
	 return this->$XMLDocumentHandler::equals(arg0);
}

$Object* DefaultXMLDocumentHandler::clone() {
	 return this->$XMLDocumentHandler::clone();
}

$String* DefaultXMLDocumentHandler::toString() {
	 return this->$XMLDocumentHandler::toString();
}

void DefaultXMLDocumentHandler::finalize() {
	this->$XMLDocumentHandler::finalize();
}

void DefaultXMLDocumentHandler::init$() {
}

void DefaultXMLDocumentHandler::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* context, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::comment($XMLString* text, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::startPrefixMapping($String* prefix, $String* uri, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::textDecl($String* version, $String* encoding, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::endGeneralEntity($String* name, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::characters($XMLString* text, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::endElement($QName* element, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::endPrefixMapping($String* prefix, $Augmentations* augs) {
}

void DefaultXMLDocumentHandler::startCDATA($Augmentations* augs) {
}

void DefaultXMLDocumentHandler::endCDATA($Augmentations* augs) {
}

void DefaultXMLDocumentHandler::endDocument($Augmentations* augs) {
}

void DefaultXMLDocumentHandler::startDTD($XMLLocator* locator, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::startParameterEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::endParameterEntity($String* name, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::startExternalSubset($XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::endExternalSubset($Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::elementDecl($String* name, $String* contentModel, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::startAttlist($String* elementName, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, $XMLString* defaultValue, $XMLString* nonNormalizedDefaultValue, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::endAttlist($Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::internalEntityDecl($String* name, $XMLString* text, $XMLString* nonNormalizedText, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::externalEntityDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::unparsedEntityDecl($String* name, $XMLResourceIdentifier* identifier, $String* notation, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::notationDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::startConditional(int16_t type, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::ignoredCharacters($XMLString* text, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::endConditional($Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::endDTD($Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::startContentModel($String* elementName, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::any($Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::empty($Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::startGroup($Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::pcdata($Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::element($String* elementName, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::separator(int16_t separator, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::occurrence(int16_t occurrence, $Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::endGroup($Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::endContentModel($Augmentations* augmentations) {
}

void DefaultXMLDocumentHandler::setDocumentSource($XMLDocumentSource* source) {
	$set(this, fDocumentSource, source);
}

$XMLDocumentSource* DefaultXMLDocumentHandler::getDocumentSource() {
	return this->fDocumentSource;
}

void DefaultXMLDocumentHandler::setDTDSource($XMLDTDSource* source) {
	$set(this, fDTDSource, source);
}

$XMLDTDSource* DefaultXMLDocumentHandler::getDTDSource() {
	return this->fDTDSource;
}

void DefaultXMLDocumentHandler::setDTDContentModelSource($XMLDTDContentModelSource* source) {
	$set(this, fCMSource, source);
}

$XMLDTDContentModelSource* DefaultXMLDocumentHandler::getDTDContentModelSource() {
	return this->fCMSource;
}

DefaultXMLDocumentHandler::DefaultXMLDocumentHandler() {
}

$Class* DefaultXMLDocumentHandler::load$($String* name, bool initialize) {
	$loadClass(DefaultXMLDocumentHandler, name, initialize, &_DefaultXMLDocumentHandler_ClassInfo_, allocate$DefaultXMLDocumentHandler);
	return class$;
}

$Class* DefaultXMLDocumentHandler::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com