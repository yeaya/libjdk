#include <com/sun/org/apache/xerces/internal/dom/DOMNormalizer.h>
#include <com/sun/org/apache/xerces/internal/dom/AbortException.h>
#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/AttributeMap.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMConfigurationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMErrorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMLocatorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMNormalizer$XMLAttributesProxy.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/EntityReferenceImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIAttrNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <com/sun/org/apache/xerces/internal/dom/TextImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/RevalidationHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>
#include <com/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XML11Char.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <java/io/IOException.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Entity.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef ATTRIBUTE_DECLARED
#undef ATTRIBUTE_PSVI
#undef CDATA
#undef CDATA_SECTION_NODE
#undef COMMENTS
#undef COMMENT_NODE
#undef DEBUG
#undef DEBUG_EVENTS
#undef DEBUG_ND
#undef DOCUMENT_TYPE_NODE
#undef DOM_DOMAIN
#undef DOM_ERROR_HANDLER
#undef DTNORMALIZATION
#undef ELEMENT_NODE
#undef ELEMENT_PSVI
#undef EMPTY_STRING
#undef ENTITIES
#undef ENTITY_NODE
#undef ENTITY_REFERENCE_NODE
#undef JAXP_SCHEMA_LANGUAGE
#undef JAXP_SCHEMA_SOURCE
#undef NAMESPACES
#undef NSDECL
#undef NS_XMLSCHEMA
#undef PREFIX
#undef PREFIX_XMLNS
#undef PROCESSING_INSTRUCTION_NODE
#undef PSVI
#undef SCHEMA
#undef SCHEMA_FULL_CHECKING
#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING
#undef SPLITCDATA
#undef SYMBOL_TABLE
#undef TEXT_NODE
#undef TRUE
#undef VALIDATE
#undef WELLFORMED
#undef XERCES_VALIDATION
#undef XMLNS_URI
#undef XML_DOMAIN
#undef XML_DTD
#undef XML_SCHEMA

using $AbortException = ::com::sun::org::apache::xerces::internal::dom::AbortException;
using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $AttributeMap = ::com::sun::org::apache::xerces::internal::dom::AttributeMap;
using $CoreDOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMConfigurationImpl = ::com::sun::org::apache::xerces::internal::dom::DOMConfigurationImpl;
using $DOMErrorImpl = ::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl;
using $DOMLocatorImpl = ::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DOMNormalizer$XMLAttributesProxy = ::com::sun::org::apache::xerces::internal::dom::DOMNormalizer$XMLAttributesProxy;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
using $ElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::ElementNSImpl;
using $EntityReferenceImpl = ::com::sun::org::apache::xerces::internal::dom::EntityReferenceImpl;
using $PSVIAttrNSImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIAttrNSImpl;
using $PSVIElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIElementNSImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $TextImpl = ::com::sun::org::apache::xerces::internal::dom::TextImpl;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLDTDLoader = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader;
using $XMLDTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $SimpleLocator = ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $ParserConfigurationSettings = ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XML11Char = ::com::sun::org::apache::xerces::internal::util::XML11Char;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ArrayList = ::java::util::ArrayList;
using $Attr = ::org::w3c::dom::Attr;
using $Comment = ::org::w3c::dom::Comment;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $Entity = ::org::w3c::dom::Entity;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $Text = ::org::w3c::dom::Text;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$String* DOMNormalizer::PREFIX = nullptr;
$XMLString* DOMNormalizer::EMPTY_STRING = nullptr;

void DOMNormalizer::init$() {
	$set(this, fConfiguration, nullptr);
	$set(this, fDocument, nullptr);
	$set(this, fAttrProxy, $new($DOMNormalizer$XMLAttributesProxy, this));
	$set(this, fQName, $new($QName));
	$set(this, fError, $new($DOMErrorImpl));
	this->fNamespaceValidation = false;
	this->fPSVI = false;
	$set(this, fNamespaceContext, $new($NamespaceSupport));
	$set(this, fLocalNSBinder, $new($NamespaceSupport));
	$set(this, fAttributeList, $new($ArrayList, 5));
	$set(this, fLocator, $new($DOMLocatorImpl));
	$set(this, fCurrentNode, nullptr);
	$set(this, fAttrQName, $new($QName));
	$set(this, fNormalizedValue, $new($XMLString, $$new($chars, 16), 0, 0));
	this->fAllWhitespace = false;
}

void DOMNormalizer::normalizeDocument($CoreDocumentImpl* document, $DOMConfigurationImpl* config) {
	$useLocalObjectStack();
	$set(this, fDocument, document);
	$set(this, fConfiguration, config);
	this->fAllWhitespace = false;
	this->fNamespaceValidation = false;
	$var($String, xmlVersion, $nc(this->fDocument)->getXmlVersion());
	$var($String, schemaType, nullptr);
	$var($StringArray, schemaLocations, nullptr);
	$init($DOMConfigurationImpl);
	$set(this, fSymbolTable, $cast($SymbolTable, $nc(this->fConfiguration)->getProperty($DOMConfigurationImpl::SYMBOL_TABLE)));
	this->fNamespaceContext->reset();
	$init($XMLSymbols);
	this->fNamespaceContext->declarePrefix($XMLSymbols::EMPTY_STRING, nullptr);
	if (($nc(this->fConfiguration)->features & $DOMConfigurationImpl::VALIDATE) != 0) {
		$var($String, schemaLang, $cast($String, this->fConfiguration->getProperty($DOMConfigurationImpl::JAXP_SCHEMA_LANGUAGE)));
		$init($Constants);
		if (schemaLang != nullptr && schemaLang->equals($Constants::NS_XMLSCHEMA)) {
			$init($XMLGrammarDescription);
			$assign(schemaType, $XMLGrammarDescription::XML_SCHEMA);
			$init($CoreDOMImplementationImpl);
			$set(this, fValidationHandler, $nc($CoreDOMImplementationImpl::singleton)->getValidator(schemaType, xmlVersion));
			$nc(this->fConfiguration)->setFeature($DOMConfigurationImpl::SCHEMA, true);
			$nc(this->fConfiguration)->setFeature($DOMConfigurationImpl::SCHEMA_FULL_CHECKING, true);
			this->fNamespaceValidation = true;
			this->fPSVI = (($nc(this->fConfiguration)->features & $DOMConfigurationImpl::PSVI) != 0) ? true : false;
		} else {
			$init($XMLGrammarDescription);
			$assign(schemaType, $XMLGrammarDescription::XML_DTD);
			if (schemaLang != nullptr) {
				$assign(schemaLocations, $cast($StringArray, $nc(this->fConfiguration)->getProperty($DOMConfigurationImpl::JAXP_SCHEMA_SOURCE)));
			}
			$nc(this->fConfiguration)->setDTDValidatorFactory(xmlVersion);
			$init($CoreDOMImplementationImpl);
			$set(this, fValidationHandler, $nc($CoreDOMImplementationImpl::singleton)->getValidator(schemaType, xmlVersion));
			this->fPSVI = false;
		}
		$nc(this->fConfiguration)->setFeature($DOMConfigurationImpl::XERCES_VALIDATION, true);
		$nc(this->fDocument)->clearIdentifiers();
		if (this->fValidationHandler != nullptr) {
			$cast($XMLComponent, this->fValidationHandler)->reset($cast($ParserConfigurationSettings, this->fConfiguration));
		}
	} else {
		$set(this, fValidationHandler, nullptr);
	}
	$init($Constants);
	$set(this, fErrorHandler, $cast($DOMErrorHandler, $nc(this->fConfiguration)->getParameter($Constants::DOM_ERROR_HANDLER)));
	if (this->fValidationHandler != nullptr) {
		this->fValidationHandler->setDocumentHandler(this);
		$nc(this->fValidationHandler)->startDocument($$new($SimpleLocator, $nc(this->fDocument)->fDocumentURI, $nc(this->fDocument)->fDocumentURI, -1, -1), $nc(this->fDocument)->encoding, this->fNamespaceContext, nullptr);
		$var($String, var$0, $nc(this->fDocument)->getXmlVersion());
		$var($String, var$1, this->fDocument->getXmlEncoding());
		$nc(this->fValidationHandler)->xmlDecl(var$0, var$1, this->fDocument->getXmlStandalone() ? "yes"_s : "no"_s, nullptr);
	}
	try {
		$init($XMLGrammarDescription);
		if (schemaType == $XMLGrammarDescription::XML_DTD) {
			processDTD(xmlVersion, schemaLocations != nullptr ? schemaLocations->get(0) : ($String*)nullptr);
		}
		$var($Node, kid, nullptr);
		$var($Node, next, nullptr);
		for ($assign(kid, $nc(this->fDocument)->getFirstChild()); kid != nullptr; $assign(kid, next)) {
			$assign(next, kid->getNextSibling());
			$assign(kid, normalizeNode(kid));
			if (kid != nullptr) {
				$assign(next, kid);
			}
		}
		if (this->fValidationHandler != nullptr) {
			this->fValidationHandler->endDocument(nullptr);
			$nc(this->fValidationHandler)->setDocumentHandler(nullptr);
			$init($CoreDOMImplementationImpl);
			$nc($CoreDOMImplementationImpl::singleton)->releaseValidator(schemaType, xmlVersion, this->fValidationHandler);
			$set(this, fValidationHandler, nullptr);
		}
	} catch ($RuntimeException& e) {
		if (this->fValidationHandler != nullptr) {
			this->fValidationHandler->setDocumentHandler(nullptr);
			$init($CoreDOMImplementationImpl);
			$nc($CoreDOMImplementationImpl::singleton)->releaseValidator(schemaType, xmlVersion, this->fValidationHandler);
			$set(this, fValidationHandler, nullptr);
		}
		if ($instanceOf($AbortException, e)) {
			return;
		}
		$throw(e);
	}
}

