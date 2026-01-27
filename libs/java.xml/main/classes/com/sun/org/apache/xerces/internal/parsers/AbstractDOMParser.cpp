#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMErrorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentTypeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementDefinitionImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/EntityImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/EntityReferenceImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NotationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIAttrNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <com/sun/org/apache/xerces/internal/dom/TextImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser$Abort.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractXMLDocumentParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/XMLParser.h>
#include <com/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/util/Locale.h>
#include <java/util/Stack.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Entity.h>
#include <org/w3c/dom/EntityReference.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Notation.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/ls/LSParserFilter.h>
#include <org/w3c/dom/traversal/NodeFilter.h>
#include <jcpp.h>

#undef ATTRIBUTE_DECLARED
#undef ATTRIBUTE_PSVI
#undef CORE_DOCUMENT_CLASS_NAME
#undef CREATE_CDATA_NODES_FEATURE
#undef CREATE_ENTITY_REF_NODES
#undef CREATE_ENTITY_REF_NODES_FEATURE
#undef CURRENT_ELEMENT_NODE
#undef CURRENT_ELEMENT_NODE_PROPERTY
#undef DEBUG_BASEURI
#undef DEBUG_EVENTS
#undef DEFAULT_DOCUMENT_CLASS_NAME
#undef DEFER_NODE_EXPANSION
#undef DEFER_NODE_EXPANSION_FEATURE
#undef DOCUMENT_CLASS_NAME
#undef DOCUMENT_CLASS_NAME_PROPERTY
#undef DOM_DOMAIN
#undef ELEMENT_NODE
#undef ELEMENT_PSVI
#undef ENTITY_NODE
#undef ENTITY_SKIPPED
#undef FALSE
#undef FILTER_INTERRUPT
#undef FILTER_REJECT
#undef FILTER_SKIP
#undef INCLUDE_COMMENTS_FEATURE
#undef INCLUDE_IGNORABLE_WHITESPACE
#undef INSTANCE
#undef NAMESPACES
#undef NAMESPACES_FEATURE
#undef NOTATION_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef PSVI_DOCUMENT_CLASS_NAME
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef SAX_FEATURE_PREFIX
#undef SEVERITY_WARNING
#undef SHOW_CDATA_SECTION
#undef SHOW_COMMENT
#undef SHOW_ELEMENT
#undef SHOW_ENTITY_REFERENCE
#undef SHOW_PROCESSING_INSTRUCTION
#undef SHOW_TEXT
#undef TEXT_NODE
#undef TRUE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLNS_URI
#undef XML_URI

using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMErrorImpl = ::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DeferredDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDocumentImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $DocumentTypeImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentTypeImpl;
using $ElementDefinitionImpl = ::com::sun::org::apache::xerces::internal::dom::ElementDefinitionImpl;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
using $ElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::ElementNSImpl;
using $EntityImpl = ::com::sun::org::apache::xerces::internal::dom::EntityImpl;
using $EntityReferenceImpl = ::com::sun::org::apache::xerces::internal::dom::EntityReferenceImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $NotationImpl = ::com::sun::org::apache::xerces::internal::dom::NotationImpl;
using $PSVIAttrNSImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIAttrNSImpl;
using $PSVIDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIDocumentImpl;
using $PSVIElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIElementNSImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $TextImpl = ::com::sun::org::apache::xerces::internal::dom::TextImpl;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $AbstractDOMParser$Abort = ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser$Abort;
using $AbstractXMLDocumentParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser;
using $DOMErrorHandlerWrapper = ::com::sun::org::apache::xerces::internal::util::DOMErrorHandlerWrapper;
using $ObjectFactory = ::com::sun::org::apache::xerces::internal::utils::ObjectFactory;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;
using $Locale = ::java::util::Locale;
using $Stack = ::java::util::Stack;
using $Attr = ::org::w3c::dom::Attr;
using $CDATASection = ::org::w3c::dom::CDATASection;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Comment = ::org::w3c::dom::Comment;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $EntityReference = ::org::w3c::dom::EntityReference;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $Text = ::org::w3c::dom::Text;
using $LSParserFilter = ::org::w3c::dom::ls::LSParserFilter;
using $NodeFilter = ::org::w3c::dom::traversal::NodeFilter;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _AbstractDOMParser_FieldInfo_[] = {
	{"NAMESPACES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDOMParser, NAMESPACES)},
	{"CREATE_ENTITY_REF_NODES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDOMParser, CREATE_ENTITY_REF_NODES)},
	{"INCLUDE_COMMENTS_FEATURE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDOMParser, INCLUDE_COMMENTS_FEATURE)},
	{"CREATE_CDATA_NODES_FEATURE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDOMParser, CREATE_CDATA_NODES_FEATURE)},
	{"INCLUDE_IGNORABLE_WHITESPACE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDOMParser, INCLUDE_IGNORABLE_WHITESPACE)},
	{"DEFER_NODE_EXPANSION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDOMParser, DEFER_NODE_EXPANSION)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractDOMParser, RECOGNIZED_FEATURES)},
	{"DOCUMENT_CLASS_NAME", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDOMParser, DOCUMENT_CLASS_NAME)},
	{"CURRENT_ELEMENT_NODE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDOMParser, CURRENT_ELEMENT_NODE)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractDOMParser, RECOGNIZED_PROPERTIES)},
	{"DEFAULT_DOCUMENT_CLASS_NAME", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDOMParser, DEFAULT_DOCUMENT_CLASS_NAME)},
	{"CORE_DOCUMENT_CLASS_NAME", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDOMParser, CORE_DOCUMENT_CLASS_NAME)},
	{"PSVI_DOCUMENT_CLASS_NAME", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDOMParser, PSVI_DOCUMENT_CLASS_NAME)},
	{"DEBUG_EVENTS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractDOMParser, DEBUG_EVENTS)},
	{"DEBUG_BASEURI", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractDOMParser, DEBUG_BASEURI)},
	{"fErrorHandler", "Lcom/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper;", nullptr, $PROTECTED, $field(AbstractDOMParser, fErrorHandler)},
	{"fInDTD", "Z", nullptr, $PROTECTED, $field(AbstractDOMParser, fInDTD)},
	{"fCreateEntityRefNodes", "Z", nullptr, $PROTECTED, $field(AbstractDOMParser, fCreateEntityRefNodes)},
	{"fIncludeIgnorableWhitespace", "Z", nullptr, $PROTECTED, $field(AbstractDOMParser, fIncludeIgnorableWhitespace)},
	{"fIncludeComments", "Z", nullptr, $PROTECTED, $field(AbstractDOMParser, fIncludeComments)},
	{"fCreateCDATANodes", "Z", nullptr, $PROTECTED, $field(AbstractDOMParser, fCreateCDATANodes)},
	{"fDocument", "Lorg/w3c/dom/Document;", nullptr, $PROTECTED, $field(AbstractDOMParser, fDocument)},
	{"fDocumentImpl", "Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;", nullptr, $PROTECTED, $field(AbstractDOMParser, fDocumentImpl)},
	{"fStorePSVI", "Z", nullptr, $PROTECTED, $field(AbstractDOMParser, fStorePSVI)},
	{"fDocumentClassName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AbstractDOMParser, fDocumentClassName)},
	{"fDocumentType", "Lorg/w3c/dom/DocumentType;", nullptr, $PROTECTED, $field(AbstractDOMParser, fDocumentType)},
	{"fCurrentNode", "Lorg/w3c/dom/Node;", nullptr, $PROTECTED, $field(AbstractDOMParser, fCurrentNode)},
	{"fCurrentCDATASection", "Lorg/w3c/dom/CDATASection;", nullptr, $PROTECTED, $field(AbstractDOMParser, fCurrentCDATASection)},
	{"fCurrentEntityDecl", "Lcom/sun/org/apache/xerces/internal/dom/EntityImpl;", nullptr, $PROTECTED, $field(AbstractDOMParser, fCurrentEntityDecl)},
	{"fDeferredEntityDecl", "I", nullptr, $PROTECTED, $field(AbstractDOMParser, fDeferredEntityDecl)},
	{"fStringBuilder", "Ljava/lang/StringBuilder;", nullptr, $PROTECTED | $FINAL, $field(AbstractDOMParser, fStringBuilder)},
	{"fInternalSubset", "Ljava/lang/StringBuilder;", nullptr, $PROTECTED, $field(AbstractDOMParser, fInternalSubset)},
	{"fDeferNodeExpansion", "Z", nullptr, $PROTECTED, $field(AbstractDOMParser, fDeferNodeExpansion)},
	{"fNamespaceAware", "Z", nullptr, $PROTECTED, $field(AbstractDOMParser, fNamespaceAware)},
	{"fDeferredDocumentImpl", "Lcom/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl;", nullptr, $PROTECTED, $field(AbstractDOMParser, fDeferredDocumentImpl)},
	{"fDocumentIndex", "I", nullptr, $PROTECTED, $field(AbstractDOMParser, fDocumentIndex)},
	{"fDocumentTypeIndex", "I", nullptr, $PROTECTED, $field(AbstractDOMParser, fDocumentTypeIndex)},
	{"fCurrentNodeIndex", "I", nullptr, $PROTECTED, $field(AbstractDOMParser, fCurrentNodeIndex)},
	{"fCurrentCDATASectionIndex", "I", nullptr, $PROTECTED, $field(AbstractDOMParser, fCurrentCDATASectionIndex)},
	{"fInDTDExternalSubset", "Z", nullptr, $PROTECTED, $field(AbstractDOMParser, fInDTDExternalSubset)},
	{"fRoot", "Lorg/w3c/dom/Node;", nullptr, $PROTECTED, $field(AbstractDOMParser, fRoot)},
	{"fInCDATASection", "Z", nullptr, $PROTECTED, $field(AbstractDOMParser, fInCDATASection)},
	{"fFirstChunk", "Z", nullptr, $PROTECTED, $field(AbstractDOMParser, fFirstChunk)},
	{"fFilterReject", "Z", nullptr, $PROTECTED, $field(AbstractDOMParser, fFilterReject)},
	{"fBaseURIStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/lang/String;>;", $PROTECTED | $FINAL, $field(AbstractDOMParser, fBaseURIStack)},
	{"fRejectedElementDepth", "I", nullptr, $PROTECTED, $field(AbstractDOMParser, fRejectedElementDepth)},
	{"fSkippedElemStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/lang/Boolean;>;", $PROTECTED, $field(AbstractDOMParser, fSkippedElemStack)},
	{"fInEntityRef", "Z", nullptr, $PROTECTED, $field(AbstractDOMParser, fInEntityRef)},
	{"fAttrQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(AbstractDOMParser, fAttrQName)},
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PRIVATE, $field(AbstractDOMParser, fLocator)},
	{"fDOMFilter", "Lorg/w3c/dom/ls/LSParserFilter;", nullptr, $PROTECTED, $field(AbstractDOMParser, fDOMFilter)},
	{}
};

$MethodInfo _AbstractDOMParser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;)V", nullptr, $PROTECTED, $method(AbstractDOMParser, init$, void, $XMLParserConfiguration*)},
	{"abort", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, abort, void)},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, attributeDecl, void, $String*, $String*, $String*, $StringArray*, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"createAttrNode", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Lorg/w3c/dom/Attr;", nullptr, $PROTECTED, $virtualMethod(AbstractDOMParser, createAttrNode, $Attr*, $QName*)},
	{"createElementNode", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Lorg/w3c/dom/Element;", nullptr, $PROTECTED, $virtualMethod(AbstractDOMParser, createElementNode, $Element*, $QName*)},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, doctypeDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"dropDocumentReferences", "()V", nullptr, $PUBLIC | $FINAL, $method(AbstractDOMParser, dropDocumentReferences, void)},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, elementDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endAttlist", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, endAttlist, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endConditional", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, endConditional, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDTD", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, endDTD, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, endExternalSubset, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, endGeneralEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, endParameterEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"externalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, externalEntityDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, getDocument, $Document*)},
	{"getDocumentClassName", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(AbstractDOMParser, getDocumentClassName, $String*)},
	{"handleBaseURI", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED | $FINAL, $method(AbstractDOMParser, handleBaseURI, void, $Node*)},
	{"handleBaseURI", "(I)V", nullptr, $PROTECTED | $FINAL, $method(AbstractDOMParser, handleBaseURI, void, int32_t)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"ignoredCharacters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, ignoredCharacters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"internalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, internalEntityDecl, void, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"notationDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, notationDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, reset, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setCharacterData", "(Z)V", nullptr, $PROTECTED, $virtualMethod(AbstractDOMParser, setCharacterData, void, bool)},
	{"setDocumentClassName", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(AbstractDOMParser, setDocumentClassName, void, $String*)},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, setLocale, void, $Locale*)},
	{"startAttlist", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, startAttlist, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startConditional", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, startConditional, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDTD", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, startDTD, void, $XMLLocator*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, startExternalSubset, void, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, startGeneralEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, startParameterEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"unparsedEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, unparsedEntityDecl, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _AbstractDOMParser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser$Abort", "com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser", "Abort", $STATIC | $FINAL},
	{}
};

