#include <com/sun/org/apache/xerces/internal/parsers/DOMParserImpl$AbortHandler.h>

#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser$Abort.h>
#include <com/sun/org/apache/xerces/internal/parsers/DOMParserImpl.h>
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

#undef INSTANCE

using $AbstractDOMParser$Abort = ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser$Abort;
using $DOMParserImpl = ::com::sun::org::apache::xerces::internal::parsers::DOMParserImpl;
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
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _DOMParserImpl$AbortHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/parsers/DOMParserImpl;", nullptr, $FINAL | $SYNTHETIC, $field(DOMParserImpl$AbortHandler, this$0)},
	{"documentSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PRIVATE, $field(DOMParserImpl$AbortHandler, documentSource)},
	{"dtdContentSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;", nullptr, $PRIVATE, $field(DOMParserImpl$AbortHandler, dtdContentSource)},
	{"dtdSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PRIVATE, $field(DOMParserImpl$AbortHandler, dtdSource)},
	{}
};

$MethodInfo _DOMParserImpl$AbortHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/parsers/DOMParserImpl;)V", nullptr, $PRIVATE, $method(DOMParserImpl$AbortHandler, init$, void, $DOMParserImpl*)},
	{"any", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, any, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, attributeDecl, void, $String*, $String*, $String*, $StringArray*, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, doctypeDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"element", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, element, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, elementDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"empty", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, empty, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endAttlist", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, endAttlist, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endConditional", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, endConditional, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endContentModel", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, endContentModel, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDTD", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, endDTD, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, endExternalSubset, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, endGeneralEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, endGroup, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, endParameterEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"externalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, externalEntityDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDTDContentModelSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, getDTDContentModelSource, $XMLDTDContentModelSource*)},
	{"getDTDSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, getDTDSource, $XMLDTDSource*)},
	{"getDocumentSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, getDocumentSource, $XMLDocumentSource*)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"ignoredCharacters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, ignoredCharacters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"internalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, internalEntityDecl, void, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"notationDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, notationDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"occurrence", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, occurrence, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"pcdata", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, pcdata, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"separator", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, separator, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDContentModelSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, setDTDContentModelSource, void, $XMLDTDContentModelSource*)},
	{"setDTDSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, setDTDSource, void, $XMLDTDSource*)},
	{"setDocumentSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, setDocumentSource, void, $XMLDocumentSource*)},
	{"startAttlist", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, startAttlist, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startConditional", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, startConditional, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startContentModel", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, startContentModel, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDTD", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, startDTD, void, $XMLLocator*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, startExternalSubset, void, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, startGeneralEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, startGroup, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, startParameterEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, unparsedEntityDecl, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMParserImpl$AbortHandler, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _DOMParserImpl$AbortHandler_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.parsers.DOMParserImpl$AbortHandler", "com.sun.org.apache.xerces.internal.parsers.DOMParserImpl", "AbortHandler", $PRIVATE},
	{}
};

$ClassInfo _DOMParserImpl$AbortHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.DOMParserImpl$AbortHandler",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLDocumentHandler,com.sun.org.apache.xerces.internal.xni.XMLDTDHandler,com.sun.org.apache.xerces.internal.xni.XMLDTDContentModelHandler",
	_DOMParserImpl$AbortHandler_FieldInfo_,
	_DOMParserImpl$AbortHandler_MethodInfo_,
	nullptr,
	nullptr,
	_DOMParserImpl$AbortHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.parsers.DOMParserImpl"
};

$Object* allocate$DOMParserImpl$AbortHandler($Class* clazz) {
	return $of($alloc(DOMParserImpl$AbortHandler));
}

int32_t DOMParserImpl$AbortHandler::hashCode() {
	 return this->$XMLDocumentHandler::hashCode();
}

bool DOMParserImpl$AbortHandler::equals(Object$* arg0) {
	 return this->$XMLDocumentHandler::equals(arg0);
}

$Object* DOMParserImpl$AbortHandler::clone() {
	 return this->$XMLDocumentHandler::clone();
}

$String* DOMParserImpl$AbortHandler::toString() {
	 return this->$XMLDocumentHandler::toString();
}

void DOMParserImpl$AbortHandler::finalize() {
	this->$XMLDocumentHandler::finalize();
}

void DOMParserImpl$AbortHandler::init$($DOMParserImpl* this$0) {
	$set(this, this$0, this$0);
}

void DOMParserImpl$AbortHandler::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::comment($XMLString* text, $Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::textDecl($String* version, $String* encoding, $Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::endGeneralEntity($String* name, $Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::characters($XMLString* text, $Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::endElement($QName* element, $Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::startCDATA($Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::endCDATA($Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::endDocument($Augmentations* augs) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::setDocumentSource($XMLDocumentSource* source) {
	$set(this, documentSource, source);
}

$XMLDocumentSource* DOMParserImpl$AbortHandler::getDocumentSource() {
	return this->documentSource;
}

void DOMParserImpl$AbortHandler::startDTD($XMLLocator* locator, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::startParameterEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::endParameterEntity($String* name, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::startExternalSubset($XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::endExternalSubset($Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::elementDecl($String* name, $String* contentModel, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::startAttlist($String* elementName, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, $XMLString* defaultValue, $XMLString* nonNormalizedDefaultValue, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::endAttlist($Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::internalEntityDecl($String* name, $XMLString* text, $XMLString* nonNormalizedText, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::externalEntityDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::unparsedEntityDecl($String* name, $XMLResourceIdentifier* identifier, $String* notation, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::notationDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::startConditional(int16_t type, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::ignoredCharacters($XMLString* text, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::endConditional($Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::endDTD($Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::setDTDSource($XMLDTDSource* source) {
	$set(this, dtdSource, source);
}

$XMLDTDSource* DOMParserImpl$AbortHandler::getDTDSource() {
	return this->dtdSource;
}

void DOMParserImpl$AbortHandler::startContentModel($String* elementName, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::any($Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::empty($Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::startGroup($Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::pcdata($Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::element($String* elementName, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::separator(int16_t separator, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::occurrence(int16_t occurrence, $Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::endGroup($Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::endContentModel($Augmentations* augmentations) {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void DOMParserImpl$AbortHandler::setDTDContentModelSource($XMLDTDContentModelSource* source) {
	$set(this, dtdContentSource, source);
}

$XMLDTDContentModelSource* DOMParserImpl$AbortHandler::getDTDContentModelSource() {
	return this->dtdContentSource;
}

DOMParserImpl$AbortHandler::DOMParserImpl$AbortHandler() {
}

$Class* DOMParserImpl$AbortHandler::load$($String* name, bool initialize) {
	$loadClass(DOMParserImpl$AbortHandler, name, initialize, &_DOMParserImpl$AbortHandler_ClassInfo_, allocate$DOMParserImpl$AbortHandler);
	return class$;
}

$Class* DOMParserImpl$AbortHandler::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com