$Node* DOMNormalizer::normalizeNode($Node* node$renamed) {
	$useLocalObjectStack();
	$var($Node, node, node$renamed);
	int32_t type = $nc(node)->getNodeType();
	bool wellformed = false;
	$set(this->fLocator, fRelatedNode, node);
	switch (type) {
	case $Node::DOCUMENT_TYPE_NODE:
		{
			;
			break;
		}
	case $Node::ELEMENT_NODE:
		{
			;
			if ($nc(this->fDocument)->errorChecking) {
				if ((($nc(this->fConfiguration)->features & $DOMConfigurationImpl::WELLFORMED) != 0) && this->fDocument->isXMLVersionChanged()) {
					if (this->fNamespaceValidation) {
						$var($String, var$0, node->getPrefix());
						$var($String, var$1, node->getLocalName());
						wellformed = $CoreDocumentImpl::isValidQName(var$0, var$1, $nc(this->fDocument)->isXML11Version());
					} else {
						$var($String, var$2, node->getNodeName());
						wellformed = $CoreDocumentImpl::isXMLName(var$2, $nc(this->fDocument)->isXML11Version());
					}
					if (!wellformed) {
						$init($DOMMessageFormatter);
						$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "wf-invalid-character-in-node-name"_s, $$new($ObjectArray, {
							"Element"_s,
							$(node->getNodeName())
						})));
						reportDOMError(this->fErrorHandler, this->fError, this->fLocator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character-in-node-name"_s);
					}
				}
			}
			this->fNamespaceContext->pushContext();
			this->fLocalNSBinder->reset();
			$var($ElementImpl, elem, $cast($ElementImpl, node));
			if (elem->needsSyncChildren()) {
				elem->synchronizeChildren();
			}
			$var($AttributeMap, attributes, (elem->hasAttributes()) ? $cast($AttributeMap, elem->getAttributes()) : ($AttributeMap*)nullptr);
			if (($nc(this->fConfiguration)->features & $DOMConfigurationImpl::NAMESPACES) != 0) {
				namespaceFixUp(elem, attributes);
				if (($nc(this->fConfiguration)->features & $DOMConfigurationImpl::NSDECL) == 0) {
					if (attributes == nullptr) {
						$assign(attributes, (elem->hasAttributes()) ? $cast($AttributeMap, elem->getAttributes()) : ($AttributeMap*)nullptr);
					}
					if (attributes != nullptr) {
						for (int32_t i = 0; i < attributes->getLength(); ++i) {
							$var($Attr, att, $cast($Attr, attributes->getItem(i)));
							$init($XMLSymbols);
							bool var$3 = $nc($XMLSymbols::PREFIX_XMLNS)->equals($($nc(att)->getPrefix()));
							if (var$3 || $XMLSymbols::PREFIX_XMLNS->equals($(att->getName()))) {
								elem->removeAttributeNode(att);
								--i;
							}
						}
					}
				}
			} else if (attributes != nullptr) {
				for (int32_t i = 0; i < attributes->getLength(); ++i) {
					$var($Attr, attr, $cast($Attr, attributes->item(i)));
					$nc(attr)->normalize();
					if ($nc(this->fDocument)->errorChecking && (($nc(this->fConfiguration)->features & $DOMConfigurationImpl::WELLFORMED) != 0)) {
						$var($DOMErrorHandler, var$4, this->fErrorHandler);
						$var($DOMErrorImpl, var$5, this->fError);
						$var($DOMLocatorImpl, var$6, this->fLocator);
						$var($String, var$7, attr->getValue());
						isAttrValueWF(var$4, var$5, var$6, attributes, attr, var$7, this->fDocument->isXML11Version());
						if ($nc(this->fDocument)->isXMLVersionChanged()) {
							if (this->fNamespaceValidation) {
								$var($String, var$8, node->getPrefix());
								$var($String, var$9, node->getLocalName());
								wellformed = $CoreDocumentImpl::isValidQName(var$8, var$9, $nc(this->fDocument)->isXML11Version());
							} else {
								$var($String, var$10, node->getNodeName());
								wellformed = $CoreDocumentImpl::isXMLName(var$10, $nc(this->fDocument)->isXML11Version());
							}
							if (!wellformed) {
								$init($DOMMessageFormatter);
								$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "wf-invalid-character-in-node-name"_s, $$new($ObjectArray, {
									"Attr"_s,
									$(node->getNodeName())
								})));
								reportDOMError(this->fErrorHandler, this->fError, this->fLocator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character-in-node-name"_s);
							}
						}
					}
				}
			}
			if (this->fValidationHandler != nullptr) {
				this->fAttrProxy->setAttributes(attributes, this->fDocument, elem);
				updateQName($cast($ParentNode, elem), this->fQName);
				$set($nc($nc(this->fConfiguration)->fErrorHandlerWrapper), fCurrentNode, node);
				$set(this, fCurrentNode, node);
				$nc(this->fValidationHandler)->startElement(this->fQName, this->fAttrProxy, nullptr);
			}
			$var($Node, kid, nullptr);
			$var($Node, next, nullptr);
			for ($assign(kid, elem->getFirstChild()); kid != nullptr; $assign(kid, next)) {
				$assign(next, kid->getNextSibling());
				$assign(kid, normalizeNode(kid));
				if (kid != nullptr) {
					$assign(next, kid);
				}
			}
			;
			if (this->fValidationHandler != nullptr) {
				updateQName($cast($ParentNode, elem), this->fQName);
				$set($nc($nc(this->fConfiguration)->fErrorHandlerWrapper), fCurrentNode, node);
				$set(this, fCurrentNode, node);
				$nc(this->fValidationHandler)->endElement(this->fQName, nullptr);
			}
			this->fNamespaceContext->popContext();
			break;
		}
	case $Node::COMMENT_NODE:
		{
			;
			if (($nc(this->fConfiguration)->features & $DOMConfigurationImpl::COMMENTS) == 0) {
				$var($Node, prevSibling, node->getPreviousSibling());
				$var($Node, parent, node->getParentNode());
				$nc(parent)->removeChild(node);
				if (prevSibling != nullptr && prevSibling->getNodeType() == $Node::TEXT_NODE) {
					$var($Node, nextSibling, prevSibling->getNextSibling());
					if (nextSibling != nullptr && nextSibling->getNodeType() == $Node::TEXT_NODE) {
						$cast($TextImpl, nextSibling)->insertData(0, $(prevSibling->getNodeValue()));
						parent->removeChild(prevSibling);
						return nextSibling;
					}
				}
			} else {
				if ($nc(this->fDocument)->errorChecking && ((this->fConfiguration->features & $DOMConfigurationImpl::WELLFORMED) != 0)) {
					$var($String, commentdata, $cast($Comment, node)->getData());
					isCommentWF(this->fErrorHandler, this->fError, this->fLocator, commentdata, $nc(this->fDocument)->isXML11Version());
				}
				if (this->fValidationHandler != nullptr) {
					this->fValidationHandler->comment(DOMNormalizer::EMPTY_STRING, nullptr);
				}
			}
			break;
		}
	case $Node::ENTITY_REFERENCE_NODE:
		{
			;
			if (($nc(this->fConfiguration)->features & $DOMConfigurationImpl::ENTITIES) == 0) {
				$var($Node, prevSibling, node->getPreviousSibling());
				$var($Node, parent, node->getParentNode());
				$cast($EntityReferenceImpl, node)->setReadOnly(false, true);
				expandEntityRef(parent, node);
				$nc(parent)->removeChild(node);
				$var($Node, next, (prevSibling != nullptr) ? prevSibling->getNextSibling() : parent->getFirstChild());
				bool var$11 = prevSibling != nullptr && next != nullptr && prevSibling->getNodeType() == $Node::TEXT_NODE;
				if (var$11 && next->getNodeType() == $Node::TEXT_NODE) {
					return prevSibling;
				}
				return next;
			} else if ($nc(this->fDocument)->errorChecking && ((this->fConfiguration->features & $DOMConfigurationImpl::WELLFORMED) != 0) && this->fDocument->isXMLVersionChanged()) {
				$var($String, var$12, node->getNodeName());
				$CoreDocumentImpl::isXMLName(var$12, $nc(this->fDocument)->isXML11Version());
			}
			break;
		}
	case $Node::CDATA_SECTION_NODE:
		{
			;
			if (($nc(this->fConfiguration)->features & $DOMConfigurationImpl::CDATA) == 0) {
				$var($Node, prevSibling, $nc(node)->getPreviousSibling());
				if (prevSibling != nullptr && prevSibling->getNodeType() == $Node::TEXT_NODE) {
					$cast($Text, prevSibling)->appendData($(node->getNodeValue()));
					$$nc(node->getParentNode())->removeChild(node);
					return prevSibling;
				} else {
					$var($Text, text, $nc(this->fDocument)->createTextNode($(node->getNodeValue())));
					$var($Node, parent, node->getParentNode());
					$assign(node, $nc(parent)->replaceChild(text, node));
					return text;
				}
			}
			if (this->fValidationHandler != nullptr) {
				$set($nc($nc(this->fConfiguration)->fErrorHandlerWrapper), fCurrentNode, node);
				$set(this, fCurrentNode, node);
				this->fValidationHandler->startCDATA(nullptr);
				$nc(this->fValidationHandler)->characterData($($nc(node)->getNodeValue()), nullptr);
				$nc(this->fValidationHandler)->endCDATA(nullptr);
			}
			$var($String, value, $nc(node)->getNodeValue());
			if (($nc(this->fConfiguration)->features & $DOMConfigurationImpl::SPLITCDATA) != 0) {
				int32_t index = 0;
				$var($Node, parent, node->getParentNode());
				if ($nc(this->fDocument)->errorChecking) {
					$var($DOMErrorHandler, var$13, this->fErrorHandler);
					$var($DOMErrorImpl, var$14, this->fError);
					$var($DOMLocatorImpl, var$15, this->fLocator);
					$var($String, var$16, node->getNodeValue());
					isXMLCharWF(var$13, var$14, var$15, var$16, this->fDocument->isXML11Version());
				}
				while ((index = $nc(value)->indexOf("]]>"_s)) >= 0) {
					$nc(node)->setNodeValue($(value->substring(0, index + 2)));
					$assign(value, value->substring(index + 2));
					$var($Node, firstSplitNode, node);
					$var($Node, newChild, $nc(this->fDocument)->createCDATASection(value));
					$nc(parent)->insertBefore(newChild, $(node->getNextSibling()));
					$assign(node, newChild);
					$set(this->fLocator, fRelatedNode, firstSplitNode);
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "cdata-sections-splitted"_s, nullptr));
					reportDOMError(this->fErrorHandler, this->fError, this->fLocator, msg, $DOMError::SEVERITY_WARNING, "cdata-sections-splitted"_s);
				}
			} else if ($nc(this->fDocument)->errorChecking) {
				isCDataWF(this->fErrorHandler, this->fError, this->fLocator, value, this->fDocument->isXML11Version());
			}
			break;
		}
	case $Node::TEXT_NODE:
		{
			;
			$var($Node, next, $nc(node)->getNextSibling());
			if (next != nullptr && next->getNodeType() == $Node::TEXT_NODE) {
				$cast($Text, node)->appendData($(next->getNodeValue()));
				$$nc(node->getParentNode())->removeChild(next);
				return node;
			} else if ($$nc(node->getNodeValue())->length() == 0) {
				$$nc(node->getParentNode())->removeChild(node);
			} else {
				int16_t nextType = (next != nullptr) ? next->getNodeType() : -1;
				if (nextType == -1 || !((($nc(this->fConfiguration)->features & $DOMConfigurationImpl::ENTITIES) == 0 && nextType == $Node::ENTITY_NODE) || ((this->fConfiguration->features & $DOMConfigurationImpl::COMMENTS) == 0 && nextType == $Node::COMMENT_NODE) || ((this->fConfiguration->features & $DOMConfigurationImpl::CDATA) == 0) && nextType == $Node::CDATA_SECTION_NODE)) {
					if ($nc(this->fDocument)->errorChecking && (($nc(this->fConfiguration)->features & $DOMConfigurationImpl::WELLFORMED) != 0)) {
						$var($DOMErrorHandler, var$17, this->fErrorHandler);
						$var($DOMErrorImpl, var$18, this->fError);
						$var($DOMLocatorImpl, var$19, this->fLocator);
						$var($String, var$20, node->getNodeValue());
						isXMLCharWF(var$17, var$18, var$19, var$20, this->fDocument->isXML11Version());
					}
					if (this->fValidationHandler != nullptr) {
						$set($nc($nc(this->fConfiguration)->fErrorHandlerWrapper), fCurrentNode, node);
						$set(this, fCurrentNode, node);
						this->fValidationHandler->characterData($(node->getNodeValue()), nullptr);
						if (!this->fNamespaceValidation) {
							if (this->fAllWhitespace) {
								this->fAllWhitespace = false;
								$cast($TextImpl, node)->setIgnorableWhitespace(true);
							} else {
								$cast($TextImpl, node)->setIgnorableWhitespace(false);
							}
						}
						;
					}
				} else {
					;
				}
			}
			break;
		}
	case $Node::PROCESSING_INSTRUCTION_NODE:
		{
			if ($nc(this->fDocument)->errorChecking && ($nc(this->fConfiguration)->features & $DOMConfigurationImpl::WELLFORMED) != 0) {
				$var($ProcessingInstruction, pinode, $cast($ProcessingInstruction, node));
				$var($String, target, $nc(pinode)->getTarget());
				if ($nc(this->fDocument)->isXML11Version()) {
					wellformed = $XML11Char::isXML11ValidName(target);
				} else {
					wellformed = $XMLChar::isValidName(target);
				}
				if (!wellformed) {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "wf-invalid-character-in-node-name"_s, $$new($ObjectArray, {
						"Element"_s,
						$($nc(node)->getNodeName())
					})));
					reportDOMError(this->fErrorHandler, this->fError, this->fLocator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character-in-node-name"_s);
				}
				$var($DOMErrorHandler, var$21, this->fErrorHandler);
				$var($DOMErrorImpl, var$22, this->fError);
				$var($DOMLocatorImpl, var$23, this->fLocator);
				$var($String, var$24, pinode->getData());
				isXMLCharWF(var$21, var$22, var$23, var$24, $nc(this->fDocument)->isXML11Version());
			}
			if (this->fValidationHandler != nullptr) {
				this->fValidationHandler->processingInstruction($($nc($cast($ProcessingInstruction, node))->getTarget()), DOMNormalizer::EMPTY_STRING, nullptr);
			}
		}
	}
	return nullptr;
}

