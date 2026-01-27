#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultDocument.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultXMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOM.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser$BooleanStack.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaParsingConfig.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <org/w3c/dom/Document.h>
#include <jcpp.h>

#undef ATT_XML_LANG
#undef ELT_ANNOTATION
#undef ELT_DOCUMENTATION
#undef ELT_SCHEMA
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef GENERATE_SYNTHETIC_ANNOTATION
#undef GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE
#undef SCHEMA_DOMAIN
#undef SEVERITY_ERROR
#undef URI_SCHEMAFORSCHEMA
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLNS_URI
#undef XML_URI

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $DefaultDocument = ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultDocument;
using $DefaultXMLDocumentHandler = ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultXMLDocumentHandler;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::ElementImpl;
using $SchemaDOM = ::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOM;
using $SchemaDOMParser$BooleanStack = ::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMParser$BooleanStack;
using $SchemaParsingConfig = ::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaParsingConfig;
using $XMLAttributesImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDTDContentModelHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

$FieldInfo _SchemaDOMParser_FieldInfo_[] = {
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaDOMParser, ERROR_REPORTER)},
	{"GENERATE_SYNTHETIC_ANNOTATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SchemaDOMParser, GENERATE_SYNTHETIC_ANNOTATION)},
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PROTECTED, $field(SchemaDOMParser, fLocator)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PROTECTED, $field(SchemaDOMParser, fNamespaceContext)},
	{"schemaDOM", "Lcom/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOM;", nullptr, 0, $field(SchemaDOMParser, schemaDOM)},
	{"config", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;", nullptr, 0, $field(SchemaDOMParser, config)},
	{"fCurrentAnnotationElement", "Lcom/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl;", nullptr, $PRIVATE, $field(SchemaDOMParser, fCurrentAnnotationElement)},
	{"fAnnotationDepth", "I", nullptr, $PRIVATE, $field(SchemaDOMParser, fAnnotationDepth)},
	{"fInnerAnnotationDepth", "I", nullptr, $PRIVATE, $field(SchemaDOMParser, fInnerAnnotationDepth)},
	{"fDepth", "I", nullptr, $PRIVATE, $field(SchemaDOMParser, fDepth)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, 0, $field(SchemaDOMParser, fErrorReporter)},
	{"fGenerateSyntheticAnnotation", "Z", nullptr, $PRIVATE, $field(SchemaDOMParser, fGenerateSyntheticAnnotation)},
	{"fHasNonSchemaAttributes", "Lcom/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser$BooleanStack;", nullptr, $PRIVATE, $field(SchemaDOMParser, fHasNonSchemaAttributes)},
	{"fSawAnnotation", "Lcom/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser$BooleanStack;", nullptr, $PRIVATE, $field(SchemaDOMParser, fSawAnnotation)},
	{"fEmptyAttr", "Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;", nullptr, $PRIVATE, $field(SchemaDOMParser, fEmptyAttr)},
	{}
};

$MethodInfo _SchemaDOMParser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;)V", nullptr, $PUBLIC, $method(SchemaDOMParser, init$, void, $XMLParserConfiguration*)},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, getDocument, $Document*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, getFeature, bool, $String*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, getProperty, $Object*, $String*)},
	{"hasNonSchemaAttributes", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)Z", nullptr, $PRIVATE, $method(SchemaDOMParser, hasNonSchemaAttributes, bool, $QName*, $XMLAttributes*)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"parse", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, parse, void, $XMLInputSource*), "java.io.IOException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, reset, void)},
	{"resetNodePool", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, resetNodePool, void)},
	{"setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, setEntityResolver, void, $XMLEntityResolver*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, setFeature, void, $String*, bool)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, setProperty, void, $String*, Object$*)},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(SchemaDOMParser, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _SchemaDOMParser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOMParser$BooleanStack", "com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOMParser", "BooleanStack", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SchemaDOMParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOMParser",
	"com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultXMLDocumentHandler",
	nullptr,
	_SchemaDOMParser_FieldInfo_,
	_SchemaDOMParser_MethodInfo_,
	nullptr,
	nullptr,
	_SchemaDOMParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOMParser$BooleanStack"
};

$Object* allocate$SchemaDOMParser($Class* clazz) {
	return $of($alloc(SchemaDOMParser));
}

$String* SchemaDOMParser::ERROR_REPORTER = nullptr;
$String* SchemaDOMParser::GENERATE_SYNTHETIC_ANNOTATION = nullptr;