$ClassInfo _AbstractDOMParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser",
	"com.sun.org.apache.xerces.internal.parsers.AbstractXMLDocumentParser",
	nullptr,
	_AbstractDOMParser_FieldInfo_,
	_AbstractDOMParser_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDOMParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser$Abort"
};

$Object* allocate$AbstractDOMParser($Class* clazz) {
	return $of($alloc(AbstractDOMParser));
}

$String* AbstractDOMParser::NAMESPACES = nullptr;
$String* AbstractDOMParser::CREATE_ENTITY_REF_NODES = nullptr;
$String* AbstractDOMParser::INCLUDE_COMMENTS_FEATURE = nullptr;
$String* AbstractDOMParser::CREATE_CDATA_NODES_FEATURE = nullptr;
$String* AbstractDOMParser::INCLUDE_IGNORABLE_WHITESPACE = nullptr;
$String* AbstractDOMParser::DEFER_NODE_EXPANSION = nullptr;
$StringArray* AbstractDOMParser::RECOGNIZED_FEATURES = nullptr;
$String* AbstractDOMParser::DOCUMENT_CLASS_NAME = nullptr;
$String* AbstractDOMParser::CURRENT_ELEMENT_NODE = nullptr;
$StringArray* AbstractDOMParser::RECOGNIZED_PROPERTIES = nullptr;
$String* AbstractDOMParser::DEFAULT_DOCUMENT_CLASS_NAME = nullptr;
$String* AbstractDOMParser::CORE_DOCUMENT_CLASS_NAME = nullptr;
$String* AbstractDOMParser::PSVI_DOCUMENT_CLASS_NAME = nullptr;

void AbstractDOMParser::init$($XMLParserConfiguration* config) {
	$AbstractXMLDocumentParser::init$(config);
	$set(this, fErrorHandler, nullptr);
	$set(this, fStringBuilder, $new($StringBuilder, 50));
	this->fFirstChunk = false;
	this->fFilterReject = false;
	$set(this, fBaseURIStack, $new($Stack));
	this->fRejectedElementDepth = 0;
	$set(this, fSkippedElemStack, nullptr);
	this->fInEntityRef = false;
	$set(this, fAttrQName, $new($QName));
	$set(this, fDOMFilter, nullptr);
	$nc(this->fConfiguration)->addRecognizedFeatures(AbstractDOMParser::RECOGNIZED_FEATURES);
	$nc(this->fConfiguration)->setFeature(AbstractDOMParser::CREATE_ENTITY_REF_NODES, true);
	$nc(this->fConfiguration)->setFeature(AbstractDOMParser::INCLUDE_IGNORABLE_WHITESPACE, true);
	$nc(this->fConfiguration)->setFeature(AbstractDOMParser::DEFER_NODE_EXPANSION, true);
	$nc(this->fConfiguration)->setFeature(AbstractDOMParser::INCLUDE_COMMENTS_FEATURE, true);
	$nc(this->fConfiguration)->setFeature(AbstractDOMParser::CREATE_CDATA_NODES_FEATURE, true);
	$nc(this->fConfiguration)->addRecognizedProperties(AbstractDOMParser::RECOGNIZED_PROPERTIES);
	$nc(this->fConfiguration)->setProperty(AbstractDOMParser::DOCUMENT_CLASS_NAME, AbstractDOMParser::DEFAULT_DOCUMENT_CLASS_NAME);
}

$String* AbstractDOMParser::getDocumentClassName() {
	return this->fDocumentClassName;
}

void AbstractDOMParser::setDocumentClassName($String* documentClassName$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, documentClassName, documentClassName$renamed);
	if (documentClassName == nullptr) {
		$assign(documentClassName, AbstractDOMParser::DEFAULT_DOCUMENT_CLASS_NAME);
	}
	bool var$0 = !$nc(documentClassName)->equals(AbstractDOMParser::DEFAULT_DOCUMENT_CLASS_NAME);
	if (var$0 && !documentClassName->equals(AbstractDOMParser::PSVI_DOCUMENT_CLASS_NAME)) {
		try {
			$Class* _class = $ObjectFactory::findProviderClass(documentClassName, true);
			$load($Document);
			if (!$Document::class$->isAssignableFrom(_class)) {
				$init($DOMMessageFormatter);
				$throwNew($IllegalArgumentException, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "InvalidDocumentClassName"_s, $$new($ObjectArray, {$of(documentClassName)}))));
			}
		} catch ($ClassNotFoundException& e) {
			$init($DOMMessageFormatter);
			$throwNew($IllegalArgumentException, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "MissingDocumentClassName"_s, $$new($ObjectArray, {$of(documentClassName)}))));
		}
	}
	$set(this, fDocumentClassName, documentClassName);
	if (!$nc(documentClassName)->equals(AbstractDOMParser::DEFAULT_DOCUMENT_CLASS_NAME)) {
		this->fDeferNodeExpansion = false;
	}
}

$Document* AbstractDOMParser::getDocument() {
	return this->fDocument;
}

void AbstractDOMParser::dropDocumentReferences() {
	$set(this, fDocument, nullptr);
	$set(this, fDocumentImpl, nullptr);
	$set(this, fDeferredDocumentImpl, nullptr);
	$set(this, fDocumentType, nullptr);
	$set(this, fCurrentNode, nullptr);
	$set(this, fCurrentCDATASection, nullptr);
	$set(this, fCurrentEntityDecl, nullptr);
	$set(this, fRoot, nullptr);
}

void AbstractDOMParser::reset() {
	$AbstractXMLDocumentParser::reset();
	this->fCreateEntityRefNodes = $nc(this->fConfiguration)->getFeature(AbstractDOMParser::CREATE_ENTITY_REF_NODES);
	this->fIncludeIgnorableWhitespace = $nc(this->fConfiguration)->getFeature(AbstractDOMParser::INCLUDE_IGNORABLE_WHITESPACE);
	this->fDeferNodeExpansion = $nc(this->fConfiguration)->getFeature(AbstractDOMParser::DEFER_NODE_EXPANSION);
	this->fNamespaceAware = $nc(this->fConfiguration)->getFeature(AbstractDOMParser::NAMESPACES);
	this->fIncludeComments = $nc(this->fConfiguration)->getFeature(AbstractDOMParser::INCLUDE_COMMENTS_FEATURE);
	this->fCreateCDATANodes = $nc(this->fConfiguration)->getFeature(AbstractDOMParser::CREATE_CDATA_NODES_FEATURE);
	setDocumentClassName($cast($String, $($nc(this->fConfiguration)->getProperty(AbstractDOMParser::DOCUMENT_CLASS_NAME))));
	$set(this, fDocument, nullptr);
	$set(this, fDocumentImpl, nullptr);
	this->fStorePSVI = false;
	$set(this, fDocumentType, nullptr);
	this->fDocumentTypeIndex = -1;
	$set(this, fDeferredDocumentImpl, nullptr);
	$set(this, fCurrentNode, nullptr);
	$nc(this->fStringBuilder)->setLength(0);
	$set(this, fRoot, nullptr);
	this->fInDTD = false;
	this->fInDTDExternalSubset = false;
	this->fInCDATASection = false;
	this->fFirstChunk = false;
	$set(this, fCurrentCDATASection, nullptr);
	this->fCurrentCDATASectionIndex = -1;
	$nc(this->fBaseURIStack)->removeAllElements();
}

void AbstractDOMParser::setLocale($Locale* locale) {
	$nc(this->fConfiguration)->setLocale(locale);
}