void DOMNormalizer::processDTD($String* xmlVersion, $String* schemaLocation) {
	$useLocalObjectStack();
	$var($String, rootName, nullptr);
	$var($String, publicId, nullptr);
	$var($String, systemId, schemaLocation);
	$var($String, baseSystemId, $nc(this->fDocument)->getDocumentURI());
	$var($String, internalSubset, nullptr);
	$var($DocumentType, docType, $nc(this->fDocument)->getDoctype());
	if (docType != nullptr) {
		$assign(rootName, docType->getName());
		$assign(publicId, docType->getPublicId());
		if (systemId == nullptr || systemId->length() == 0) {
			$assign(systemId, docType->getSystemId());
		}
		$assign(internalSubset, docType->getInternalSubset());
	} else {
		$var($Element, elem, $nc(this->fDocument)->getDocumentElement());
		if (elem == nullptr) {
			return;
		}
		$assign(rootName, $nc(elem)->getNodeName());
		if (systemId == nullptr || systemId->length() == 0) {
			return;
		}
	}
	$var($XMLDTDLoader, loader, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$nc(this->fValidationHandler)->doctypeDecl(rootName, publicId, systemId, nullptr);
			$init($CoreDOMImplementationImpl);
			$assign(loader, $nc($CoreDOMImplementationImpl::singleton)->getDTDLoader(xmlVersion));
			$init($DOMConfigurationImpl);
			$nc(loader)->setFeature($DOMConfigurationImpl::XERCES_VALIDATION, true);
			loader->setEntityResolver($($nc(this->fConfiguration)->getEntityResolver()));
			loader->setErrorHandler($($nc(this->fConfiguration)->getErrorHandler()));
			loader->loadGrammarWithContext($cast($XMLDTDValidator, this->fValidationHandler), rootName, publicId, systemId, baseSystemId, internalSubset);
		} catch ($IOException& e) {
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (loader != nullptr) {
			$init($CoreDOMImplementationImpl);
			$nc($CoreDOMImplementationImpl::singleton)->releaseDTDLoader(xmlVersion, loader);
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void DOMNormalizer::expandEntityRef($Node* parent, $Node* reference) {
	$useLocalObjectStack();
	$var($Node, kid, nullptr);
	$var($Node, next, nullptr);
	for ($assign(kid, $nc(reference)->getFirstChild()); kid != nullptr; $assign(kid, next)) {
		$assign(next, kid->getNextSibling());
		$nc(parent)->insertBefore(kid, reference);
	}
}

void DOMNormalizer::namespaceFixUp($ElementImpl* element, $AttributeMap* attributes) {
	$useLocalObjectStack();
	;
	$var($String, value, nullptr);
	$var($String, uri, nullptr);
	$var($String, prefix, nullptr);
	if (attributes != nullptr) {
		for (int32_t k = 0; k < attributes->getLength(); ++k) {
			$var($Attr, attr, $cast($Attr, attributes->getItem(k)));
			$assign(uri, $nc(attr)->getNamespaceURI());
			$init($NamespaceContext);
			if (uri != nullptr && uri->equals($NamespaceContext::XMLNS_URI)) {
				$assign(value, attr->getNodeValue());
				if (value == nullptr) {
					$init($XMLSymbols);
					$assign(value, $XMLSymbols::EMPTY_STRING);
				}
				if ($nc(this->fDocument)->errorChecking && $nc(value)->equals($NamespaceContext::XMLNS_URI)) {
					$set(this->fLocator, fRelatedNode, attr);
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::XML_DOMAIN, "CantBindXMLNS"_s, nullptr));
					reportDOMError(this->fErrorHandler, this->fError, this->fLocator, msg, $DOMError::SEVERITY_ERROR, "CantBindXMLNS"_s);
				} else {
					$assign(prefix, attr->getPrefix());
					$init($XMLSymbols);
					$assign(prefix, (prefix == nullptr || prefix->length() == 0) ? $XMLSymbols::EMPTY_STRING : $nc(this->fSymbolTable)->addSymbol(prefix));
					$var($String, localpart, $nc(this->fSymbolTable)->addSymbol($(attr->getLocalName())));
					if (prefix == $XMLSymbols::PREFIX_XMLNS) {
						$assign(value, $nc(this->fSymbolTable)->addSymbol(value));
						if ($nc(value)->length() != 0) {
							this->fNamespaceContext->declarePrefix(localpart, value);
						} else {
						}
						continue;
					} else {
						$assign(value, $nc(this->fSymbolTable)->addSymbol(value));
						this->fNamespaceContext->declarePrefix($XMLSymbols::EMPTY_STRING, $nc(value)->length() != 0 ? value : ($String*)nullptr);
						continue;
					}
				}
			}
		}
	}
	$assign(uri, $nc(element)->getNamespaceURI());
	$assign(prefix, element->getPrefix());
	if (uri != nullptr) {
		$assign(uri, $nc(this->fSymbolTable)->addSymbol(uri));
		$init($XMLSymbols);
		$assign(prefix, (prefix == nullptr || prefix->length() == 0) ? $XMLSymbols::EMPTY_STRING : $nc(this->fSymbolTable)->addSymbol(prefix));
		if (this->fNamespaceContext->getURI(prefix) == uri) {
		} else {
			addNamespaceDecl(prefix, uri, element);
			this->fLocalNSBinder->declarePrefix(prefix, uri);
			this->fNamespaceContext->declarePrefix(prefix, uri);
		}
	} else if (element->getLocalName() == nullptr) {
		if (this->fNamespaceValidation) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NullLocalElementName"_s, $$new($ObjectArray, {$(element->getNodeName())})));
			reportDOMError(this->fErrorHandler, this->fError, this->fLocator, msg, $DOMError::SEVERITY_FATAL_ERROR, "NullLocalElementName"_s);
		} else {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NullLocalElementName"_s, $$new($ObjectArray, {$(element->getNodeName())})));
			reportDOMError(this->fErrorHandler, this->fError, this->fLocator, msg, $DOMError::SEVERITY_ERROR, "NullLocalElementName"_s);
		}
	} else {
		$init($XMLSymbols);
		$assign(uri, this->fNamespaceContext->getURI($XMLSymbols::EMPTY_STRING));
		if (uri != nullptr && uri->length() > 0) {
			addNamespaceDecl($XMLSymbols::EMPTY_STRING, $XMLSymbols::EMPTY_STRING, element);
			this->fLocalNSBinder->declarePrefix($XMLSymbols::EMPTY_STRING, nullptr);
			this->fNamespaceContext->declarePrefix($XMLSymbols::EMPTY_STRING, nullptr);
		}
	}
	if (attributes != nullptr) {
		attributes->cloneMap(this->fAttributeList);
		for (int32_t i = 0; i < this->fAttributeList->size(); ++i) {
			$var($Attr, attr, $cast($Attr, this->fAttributeList->get(i)));
			$set(this->fLocator, fRelatedNode, attr);
			;
			$nc(attr)->normalize();
			$assign(value, attr->getValue());
			$assign(uri, attr->getNamespaceURI());
			if (value == nullptr) {
				$init($XMLSymbols);
				$assign(value, $XMLSymbols::EMPTY_STRING);
			}
			if ($nc(this->fDocument)->errorChecking && (($nc(this->fConfiguration)->features & $DOMConfigurationImpl::WELLFORMED) != 0)) {
				isAttrValueWF(this->fErrorHandler, this->fError, this->fLocator, attributes, attr, value, this->fDocument->isXML11Version());
				if ($nc(this->fDocument)->isXMLVersionChanged()) {
					bool wellformed = false;
					if (this->fNamespaceValidation) {
						$var($String, var$0, attr->getPrefix());
						$var($String, var$1, attr->getLocalName());
						wellformed = $CoreDocumentImpl::isValidQName(var$0, var$1, $nc(this->fDocument)->isXML11Version());
					} else {
						$var($String, var$2, attr->getNodeName());
						wellformed = $CoreDocumentImpl::isXMLName(var$2, $nc(this->fDocument)->isXML11Version());
					}
					if (!wellformed) {
						$init($DOMMessageFormatter);
						$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "wf-invalid-character-in-node-name"_s, $$new($ObjectArray, {
							"Attr"_s,
							$(attr->getNodeName())
						})));
						reportDOMError(this->fErrorHandler, this->fError, this->fLocator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character-in-node-name"_s);
					}
				}
			}
			if (uri != nullptr) {
				$assign(prefix, attr->getPrefix());
				$init($XMLSymbols);
				$assign(prefix, (prefix == nullptr || prefix->length() == 0) ? $XMLSymbols::EMPTY_STRING : $nc(this->fSymbolTable)->addSymbol(prefix));
				$nc(this->fSymbolTable)->addSymbol($(attr->getLocalName()));
				$init($NamespaceContext);
				if (uri != nullptr && uri->equals($NamespaceContext::XMLNS_URI)) {
					continue;
				}
				$cast($AttrImpl, attr)->setIdAttribute(false);
				$assign(uri, $nc(this->fSymbolTable)->addSymbol(uri));
				$var($String, declaredURI, this->fNamespaceContext->getURI(prefix));
				if (prefix == $XMLSymbols::EMPTY_STRING || declaredURI != uri) {
					$var($String, declaredPrefix, this->fNamespaceContext->getPrefix(uri));
					if (declaredPrefix != nullptr && declaredPrefix != $XMLSymbols::EMPTY_STRING) {
						$assign(prefix, declaredPrefix);
					} else {
						if (prefix != $XMLSymbols::EMPTY_STRING && this->fLocalNSBinder->getURI(prefix) == nullptr) {
						} else {
							int32_t counter = 1;
							$assign(prefix, $nc(this->fSymbolTable)->addSymbol($$str({DOMNormalizer::PREFIX, $$str(counter++)})));
							while (this->fLocalNSBinder->getURI(prefix) != nullptr) {
								$assign(prefix, $nc(this->fSymbolTable)->addSymbol($$str({DOMNormalizer::PREFIX, $$str(counter++)})));
							}
						}
						addNamespaceDecl(prefix, uri, element);
						$assign(value, $nc(this->fSymbolTable)->addSymbol(value));
						this->fLocalNSBinder->declarePrefix(prefix, value);
						this->fNamespaceContext->declarePrefix(prefix, uri);
					}
					attr->setPrefix(prefix);
				}
			} else {
				$cast($AttrImpl, attr)->setIdAttribute(false);
				if (attr->getLocalName() == nullptr) {
					if (this->fNamespaceValidation) {
						$init($DOMMessageFormatter);
						$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NullLocalAttrName"_s, $$new($ObjectArray, {$(attr->getNodeName())})));
						reportDOMError(this->fErrorHandler, this->fError, this->fLocator, msg, $DOMError::SEVERITY_FATAL_ERROR, "NullLocalAttrName"_s);
					} else {
						$init($DOMMessageFormatter);
						$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NullLocalAttrName"_s, $$new($ObjectArray, {$(attr->getNodeName())})));
						reportDOMError(this->fErrorHandler, this->fError, this->fLocator, msg, $DOMError::SEVERITY_ERROR, "NullLocalAttrName"_s);
					}
				} else {
				}
			}
		}
	}
}