void SchemaDOMParser::init$($XMLParserConfiguration* config) {
	$DefaultXMLDocumentHandler::init$();
	$set(this, fNamespaceContext, nullptr);
	this->fAnnotationDepth = -1;
	this->fInnerAnnotationDepth = -1;
	this->fDepth = -1;
	this->fGenerateSyntheticAnnotation = false;
	$set(this, fHasNonSchemaAttributes, $new($SchemaDOMParser$BooleanStack));
	$set(this, fSawAnnotation, $new($SchemaDOMParser$BooleanStack));
	$set(this, fEmptyAttr, $new($XMLAttributesImpl));
	$set(this, config, config);
	$nc(config)->setDocumentHandler(this);
	config->setDTDHandler(this);
	config->setDTDContentModelHandler(this);
}

void SchemaDOMParser::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
	$set(this, fErrorReporter, $cast($XMLErrorReporter, $nc(this->config)->getProperty(SchemaDOMParser::ERROR_REPORTER)));
	this->fGenerateSyntheticAnnotation = $nc(this->config)->getFeature(SchemaDOMParser::GENERATE_SYNTHETIC_ANNOTATION);
	$nc(this->fHasNonSchemaAttributes)->clear();
	$nc(this->fSawAnnotation)->clear();
	$set(this, schemaDOM, $new($SchemaDOM));
	$set(this, fCurrentAnnotationElement, nullptr);
	this->fAnnotationDepth = -1;
	this->fInnerAnnotationDepth = -1;
	this->fDepth = -1;
	$set(this, fLocator, locator);
	$set(this, fNamespaceContext, namespaceContext);
	$nc(this->schemaDOM)->setDocumentURI($($nc(locator)->getExpandedSystemId()));
}

void SchemaDOMParser::endDocument($Augmentations* augs) {
}

void SchemaDOMParser::comment($XMLString* text, $Augmentations* augs) {
	if (this->fAnnotationDepth > -1) {
		$nc(this->schemaDOM)->comment(text);
	}
}

void SchemaDOMParser::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
	if (this->fAnnotationDepth > -1) {
		$nc(this->schemaDOM)->processingInstruction(target, data);
	}
}

void SchemaDOMParser::characters($XMLString* text, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (this->fInnerAnnotationDepth == -1) {
		for (int32_t i = $nc(text)->offset; i < text->offset + text->length; ++i) {
			if (!$XMLChar::isSpace($nc(text->ch)->get(i))) {
				$var($String, txt, $new($String, text->ch, i, text->length + text->offset - i));
				$init($XSMessageFormatter);
				$nc(this->fErrorReporter)->reportError(this->fLocator, $XSMessageFormatter::SCHEMA_DOMAIN, "s4s-elt-character"_s, $$new($ObjectArray, {$of(txt)}), $XMLErrorReporter::SEVERITY_ERROR);
				break;
			}
		}
	} else {
		$nc(this->schemaDOM)->characters(text);
	}
}

void SchemaDOMParser::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	++this->fDepth;
	if (this->fAnnotationDepth == -1) {
		$init($SchemaSymbols);
		if ($nc(element)->uri == $SchemaSymbols::URI_SCHEMAFORSCHEMA && element->localpart == $SchemaSymbols::ELT_ANNOTATION) {
			if (this->fGenerateSyntheticAnnotation) {
				if ($nc(this->fSawAnnotation)->size() > 0) {
					$nc(this->fSawAnnotation)->pop();
				}
				$nc(this->fSawAnnotation)->push(true);
			}
			this->fAnnotationDepth = this->fDepth;
			$nc(this->schemaDOM)->startAnnotation(element, attributes, this->fNamespaceContext);
			$var($QName, var$0, element);
			$var($XMLAttributes, var$1, attributes);
			int32_t var$2 = $nc(this->fLocator)->getLineNumber();
			int32_t var$3 = $nc(this->fLocator)->getColumnNumber();
			$set(this, fCurrentAnnotationElement, $nc(this->schemaDOM)->startElement(var$0, var$1, var$2, var$3, $nc(this->fLocator)->getCharacterOffset()));
			return;
		} else {
			if (element->uri == $SchemaSymbols::URI_SCHEMAFORSCHEMA && this->fGenerateSyntheticAnnotation) {
				$nc(this->fSawAnnotation)->push(false);
				$nc(this->fHasNonSchemaAttributes)->push(hasNonSchemaAttributes(element, attributes));
			}
		}
	} else if (this->fDepth == this->fAnnotationDepth + 1) {
		this->fInnerAnnotationDepth = this->fDepth;
		$nc(this->schemaDOM)->startAnnotationElement(element, attributes);
	} else {
		$nc(this->schemaDOM)->startAnnotationElement(element, attributes);
		return;
	}
	$var($QName, var$4, element);
	$var($XMLAttributes, var$5, attributes);
	int32_t var$6 = $nc(this->fLocator)->getLineNumber();
	int32_t var$7 = $nc(this->fLocator)->getColumnNumber();
	$nc(this->schemaDOM)->startElement(var$4, var$5, var$6, var$7, $nc(this->fLocator)->getCharacterOffset());
}