void AbstractDOMParser::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (!this->fDeferNodeExpansion) {
		if (this->fFilterReject) {
			return;
		}
		setCharacterData(true);
		$var($EntityReference, er, $nc(this->fDocument)->createEntityReference(name));
		if (this->fDocumentImpl != nullptr) {
			$var($EntityReferenceImpl, erImpl, $cast($EntityReferenceImpl, er));
			$nc(erImpl)->setBaseURI(identifier == nullptr ? ($String*)nullptr : $($nc(identifier)->getExpandedSystemId()));
			if (this->fDocumentType != nullptr) {
				$var($NamedNodeMap, entities, $nc(this->fDocumentType)->getEntities());
				$set(this, fCurrentEntityDecl, $cast($EntityImpl, $nc(entities)->getNamedItem(name)));
				if (this->fCurrentEntityDecl != nullptr) {
					$nc(this->fCurrentEntityDecl)->setInputEncoding(encoding);
				}
			}
			erImpl->needsSyncChildren(false);
		}
		this->fInEntityRef = true;
		$nc(this->fCurrentNode)->appendChild(er);
		if (!this->fCreateEntityRefNodes) {
			$set(this, fCurrentNode, er);
		} else {
			$nc(($cast($NodeImpl, er)))->setReadOnly(true, true);
		}
	} else {
		int32_t er = $nc(this->fDeferredDocumentImpl)->createDeferredEntityReference(name, identifier == nullptr ? ($String*)nullptr : $($nc(identifier)->getExpandedSystemId()));
		if (this->fDocumentTypeIndex != -1) {
			int32_t node = $nc(this->fDeferredDocumentImpl)->getLastChild(this->fDocumentTypeIndex, false);
			while (node != -1) {
				int16_t nodeType = $nc(this->fDeferredDocumentImpl)->getNodeType(node, false);
				if (nodeType == $Node::ENTITY_NODE) {
					$var($String, nodeName, $nc(this->fDeferredDocumentImpl)->getNodeName(node, false));
					if ($nc(nodeName)->equals(name)) {
						this->fDeferredEntityDecl = node;
						$nc(this->fDeferredDocumentImpl)->setInputEncoding(node, encoding);
						break;
					}
				}
				node = $nc(this->fDeferredDocumentImpl)->getRealPrevSibling(node, false);
			}
		}
		$nc(this->fDeferredDocumentImpl)->appendChild(this->fCurrentNodeIndex, er);
		if (!this->fCreateEntityRefNodes) {
			this->fCurrentNodeIndex = er;
		}
	}
}

void AbstractDOMParser::textDecl($String* version, $String* encoding, $Augmentations* augs) {
	if (this->fInDTD) {
		return;
	}
	if (!this->fDeferNodeExpansion) {
		if (this->fCurrentEntityDecl != nullptr && !this->fFilterReject) {
			$nc(this->fCurrentEntityDecl)->setXmlEncoding(encoding);
			if (version != nullptr) {
				$nc(this->fCurrentEntityDecl)->setXmlVersion(version);
			}
		}
	} else if (this->fDeferredEntityDecl != -1) {
		$nc(this->fDeferredDocumentImpl)->setEntityInfo(this->fDeferredEntityDecl, version, encoding);
	}
}

void AbstractDOMParser::comment($XMLString* text, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (this->fInDTD) {
		if (this->fInternalSubset != nullptr && !this->fInDTDExternalSubset) {
			$nc(this->fInternalSubset)->append("<!--"_s);
			if ($nc(text)->length > 0) {
				$nc(this->fInternalSubset)->append(text->ch, text->offset, text->length);
			}
			$nc(this->fInternalSubset)->append("-->"_s);
		}
		return;
	}
	if (!this->fIncludeComments || this->fFilterReject) {
		return;
	}
	if (!this->fDeferNodeExpansion) {
		$var($Comment, comment, $nc(this->fDocument)->createComment($($nc(text)->toString())));
		setCharacterData(false);
		$nc(this->fCurrentNode)->appendChild(comment);
		if (this->fDOMFilter != nullptr && !this->fInEntityRef && ((int32_t)($nc(this->fDOMFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_COMMENT)) != 0) {
			int16_t code = $nc(this->fDOMFilter)->acceptNode(comment);
			switch (code) {
			case $LSParserFilter::FILTER_INTERRUPT:
				{
					{
						$init($AbstractDOMParser$Abort);
						$throw($AbstractDOMParser$Abort::INSTANCE);
					}
				}
			case $LSParserFilter::FILTER_REJECT:
				{
					{
					}
				}
			case $LSParserFilter::FILTER_SKIP:
				{
					{
						$nc(this->fCurrentNode)->removeChild(comment);
						this->fFirstChunk = true;
						return;
					}
				}
			default:
				{
					{
					}
				}
			}
		}
	} else {
		int32_t comment = $nc(this->fDeferredDocumentImpl)->createDeferredComment($($nc(text)->toString()));
		$nc(this->fDeferredDocumentImpl)->appendChild(this->fCurrentNodeIndex, comment);
	}
}

void AbstractDOMParser::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (this->fInDTD) {
		if (this->fInternalSubset != nullptr && !this->fInDTDExternalSubset) {
			$nc(this->fInternalSubset)->append("<?"_s);
			$nc(this->fInternalSubset)->append(target);
			if ($nc(data)->length > 0) {
				$nc(this->fInternalSubset)->append(u' ')->append(data->ch, data->offset, data->length);
			}
			$nc(this->fInternalSubset)->append("?>"_s);
		}
		return;
	}
	if (!this->fDeferNodeExpansion) {
		if (this->fFilterReject) {
			return;
		}
		$var($ProcessingInstruction, pi, $nc(this->fDocument)->createProcessingInstruction(target, $($nc(data)->toString())));
		setCharacterData(false);
		$nc(this->fCurrentNode)->appendChild(pi);
		if (this->fDOMFilter != nullptr && !this->fInEntityRef && ((int32_t)($nc(this->fDOMFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_PROCESSING_INSTRUCTION)) != 0) {
			int16_t code = $nc(this->fDOMFilter)->acceptNode(pi);
			switch (code) {
			case $LSParserFilter::FILTER_INTERRUPT:
				{
					{
						$init($AbstractDOMParser$Abort);
						$throw($AbstractDOMParser$Abort::INSTANCE);
					}
				}
			case $LSParserFilter::FILTER_REJECT:
				{
					{
					}
				}
			case $LSParserFilter::FILTER_SKIP:
				{
					{
						$nc(this->fCurrentNode)->removeChild(pi);
						this->fFirstChunk = true;
						return;
					}
				}
			default:
				{
					{
					}
				}
			}
		}
	} else {
		int32_t pi = $nc(this->fDeferredDocumentImpl)->createDeferredProcessingInstruction(target, $($nc(data)->toString()));
		$nc(this->fDeferredDocumentImpl)->appendChild(this->fCurrentNodeIndex, pi);
	}
}

void AbstractDOMParser::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$set(this, fLocator, locator);
	if (!this->fDeferNodeExpansion) {
		if ($nc(this->fDocumentClassName)->equals(AbstractDOMParser::DEFAULT_DOCUMENT_CLASS_NAME)) {
			$set(this, fDocument, $new($DocumentImpl));
			$set(this, fDocumentImpl, $cast($CoreDocumentImpl, this->fDocument));
			$nc(this->fDocumentImpl)->setStrictErrorChecking(false);
			$nc(this->fDocumentImpl)->setInputEncoding(encoding);
			$nc(this->fDocumentImpl)->setDocumentURI($($nc(locator)->getExpandedSystemId()));
		} else if ($nc(this->fDocumentClassName)->equals(AbstractDOMParser::PSVI_DOCUMENT_CLASS_NAME)) {
			$set(this, fDocument, $new($PSVIDocumentImpl));
			$set(this, fDocumentImpl, $cast($CoreDocumentImpl, this->fDocument));
			this->fStorePSVI = true;
			$nc(this->fDocumentImpl)->setStrictErrorChecking(false);
			$nc(this->fDocumentImpl)->setInputEncoding(encoding);
			$nc(this->fDocumentImpl)->setDocumentURI($($nc(locator)->getExpandedSystemId()));
		} else {
			try {
				$Class* documentClass = $ObjectFactory::findProviderClass(this->fDocumentClassName, true);
				$set(this, fDocument, $cast($Document, $nc($($nc(documentClass)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
				$Class* defaultDocClass = $ObjectFactory::findProviderClass(AbstractDOMParser::CORE_DOCUMENT_CLASS_NAME, true);
				if ($nc(defaultDocClass)->isAssignableFrom(documentClass)) {
					$set(this, fDocumentImpl, $cast($CoreDocumentImpl, this->fDocument));
					$Class* psviDocClass = $ObjectFactory::findProviderClass(AbstractDOMParser::PSVI_DOCUMENT_CLASS_NAME, true);
					if ($nc(psviDocClass)->isAssignableFrom(documentClass)) {
						this->fStorePSVI = true;
					}
					$nc(this->fDocumentImpl)->setStrictErrorChecking(false);
					$nc(this->fDocumentImpl)->setInputEncoding(encoding);
					if (locator != nullptr) {
						$nc(this->fDocumentImpl)->setDocumentURI($(locator->getExpandedSystemId()));
					}
				}
			} catch ($ClassNotFoundException& e) {
			} catch ($Exception& e) {
				$init($DOMMessageFormatter);
				$throwNew($RuntimeException, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "CannotCreateDocumentClass"_s, $$new($ObjectArray, {$of(this->fDocumentClassName)}))));
			}
		}
		$set(this, fCurrentNode, this->fDocument);
	} else {
		$set(this, fDeferredDocumentImpl, $new($DeferredDocumentImpl, this->fNamespaceAware));
		$set(this, fDocument, this->fDeferredDocumentImpl);
		this->fDocumentIndex = $nc(this->fDeferredDocumentImpl)->createDeferredDocument();
		$nc(this->fDeferredDocumentImpl)->setInputEncoding(encoding);
		$nc(this->fDeferredDocumentImpl)->setDocumentURI($($nc(locator)->getExpandedSystemId()));
		this->fCurrentNodeIndex = this->fDocumentIndex;
	}
}

void AbstractDOMParser::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
	if (!this->fDeferNodeExpansion) {
		if (this->fDocumentImpl != nullptr) {
			if (version != nullptr) {
				$nc(this->fDocumentImpl)->setXmlVersion(version);
			}
			$nc(this->fDocumentImpl)->setXmlEncoding(encoding);
			$nc(this->fDocumentImpl)->setXmlStandalone("yes"_s->equals(standalone));
		}
	} else {
		if (version != nullptr) {
			$nc(this->fDeferredDocumentImpl)->setXmlVersion(version);
		}
		$nc(this->fDeferredDocumentImpl)->setXmlEncoding(encoding);
		$nc(this->fDeferredDocumentImpl)->setXmlStandalone("yes"_s->equals(standalone));
	}
}

void AbstractDOMParser::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
	if (!this->fDeferNodeExpansion) {
		if (this->fDocumentImpl != nullptr) {
			$set(this, fDocumentType, $nc(this->fDocumentImpl)->createDocumentType(rootElement, publicId, systemId));
			$nc(this->fCurrentNode)->appendChild(this->fDocumentType);
		}
	} else {
		this->fDocumentTypeIndex = $nc(this->fDeferredDocumentImpl)->createDeferredDocumentType(rootElement, publicId, systemId);
		$nc(this->fDeferredDocumentImpl)->appendChild(this->fCurrentNodeIndex, this->fDocumentTypeIndex);
	}
}