void DOMNormalizer::addNamespaceDecl($String* prefix, $String* uri, $ElementImpl* element) {
	;
	$init($XMLSymbols);
	if (prefix == $XMLSymbols::EMPTY_STRING) {
		;
		$init($NamespaceContext);
		$nc(element)->setAttributeNS($NamespaceContext::XMLNS_URI, $XMLSymbols::PREFIX_XMLNS, uri);
	} else {
		;
		$init($NamespaceContext);
		$nc(element)->setAttributeNS($NamespaceContext::XMLNS_URI, $$str({"xmlns:"_s, prefix}), uri);
	}
}

void DOMNormalizer::isCDataWF($DOMErrorHandler* errorHandler, $DOMErrorImpl* error, $DOMLocatorImpl* locator, $String* datavalue, bool isXML11Version) {
	$init(DOMNormalizer);
	$useLocalObjectStack();
	if (datavalue == nullptr || (datavalue->length() == 0)) {
		return;
	}
	$var($chars, dataarray, $nc(datavalue)->toCharArray());
	int32_t datalength = dataarray->length;
	if (isXML11Version) {
		int32_t i = 0;
		while (i < datalength) {
			char16_t c = dataarray->get(i++);
			if ($XML11Char::isXML11Invalid(c)) {
				if ($XMLChar::isHighSurrogate(c) && i < datalength) {
					char16_t c2 = dataarray->get(i++);
					bool var$0 = $XMLChar::isLowSurrogate(c2);
					if (var$0 && $XMLChar::isSupplemental($XMLChar::supplemental(c, c2))) {
						continue;
					}
				}
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::XML_DOMAIN, "InvalidCharInCDSect"_s, $$new($ObjectArray, {$($Integer::toString(c, 16))})));
				reportDOMError(errorHandler, error, locator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character"_s);
			} else if (c == u']') {
				int32_t count = i;
				if (count < datalength && dataarray->get(count) == u']') {
					while (true) {
						bool var$1 = ++count < datalength;
						if (!(var$1 && dataarray->get(count) == u']')) {
							break;
						}
						{
						}
					}
					if (count < datalength && dataarray->get(count) == u'>') {
						$init($DOMMessageFormatter);
						$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::XML_DOMAIN, "CDEndInContent"_s, nullptr));
						reportDOMError(errorHandler, error, locator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character"_s);
					}
				}
			}
		}
	} else {
		int32_t i = 0;
		while (i < datalength) {
			char16_t c = dataarray->get(i++);
			if ($XMLChar::isInvalid(c)) {
				if ($XMLChar::isHighSurrogate(c) && i < datalength) {
					char16_t c2 = dataarray->get(i++);
					bool var$2 = $XMLChar::isLowSurrogate(c2);
					if (var$2 && $XMLChar::isSupplemental($XMLChar::supplemental(c, c2))) {
						continue;
					}
				}
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::XML_DOMAIN, "InvalidCharInCDSect"_s, $$new($ObjectArray, {$($Integer::toString(c, 16))})));
				reportDOMError(errorHandler, error, locator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character"_s);
			} else if (c == u']') {
				int32_t count = i;
				if (count < datalength && dataarray->get(count) == u']') {
					while (true) {
						bool var$3 = ++count < datalength;
						if (!(var$3 && dataarray->get(count) == u']')) {
							break;
						}
						{
						}
					}
					if (count < datalength && dataarray->get(count) == u'>') {
						$init($DOMMessageFormatter);
						$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::XML_DOMAIN, "CDEndInContent"_s, nullptr));
						reportDOMError(errorHandler, error, locator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character"_s);
					}
				}
			}
		}
	}
}