void SchemaDOMParser::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$init($SchemaSymbols);
	if (this->fGenerateSyntheticAnnotation && this->fAnnotationDepth == -1 && $nc(element)->uri == $SchemaSymbols::URI_SCHEMAFORSCHEMA && element->localpart != $SchemaSymbols::ELT_ANNOTATION && hasNonSchemaAttributes(element, attributes)) {
		$var($QName, var$0, element);
		$var($XMLAttributes, var$1, attributes);
		int32_t var$2 = $nc(this->fLocator)->getLineNumber();
		int32_t var$3 = $nc(this->fLocator)->getColumnNumber();
		$nc(this->schemaDOM)->startElement(var$0, var$1, var$2, var$3, $nc(this->fLocator)->getCharacterOffset());
		$nc(attributes)->removeAllAttributes();
		$var($String, schemaPrefix, $nc(this->fNamespaceContext)->getPrefix($SchemaSymbols::URI_SCHEMAFORSCHEMA));
		$var($String, annRawName, ($nc(schemaPrefix)->length() == 0) ? $SchemaSymbols::ELT_ANNOTATION : ($str({schemaPrefix, $$str(u':'), $SchemaSymbols::ELT_ANNOTATION})));
		$nc(this->schemaDOM)->startAnnotation(annRawName, attributes, this->fNamespaceContext);
		$var($String, elemRawName, ($nc(schemaPrefix)->length() == 0) ? $SchemaSymbols::ELT_DOCUMENTATION : ($str({schemaPrefix, $$str(u':'), $SchemaSymbols::ELT_DOCUMENTATION})));
		$nc(this->schemaDOM)->startAnnotationElement(elemRawName, attributes);
		$nc(this->schemaDOM)->charactersRaw("SYNTHETIC_ANNOTATION"_s);
		$nc(this->schemaDOM)->endSyntheticAnnotationElement(elemRawName, false);
		$nc(this->schemaDOM)->endSyntheticAnnotationElement(annRawName, true);
		$nc(this->schemaDOM)->endElement();
		return;
	}
	if (this->fAnnotationDepth == -1) {
		if ($nc(element)->uri == $SchemaSymbols::URI_SCHEMAFORSCHEMA && element->localpart == $SchemaSymbols::ELT_ANNOTATION) {
			$nc(this->schemaDOM)->startAnnotation(element, attributes, this->fNamespaceContext);
		}
	} else {
		$nc(this->schemaDOM)->startAnnotationElement(element, attributes);
	}
	$var($QName, var$4, element);
	$var($XMLAttributes, var$5, attributes);
	int32_t var$6 = $nc(this->fLocator)->getLineNumber();
	int32_t var$7 = $nc(this->fLocator)->getColumnNumber();
	$var($ElementImpl, newElem, $nc(this->schemaDOM)->emptyElement(var$4, var$5, var$6, var$7, $nc(this->fLocator)->getCharacterOffset()));
	if (this->fAnnotationDepth == -1) {
		if ($nc(element)->uri == $SchemaSymbols::URI_SCHEMAFORSCHEMA && element->localpart == $SchemaSymbols::ELT_ANNOTATION) {
			$nc(this->schemaDOM)->endAnnotation(element, newElem);
		}
	} else {
		$nc(this->schemaDOM)->endAnnotationElement(element);
	}
}