void AbstractDOMParser::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (!this->fDeferNodeExpansion) {
		if (this->fFilterReject) {
			++this->fRejectedElementDepth;
			return;
		}
		$var($Element, el, createElementNode(element));
		int32_t attrCount = $nc(attributes)->getLength();
		bool seenSchemaDefault = false;
		for (int32_t i = 0; i < attrCount; ++i) {
			attributes->getName(i, this->fAttrQName);
			$var($Attr, attr, createAttrNode(this->fAttrQName));
			$var($String, attrValue, attributes->getValue(i));
			$init($Constants);
			$var($AttributePSVI, attrPSVI, $cast($AttributePSVI, $nc($(attributes->getAugmentations(i)))->getItem($Constants::ATTRIBUTE_PSVI)));
			if (this->fStorePSVI && attrPSVI != nullptr) {
				$nc(($cast($PSVIAttrNSImpl, attr)))->setPSVI(attrPSVI);
			}
			$nc(attr)->setValue(attrValue);
			bool specified = attributes->isSpecified(i);
			$init($NamespaceContext);
			if (!specified && (seenSchemaDefault || ($nc(this->fAttrQName)->uri != nullptr && $nc(this->fAttrQName)->uri != $NamespaceContext::XMLNS_URI && $nc(this->fAttrQName)->prefix == nullptr))) {
				$nc(el)->setAttributeNodeNS(attr);
				seenSchemaDefault = true;
			} else {
				$nc(el)->setAttributeNode(attr);
			}
			if (this->fDocumentImpl != nullptr) {
				$var($AttrImpl, attrImpl, $cast($AttrImpl, attr));
				$var($Object, type, nullptr);
				bool id = false;
				if (attrPSVI != nullptr && this->fNamespaceAware) {
					$assign(type, attrPSVI->getMemberTypeDefinition());
					if (type == nullptr) {
						$assign(type, attrPSVI->getTypeDefinition());
						if (type != nullptr) {
							id = $nc(($cast($XSSimpleType, type)))->isIDType();
							attrImpl->setType(type);
						}
					} else {
						id = $nc(($cast($XSSimpleType, type)))->isIDType();
						attrImpl->setType(type);
					}
				} else {
					$init($Boolean);
					bool isDeclared = $nc($Boolean::TRUE)->equals($($nc($(attributes->getAugmentations(i)))->getItem($Constants::ATTRIBUTE_DECLARED)));
					if (isDeclared) {
						$assign(type, attributes->getType(i));
						id = "ID"_s->equals(type);
					}
					attrImpl->setType(type);
				}
				if (id) {
					$nc(($cast($ElementImpl, el)))->setIdAttributeNode(attr, true);
				}
				attrImpl->setSpecified(specified);
			}
		}
		setCharacterData(false);
		if (augs != nullptr) {
			$init($Constants);
			$var($ElementPSVI, elementPSVI, $cast($ElementPSVI, augs->getItem($Constants::ELEMENT_PSVI)));
			if (elementPSVI != nullptr && this->fNamespaceAware) {
				$var($XSTypeDefinition, type, elementPSVI->getMemberTypeDefinition());
				if (type == nullptr) {
					$assign(type, elementPSVI->getTypeDefinition());
				}
				$nc(($cast($ElementNSImpl, el)))->setType(type);
			}
		}
		if (this->fDOMFilter != nullptr && !this->fInEntityRef) {
			if (this->fRoot == nullptr) {
				$set(this, fRoot, el);
			} else {
				int16_t code = $nc(this->fDOMFilter)->startElement(el);
				switch (code) {
				case $LSParserFilter::FILTER_INTERRUPT:
					{
						{
							$init($AbstractDOMParser$Abort);
							$throw($AbstractDOMParser$Abort::INSTANCE);
						}
					}
				case $LSParserFilter::FILTER_REJECT:
					{
						{
							this->fFilterReject = true;
							this->fRejectedElementDepth = 0;
							return;
						}
					}
				case $LSParserFilter::FILTER_SKIP:
					{
						{
							this->fFirstChunk = true;
							$init($Boolean);
							$nc(this->fSkippedElemStack)->push($Boolean::TRUE);
							return;
						}
					}
				default:
					{
						{
							if (!$nc(this->fSkippedElemStack)->isEmpty()) {
								$init($Boolean);
								$nc(this->fSkippedElemStack)->push($Boolean::FALSE);
							}
						}
					}
				}
			}
		}
		$nc(this->fCurrentNode)->appendChild(el);
		$set(this, fCurrentNode, el);
	} else {
		int32_t el = $nc(this->fDeferredDocumentImpl)->createDeferredElement(this->fNamespaceAware ? $nc(element)->uri : ($String*)nullptr, element->rawname);
		$var($Object, type, nullptr);
		int32_t attrCount = $nc(attributes)->getLength();
		for (int32_t i = attrCount - 1; i >= 0; --i) {
			$init($Constants);
			$var($AttributePSVI, attrPSVI, $cast($AttributePSVI, $nc($(attributes->getAugmentations(i)))->getItem($Constants::ATTRIBUTE_PSVI)));
			bool id = false;
			if (attrPSVI != nullptr && this->fNamespaceAware) {
				$assign(type, attrPSVI->getMemberTypeDefinition());
				if (type == nullptr) {
					$assign(type, attrPSVI->getTypeDefinition());
					if (type != nullptr) {
						id = $nc(($cast($XSSimpleType, type)))->isIDType();
					}
				} else {
					id = $nc(($cast($XSSimpleType, type)))->isIDType();
				}
			} else {
				$init($Boolean);
				bool isDeclared = $nc($Boolean::TRUE)->equals($($nc($(attributes->getAugmentations(i)))->getItem($Constants::ATTRIBUTE_DECLARED)));
				if (isDeclared) {
					$assign(type, attributes->getType(i));
					id = "ID"_s->equals(type);
				}
			}
			int32_t var$0 = el;
			$var($String, var$1, attributes->getQName(i));
			$var($String, var$2, attributes->getURI(i));
			$var($String, var$3, attributes->getValue(i));
			$nc(this->fDeferredDocumentImpl)->setDeferredAttribute(var$0, var$1, var$2, var$3, attributes->isSpecified(i), id, type);
		}
		$nc(this->fDeferredDocumentImpl)->appendChild(this->fCurrentNodeIndex, el);
		this->fCurrentNodeIndex = el;
	}
}

void AbstractDOMParser::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	startElement(element, attributes, augs);
	endElement(element, augs);
}

void AbstractDOMParser::characters($XMLString* text, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (!this->fDeferNodeExpansion) {
		if (this->fFilterReject) {
			return;
		}
		if (this->fInCDATASection && this->fCreateCDATANodes) {
			if (this->fCurrentCDATASection == nullptr) {
				$set(this, fCurrentCDATASection, $nc(this->fDocument)->createCDATASection($($nc(text)->toString())));
				$nc(this->fCurrentNode)->appendChild(this->fCurrentCDATASection);
				$set(this, fCurrentNode, this->fCurrentCDATASection);
			} else {
				$nc(this->fCurrentCDATASection)->appendData($($nc(text)->toString()));
			}
		} else if (!this->fInDTD) {
			if ($nc(text)->length == 0) {
				return;
			}
			$var($Node, child, $nc(this->fCurrentNode)->getLastChild());
			if (child != nullptr && child->getNodeType() == $Node::TEXT_NODE) {
				if (this->fFirstChunk) {
					if (this->fDocumentImpl != nullptr) {
						$nc(this->fStringBuilder)->append($($nc(($cast($TextImpl, child)))->removeData()));
					} else {
						$nc(this->fStringBuilder)->append($($nc(($cast($Text, child)))->getData()));
						$nc(($cast($Text, child)))->setNodeValue(nullptr);
					}
					this->fFirstChunk = false;
				}
				if ($nc(text)->length > 0) {
					$nc(this->fStringBuilder)->append(text->ch, text->offset, text->length);
				}
			} else {
				this->fFirstChunk = true;
				$var($Text, textNode, $nc(this->fDocument)->createTextNode($($nc(text)->toString())));
				$nc(this->fCurrentNode)->appendChild(textNode);
			}
		}
	} else if (this->fInCDATASection && this->fCreateCDATANodes) {
		if (this->fCurrentCDATASectionIndex == -1) {
			int32_t cs = $nc(this->fDeferredDocumentImpl)->createDeferredCDATASection($($nc(text)->toString()));
			$nc(this->fDeferredDocumentImpl)->appendChild(this->fCurrentNodeIndex, cs);
			this->fCurrentCDATASectionIndex = cs;
			this->fCurrentNodeIndex = cs;
		} else {
			int32_t txt = $nc(this->fDeferredDocumentImpl)->createDeferredTextNode($($nc(text)->toString()), false);
			$nc(this->fDeferredDocumentImpl)->appendChild(this->fCurrentNodeIndex, txt);
		}
	} else if (!this->fInDTD) {
		if ($nc(text)->length == 0) {
			return;
		}
		$var($String, value, $nc(text)->toString());
		int32_t txt = $nc(this->fDeferredDocumentImpl)->createDeferredTextNode(value, false);
		$nc(this->fDeferredDocumentImpl)->appendChild(this->fCurrentNodeIndex, txt);
	}
}

void AbstractDOMParser::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (!this->fIncludeIgnorableWhitespace || this->fFilterReject) {
		return;
	}
	if (!this->fDeferNodeExpansion) {
		$var($Node, child, $nc(this->fCurrentNode)->getLastChild());
		if (child != nullptr && child->getNodeType() == $Node::TEXT_NODE) {
			$var($Text, textNode, $cast($Text, child));
			textNode->appendData($($nc(text)->toString()));
		} else {
			$var($Text, textNode, $nc(this->fDocument)->createTextNode($($nc(text)->toString())));
			if (this->fDocumentImpl != nullptr) {
				$var($TextImpl, textNodeImpl, $cast($TextImpl, textNode));
				$nc(textNodeImpl)->setIgnorableWhitespace(true);
			}
			$nc(this->fCurrentNode)->appendChild(textNode);
		}
	} else {
		int32_t txt = $nc(this->fDeferredDocumentImpl)->createDeferredTextNode($($nc(text)->toString()), true);
		$nc(this->fDeferredDocumentImpl)->appendChild(this->fCurrentNodeIndex, txt);
	}
}