void DOMNormalizer::isXMLCharWF($DOMErrorHandler* errorHandler, $DOMErrorImpl* error, $DOMLocatorImpl* locator, $String* datavalue, bool isXML11Version) {
	$init(DOMNormalizer);
	$useLocalObjectStack();
	if (datavalue == nullptr || (datavalue->length() == 0)) {
		return;
	}
	$var($chars, dataarray, $nc(datavalue)->toCharArray());
	int32_t datalength = dataarray->length;
	if (isXML11Version) {
		int32_t i = 0;
		while (i < datalength) {
			if ($XML11Char::isXML11Invalid(dataarray->get(i++))) {
				char16_t ch = dataarray->get(i - 1);
				if ($XMLChar::isHighSurrogate(ch) && i < datalength) {
					char16_t ch2 = dataarray->get(i++);
					bool var$0 = $XMLChar::isLowSurrogate(ch2);
					if (var$0 && $XMLChar::isSupplemental($XMLChar::supplemental(ch, ch2))) {
						continue;
					}
				}
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "InvalidXMLCharInDOM"_s, $$new($ObjectArray, {$($Integer::toString(dataarray->get(i - 1), 16))})));
				reportDOMError(errorHandler, error, locator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character"_s);
			}
		}
	} else {
		int32_t i = 0;
		while (i < datalength) {
			if ($XMLChar::isInvalid(dataarray->get(i++))) {
				char16_t ch = dataarray->get(i - 1);
				if ($XMLChar::isHighSurrogate(ch) && i < datalength) {
					char16_t ch2 = dataarray->get(i++);
					bool var$1 = $XMLChar::isLowSurrogate(ch2);
					if (var$1 && $XMLChar::isSupplemental($XMLChar::supplemental(ch, ch2))) {
						continue;
					}
				}
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "InvalidXMLCharInDOM"_s, $$new($ObjectArray, {$($Integer::toString(dataarray->get(i - 1), 16))})));
				reportDOMError(errorHandler, error, locator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character"_s);
			}
		}
	}
}

