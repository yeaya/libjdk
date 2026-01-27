#include <com/sun/org/apache/xerces/internal/jaxp/validation/DOMValidatorHelper.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/EntityState.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/DOMDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/DOMResultAugmentor.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/DOMResultBuilder.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/DOMValidatorHelper$DOMNamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/JAXPValidationMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/Util.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHelper.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <java/util/Locale.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/dom/DOMResult.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Entity.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

#undef CDATA_SECTION_NODE
#undef CHUNK_MASK
#undef CHUNK_SIZE
#undef COMMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef ELEMENT_NODE
#undef EMPTY_STRING
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef NAMESPACE_CONTEXT
#undef NAMESPACE_CONTEXT_PROPERTY
#undef OVERRIDE_PARSER
#undef PREFIX_XMLNS
#undef PROCESSING_INSTRUCTION_NODE
#undef SCHEMA_VALIDATOR
#undef SCHEMA_VALIDATOR_PROPERTY
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TEXT_NODE
#undef VALIDATION_MANAGER
#undef VALIDATION_MANAGER_PROPERTY
#undef XERCES_PROPERTY_PREFIX
#undef XMLNS_URI

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $EntityState = ::com::sun::org::apache::xerces::internal::impl::validation::EntityState;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $SimpleLocator = ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator;
using $DOMDocumentHandler = ::com::sun::org::apache::xerces::internal::jaxp::validation::DOMDocumentHandler;
using $DOMResultAugmentor = ::com::sun::org::apache::xerces::internal::jaxp::validation::DOMResultAugmentor;
using $DOMResultBuilder = ::com::sun::org::apache::xerces::internal::jaxp::validation::DOMResultBuilder;
using $DOMValidatorHelper$DOMNamespaceContext = ::com::sun::org::apache::xerces::internal::jaxp::validation::DOMValidatorHelper$DOMNamespaceContext;
using $JAXPValidationMessageFormatter = ::com::sun::org::apache::xerces::internal::jaxp::validation::JAXPValidationMessageFormatter;
using $Util = ::com::sun::org::apache::xerces::internal::jaxp::validation::Util;
using $ValidatorHelper = ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHelper;
using $XMLSchemaValidatorComponentManager = ::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLAttributesImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $DocumentBuilder = ::javax::xml::parsers::DocumentBuilder;
using $DocumentBuilderFactory = ::javax::xml::parsers::DocumentBuilderFactory;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;
using $DOMResult = ::javax::xml::transform::dom::DOMResult;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $Attr = ::org::w3c::dom::Attr;
using $CDATASection = ::org::w3c::dom::CDATASection;
using $Comment = ::org::w3c::dom::Comment;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Entity = ::org::w3c::dom::Entity;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $Text = ::org::w3c::dom::Text;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _DOMValidatorHelper_FieldInfo_[] = {
	{"CHUNK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOMValidatorHelper, CHUNK_SIZE)},
	{"CHUNK_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOMValidatorHelper, CHUNK_MASK)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMValidatorHelper, ERROR_REPORTER)},
	{"NAMESPACE_CONTEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMValidatorHelper, NAMESPACE_CONTEXT)},
	{"SCHEMA_VALIDATOR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMValidatorHelper, SCHEMA_VALIDATOR)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMValidatorHelper, SYMBOL_TABLE)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMValidatorHelper, VALIDATION_MANAGER)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PRIVATE, $field(DOMValidatorHelper, fErrorReporter)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;", nullptr, $PRIVATE, $field(DOMValidatorHelper, fNamespaceContext)},
	{"fDOMNamespaceContext", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/DOMValidatorHelper$DOMNamespaceContext;", nullptr, $PRIVATE, $field(DOMValidatorHelper, fDOMNamespaceContext)},
	{"fSchemaValidator", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;", nullptr, $PRIVATE, $field(DOMValidatorHelper, fSchemaValidator)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(DOMValidatorHelper, fSymbolTable)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PRIVATE, $field(DOMValidatorHelper, fValidationManager)},
	{"fComponentManager", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager;", nullptr, $PRIVATE, $field(DOMValidatorHelper, fComponentManager)},
	{"fXMLLocator", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;", nullptr, $PRIVATE | $FINAL, $field(DOMValidatorHelper, fXMLLocator)},
	{"fDOMValidatorHandler", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/DOMDocumentHandler;", nullptr, $PRIVATE, $field(DOMValidatorHelper, fDOMValidatorHandler)},
	{"fDOMResultAugmentor", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/DOMResultAugmentor;", nullptr, $PRIVATE | $FINAL, $field(DOMValidatorHelper, fDOMResultAugmentor)},
	{"fDOMResultBuilder", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/DOMResultBuilder;", nullptr, $PRIVATE | $FINAL, $field(DOMValidatorHelper, fDOMResultBuilder)},
	{"fEntities", "Lorg/w3c/dom/NamedNodeMap;", nullptr, $PRIVATE, $field(DOMValidatorHelper, fEntities)},
	{"fCharBuffer", "[C", nullptr, $PRIVATE, $field(DOMValidatorHelper, fCharBuffer)},
	{"fRoot", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMValidatorHelper, fRoot)},
	{"fCurrentElement", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMValidatorHelper, fCurrentElement)},
	{"fElementQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $FINAL, $field(DOMValidatorHelper, fElementQName)},
	{"fAttributeQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $FINAL, $field(DOMValidatorHelper, fAttributeQName)},
	{"fAttributes", "Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl;", nullptr, $FINAL, $field(DOMValidatorHelper, fAttributes)},
	{"fTempString", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $FINAL, $field(DOMValidatorHelper, fTempString)},
	{}
};

$MethodInfo _DOMValidatorHelper_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager;)V", nullptr, $PUBLIC, $method(DOMValidatorHelper, init$, void, $XMLSchemaValidatorComponentManager*)},
	{"beginNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(DOMValidatorHelper, beginNode, void, $Node*)},
	{"fillQName", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(DOMValidatorHelper, fillQName, void, $QName*, $Node*)},
	{"finishNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(DOMValidatorHelper, finishNode, void, $Node*)},
	{"getCurrentElement", "()Lorg/w3c/dom/Node;", nullptr, 0, $method(DOMValidatorHelper, getCurrentElement, $Node*)},
	{"isEntityDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DOMValidatorHelper, isEntityDeclared, bool, $String*)},
	{"isEntityUnparsed", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DOMValidatorHelper, isEntityUnparsed, bool, $String*)},
	{"processAttributes", "(Lorg/w3c/dom/NamedNodeMap;)V", nullptr, $PRIVATE, $method(DOMValidatorHelper, processAttributes, void, $NamedNodeMap*)},
	{"sendCharactersToValidator", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(DOMValidatorHelper, sendCharactersToValidator, void, $String*)},
	{"setupDOMResultHandler", "(Ljavax/xml/transform/dom/DOMSource;Ljavax/xml/transform/dom/DOMResult;)V", nullptr, $PRIVATE, $method(DOMValidatorHelper, setupDOMResultHandler, void, $DOMSource*, $DOMResult*), "org.xml.sax.SAXException"},
	{"setupEntityMap", "(Lorg/w3c/dom/Document;)V", nullptr, $PRIVATE, $method(DOMValidatorHelper, setupEntityMap, void, $Document*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V", nullptr, $PUBLIC, $virtualMethod(DOMValidatorHelper, validate, void, $Source*, $Result*), "org.xml.sax.SAXException,java.io.IOException"},
	{"validate", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(DOMValidatorHelper, validate, void, $Node*)},
	{}
};

$InnerClassInfo _DOMValidatorHelper_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.validation.DOMValidatorHelper$DOMNamespaceContext", "com.sun.org.apache.xerces.internal.jaxp.validation.DOMValidatorHelper", "DOMNamespaceContext", $FINAL},
	{}
};

$ClassInfo _DOMValidatorHelper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.DOMValidatorHelper",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHelper,com.sun.org.apache.xerces.internal.impl.validation.EntityState",
	_DOMValidatorHelper_FieldInfo_,
	_DOMValidatorHelper_MethodInfo_,
	nullptr,
	nullptr,
	_DOMValidatorHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.validation.DOMValidatorHelper$DOMNamespaceContext"
};

$Object* allocate$DOMValidatorHelper($Class* clazz) {
	return $of($alloc(DOMValidatorHelper));
}

int32_t DOMValidatorHelper::hashCode() {
	 return this->$ValidatorHelper::hashCode();
}

bool DOMValidatorHelper::equals(Object$* arg0) {
	 return this->$ValidatorHelper::equals(arg0);
}

$Object* DOMValidatorHelper::clone() {
	 return this->$ValidatorHelper::clone();
}

$String* DOMValidatorHelper::toString() {
	 return this->$ValidatorHelper::toString();
}

void DOMValidatorHelper::finalize() {
	this->$ValidatorHelper::finalize();
}

$String* DOMValidatorHelper::ERROR_REPORTER = nullptr;
$String* DOMValidatorHelper::NAMESPACE_CONTEXT = nullptr;
$String* DOMValidatorHelper::SCHEMA_VALIDATOR = nullptr;
$String* DOMValidatorHelper::SYMBOL_TABLE = nullptr;
$String* DOMValidatorHelper::VALIDATION_MANAGER = nullptr;

void DOMValidatorHelper::init$($XMLSchemaValidatorComponentManager* componentManager) {
	$set(this, fDOMNamespaceContext, $new($DOMValidatorHelper$DOMNamespaceContext, this));
	$set(this, fXMLLocator, $new($SimpleLocator, nullptr, nullptr, -1, -1, -1));
	$set(this, fDOMResultAugmentor, $new($DOMResultAugmentor, this));
	$set(this, fDOMResultBuilder, $new($DOMResultBuilder));
	$set(this, fEntities, nullptr);
	$set(this, fCharBuffer, $new($chars, DOMValidatorHelper::CHUNK_SIZE));
	$set(this, fElementQName, $new($QName));
	$set(this, fAttributeQName, $new($QName));
	$set(this, fAttributes, $new($XMLAttributesImpl));
	$set(this, fTempString, $new($XMLString));
	$set(this, fComponentManager, componentManager);
	$set(this, fErrorReporter, $cast($XMLErrorReporter, $nc(this->fComponentManager)->getProperty(DOMValidatorHelper::ERROR_REPORTER)));
	$set(this, fNamespaceContext, $cast($NamespaceSupport, $nc(this->fComponentManager)->getProperty(DOMValidatorHelper::NAMESPACE_CONTEXT)));
	$set(this, fSchemaValidator, $cast($XMLSchemaValidator, $nc(this->fComponentManager)->getProperty(DOMValidatorHelper::SCHEMA_VALIDATOR)));
	$set(this, fSymbolTable, $cast($SymbolTable, $nc(this->fComponentManager)->getProperty(DOMValidatorHelper::SYMBOL_TABLE)));
	$set(this, fValidationManager, $cast($ValidationManager, $nc(this->fComponentManager)->getProperty(DOMValidatorHelper::VALIDATION_MANAGER)));
}

void DOMValidatorHelper::validate($Source* source, $Result* result) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DOMResult, result) || result == nullptr) {
		$var($DOMSource, domSource, $cast($DOMSource, source));
		$var($DOMResult, domResult, $cast($DOMResult, result));
		$var($Node, node, $nc(domSource)->getNode());
		$set(this, fRoot, node);
		if (node != nullptr) {
			$nc(this->fComponentManager)->reset();
			$nc(this->fValidationManager)->setEntityState(this);
			$nc(this->fDOMNamespaceContext)->reset();
			$var($String, systemId, domSource->getSystemId());
			$nc(this->fXMLLocator)->setLiteralSystemId(systemId);
			$nc(this->fXMLLocator)->setExpandedSystemId(systemId);
			$nc(this->fErrorReporter)->setDocumentLocator(this->fXMLLocator);
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						setupEntityMap((node->getNodeType() == $Node::DOCUMENT_NODE) ? $cast($Document, node) : $(node->getOwnerDocument()));
						setupDOMResultHandler(domSource, domResult);
						$nc(this->fSchemaValidator)->startDocument(this->fXMLLocator, nullptr, this->fDOMNamespaceContext, nullptr);
						validate(node);
						$nc(this->fSchemaValidator)->endDocument(nullptr);
					} catch ($XMLParseException& e) {
						$throw($($Util::toSAXParseException(e)));
					} catch ($XNIException& e) {
						$throw($($Util::toSAXException(e)));
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					$set(this, fRoot, nullptr);
					$set(this, fEntities, nullptr);
					if (this->fDOMValidatorHandler != nullptr) {
						$nc(this->fDOMValidatorHandler)->setDOMResult(nullptr);
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		return;
	}
	$var($Locale, var$2, $nc(this->fComponentManager)->getLocale());
	$var($String, var$3, "SourceResultMismatch"_s);
	$throwNew($IllegalArgumentException, $($JAXPValidationMessageFormatter::formatMessage(var$2, var$3, $$new($ObjectArray, {
		$($of($nc($of(source))->getClass()->getName())),
		$($of($nc($of(result))->getClass()->getName()))
	}))));
}

bool DOMValidatorHelper::isEntityDeclared($String* name) {
	return false;
}

bool DOMValidatorHelper::isEntityUnparsed($String* name) {
	if (this->fEntities != nullptr) {
		$var($Entity, entity, $cast($Entity, $nc(this->fEntities)->getNamedItem(name)));
		if (entity != nullptr) {
			return (entity->getNotationName() != nullptr);
		}
	}
	return false;
}

void DOMValidatorHelper::validate($Node* node$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Node, node, node$renamed);
	$var($Node, top, node);
	while (node != nullptr) {
		beginNode(node);
		$var($Node, next, node->getFirstChild());
		while (next == nullptr) {
			finishNode(node);
			if (top == node) {
				break;
			}
			$assign(next, $nc(node)->getNextSibling());
			if (next == nullptr) {
				$assign(node, node->getParentNode());
				if (node == nullptr || top == node) {
					if (node != nullptr) {
						finishNode(node);
					}
					$assign(next, nullptr);
					break;
				}
			}
		}
		$assign(node, next);
	}
}

void DOMValidatorHelper::beginNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	switch ($nc(node)->getNodeType()) {
	case $Node::ELEMENT_NODE:
		{
			$set(this, fCurrentElement, node);
			$nc(this->fNamespaceContext)->pushContext();
			fillQName(this->fElementQName, node);
			processAttributes($(node->getAttributes()));
			$nc(this->fSchemaValidator)->startElement(this->fElementQName, this->fAttributes, nullptr);
			break;
		}
	case $Node::TEXT_NODE:
		{
			if (this->fDOMValidatorHandler != nullptr) {
				$nc(this->fDOMValidatorHandler)->setIgnoringCharacters(true);
				sendCharactersToValidator($(node->getNodeValue()));
				$nc(this->fDOMValidatorHandler)->setIgnoringCharacters(false);
				$nc(this->fDOMValidatorHandler)->characters($cast($Text, node));
			} else {
				sendCharactersToValidator($(node->getNodeValue()));
			}
			break;
		}
	case $Node::CDATA_SECTION_NODE:
		{
			if (this->fDOMValidatorHandler != nullptr) {
				$nc(this->fDOMValidatorHandler)->setIgnoringCharacters(true);
				$nc(this->fSchemaValidator)->startCDATA(nullptr);
				sendCharactersToValidator($(node->getNodeValue()));
				$nc(this->fSchemaValidator)->endCDATA(nullptr);
				$nc(this->fDOMValidatorHandler)->setIgnoringCharacters(false);
				$nc(this->fDOMValidatorHandler)->cdata($cast($CDATASection, node));
			} else {
				$nc(this->fSchemaValidator)->startCDATA(nullptr);
				sendCharactersToValidator($(node->getNodeValue()));
				$nc(this->fSchemaValidator)->endCDATA(nullptr);
			}
			break;
		}
	case $Node::PROCESSING_INSTRUCTION_NODE:
		{
			if (this->fDOMValidatorHandler != nullptr) {
				$nc(this->fDOMValidatorHandler)->processingInstruction($cast($ProcessingInstruction, node));
			}
			break;
		}
	case $Node::COMMENT_NODE:
		{
			if (this->fDOMValidatorHandler != nullptr) {
				$nc(this->fDOMValidatorHandler)->comment($cast($Comment, node));
			}
			break;
		}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			if (this->fDOMValidatorHandler != nullptr) {
				$nc(this->fDOMValidatorHandler)->doctypeDecl($cast($DocumentType, node));
			}
			break;
		}
	default:
		{
			break;
		}
	}
}

void DOMValidatorHelper::finishNode($Node* node) {
	if ($nc(node)->getNodeType() == $Node::ELEMENT_NODE) {
		$set(this, fCurrentElement, node);
		fillQName(this->fElementQName, node);
		$nc(this->fSchemaValidator)->endElement(this->fElementQName, nullptr);
		$nc(this->fNamespaceContext)->popContext();
	}
}

void DOMValidatorHelper::setupEntityMap($Document* doc) {
	if (doc != nullptr) {
		$var($DocumentType, docType, doc->getDoctype());
		if (docType != nullptr) {
			$set(this, fEntities, docType->getEntities());
			return;
		}
	}
	$set(this, fEntities, nullptr);
}

void DOMValidatorHelper::setupDOMResultHandler($DOMSource* source, $DOMResult* result) {
	$useLocalCurrentObjectStackCache();
	if (result == nullptr) {
		$set(this, fDOMValidatorHandler, nullptr);
		$nc(this->fSchemaValidator)->setDocumentHandler(nullptr);
		return;
	}
	$var($Node, nodeResult, $nc(result)->getNode());
	if ($nc(source)->getNode() == nodeResult) {
		$set(this, fDOMValidatorHandler, this->fDOMResultAugmentor);
		$nc(this->fDOMResultAugmentor)->setDOMResult(result);
		$nc(this->fSchemaValidator)->setDocumentHandler(this->fDOMResultAugmentor);
		return;
	}
	if (result->getNode() == nullptr) {
		try {
			$init($JdkConstants);
			$var($DocumentBuilderFactory, factory, $JdkXmlUtils::getDOMFactory($nc(this->fComponentManager)->getFeature($JdkConstants::OVERRIDE_PARSER)));
			$var($DocumentBuilder, builder, $nc(factory)->newDocumentBuilder());
			result->setNode($($nc(builder)->newDocument()));
		} catch ($ParserConfigurationException& e) {
			$throwNew($SAXException, static_cast<$Exception*>(e));
		}
	}
	$set(this, fDOMValidatorHandler, this->fDOMResultBuilder);
	$nc(this->fDOMResultBuilder)->setDOMResult(result);
	$nc(this->fSchemaValidator)->setDocumentHandler(this->fDOMResultBuilder);
}

void DOMValidatorHelper::fillQName($QName* toFill, $Node* node) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, $nc(node)->getPrefix());
	$var($String, localName, node->getLocalName());
	$var($String, rawName, node->getNodeName());
	$var($String, namespace$, node->getNamespaceURI());
	$set($nc(toFill), uri, (namespace$ != nullptr && namespace$->length() > 0) ? $nc(this->fSymbolTable)->addSymbol(namespace$) : ($String*)nullptr);
	$init($XMLSymbols);
	$set(toFill, rawname, (rawName != nullptr) ? $nc(this->fSymbolTable)->addSymbol(rawName) : $XMLSymbols::EMPTY_STRING);
	if (localName == nullptr) {
		int32_t k = $nc(rawName)->indexOf((int32_t)u':');
		if (k > 0) {
			$set(toFill, prefix, $nc(this->fSymbolTable)->addSymbol($(rawName->substring(0, k))));
			$set(toFill, localpart, $nc(this->fSymbolTable)->addSymbol($(rawName->substring(k + 1))));
		} else {
			$set(toFill, prefix, $XMLSymbols::EMPTY_STRING);
			$set(toFill, localpart, toFill->rawname);
		}
	} else {
		$set(toFill, prefix, (prefix != nullptr) ? $nc(this->fSymbolTable)->addSymbol(prefix) : $XMLSymbols::EMPTY_STRING);
		$set(toFill, localpart, (localName != nullptr) ? $nc(this->fSymbolTable)->addSymbol(localName) : $XMLSymbols::EMPTY_STRING);
	}
}

void DOMValidatorHelper::processAttributes($NamedNodeMap* attrMap) {
	$useLocalCurrentObjectStackCache();
	int32_t attrCount = $nc(attrMap)->getLength();
	$nc(this->fAttributes)->removeAllAttributes();
	for (int32_t i = 0; i < attrCount; ++i) {
		$var($Attr, attr, $cast($Attr, attrMap->item(i)));
		$var($String, value, $nc(attr)->getValue());
		if (value == nullptr) {
			$init($XMLSymbols);
			$assign(value, $XMLSymbols::EMPTY_STRING);
		}
		fillQName(this->fAttributeQName, attr);
		$init($XMLSymbols);
		$nc(this->fAttributes)->addAttributeNS(this->fAttributeQName, $XMLSymbols::fCDATASymbol, value);
		$nc(this->fAttributes)->setSpecified(i, attr->getSpecified());
		$init($NamespaceContext);
		if ($nc(this->fAttributeQName)->uri == $NamespaceContext::XMLNS_URI) {
			if ($nc(this->fAttributeQName)->prefix == $XMLSymbols::PREFIX_XMLNS) {
				$nc(this->fNamespaceContext)->declarePrefix($nc(this->fAttributeQName)->localpart, $nc(value)->length() != 0 ? $($nc(this->fSymbolTable)->addSymbol(value)) : ($String*)nullptr);
			} else {
				$nc(this->fNamespaceContext)->declarePrefix($XMLSymbols::EMPTY_STRING, $nc(value)->length() != 0 ? $($nc(this->fSymbolTable)->addSymbol(value)) : ($String*)nullptr);
			}
		}
	}
}

void DOMValidatorHelper::sendCharactersToValidator($String* str) {
	if (str != nullptr) {
		int32_t length = str->length();
		int32_t remainder = (int32_t)(length & (uint32_t)DOMValidatorHelper::CHUNK_MASK);
		if (remainder > 0) {
			str->getChars(0, remainder, this->fCharBuffer, 0);
			$nc(this->fTempString)->setValues(this->fCharBuffer, 0, remainder);
			$nc(this->fSchemaValidator)->characters(this->fTempString, nullptr);
		}
		int32_t i = remainder;
		while (i < length) {
			int32_t var$0 = i;
			str->getChars(var$0, i += DOMValidatorHelper::CHUNK_SIZE, this->fCharBuffer, 0);
			$nc(this->fTempString)->setValues(this->fCharBuffer, 0, DOMValidatorHelper::CHUNK_SIZE);
			$nc(this->fSchemaValidator)->characters(this->fTempString, nullptr);
		}
	}
}

$Node* DOMValidatorHelper::getCurrentElement() {
	return this->fCurrentElement;
}

DOMValidatorHelper::DOMValidatorHelper() {
}

void clinit$DOMValidatorHelper($Class* class$) {
	$init($Constants);
	$assignStatic(DOMValidatorHelper::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(DOMValidatorHelper::NAMESPACE_CONTEXT, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::NAMESPACE_CONTEXT_PROPERTY}));
	$assignStatic(DOMValidatorHelper::SCHEMA_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_VALIDATOR_PROPERTY}));
	$assignStatic(DOMValidatorHelper::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(DOMValidatorHelper::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
}

$Class* DOMValidatorHelper::load$($String* name, bool initialize) {
	$loadClass(DOMValidatorHelper, name, initialize, &_DOMValidatorHelper_ClassInfo_, clinit$DOMValidatorHelper, allocate$DOMValidatorHelper);
	return class$;
}

$Class* DOMValidatorHelper::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com