void AbstractDOMParser::endElement($QName* element, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (!this->fDeferNodeExpansion) {
		if (augs != nullptr && this->fDocumentImpl != nullptr && (this->fNamespaceAware || this->fStorePSVI)) {
			$init($Constants);
			$var($ElementPSVI, elementPSVI, $cast($ElementPSVI, $nc(augs)->getItem($Constants::ELEMENT_PSVI)));
			if (elementPSVI != nullptr) {
				if (this->fNamespaceAware) {
					$var($XSTypeDefinition, type, elementPSVI->getMemberTypeDefinition());
					if (type == nullptr) {
						$assign(type, elementPSVI->getTypeDefinition());
					}
					$nc(($cast($ElementNSImpl, this->fCurrentNode)))->setType(type);
				}
				if (this->fStorePSVI) {
					$nc(($cast($PSVIElementNSImpl, this->fCurrentNode)))->setPSVI(elementPSVI);
				}
			}
		}
		if (this->fDOMFilter != nullptr) {
			if (this->fFilterReject) {
				if (this->fRejectedElementDepth-- == 0) {
					this->fFilterReject = false;
				}
				return;
			}
			if (!$nc(this->fSkippedElemStack)->isEmpty()) {
				$init($Boolean);
				if ($equals($nc(this->fSkippedElemStack)->pop(), $Boolean::TRUE)) {
					return;
				}
			}
			setCharacterData(false);
			if ((this->fCurrentNode != this->fRoot) && !this->fInEntityRef && ((int32_t)($nc(this->fDOMFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_ELEMENT)) != 0) {
				int16_t code = $nc(this->fDOMFilter)->acceptNode(this->fCurrentNode);
				switch (code) {
				case $LSParserFilter::FILTER_INTERRUPT:
					{
						{
							$init($AbstractDOMParser$Abort);
							$throw($AbstractDOMParser$Abort::INSTANCE);
						}
					}
				case $LSParserFilter::FILTER_REJECT:
					{
						{
							$var($Node, parent, $nc(this->fCurrentNode)->getParentNode());
							$nc(parent)->removeChild(this->fCurrentNode);
							$set(this, fCurrentNode, parent);
							return;
						}
					}
				case $LSParserFilter::FILTER_SKIP:
					{
						{
							this->fFirstChunk = true;
							$var($Node, parent, $nc(this->fCurrentNode)->getParentNode());
							$var($NodeList, ls, $nc(this->fCurrentNode)->getChildNodes());
							int32_t length = $nc(ls)->getLength();
							for (int32_t i = 0; i < length; ++i) {
								$nc(parent)->appendChild($(ls->item(0)));
							}
							$nc(parent)->removeChild(this->fCurrentNode);
							$set(this, fCurrentNode, parent);
							return;
						}
					}
				default:
					{
						{
						}
					}
				}
			}
			$set(this, fCurrentNode, $nc(this->fCurrentNode)->getParentNode());
		} else {
			setCharacterData(false);
			$set(this, fCurrentNode, $nc(this->fCurrentNode)->getParentNode());
		}
	} else {
		if (augs != nullptr) {
			$init($Constants);
			$var($ElementPSVI, elementPSVI, $cast($ElementPSVI, augs->getItem($Constants::ELEMENT_PSVI)));
			if (elementPSVI != nullptr) {
				$var($XSTypeDefinition, type, elementPSVI->getMemberTypeDefinition());
				if (type == nullptr) {
					$assign(type, elementPSVI->getTypeDefinition());
				}
				$nc(this->fDeferredDocumentImpl)->setTypeInfo(this->fCurrentNodeIndex, type);
			}
		}
		this->fCurrentNodeIndex = $nc(this->fDeferredDocumentImpl)->getParentNode(this->fCurrentNodeIndex, false);
	}
}

void AbstractDOMParser::startCDATA($Augmentations* augs) {
	this->fInCDATASection = true;
	if (!this->fDeferNodeExpansion) {
		if (this->fFilterReject) {
			return;
		}
		if (this->fCreateCDATANodes) {
			setCharacterData(false);
		}
	}
}

void AbstractDOMParser::endCDATA($Augmentations* augs) {
	this->fInCDATASection = false;
	if (!this->fDeferNodeExpansion) {
		if (this->fFilterReject) {
			return;
		}
		if (this->fCurrentCDATASection != nullptr) {
			if (this->fDOMFilter != nullptr && !this->fInEntityRef && ((int32_t)($nc(this->fDOMFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_CDATA_SECTION)) != 0) {
				int16_t code = $nc(this->fDOMFilter)->acceptNode(this->fCurrentCDATASection);
				switch (code) {
				case $LSParserFilter::FILTER_INTERRUPT:
					{
						{
							$init($AbstractDOMParser$Abort);
							$throw($AbstractDOMParser$Abort::INSTANCE);
						}
					}
				case $LSParserFilter::FILTER_REJECT:
					{
						{
						}
					}
				case $LSParserFilter::FILTER_SKIP:
					{
						{
							$var($Node, parent, $nc(this->fCurrentNode)->getParentNode());
							$nc(parent)->removeChild(this->fCurrentCDATASection);
							$set(this, fCurrentNode, parent);
							return;
						}
					}
				default:
					{
						{
						}
					}
				}
			}
			$set(this, fCurrentNode, $nc(this->fCurrentNode)->getParentNode());
			$set(this, fCurrentCDATASection, nullptr);
		}
	} else if (this->fCurrentCDATASectionIndex != -1) {
		this->fCurrentNodeIndex = $nc(this->fDeferredDocumentImpl)->getParentNode(this->fCurrentNodeIndex, false);
		this->fCurrentCDATASectionIndex = -1;
	}
}

void AbstractDOMParser::endDocument($Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (!this->fDeferNodeExpansion) {
		if (this->fDocumentImpl != nullptr) {
			if (this->fLocator != nullptr) {
				if ($nc(this->fLocator)->getEncoding() != nullptr) {
					$nc(this->fDocumentImpl)->setInputEncoding($($nc(this->fLocator)->getEncoding()));
				}
			}
			$nc(this->fDocumentImpl)->setStrictErrorChecking(true);
		}
		$set(this, fCurrentNode, nullptr);
	} else {
		if (this->fLocator != nullptr) {
			if ($nc(this->fLocator)->getEncoding() != nullptr) {
				$nc(this->fDeferredDocumentImpl)->setInputEncoding($($nc(this->fLocator)->getEncoding()));
			}
		}
		this->fCurrentNodeIndex = -1;
	}
}

void AbstractDOMParser::endGeneralEntity($String* name, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (!this->fDeferNodeExpansion) {
		if (this->fFilterReject) {
			return;
		}
		setCharacterData(true);
		if (this->fDocumentType != nullptr) {
			$var($NamedNodeMap, entities, $nc(this->fDocumentType)->getEntities());
			$set(this, fCurrentEntityDecl, $cast($EntityImpl, $nc(entities)->getNamedItem(name)));
			if (this->fCurrentEntityDecl != nullptr) {
				if (this->fCurrentEntityDecl != nullptr && $nc(this->fCurrentEntityDecl)->getFirstChild() == nullptr) {
					$nc(this->fCurrentEntityDecl)->setReadOnly(false, true);
					$var($Node, child, $nc(this->fCurrentNode)->getFirstChild());
					while (child != nullptr) {
						$var($Node, copy, child->cloneNode(true));
						$nc(this->fCurrentEntityDecl)->appendChild(copy);
						$assign(child, child->getNextSibling());
					}
					$nc(this->fCurrentEntityDecl)->setReadOnly(true, true);
				}
				$set(this, fCurrentEntityDecl, nullptr);
			}
		}
		this->fInEntityRef = false;
		bool removeEntityRef = false;
		if (this->fCreateEntityRefNodes) {
			if (this->fDocumentImpl != nullptr) {
				$nc(($cast($NodeImpl, this->fCurrentNode)))->setReadOnly(true, true);
			}
			if (this->fDOMFilter != nullptr && ((int32_t)($nc(this->fDOMFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_ENTITY_REFERENCE)) != 0) {
				int16_t code = $nc(this->fDOMFilter)->acceptNode(this->fCurrentNode);
				switch (code) {
				case $LSParserFilter::FILTER_INTERRUPT:
					{
						{
							$init($AbstractDOMParser$Abort);
							$throw($AbstractDOMParser$Abort::INSTANCE);
						}
					}
				case $LSParserFilter::FILTER_REJECT:
					{
						{
							$var($Node, parent, $nc(this->fCurrentNode)->getParentNode());
							$nc(parent)->removeChild(this->fCurrentNode);
							$set(this, fCurrentNode, parent);
							return;
						}
					}
				case $LSParserFilter::FILTER_SKIP:
					{
						{
							this->fFirstChunk = true;
							removeEntityRef = true;
							break;
						}
					}
				default:
					{
						{
							$set(this, fCurrentNode, $nc(this->fCurrentNode)->getParentNode());
						}
					}
				}
			} else {
				$set(this, fCurrentNode, $nc(this->fCurrentNode)->getParentNode());
			}
		}
		if (!this->fCreateEntityRefNodes || removeEntityRef) {
			$var($NodeList, children, $nc(this->fCurrentNode)->getChildNodes());
			$var($Node, parent, $nc(this->fCurrentNode)->getParentNode());
			int32_t length = $nc(children)->getLength();
			if (length > 0) {
				$var($Node, node, $nc(this->fCurrentNode)->getPreviousSibling());
				$var($Node, child, children->item(0));
				bool var$0 = node != nullptr && node->getNodeType() == $Node::TEXT_NODE;
				if (var$0 && $nc(child)->getNodeType() == $Node::TEXT_NODE) {
					$nc(($cast($Text, node)))->appendData($(child->getNodeValue()));
					$nc(this->fCurrentNode)->removeChild(child);
				} else {
					$assign(node, $nc(parent)->insertBefore(child, this->fCurrentNode));
					handleBaseURI(node);
				}
				for (int32_t i = 1; i < length; ++i) {
					$assign(node, $nc(parent)->insertBefore($(children->item(0)), this->fCurrentNode));
					handleBaseURI(node);
				}
			}
			$nc(parent)->removeChild(this->fCurrentNode);
			$set(this, fCurrentNode, parent);
		}
	} else {
		if (this->fDocumentTypeIndex != -1) {
			int32_t node = $nc(this->fDeferredDocumentImpl)->getLastChild(this->fDocumentTypeIndex, false);
			while (node != -1) {
				int16_t nodeType = $nc(this->fDeferredDocumentImpl)->getNodeType(node, false);
				if (nodeType == $Node::ENTITY_NODE) {
					$var($String, nodeName, $nc(this->fDeferredDocumentImpl)->getNodeName(node, false));
					if ($nc(nodeName)->equals(name)) {
						this->fDeferredEntityDecl = node;
						break;
					}
				}
				node = $nc(this->fDeferredDocumentImpl)->getRealPrevSibling(node, false);
			}
		}
		if (this->fDeferredEntityDecl != -1 && $nc(this->fDeferredDocumentImpl)->getLastChild(this->fDeferredEntityDecl, false) == -1) {
			int32_t prevIndex = -1;
			int32_t childIndex = $nc(this->fDeferredDocumentImpl)->getLastChild(this->fCurrentNodeIndex, false);
			while (childIndex != -1) {
				int32_t cloneIndex = $nc(this->fDeferredDocumentImpl)->cloneNode(childIndex, true);
				$nc(this->fDeferredDocumentImpl)->insertBefore(this->fDeferredEntityDecl, cloneIndex, prevIndex);
				prevIndex = cloneIndex;
				childIndex = $nc(this->fDeferredDocumentImpl)->getRealPrevSibling(childIndex, false);
			}
		}
		if (this->fCreateEntityRefNodes) {
			this->fCurrentNodeIndex = $nc(this->fDeferredDocumentImpl)->getParentNode(this->fCurrentNodeIndex, false);
		} else {
			int32_t childIndex = $nc(this->fDeferredDocumentImpl)->getLastChild(this->fCurrentNodeIndex, false);
			int32_t parentIndex = $nc(this->fDeferredDocumentImpl)->getParentNode(this->fCurrentNodeIndex, false);
			int32_t prevIndex = this->fCurrentNodeIndex;
			int32_t lastChild = childIndex;
			int32_t sibling = -1;
			while (childIndex != -1) {
				handleBaseURI(childIndex);
				sibling = $nc(this->fDeferredDocumentImpl)->getRealPrevSibling(childIndex, false);
				$nc(this->fDeferredDocumentImpl)->insertBefore(parentIndex, childIndex, prevIndex);
				prevIndex = childIndex;
				childIndex = sibling;
			}
			if (lastChild != -1) {
				$nc(this->fDeferredDocumentImpl)->setAsLastChild(parentIndex, lastChild);
			} else {
				sibling = $nc(this->fDeferredDocumentImpl)->getRealPrevSibling(prevIndex, false);
				$nc(this->fDeferredDocumentImpl)->setAsLastChild(parentIndex, sibling);
			}
			this->fCurrentNodeIndex = parentIndex;
		}
		this->fDeferredEntityDecl = -1;
	}
}

void AbstractDOMParser::handleBaseURI($Node* node) {
	$useLocalCurrentObjectStackCache();
	if (this->fDocumentImpl != nullptr) {
		$var($String, baseURI, nullptr);
		int16_t nodeType = $nc(node)->getNodeType();
		if (nodeType == $Node::ELEMENT_NODE) {
			if (this->fNamespaceAware) {
				if ($nc(($cast($Element, node)))->getAttributeNodeNS("http://www.w3.org/XML/1998/namespace"_s, "base"_s) != nullptr) {
					return;
				}
			} else if ($nc(($cast($Element, node)))->getAttributeNode("xml:base"_s) != nullptr) {
				return;
			}
			$assign(baseURI, $nc(($cast($EntityReferenceImpl, this->fCurrentNode)))->getBaseURI());
			if (baseURI != nullptr && !baseURI->equals($($nc(this->fDocumentImpl)->getDocumentURI()))) {
				if (this->fNamespaceAware) {
					$nc(($cast($Element, node)))->setAttributeNS("http://www.w3.org/XML/1998/namespace"_s, "xml:base"_s, baseURI);
				} else {
					$nc(($cast($Element, node)))->setAttribute("xml:base"_s, baseURI);
				}
			}
		} else if (nodeType == $Node::PROCESSING_INSTRUCTION_NODE) {
			$assign(baseURI, $nc(($cast($EntityReferenceImpl, this->fCurrentNode)))->getBaseURI());
			if (baseURI != nullptr && this->fErrorHandler != nullptr) {
				$var($DOMErrorImpl, error, $new($DOMErrorImpl));
				$set(error, fType, "pi-base-uri-not-preserved"_s);
				$set(error, fRelatedData, baseURI);
				error->fSeverity = $DOMError::SEVERITY_WARNING;
				$nc($($nc(this->fErrorHandler)->getErrorHandler()))->handleError(error);
			}
		}
	}
}

void AbstractDOMParser::handleBaseURI(int32_t node) {
	$useLocalCurrentObjectStackCache();
	int16_t nodeType = $nc(this->fDeferredDocumentImpl)->getNodeType(node, false);
	if (nodeType == $Node::ELEMENT_NODE) {
		$var($String, baseURI, $nc(this->fDeferredDocumentImpl)->getNodeValueString(this->fCurrentNodeIndex, false));
		if (baseURI == nullptr) {
			$assign(baseURI, $nc(this->fDeferredDocumentImpl)->getDeferredEntityBaseURI(this->fDeferredEntityDecl));
		}
		if (baseURI != nullptr && !baseURI->equals($($nc(this->fDeferredDocumentImpl)->getDocumentURI()))) {
			$nc(this->fDeferredDocumentImpl)->setDeferredAttribute(node, "xml:base"_s, "http://www.w3.org/XML/1998/namespace"_s, baseURI, true, false, nullptr);
		}
	} else if (nodeType == $Node::PROCESSING_INSTRUCTION_NODE) {
		$var($String, baseURI, $nc(this->fDeferredDocumentImpl)->getNodeValueString(this->fCurrentNodeIndex, false));
		if (baseURI == nullptr) {
			$assign(baseURI, $nc(this->fDeferredDocumentImpl)->getDeferredEntityBaseURI(this->fDeferredEntityDecl));
		}
		if (baseURI != nullptr && this->fErrorHandler != nullptr) {
			$var($DOMErrorImpl, error, $new($DOMErrorImpl));
			$set(error, fType, "pi-base-uri-not-preserved"_s);
			$set(error, fRelatedData, baseURI);
			error->fSeverity = $DOMError::SEVERITY_WARNING;
			$nc($($nc(this->fErrorHandler)->getErrorHandler()))->handleError(error);
		}
	}
}

void AbstractDOMParser::startDTD($XMLLocator* locator, $Augmentations* augs) {
	this->fInDTD = true;
	if (locator != nullptr) {
		$nc(this->fBaseURIStack)->push($(locator->getBaseSystemId()));
	}
	if (this->fDeferNodeExpansion || this->fDocumentImpl != nullptr) {
		$set(this, fInternalSubset, $new($StringBuilder, 1024));
	}
}

void AbstractDOMParser::endDTD($Augmentations* augs) {
	this->fInDTD = false;
	if (!$nc(this->fBaseURIStack)->isEmpty()) {
		$nc(this->fBaseURIStack)->pop();
	}
	$var($String, internalSubset, this->fInternalSubset != nullptr && $nc(this->fInternalSubset)->length() > 0 ? $nc(this->fInternalSubset)->toString() : ($String*)nullptr);
	if (this->fDeferNodeExpansion) {
		if (internalSubset != nullptr) {
			$nc(this->fDeferredDocumentImpl)->setInternalSubset(this->fDocumentTypeIndex, internalSubset);
		}
	} else if (this->fDocumentImpl != nullptr) {
		if (internalSubset != nullptr) {
			$nc(($cast($DocumentTypeImpl, this->fDocumentType)))->setInternalSubset(internalSubset);
		}
	}
}

void AbstractDOMParser::startConditional(int16_t type, $Augmentations* augs) {
}

void AbstractDOMParser::endConditional($Augmentations* augs) {
}

void AbstractDOMParser::startExternalSubset($XMLResourceIdentifier* identifier, $Augmentations* augs) {
	$nc(this->fBaseURIStack)->push($($nc(identifier)->getBaseSystemId()));
	this->fInDTDExternalSubset = true;
}

void AbstractDOMParser::endExternalSubset($Augmentations* augs) {
	this->fInDTDExternalSubset = false;
	$nc(this->fBaseURIStack)->pop();
}

void AbstractDOMParser::internalEntityDecl($String* name, $XMLString* text, $XMLString* nonNormalizedText, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (this->fInternalSubset != nullptr && !this->fInDTDExternalSubset) {
		$nc(this->fInternalSubset)->append("<!ENTITY "_s);
		if ($nc(name)->startsWith("%"_s)) {
			$nc(this->fInternalSubset)->append("% "_s);
			$nc(this->fInternalSubset)->append($(name->substring(1)));
		} else {
			$nc(this->fInternalSubset)->append(name);
		}
		$nc(this->fInternalSubset)->append(u' ');
		$var($String, value, $nc(nonNormalizedText)->toString());
		bool singleQuote = $nc(value)->indexOf((int32_t)u'\'') == -1;
		$nc(this->fInternalSubset)->append(singleQuote ? u'\'' : u'\"');
		$nc(this->fInternalSubset)->append(value);
		$nc(this->fInternalSubset)->append(singleQuote ? u'\'' : u'\"');
		$nc(this->fInternalSubset)->append(">\n"_s);
	}
	if ($nc(name)->startsWith("%"_s)) {
		return;
	}
	if (this->fDocumentType != nullptr) {
		$var($NamedNodeMap, entities, $nc(this->fDocumentType)->getEntities());
		$var($EntityImpl, entity, $cast($EntityImpl, $nc(entities)->getNamedItem(name)));
		if (entity == nullptr) {
			$assign(entity, $cast($EntityImpl, $nc(this->fDocumentImpl)->createEntity(name)));
			$nc(entity)->setBaseURI($cast($String, $($nc(this->fBaseURIStack)->peek())));
			entities->setNamedItem(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(entity)))));
		}
	}
	if (this->fDocumentTypeIndex != -1) {
		bool found = false;
		int32_t node = $nc(this->fDeferredDocumentImpl)->getLastChild(this->fDocumentTypeIndex, false);
		while (node != -1) {
			int16_t nodeType = $nc(this->fDeferredDocumentImpl)->getNodeType(node, false);
			if (nodeType == $Node::ENTITY_NODE) {
				$var($String, nodeName, $nc(this->fDeferredDocumentImpl)->getNodeName(node, false));
				if ($nc(nodeName)->equals(name)) {
					found = true;
					break;
				}
			}
			node = $nc(this->fDeferredDocumentImpl)->getRealPrevSibling(node, false);
		}
		if (!found) {
			int32_t entityIndex = $nc(this->fDeferredDocumentImpl)->createDeferredEntity(name, nullptr, nullptr, nullptr, $cast($String, $($nc(this->fBaseURIStack)->peek())));
			$nc(this->fDeferredDocumentImpl)->appendChild(this->fDocumentTypeIndex, entityIndex);
		}
	}
}