void DOMNormalizer::isCommentWF($DOMErrorHandler* errorHandler, $DOMErrorImpl* error, $DOMLocatorImpl* locator, $String* datavalue, bool isXML11Version) {
	$init(DOMNormalizer);
	$useLocalObjectStack();
	if (datavalue == nullptr || (datavalue->length() == 0)) {
		return;
	}
	$var($chars, dataarray, $nc(datavalue)->toCharArray());
	int32_t datalength = dataarray->length;
	if (isXML11Version) {
		int32_t i = 0;
		while (i < datalength) {
			char16_t c = dataarray->get(i++);
			if ($XML11Char::isXML11Invalid(c)) {
				if ($XMLChar::isHighSurrogate(c) && i < datalength) {
					char16_t c2 = dataarray->get(i++);
					bool var$0 = $XMLChar::isLowSurrogate(c2);
					if (var$0 && $XMLChar::isSupplemental($XMLChar::supplemental(c, c2))) {
						continue;
					}
				}
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::XML_DOMAIN, "InvalidCharInComment"_s, $$new($ObjectArray, {$($Integer::toString(dataarray->get(i - 1), 16))})));
				reportDOMError(errorHandler, error, locator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character"_s);
			} else if (c == u'-' && i < datalength && dataarray->get(i) == u'-') {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::XML_DOMAIN, "DashDashInComment"_s, nullptr));
				reportDOMError(errorHandler, error, locator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character"_s);
			}
		}
	} else {
		int32_t i = 0;
		while (i < datalength) {
			char16_t c = dataarray->get(i++);
			if ($XMLChar::isInvalid(c)) {
				if ($XMLChar::isHighSurrogate(c) && i < datalength) {
					char16_t c2 = dataarray->get(i++);
					bool var$1 = $XMLChar::isLowSurrogate(c2);
					if (var$1 && $XMLChar::isSupplemental($XMLChar::supplemental(c, c2))) {
						continue;
					}
				}
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::XML_DOMAIN, "InvalidCharInComment"_s, $$new($ObjectArray, {$($Integer::toString(dataarray->get(i - 1), 16))})));
				reportDOMError(errorHandler, error, locator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character"_s);
			} else if (c == u'-' && i < datalength && dataarray->get(i) == u'-') {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::XML_DOMAIN, "DashDashInComment"_s, nullptr));
				reportDOMError(errorHandler, error, locator, msg, $DOMError::SEVERITY_ERROR, "wf-invalid-character"_s);
			}
		}
	}
}

void DOMNormalizer::isAttrValueWF($DOMErrorHandler* errorHandler, $DOMErrorImpl* error, $DOMLocatorImpl* locator, $NamedNodeMap* attributes, $Attr* a, $String* value, bool xml11Version) {
	$init(DOMNormalizer);
	$useLocalObjectStack();
	if ($instanceOf($AttrImpl, a) && $cast($AttrImpl, a)->hasStringValue()) {
		isXMLCharWF(errorHandler, error, locator, value, xml11Version);
	} else {
		$var($NodeList, children, $nc(a)->getChildNodes());
		for (int32_t j = 0; j < $nc(children)->getLength(); ++j) {
			$var($Node, child, children->item(j));
			if ($nc(child)->getNodeType() == $Node::ENTITY_REFERENCE_NODE) {
				$var($Document, owner, a->getOwnerDocument());
				$var($Entity, ent, nullptr);
				if (owner != nullptr) {
					$var($DocumentType, docType, owner->getDoctype());
					if (docType != nullptr) {
						$var($NamedNodeMap, entities, docType->getEntities());
						$assign(ent, $cast($Entity, $nc(entities)->getNamedItemNS("*"_s, $(child->getNodeName()))));
					}
				}
				if (ent == nullptr) {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "UndeclaredEntRefInAttrValue"_s, $$new($ObjectArray, {$(a->getNodeName())})));
					reportDOMError(errorHandler, error, locator, msg, $DOMError::SEVERITY_ERROR, "UndeclaredEntRefInAttrValue"_s);
				}
			} else {
				isXMLCharWF(errorHandler, error, locator, $(child->getNodeValue()), xml11Version);
			}
		}
	}
}

void DOMNormalizer::reportDOMError($DOMErrorHandler* errorHandler, $DOMErrorImpl* error, $DOMLocatorImpl* locator, $String* message, int16_t severity, $String* type) {
	$init(DOMNormalizer);
	if (errorHandler != nullptr) {
		$nc(error)->reset();
		$set(error, fMessage, message);
		error->fSeverity = severity;
		$set(error, fLocator, locator);
		$set(error, fType, type);
		$set(error, fRelatedData, $nc(locator)->fRelatedNode);
		if (!errorHandler->handleError(error)) {
			$throwNew($AbortException);
		}
	}
	if (severity == $DOMError::SEVERITY_FATAL_ERROR) {
		$throwNew($AbortException);
	}
}