void SchemaDOMParser::endElement($QName* element, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (this->fAnnotationDepth > -1) {
		if (this->fInnerAnnotationDepth == this->fDepth) {
			this->fInnerAnnotationDepth = -1;
			$nc(this->schemaDOM)->endAnnotationElement(element);
			$nc(this->schemaDOM)->endElement();
		} else if (this->fAnnotationDepth == this->fDepth) {
			this->fAnnotationDepth = -1;
			$nc(this->schemaDOM)->endAnnotation(element, this->fCurrentAnnotationElement);
			$nc(this->schemaDOM)->endElement();
		} else {
			$nc(this->schemaDOM)->endAnnotationElement(element);
		}
	} else {
		$init($SchemaSymbols);
		if ($nc(element)->uri == $SchemaSymbols::URI_SCHEMAFORSCHEMA && this->fGenerateSyntheticAnnotation) {
			bool value = $nc(this->fHasNonSchemaAttributes)->pop();
			bool sawann = $nc(this->fSawAnnotation)->pop();
			if (value && !sawann) {
				$var($String, schemaPrefix, $nc(this->fNamespaceContext)->getPrefix($SchemaSymbols::URI_SCHEMAFORSCHEMA));
				$var($String, annRawName, ($nc(schemaPrefix)->length() == 0) ? $SchemaSymbols::ELT_ANNOTATION : ($str({schemaPrefix, $$str(u':'), $SchemaSymbols::ELT_ANNOTATION})));
				$nc(this->schemaDOM)->startAnnotation(annRawName, this->fEmptyAttr, this->fNamespaceContext);
				$var($String, elemRawName, ($nc(schemaPrefix)->length() == 0) ? $SchemaSymbols::ELT_DOCUMENTATION : ($str({schemaPrefix, $$str(u':'), $SchemaSymbols::ELT_DOCUMENTATION})));
				$nc(this->schemaDOM)->startAnnotationElement(elemRawName, this->fEmptyAttr);
				$nc(this->schemaDOM)->charactersRaw("SYNTHETIC_ANNOTATION"_s);
				$nc(this->schemaDOM)->endSyntheticAnnotationElement(elemRawName, false);
				$nc(this->schemaDOM)->endSyntheticAnnotationElement(annRawName, true);
			}
		}
		$nc(this->schemaDOM)->endElement();
	}
	--this->fDepth;
}

bool SchemaDOMParser::hasNonSchemaAttributes($QName* element, $XMLAttributes* attributes) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(attributes)->getLength();
	for (int32_t i = 0; i < length; ++i) {
		$var($String, uri, attributes->getURI(i));
		$init($SchemaSymbols);
		$init($NamespaceContext);
		if (uri != nullptr && uri != $SchemaSymbols::URI_SCHEMAFORSCHEMA && uri != $NamespaceContext::XMLNS_URI && !(uri == $NamespaceContext::XML_URI && attributes->getQName(i) == $SchemaSymbols::ATT_XML_LANG && $nc(element)->localpart == $SchemaSymbols::ELT_SCHEMA)) {
			return true;
		}
	}
	return false;
}

void SchemaDOMParser::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	if (this->fAnnotationDepth != -1) {
		$nc(this->schemaDOM)->characters(text);
	}
}

void SchemaDOMParser::startCDATA($Augmentations* augs) {
	if (this->fAnnotationDepth != -1) {
		$nc(this->schemaDOM)->startAnnotationCDATA();
	}
}

void SchemaDOMParser::endCDATA($Augmentations* augs) {
	if (this->fAnnotationDepth != -1) {
		$nc(this->schemaDOM)->endAnnotationCDATA();
	}
}

$Document* SchemaDOMParser::getDocument() {
	return this->schemaDOM;
}

void SchemaDOMParser::setFeature($String* featureId, bool state) {
	$nc(this->config)->setFeature(featureId, state);
}

bool SchemaDOMParser::getFeature($String* featureId) {
	return $nc(this->config)->getFeature(featureId);
}

void SchemaDOMParser::setProperty($String* propertyId, Object$* value) {
	$nc(this->config)->setProperty(propertyId, value);
}

$Object* SchemaDOMParser::getProperty($String* propertyId) {
	return $of($nc(this->config)->getProperty(propertyId));
}

void SchemaDOMParser::setEntityResolver($XMLEntityResolver* er) {
	$nc(this->config)->setEntityResolver(er);
}

void SchemaDOMParser::parse($XMLInputSource* inputSource) {
	$nc(this->config)->parse(inputSource);
}

void SchemaDOMParser::reset() {
	$nc(($cast($SchemaParsingConfig, this->config)))->reset();
}

void SchemaDOMParser::resetNodePool() {
	$nc(($cast($SchemaParsingConfig, this->config)))->resetNodePool();
}

SchemaDOMParser::SchemaDOMParser() {
}

void clinit$SchemaDOMParser($Class* class$) {
	$init($Constants);
	$assignStatic(SchemaDOMParser::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(SchemaDOMParser::GENERATE_SYNTHETIC_ANNOTATION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE}));
}

$Class* SchemaDOMParser::load$($String* name, bool initialize) {
	$loadClass(SchemaDOMParser, name, initialize, &_SchemaDOMParser_ClassInfo_, clinit$SchemaDOMParser, allocate$SchemaDOMParser);
	return class$;
}

$Class* SchemaDOMParser::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com