void AbstractDOMParser::externalEntityDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$var($String, publicId, $nc(identifier)->getPublicId());
	$var($String, literalSystemId, identifier->getLiteralSystemId());
	if (this->fInternalSubset != nullptr && !this->fInDTDExternalSubset) {
		$nc(this->fInternalSubset)->append("<!ENTITY "_s);
		if ($nc(name)->startsWith("%"_s)) {
			$nc(this->fInternalSubset)->append("% "_s);
			$nc(this->fInternalSubset)->append($(name->substring(1)));
		} else {
			$nc(this->fInternalSubset)->append(name);
		}
		$nc(this->fInternalSubset)->append(u' ');
		if (publicId != nullptr) {
			$nc(this->fInternalSubset)->append("PUBLIC \'"_s);
			$nc(this->fInternalSubset)->append(publicId);
			$nc(this->fInternalSubset)->append("\' \'"_s);
		} else {
			$nc(this->fInternalSubset)->append("SYSTEM \'"_s);
		}
		$nc(this->fInternalSubset)->append(literalSystemId);
		$nc(this->fInternalSubset)->append("\'>\n"_s);
	}
	if ($nc(name)->startsWith("%"_s)) {
		return;
	}
	if (this->fDocumentType != nullptr) {
		$var($NamedNodeMap, entities, $nc(this->fDocumentType)->getEntities());
		$var($EntityImpl, entity, $cast($EntityImpl, $nc(entities)->getNamedItem(name)));
		if (entity == nullptr) {
			$assign(entity, $cast($EntityImpl, $nc(this->fDocumentImpl)->createEntity(name)));
			$nc(entity)->setPublicId(publicId);
			entity->setSystemId(literalSystemId);
			entity->setBaseURI($(identifier->getBaseSystemId()));
			entities->setNamedItem(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(entity)))));
		}
	}
	if (this->fDocumentTypeIndex != -1) {
		bool found = false;
		int32_t nodeIndex = $nc(this->fDeferredDocumentImpl)->getLastChild(this->fDocumentTypeIndex, false);
		while (nodeIndex != -1) {
			int16_t nodeType = $nc(this->fDeferredDocumentImpl)->getNodeType(nodeIndex, false);
			if (nodeType == $Node::ENTITY_NODE) {
				$var($String, nodeName, $nc(this->fDeferredDocumentImpl)->getNodeName(nodeIndex, false));
				if ($nc(nodeName)->equals(name)) {
					found = true;
					break;
				}
			}
			nodeIndex = $nc(this->fDeferredDocumentImpl)->getRealPrevSibling(nodeIndex, false);
		}
		if (!found) {
			int32_t entityIndex = $nc(this->fDeferredDocumentImpl)->createDeferredEntity(name, publicId, literalSystemId, nullptr, $(identifier->getBaseSystemId()));
			$nc(this->fDeferredDocumentImpl)->appendChild(this->fDocumentTypeIndex, entityIndex);
		}
	}
}