void DOMNormalizer::updateQName($Node* node, $QName* qname) {
	$useLocalObjectStack();
	$var($String, prefix, $nc(node)->getPrefix());
	$var($String, namespace$, node->getNamespaceURI());
	$var($String, localName, node->getLocalName());
	$set($nc(qname), prefix, (prefix != nullptr && prefix->length() != 0) ? $nc(this->fSymbolTable)->addSymbol(prefix) : ($String*)nullptr);
	$set(qname, localpart, (localName != nullptr) ? $nc(this->fSymbolTable)->addSymbol(localName) : ($String*)nullptr);
	$set(qname, rawname, $nc(this->fSymbolTable)->addSymbol($(node->getNodeName())));
	$set(qname, uri, (namespace$ != nullptr) ? $nc(this->fSymbolTable)->addSymbol(namespace$) : ($String*)nullptr);
}

$String* DOMNormalizer::normalizeAttributeValue($String* value$renamed, $Attr* attr) {
	$var($String, value, value$renamed);
	if (!$nc(attr)->getSpecified()) {
		return value;
	}
	int32_t end = $nc(value)->length();
	if ($nc(this->fNormalizedValue->ch)->length < end) {
		$set(this->fNormalizedValue, ch, $new($chars, end));
	}
	this->fNormalizedValue->length = 0;
	bool normalized = false;
	for (int32_t i = 0; i < end; ++i) {
		char16_t c = value->charAt(i);
		if (c == 9 || c == 10) {
			this->fNormalizedValue->ch->set(this->fNormalizedValue->length++, u' ');
			normalized = true;
		} else if (c == 13) {
			normalized = true;
			this->fNormalizedValue->ch->set(this->fNormalizedValue->length++, u' ');
			int32_t next = i + 1;
			if (next < end && value->charAt(next) == 10) {
				i = next;
			}
		} else {
			this->fNormalizedValue->ch->set(this->fNormalizedValue->length++, c);
		}
	}
	if (normalized) {
		$assign(value, this->fNormalizedValue->toString());
		attr->setValue(value);
	}
	return value;
}

void DOMNormalizer::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
}

void DOMNormalizer::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
}

void DOMNormalizer::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
}

void DOMNormalizer::comment($XMLString* text, $Augmentations* augs) {
}

void DOMNormalizer::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
}

void DOMNormalizer::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$useLocalObjectStack();
	$var($Element, currentElement, $cast($Element, this->fCurrentNode));
	int32_t attrCount = $nc(attributes)->getLength();
	;
	for (int32_t i = 0; i < attrCount; ++i) {
		attributes->getName(i, this->fAttrQName);
		$var($Attr, attr, nullptr);
		$assign(attr, $nc(currentElement)->getAttributeNodeNS(this->fAttrQName->uri, this->fAttrQName->localpart));
		if (attr == nullptr) {
			$assign(attr, currentElement->getAttributeNode(this->fAttrQName->rawname));
		}
		$init($Constants);
		$var($AttributePSVI, attrPSVI, $cast($AttributePSVI, $$nc(attributes->getAugmentations(i))->getItem($Constants::ATTRIBUTE_PSVI)));
		if (attrPSVI != nullptr) {
			$var($XSTypeDefinition, decl, attrPSVI->getMemberTypeDefinition());
			bool id = false;
			if (decl != nullptr) {
				id = $cast($XSSimpleType, decl)->isIDType();
			} else {
				$assign(decl, attrPSVI->getTypeDefinition());
				if (decl != nullptr) {
					id = $cast($XSSimpleType, decl)->isIDType();
				}
			}
			if (id) {
				$cast($ElementImpl, currentElement)->setIdAttributeNode(attr, true);
			}
			if (this->fPSVI) {
				$nc($cast($PSVIAttrNSImpl, attr))->setPSVI(attrPSVI);
			}
			$nc($cast($AttrImpl, attr))->setType(decl);
			if (($nc(this->fConfiguration)->features & $DOMConfigurationImpl::DTNORMALIZATION) != 0) {
				$var($String, normalizedValue, $$nc(attrPSVI->getSchemaValue())->getNormalizedValue());
				if (normalizedValue != nullptr) {
					bool specified = attr->getSpecified();
					attr->setValue(normalizedValue);
					if (!specified) {
						$cast($AttrImpl, attr)->setSpecified(specified);
					}
				}
			}
		} else {
			$var($String, type, nullptr);
			bool isDeclared = $nc($Boolean::TRUE)->equals($($$nc(attributes->getAugmentations(i))->getItem($Constants::ATTRIBUTE_DECLARED)));
			if (isDeclared) {
				$assign(type, attributes->getType(i));
				if ("ID"_s->equals(type)) {
					$cast($ElementImpl, currentElement)->setIdAttributeNode(attr, true);
				}
			}
			$nc($cast($AttrImpl, attr))->setType(type);
		}
	}
}

void DOMNormalizer::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	;
	startElement(element, attributes, augs);
	endElement(element, augs);
}

void DOMNormalizer::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
}

void DOMNormalizer::textDecl($String* version, $String* encoding, $Augmentations* augs) {
}

void DOMNormalizer::endGeneralEntity($String* name, $Augmentations* augs) {
}

void DOMNormalizer::characters($XMLString* text, $Augmentations* augs) {
}

void DOMNormalizer::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	this->fAllWhitespace = true;
}

void DOMNormalizer::endElement($QName* element, $Augmentations* augs) {
	$useLocalObjectStack();
	;
	if (augs != nullptr) {
		$init($Constants);
		$var($ElementPSVI, elementPSVI, $cast($ElementPSVI, augs->getItem($Constants::ELEMENT_PSVI)));
		if (elementPSVI != nullptr) {
			$var($ElementImpl, elementNode, $cast($ElementImpl, this->fCurrentNode));
			if (this->fPSVI) {
				$nc($cast($PSVIElementNSImpl, this->fCurrentNode))->setPSVI(elementPSVI);
			}
			if ($instanceOf($ElementNSImpl, elementNode)) {
				$var($XSTypeDefinition, type, elementPSVI->getMemberTypeDefinition());
				if (type == nullptr) {
					$assign(type, elementPSVI->getTypeDefinition());
				}
				$cast($ElementNSImpl, elementNode)->setType(type);
			}
			$var($String, normalizedValue, $$nc(elementPSVI->getSchemaValue())->getNormalizedValue());
			if (($nc(this->fConfiguration)->features & $DOMConfigurationImpl::DTNORMALIZATION) != 0) {
				if (normalizedValue != nullptr) {
					$nc(elementNode)->setTextContent(normalizedValue);
				}
			} else {
				$var($String, text, $nc(elementNode)->getTextContent());
				if ($nc(text)->length() == 0) {
					if (normalizedValue != nullptr) {
						elementNode->setTextContent(normalizedValue);
					}
				}
			}
			return;
		}
	}
	if ($instanceOf($ElementNSImpl, this->fCurrentNode)) {
		$cast($ElementNSImpl, this->fCurrentNode)->setType(nullptr);
	}
}

void DOMNormalizer::startCDATA($Augmentations* augs) {
}

void DOMNormalizer::endCDATA($Augmentations* augs) {
}

void DOMNormalizer::endDocument($Augmentations* augs) {
}

void DOMNormalizer::setDocumentSource($XMLDocumentSource* source) {
}

$XMLDocumentSource* DOMNormalizer::getDocumentSource() {
	return nullptr;
}

void DOMNormalizer::clinit$($Class* clazz) {
	$assignStatic(DOMNormalizer::PREFIX, "NS"_s);
	$assignStatic(DOMNormalizer::EMPTY_STRING, $new($XMLString));
}

DOMNormalizer::DOMNormalizer() {
}

$Class* DOMNormalizer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEBUG_ND", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMNormalizer, DEBUG_ND)},
		{"DEBUG", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMNormalizer, DEBUG)},
		{"DEBUG_EVENTS", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMNormalizer, DEBUG_EVENTS)},
		{"PREFIX", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DOMNormalizer, PREFIX)},
		{"fConfiguration", "Lcom/sun/org/apache/xerces/internal/dom/DOMConfigurationImpl;", nullptr, $PROTECTED, $field(DOMNormalizer, fConfiguration)},
		{"fDocument", "Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;", nullptr, $PROTECTED, $field(DOMNormalizer, fDocument)},
		{"fAttrProxy", "Lcom/sun/org/apache/xerces/internal/dom/DOMNormalizer$XMLAttributesProxy;", nullptr, $PROTECTED | $FINAL, $field(DOMNormalizer, fAttrProxy)},
		{"fQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PROTECTED | $FINAL, $field(DOMNormalizer, fQName)},
		{"fValidationHandler", "Lcom/sun/org/apache/xerces/internal/impl/RevalidationHandler;", nullptr, $PROTECTED, $field(DOMNormalizer, fValidationHandler)},
		{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(DOMNormalizer, fSymbolTable)},
		{"fErrorHandler", "Lorg/w3c/dom/DOMErrorHandler;", nullptr, $PROTECTED, $field(DOMNormalizer, fErrorHandler)},
		{"fError", "Lcom/sun/org/apache/xerces/internal/dom/DOMErrorImpl;", nullptr, $PRIVATE | $FINAL, $field(DOMNormalizer, fError)},
		{"fNamespaceValidation", "Z", nullptr, $PROTECTED, $field(DOMNormalizer, fNamespaceValidation)},
		{"fPSVI", "Z", nullptr, $PROTECTED, $field(DOMNormalizer, fPSVI)},
		{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PROTECTED | $FINAL, $field(DOMNormalizer, fNamespaceContext)},
		{"fLocalNSBinder", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PROTECTED | $FINAL, $field(DOMNormalizer, fLocalNSBinder)},
		{"fAttributeList", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/Node;>;", $PROTECTED | $FINAL, $field(DOMNormalizer, fAttributeList)},
		{"fLocator", "Lcom/sun/org/apache/xerces/internal/dom/DOMLocatorImpl;", nullptr, $PROTECTED | $FINAL, $field(DOMNormalizer, fLocator)},
		{"fCurrentNode", "Lorg/w3c/dom/Node;", nullptr, $PROTECTED, $field(DOMNormalizer, fCurrentNode)},
		{"fAttrQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(DOMNormalizer, fAttrQName)},
		{"fNormalizedValue", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $FINAL, $field(DOMNormalizer, fNormalizedValue)},
		{"fDTDValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator;", nullptr, $PRIVATE, $field(DOMNormalizer, fDTDValidator)},
		{"EMPTY_STRING", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMNormalizer, EMPTY_STRING)},
		{"fAllWhitespace", "Z", nullptr, $PRIVATE, $field(DOMNormalizer, fAllWhitespace)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DOMNormalizer, init$, void)},
		{"addNamespaceDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/dom/ElementImpl;)V", nullptr, $PROTECTED | $FINAL, $method(DOMNormalizer, addNamespaceDecl, void, $String*, $String*, $ElementImpl*)},
		{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, doctypeDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, endGeneralEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"expandEntityRef", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED | $FINAL, $method(DOMNormalizer, expandEntityRef, void, $Node*, $Node*)},
		{"getDocumentSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, getDocumentSource, $XMLDocumentSource*)},
		{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"isAttrValueWF", "(Lorg/w3c/dom/DOMErrorHandler;Lcom/sun/org/apache/xerces/internal/dom/DOMErrorImpl;Lcom/sun/org/apache/xerces/internal/dom/DOMLocatorImpl;Lorg/w3c/dom/NamedNodeMap;Lorg/w3c/dom/Attr;Ljava/lang/String;Z)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(DOMNormalizer, isAttrValueWF, void, $DOMErrorHandler*, $DOMErrorImpl*, $DOMLocatorImpl*, $NamedNodeMap*, $Attr*, $String*, bool)},
		{"isCDataWF", "(Lorg/w3c/dom/DOMErrorHandler;Lcom/sun/org/apache/xerces/internal/dom/DOMErrorImpl;Lcom/sun/org/apache/xerces/internal/dom/DOMLocatorImpl;Ljava/lang/String;Z)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(DOMNormalizer, isCDataWF, void, $DOMErrorHandler*, $DOMErrorImpl*, $DOMLocatorImpl*, $String*, bool)},
		{"isCommentWF", "(Lorg/w3c/dom/DOMErrorHandler;Lcom/sun/org/apache/xerces/internal/dom/DOMErrorImpl;Lcom/sun/org/apache/xerces/internal/dom/DOMLocatorImpl;Ljava/lang/String;Z)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(DOMNormalizer, isCommentWF, void, $DOMErrorHandler*, $DOMErrorImpl*, $DOMLocatorImpl*, $String*, bool)},
		{"isXMLCharWF", "(Lorg/w3c/dom/DOMErrorHandler;Lcom/sun/org/apache/xerces/internal/dom/DOMErrorImpl;Lcom/sun/org/apache/xerces/internal/dom/DOMLocatorImpl;Ljava/lang/String;Z)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(DOMNormalizer, isXMLCharWF, void, $DOMErrorHandler*, $DOMErrorImpl*, $DOMLocatorImpl*, $String*, bool)},
		{"namespaceFixUp", "(Lcom/sun/org/apache/xerces/internal/dom/ElementImpl;Lcom/sun/org/apache/xerces/internal/dom/AttributeMap;)V", nullptr, $PROTECTED | $FINAL, $method(DOMNormalizer, namespaceFixUp, void, $ElementImpl*, $AttributeMap*)},
		{"normalizeAttributeValue", "(Ljava/lang/String;Lorg/w3c/dom/Attr;)Ljava/lang/String;", nullptr, $FINAL, $method(DOMNormalizer, normalizeAttributeValue, $String*, $String*, $Attr*)},
		{"normalizeDocument", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Lcom/sun/org/apache/xerces/internal/dom/DOMConfigurationImpl;)V", nullptr, $PROTECTED, $virtualMethod(DOMNormalizer, normalizeDocument, void, $CoreDocumentImpl*, $DOMConfigurationImpl*)},
		{"normalizeNode", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PROTECTED, $virtualMethod(DOMNormalizer, normalizeNode, $Node*, $Node*)},
		{"processDTD", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(DOMNormalizer, processDTD, void, $String*, $String*)},
		{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"reportDOMError", "(Lorg/w3c/dom/DOMErrorHandler;Lcom/sun/org/apache/xerces/internal/dom/DOMErrorImpl;Lcom/sun/org/apache/xerces/internal/dom/DOMLocatorImpl;Ljava/lang/String;SLjava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(DOMNormalizer, reportDOMError, void, $DOMErrorHandler*, $DOMErrorImpl*, $DOMLocatorImpl*, $String*, int16_t, $String*)},
		{"setDocumentSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, setDocumentSource, void, $XMLDocumentSource*)},
		{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, startGeneralEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"updateQName", "(Lorg/w3c/dom/Node;Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PROTECTED | $FINAL, $method(DOMNormalizer, updateQName, void, $Node*, $QName*)},
		{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DOMNormalizer, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.dom.DOMNormalizer$XMLAttributesProxy", "com.sun.org.apache.xerces.internal.dom.DOMNormalizer", "XMLAttributesProxy", $PROTECTED | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.DOMNormalizer",
		"java.lang.Object",
		"com.sun.org.apache.xerces.internal.xni.XMLDocumentHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.dom.DOMNormalizer$XMLAttributesProxy"
	};
	$loadClass(DOMNormalizer, name, initialize, &classInfo$$, DOMNormalizer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DOMNormalizer);
	});
	return class$;
}

$Class* DOMNormalizer::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com