void AbstractDOMParser::startParameterEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	$init($Constants);
	if (augs != nullptr && this->fInternalSubset != nullptr && !this->fInDTDExternalSubset && $nc($Boolean::TRUE)->equals($(augs->getItem($Constants::ENTITY_SKIPPED)))) {
		$nc(this->fInternalSubset)->append(name)->append(";\n"_s);
	}
	$nc(this->fBaseURIStack)->push($($nc(identifier)->getExpandedSystemId()));
}

void AbstractDOMParser::endParameterEntity($String* name, $Augmentations* augs) {
	$nc(this->fBaseURIStack)->pop();
}

void AbstractDOMParser::unparsedEntityDecl($String* name, $XMLResourceIdentifier* identifier, $String* notation, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$var($String, publicId, $nc(identifier)->getPublicId());
	$var($String, literalSystemId, identifier->getLiteralSystemId());
	if (this->fInternalSubset != nullptr && !this->fInDTDExternalSubset) {
		$nc(this->fInternalSubset)->append("<!ENTITY "_s);
		$nc(this->fInternalSubset)->append(name);
		$nc(this->fInternalSubset)->append(u' ');
		if (publicId != nullptr) {
			$nc(this->fInternalSubset)->append("PUBLIC \'"_s);
			$nc(this->fInternalSubset)->append(publicId);
			if (literalSystemId != nullptr) {
				$nc(this->fInternalSubset)->append("\' \'"_s);
				$nc(this->fInternalSubset)->append(literalSystemId);
			}
		} else {
			$nc(this->fInternalSubset)->append("SYSTEM \'"_s);
			$nc(this->fInternalSubset)->append(literalSystemId);
		}
		$nc(this->fInternalSubset)->append("\' NDATA "_s);
		$nc(this->fInternalSubset)->append(notation);
		$nc(this->fInternalSubset)->append(">\n"_s);
	}
	if (this->fDocumentType != nullptr) {
		$var($NamedNodeMap, entities, $nc(this->fDocumentType)->getEntities());
		$var($EntityImpl, entity, $cast($EntityImpl, $nc(entities)->getNamedItem(name)));
		if (entity == nullptr) {
			$assign(entity, $cast($EntityImpl, $nc(this->fDocumentImpl)->createEntity(name)));
			$nc(entity)->setPublicId(publicId);
			entity->setSystemId(literalSystemId);
			entity->setNotationName(notation);
			entity->setBaseURI($(identifier->getBaseSystemId()));
			entities->setNamedItem(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(entity)))));
		}
	}
	if (this->fDocumentTypeIndex != -1) {
		bool found = false;
		int32_t nodeIndex = $nc(this->fDeferredDocumentImpl)->getLastChild(this->fDocumentTypeIndex, false);
		while (nodeIndex != -1) {
			int16_t nodeType = $nc(this->fDeferredDocumentImpl)->getNodeType(nodeIndex, false);
			if (nodeType == $Node::ENTITY_NODE) {
				$var($String, nodeName, $nc(this->fDeferredDocumentImpl)->getNodeName(nodeIndex, false));
				if ($nc(nodeName)->equals(name)) {
					found = true;
					break;
				}
			}
			nodeIndex = $nc(this->fDeferredDocumentImpl)->getRealPrevSibling(nodeIndex, false);
		}
		if (!found) {
			int32_t entityIndex = $nc(this->fDeferredDocumentImpl)->createDeferredEntity(name, publicId, literalSystemId, notation, $(identifier->getBaseSystemId()));
			$nc(this->fDeferredDocumentImpl)->appendChild(this->fDocumentTypeIndex, entityIndex);
		}
	}
}

void AbstractDOMParser::notationDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$var($String, publicId, $nc(identifier)->getPublicId());
	$var($String, literalSystemId, identifier->getLiteralSystemId());
	if (this->fInternalSubset != nullptr && !this->fInDTDExternalSubset) {
		$nc(this->fInternalSubset)->append("<!NOTATION "_s);
		$nc(this->fInternalSubset)->append(name);
		if (publicId != nullptr) {
			$nc(this->fInternalSubset)->append(" PUBLIC \'"_s);
			$nc(this->fInternalSubset)->append(publicId);
			if (literalSystemId != nullptr) {
				$nc(this->fInternalSubset)->append("\' \'"_s);
				$nc(this->fInternalSubset)->append(literalSystemId);
			}
		} else {
			$nc(this->fInternalSubset)->append(" SYSTEM \'"_s);
			$nc(this->fInternalSubset)->append(literalSystemId);
		}
		$nc(this->fInternalSubset)->append("\'>\n"_s);
	}
	if (this->fDocumentImpl != nullptr && this->fDocumentType != nullptr) {
		$var($NamedNodeMap, notations, $nc(this->fDocumentType)->getNotations());
		if ($nc(notations)->getNamedItem(name) == nullptr) {
			$var($NotationImpl, notation, $cast($NotationImpl, $nc(this->fDocumentImpl)->createNotation(name)));
			$nc(notation)->setPublicId(publicId);
			notation->setSystemId(literalSystemId);
			notation->setBaseURI($(identifier->getBaseSystemId()));
			notations->setNamedItem(static_cast<$Node*>(static_cast<$NodeImpl*>(notation)));
		}
	}
	if (this->fDocumentTypeIndex != -1) {
		bool found = false;
		int32_t nodeIndex = $nc(this->fDeferredDocumentImpl)->getLastChild(this->fDocumentTypeIndex, false);
		while (nodeIndex != -1) {
			int16_t nodeType = $nc(this->fDeferredDocumentImpl)->getNodeType(nodeIndex, false);
			if (nodeType == $Node::NOTATION_NODE) {
				$var($String, nodeName, $nc(this->fDeferredDocumentImpl)->getNodeName(nodeIndex, false));
				if ($nc(nodeName)->equals(name)) {
					found = true;
					break;
				}
			}
			nodeIndex = $nc(this->fDeferredDocumentImpl)->getPrevSibling(nodeIndex, false);
		}
		if (!found) {
			int32_t notationIndex = $nc(this->fDeferredDocumentImpl)->createDeferredNotation(name, publicId, literalSystemId, $(identifier->getBaseSystemId()));
			$nc(this->fDeferredDocumentImpl)->appendChild(this->fDocumentTypeIndex, notationIndex);
		}
	}
}

void AbstractDOMParser::ignoredCharacters($XMLString* text, $Augmentations* augs) {
}

void AbstractDOMParser::elementDecl($String* name, $String* contentModel, $Augmentations* augs) {
	if (this->fInternalSubset != nullptr && !this->fInDTDExternalSubset) {
		$nc(this->fInternalSubset)->append("<!ELEMENT "_s);
		$nc(this->fInternalSubset)->append(name);
		$nc(this->fInternalSubset)->append(u' ');
		$nc(this->fInternalSubset)->append(contentModel);
		$nc(this->fInternalSubset)->append(">\n"_s);
	}
}

void AbstractDOMParser::attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, $XMLString* defaultValue, $XMLString* nonNormalizedDefaultValue, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (this->fInternalSubset != nullptr && !this->fInDTDExternalSubset) {
		$nc(this->fInternalSubset)->append("<!ATTLIST "_s);
		$nc(this->fInternalSubset)->append(elementName);
		$nc(this->fInternalSubset)->append(u' ');
		$nc(this->fInternalSubset)->append(attributeName);
		$nc(this->fInternalSubset)->append(u' ');
		if ($nc(type)->equals("ENUMERATION"_s)) {
			$nc(this->fInternalSubset)->append(u'(');
			for (int32_t i = 0; i < $nc(enumeration)->length; ++i) {
				if (i > 0) {
					$nc(this->fInternalSubset)->append(u'|');
				}
				$nc(this->fInternalSubset)->append(enumeration->get(i));
			}
			$nc(this->fInternalSubset)->append(u')');
		} else {
			$nc(this->fInternalSubset)->append(type);
		}
		if (defaultType != nullptr) {
			$nc(this->fInternalSubset)->append(u' ');
			$nc(this->fInternalSubset)->append(defaultType);
		}
		if (defaultValue != nullptr) {
			$nc(this->fInternalSubset)->append(" \'"_s);
			for (int32_t i = 0; i < defaultValue->length; ++i) {
				char16_t c = $nc(defaultValue->ch)->get(defaultValue->offset + i);
				if (c == u'\'') {
					$nc(this->fInternalSubset)->append("&apos;"_s);
				} else {
					$nc(this->fInternalSubset)->append(c);
				}
			}
			$nc(this->fInternalSubset)->append(u'\'');
		}
		$nc(this->fInternalSubset)->append(">\n"_s);
	}
	if (this->fDeferredDocumentImpl != nullptr) {
		if (defaultValue != nullptr) {
			int32_t elementDefIndex = $nc(this->fDeferredDocumentImpl)->lookupElementDefinition(elementName);
			if (elementDefIndex == -1) {
				elementDefIndex = $nc(this->fDeferredDocumentImpl)->createDeferredElementDefinition(elementName);
				$nc(this->fDeferredDocumentImpl)->appendChild(this->fDocumentTypeIndex, elementDefIndex);
			}
			bool nsEnabled = this->fNamespaceAware;
			$var($String, namespaceURI, nullptr);
			if (nsEnabled) {
				bool var$0 = $nc(attributeName)->startsWith("xmlns:"_s);
				if (var$0 || $nc(attributeName)->equals("xmlns"_s)) {
					$init($NamespaceContext);
					$assign(namespaceURI, $NamespaceContext::XMLNS_URI);
				} else if (attributeName->startsWith("xml:"_s)) {
					$init($NamespaceContext);
					$assign(namespaceURI, $NamespaceContext::XML_URI);
				}
			}
			int32_t attrIndex = $nc(this->fDeferredDocumentImpl)->createDeferredAttribute(attributeName, namespaceURI, $(defaultValue->toString()), false);
			if ("ID"_s->equals(type)) {
				$nc(this->fDeferredDocumentImpl)->setIdAttribute(attrIndex);
			}
			$nc(this->fDeferredDocumentImpl)->appendChild(elementDefIndex, attrIndex);
		}
	} else if (this->fDocumentImpl != nullptr) {
		if (defaultValue != nullptr) {
			$var($NamedNodeMap, elements, $nc(($cast($DocumentTypeImpl, this->fDocumentType)))->getElements());
			$var($ElementDefinitionImpl, elementDef, $cast($ElementDefinitionImpl, $nc(elements)->getNamedItem(elementName)));
			if (elementDef == nullptr) {
				$assign(elementDef, $nc(this->fDocumentImpl)->createElementDefinition(elementName));
				$nc($($nc(($cast($DocumentTypeImpl, this->fDocumentType)))->getElements()))->setNamedItem(elementDef);
			}
			bool nsEnabled = this->fNamespaceAware;
			$var($AttrImpl, attr, nullptr);
			if (nsEnabled) {
				$var($String, namespaceURI, nullptr);
				bool var$1 = $nc(attributeName)->startsWith("xmlns:"_s);
				if (var$1 || $nc(attributeName)->equals("xmlns"_s)) {
					$init($NamespaceContext);
					$assign(namespaceURI, $NamespaceContext::XMLNS_URI);
				} else if (attributeName->startsWith("xml:"_s)) {
					$init($NamespaceContext);
					$assign(namespaceURI, $NamespaceContext::XML_URI);
				}
				$assign(attr, $cast($AttrImpl, $nc(this->fDocumentImpl)->createAttributeNS(namespaceURI, attributeName)));
			} else {
				$assign(attr, $cast($AttrImpl, $nc(this->fDocumentImpl)->createAttribute(attributeName)));
			}
			$nc(attr)->setValue($(defaultValue->toString()));
			attr->setSpecified(false);
			attr->setIdAttribute("ID"_s->equals(type));
			if (nsEnabled) {
				$nc($($nc(elementDef)->getAttributes()))->setNamedItemNS(static_cast<$Node*>(static_cast<$NodeImpl*>(attr)));
			} else {
				$nc($($nc(elementDef)->getAttributes()))->setNamedItem(static_cast<$Node*>(static_cast<$NodeImpl*>(attr)));
			}
		}
	}
}

void AbstractDOMParser::startAttlist($String* elementName, $Augmentations* augs) {
}

void AbstractDOMParser::endAttlist($Augmentations* augs) {
}

$Element* AbstractDOMParser::createElementNode($QName* element) {
	$var($Element, el, nullptr);
	if (this->fNamespaceAware) {
		if (this->fDocumentImpl != nullptr) {
			$assign(el, $nc(this->fDocumentImpl)->createElementNS($nc(element)->uri, element->rawname, element->localpart));
		} else {
			$assign(el, $nc(this->fDocument)->createElementNS($nc(element)->uri, element->rawname));
		}
	} else {
		$assign(el, $nc(this->fDocument)->createElement($nc(element)->rawname));
	}
	return el;
}

$Attr* AbstractDOMParser::createAttrNode($QName* attrQName) {
	$var($Attr, attr, nullptr);
	if (this->fNamespaceAware) {
		if (this->fDocumentImpl != nullptr) {
			$assign(attr, $nc(this->fDocumentImpl)->createAttributeNS($nc(attrQName)->uri, attrQName->rawname, attrQName->localpart));
		} else {
			$assign(attr, $nc(this->fDocument)->createAttributeNS($nc(attrQName)->uri, attrQName->rawname));
		}
	} else {
		$assign(attr, $nc(this->fDocument)->createAttribute($nc(attrQName)->rawname));
	}
	return attr;
}

void AbstractDOMParser::setCharacterData(bool sawChars) {
	$useLocalCurrentObjectStackCache();
	this->fFirstChunk = sawChars;
	$var($Node, child, $nc(this->fCurrentNode)->getLastChild());
	if (child != nullptr) {
		if ($nc(this->fStringBuilder)->length() > 0) {
			if (child->getNodeType() == $Node::TEXT_NODE) {
				if (this->fDocumentImpl != nullptr) {
					$nc(($cast($TextImpl, child)))->replaceData($($nc(this->fStringBuilder)->toString()));
				} else {
					$nc(($cast($Text, child)))->setData($($nc(this->fStringBuilder)->toString()));
				}
			}
			$nc(this->fStringBuilder)->setLength(0);
		}
		if (this->fDOMFilter != nullptr && !this->fInEntityRef) {
			bool var$0 = (child->getNodeType() == $Node::TEXT_NODE);
			if (var$0 && (((int32_t)($nc(this->fDOMFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_TEXT)) != 0)) {
				int16_t code = $nc(this->fDOMFilter)->acceptNode(child);
				switch (code) {
				case $LSParserFilter::FILTER_INTERRUPT:
					{
						{
							$init($AbstractDOMParser$Abort);
							$throw($AbstractDOMParser$Abort::INSTANCE);
						}
					}
				case $LSParserFilter::FILTER_REJECT:
					{
						{
						}
					}
				case $LSParserFilter::FILTER_SKIP:
					{
						{
							$nc(this->fCurrentNode)->removeChild(child);
							return;
						}
					}
				default:
					{
						{
						}
					}
				}
			}
		}
	}
}

void AbstractDOMParser::abort() {
	$init($AbstractDOMParser$Abort);
	$throw($AbstractDOMParser$Abort::INSTANCE);
}

void clinit$AbstractDOMParser($Class* class$) {
	$init($Constants);
	$assignStatic(AbstractDOMParser::NAMESPACES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(AbstractDOMParser::CREATE_ENTITY_REF_NODES, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CREATE_ENTITY_REF_NODES_FEATURE}));
	$assignStatic(AbstractDOMParser::INCLUDE_COMMENTS_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::INCLUDE_COMMENTS_FEATURE}));
	$assignStatic(AbstractDOMParser::CREATE_CDATA_NODES_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CREATE_CDATA_NODES_FEATURE}));
	$assignStatic(AbstractDOMParser::INCLUDE_IGNORABLE_WHITESPACE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::INCLUDE_IGNORABLE_WHITESPACE}));
	$assignStatic(AbstractDOMParser::DEFER_NODE_EXPANSION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::DEFER_NODE_EXPANSION_FEATURE}));
	$assignStatic(AbstractDOMParser::DOCUMENT_CLASS_NAME, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DOCUMENT_CLASS_NAME_PROPERTY}));
	$assignStatic(AbstractDOMParser::CURRENT_ELEMENT_NODE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::CURRENT_ELEMENT_NODE_PROPERTY}));
	$assignStatic(AbstractDOMParser::DEFAULT_DOCUMENT_CLASS_NAME, "com.sun.org.apache.xerces.internal.dom.DocumentImpl"_s);
	$assignStatic(AbstractDOMParser::CORE_DOCUMENT_CLASS_NAME, "com.sun.org.apache.xerces.internal.dom.CoreDocumentImpl"_s);
	$assignStatic(AbstractDOMParser::PSVI_DOCUMENT_CLASS_NAME, "com.sun.org.apache.xerces.internal.dom.PSVIDocumentImpl"_s);
	$assignStatic(AbstractDOMParser::RECOGNIZED_FEATURES, $new($StringArray, {
		AbstractDOMParser::NAMESPACES,
		AbstractDOMParser::CREATE_ENTITY_REF_NODES,
		AbstractDOMParser::INCLUDE_COMMENTS_FEATURE,
		AbstractDOMParser::CREATE_CDATA_NODES_FEATURE,
		AbstractDOMParser::INCLUDE_IGNORABLE_WHITESPACE,
		AbstractDOMParser::DEFER_NODE_EXPANSION
	}));
	$assignStatic(AbstractDOMParser::RECOGNIZED_PROPERTIES, $new($StringArray, {
		AbstractDOMParser::DOCUMENT_CLASS_NAME,
		AbstractDOMParser::CURRENT_ELEMENT_NODE
	}));
}

AbstractDOMParser::AbstractDOMParser() {
}

$Class* AbstractDOMParser::load$($String* name, bool initialize) {
	$loadClass(AbstractDOMParser, name, initialize, &_AbstractDOMParser_ClassInfo_, clinit$AbstractDOMParser, allocate$AbstractDOMParser);
	return class$;
}

$Class* AbstractDOMParser::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com