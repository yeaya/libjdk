#include <com/sun/org/apache/xml/internal/serializer/dom3/DOM3TreeWalker.h>

#include <com/sun/org/apache/xerces/internal/util/XML11Char.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xml/internal/serializer/ExtendedLexicalHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/OutputPropertiesFactory.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMConstants.h>
#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMErrorImpl.h>
#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMLocatorImpl.h>
#include <com/sun/org/apache/xml/internal/serializer/dom3/NamespaceSupport.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Messages.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Utils.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <javax/xml/transform/Result.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Entity.h>
#include <org/w3c/dom/EntityReference.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/TypeInfo.h>
#include <org/w3c/dom/ls/LSSerializerFilter.h>
#include <org/w3c/dom/traversal/NodeFilter.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/helpers/LocatorImpl.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CANONICAL
#undef CDATA
#undef CDATA_SECTION_NODE
#undef CHARNORMALIZE
#undef COMMENTS
#undef COMMENT_NODE
#undef DISCARDDEFAULT
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef DOM_CDATA_SECTIONS
#undef DOM_COMMENTS
#undef DOM_DISCARD_DEFAULT_CONTENT
#undef DOM_ELEMENT_CONTENT_WHITESPACE
#undef DOM_ENTITIES
#undef DOM_FORMAT_PRETTY_PRINT
#undef DOM_NAMESPACES
#undef DOM_NAMESPACE_DECLARATIONS
#undef DOM_SPLIT_CDATA
#undef DOM_WELLFORMED
#undef DTNORMALIZE
#undef ELEMENT_NODE
#undef ELEM_CONTENT_WHITESPACE
#undef ENTITIES
#undef ENTITY_REFERENCE_NODE
#undef ER_ATTR_UNBOUND_PREFIX_IN_ENTREF
#undef ER_CDATA_SECTIONS_SPLIT
#undef ER_ELEM_UNBOUND_PREFIX_IN_ENTREF
#undef ER_NS_PREFIX_CANNOT_BE_BOUND
#undef ER_NULL_LOCAL_ELEMENT_NAME
#undef ER_WF_DASH_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER
#undef ER_WF_INVALID_CHARACTER_IN_CDATA
#undef ER_WF_INVALID_CHARACTER_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER_IN_NODE_NAME
#undef ER_WF_INVALID_CHARACTER_IN_PI
#undef ER_WF_INVALID_CHARACTER_IN_TEXT
#undef ER_WF_LT_IN_ATTVAL
#undef ER_WF_REF_TO_EXTERNAL_ENT
#undef ER_WF_REF_TO_UNPARSED_ENT
#undef ER_WRITING_INTERNAL_SUBSET
#undef FILTER_REJECT
#undef FILTER_SKIP
#undef IGNORE_CHAR_DENORMALIZE
#undef INFOSET
#undef NAMESPACEDECLS
#undef NAMESPACES
#undef NORMALIZECHARS
#undef PI_DISABLE_OUTPUT_ESCAPING
#undef PI_ENABLE_OUTPUT_ESCAPING
#undef PRETTY_PRINT
#undef PROCESSING_INSTRUCTION_NODE
#undef SCHEMAVALIDATE
#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING
#undef SHOW_ATTRIBUTE
#undef SHOW_CDATA_SECTION
#undef SHOW_COMMENT
#undef SHOW_ELEMENT
#undef SHOW_PROCESSING_INSTRUCTION
#undef SHOW_TEXT
#undef SPLITCDATA
#undef S_DOM3_PROPERTIES_NS
#undef S_KEY_ENTITIES
#undef S_KEY_LINE_SEPARATOR
#undef S_XERCES_PROPERTIES_NS
#undef S_XML_VERSION
#undef S_XSL_OUTPUT_ENCODING
#undef S_XSL_OUTPUT_OMIT_XML_DECL
#undef S_XSL_VALUE_ENTITIES
#undef TEXT_NODE
#undef VALIDATE
#undef WELLFORMED
#undef XMLDECL
#undef XMLNS_PREFIX
#undef XMLNS_URI
#undef XML_PREFIX
#undef XML_URI

using $XML11Char = ::com::sun::org::apache::xerces::internal::util::XML11Char;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $ExtendedLexicalHandler = ::com::sun::org::apache::xml::internal::serializer::ExtendedLexicalHandler;
using $OutputPropertiesFactory = ::com::sun::org::apache::xml::internal::serializer::OutputPropertiesFactory;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $DOMConstants = ::com::sun::org::apache::xml::internal::serializer::dom3::DOMConstants;
using $DOMErrorImpl = ::com::sun::org::apache::xml::internal::serializer::dom3::DOMErrorImpl;
using $DOMLocatorImpl = ::com::sun::org::apache::xml::internal::serializer::dom3::DOMLocatorImpl;
using $NamespaceSupport = ::com::sun::org::apache::xml::internal::serializer::dom3::NamespaceSupport;
using $Messages = ::com::sun::org::apache::xml::internal::serializer::utils::Messages;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $Utils = ::com::sun::org::apache::xml::internal::serializer::utils::Utils;
using $IOException = ::java::io::IOException;
using $Writer = ::java::io::Writer;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;
using $Result = ::javax::xml::transform::Result;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $Attr = ::org::w3c::dom::Attr;
using $CDATASection = ::org::w3c::dom::CDATASection;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Comment = ::org::w3c::dom::Comment;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $Entity = ::org::w3c::dom::Entity;
using $EntityReference = ::org::w3c::dom::EntityReference;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $Text = ::org::w3c::dom::Text;
using $TypeInfo = ::org::w3c::dom::TypeInfo;
using $LSSerializerFilter = ::org::w3c::dom::ls::LSSerializerFilter;
using $NodeFilter = ::org::w3c::dom::traversal::NodeFilter;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;
using $LocatorImpl = ::org::xml::sax::helpers::LocatorImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {

$FieldInfo _DOM3TreeWalker_FieldInfo_[] = {
	{"fSerializer", "Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PRIVATE, $field(DOM3TreeWalker, fSerializer)},
	{"fLocator", "Lorg/xml/sax/helpers/LocatorImpl;", nullptr, $PRIVATE, $field(DOM3TreeWalker, fLocator)},
	{"fErrorHandler", "Lorg/w3c/dom/DOMErrorHandler;", nullptr, $PRIVATE, $field(DOM3TreeWalker, fErrorHandler)},
	{"fFilter", "Lorg/w3c/dom/ls/LSSerializerFilter;", nullptr, $PRIVATE, $field(DOM3TreeWalker, fFilter)},
	{"fLexicalHandler", "Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PRIVATE, $field(DOM3TreeWalker, fLexicalHandler)},
	{"fWhatToShowFilter", "I", nullptr, $PRIVATE, $field(DOM3TreeWalker, fWhatToShowFilter)},
	{"fNewLine", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOM3TreeWalker, fNewLine)},
	{"fDOMConfigProperties", "Ljava/util/Properties;", nullptr, $PRIVATE, $field(DOM3TreeWalker, fDOMConfigProperties)},
	{"fInEntityRef", "Z", nullptr, $PRIVATE, $field(DOM3TreeWalker, fInEntityRef)},
	{"fXMLVersion", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOM3TreeWalker, fXMLVersion)},
	{"fIsXMLVersion11", "Z", nullptr, $PRIVATE, $field(DOM3TreeWalker, fIsXMLVersion11)},
	{"fIsLevel3DOM", "Z", nullptr, $PRIVATE, $field(DOM3TreeWalker, fIsLevel3DOM)},
	{"fFeatures", "I", nullptr, $PRIVATE, $field(DOM3TreeWalker, fFeatures)},
	{"fNextIsRaw", "Z", nullptr, 0, $field(DOM3TreeWalker, fNextIsRaw)},
	{"XMLNS_URI", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOM3TreeWalker, XMLNS_URI)},
	{"XMLNS_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOM3TreeWalker, XMLNS_PREFIX)},
	{"XML_URI", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOM3TreeWalker, XML_URI)},
	{"XML_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOM3TreeWalker, XML_PREFIX)},
	{"fNSBinder", "Lcom/sun/org/apache/xml/internal/serializer/dom3/NamespaceSupport;", nullptr, $PROTECTED, $field(DOM3TreeWalker, fNSBinder)},
	{"fLocalNSBinder", "Lcom/sun/org/apache/xml/internal/serializer/dom3/NamespaceSupport;", nullptr, $PROTECTED, $field(DOM3TreeWalker, fLocalNSBinder)},
	{"fElementDepth", "I", nullptr, $PRIVATE, $field(DOM3TreeWalker, fElementDepth)},
	{"CANONICAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, CANONICAL)},
	{"CDATA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, CDATA)},
	{"CHARNORMALIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, CHARNORMALIZE)},
	{"COMMENTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, COMMENTS)},
	{"DTNORMALIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, DTNORMALIZE)},
	{"ELEM_CONTENT_WHITESPACE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, ELEM_CONTENT_WHITESPACE)},
	{"ENTITIES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, ENTITIES)},
	{"INFOSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, INFOSET)},
	{"NAMESPACES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, NAMESPACES)},
	{"NAMESPACEDECLS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, NAMESPACEDECLS)},
	{"NORMALIZECHARS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, NORMALIZECHARS)},
	{"SPLITCDATA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, SPLITCDATA)},
	{"VALIDATE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, VALIDATE)},
	{"SCHEMAVALIDATE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, SCHEMAVALIDATE)},
	{"WELLFORMED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, WELLFORMED)},
	{"DISCARDDEFAULT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, DISCARDDEFAULT)},
	{"PRETTY_PRINT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, PRETTY_PRINT)},
	{"IGNORE_CHAR_DENORMALIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, IGNORE_CHAR_DENORMALIZE)},
	{"XMLDECL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOM3TreeWalker, XMLDECL)},
	{"fFeatureMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DOM3TreeWalker, fFeatureMap)},
	{}
};

$MethodInfo _DOM3TreeWalker_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;Lorg/w3c/dom/DOMErrorHandler;Lorg/w3c/dom/ls/LSSerializerFilter;Ljava/lang/String;)V", nullptr, 0, $method(DOM3TreeWalker, init$, void, $SerializationHandler*, $DOMErrorHandler*, $LSSerializerFilter*, $String*)},
	{"applyFilter", "(Lorg/w3c/dom/Node;I)Z", nullptr, $PROTECTED, $method(DOM3TreeWalker, applyFilter, bool, $Node*, int32_t)},
	{"checkUnboundPrefixInEntRef", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, checkUnboundPrefixInEntRef, void, $Node*)},
	{"dispatachChars", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE | $FINAL, $method(DOM3TreeWalker, dispatachChars, void, $Node*), "org.xml.sax.SAXException"},
	{"endNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, endNode, void, $Node*), "org.xml.sax.SAXException"},
	{"fixupElementNS", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, fixupElementNS, void, $Node*), "org.xml.sax.SAXException"},
	{"initProperties", "(Ljava/util/Properties;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, initProperties, void, $Properties*)},
	{"isAttributeWellFormed", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, isAttributeWellFormed, void, $Node*)},
	{"isCDATASectionWellFormed", "(Lorg/w3c/dom/CDATASection;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, isCDATASectionWellFormed, void, $CDATASection*)},
	{"isCommentWellFormed", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, isCommentWellFormed, void, $String*)},
	{"isElementWellFormed", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, isElementWellFormed, void, $Node*)},
	{"isEntityReferneceWellFormed", "(Lorg/w3c/dom/EntityReference;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, isEntityReferneceWellFormed, void, $EntityReference*)},
	{"isPIWellFormed", "(Lorg/w3c/dom/ProcessingInstruction;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, isPIWellFormed, void, $ProcessingInstruction*)},
	{"isTextWellFormed", "(Lorg/w3c/dom/Text;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, isTextWellFormed, void, $Text*)},
	{"isValidQName", "(Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PROTECTED, $method(DOM3TreeWalker, isValidQName, bool, $String*, $String*, bool)},
	{"isWFXMLChar", "(Ljava/lang/String;Ljava/lang/Character;)Z", nullptr, $PROTECTED, $method(DOM3TreeWalker, isWFXMLChar, bool, $String*, $Character*)},
	{"isWFXMLChar", "(Ljava/lang/String;)Ljava/lang/Character;", nullptr, $PROTECTED, $method(DOM3TreeWalker, isWFXMLChar, $Character*, $String*)},
	{"isXMLName", "(Ljava/lang/String;Z)Z", nullptr, $PROTECTED, $method(DOM3TreeWalker, isXMLName, bool, $String*, bool)},
	{"recordLocalNSDecl", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, recordLocalNSDecl, void, $Node*)},
	{"serializeAttList", "(Lorg/w3c/dom/Element;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, serializeAttList, void, $Element*), "org.xml.sax.SAXException"},
	{"serializeCDATASection", "(Lorg/w3c/dom/CDATASection;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, serializeCDATASection, void, $CDATASection*), "org.xml.sax.SAXException"},
	{"serializeComment", "(Lorg/w3c/dom/Comment;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, serializeComment, void, $Comment*), "org.xml.sax.SAXException"},
	{"serializeDocType", "(Lorg/w3c/dom/DocumentType;Z)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, serializeDocType, void, $DocumentType*, bool), "org.xml.sax.SAXException"},
	{"serializeElement", "(Lorg/w3c/dom/Element;Z)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, serializeElement, void, $Element*, bool), "org.xml.sax.SAXException"},
	{"serializeEntityReference", "(Lorg/w3c/dom/EntityReference;Z)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, serializeEntityReference, void, $EntityReference*, bool), "org.xml.sax.SAXException"},
	{"serializePI", "(Lorg/w3c/dom/ProcessingInstruction;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, serializePI, void, $ProcessingInstruction*), "org.xml.sax.SAXException"},
	{"serializeText", "(Lorg/w3c/dom/Text;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, serializeText, void, $Text*), "org.xml.sax.SAXException"},
	{"startNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $method(DOM3TreeWalker, startNode, void, $Node*), "org.xml.sax.SAXException"},
	{"traverse", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(DOM3TreeWalker, traverse, void, $Node*), "org.xml.sax.SAXException"},
	{"traverse", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(DOM3TreeWalker, traverse, void, $Node*, $Node*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _DOM3TreeWalker_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.dom3.DOM3TreeWalker",
	"java.lang.Object",
	nullptr,
	_DOM3TreeWalker_FieldInfo_,
	_DOM3TreeWalker_MethodInfo_
};

$Object* allocate$DOM3TreeWalker($Class* clazz) {
	return $of($alloc(DOM3TreeWalker));
}

$String* DOM3TreeWalker::XMLNS_URI = nullptr;
$String* DOM3TreeWalker::XMLNS_PREFIX = nullptr;
$String* DOM3TreeWalker::XML_URI = nullptr;
$String* DOM3TreeWalker::XML_PREFIX = nullptr;
$Map* DOM3TreeWalker::fFeatureMap = nullptr;

void DOM3TreeWalker::init$($SerializationHandler* serialHandler, $DOMErrorHandler* errHandler, $LSSerializerFilter* filter, $String* newLine) {
	$set(this, fSerializer, nullptr);
	$set(this, fLocator, $new($LocatorImpl));
	$set(this, fErrorHandler, nullptr);
	$set(this, fFilter, nullptr);
	$set(this, fLexicalHandler, nullptr);
	$set(this, fNewLine, nullptr);
	$set(this, fDOMConfigProperties, nullptr);
	this->fInEntityRef = false;
	$set(this, fXMLVersion, nullptr);
	this->fIsXMLVersion11 = false;
	this->fIsLevel3DOM = false;
	this->fFeatures = 0;
	this->fNextIsRaw = false;
	this->fElementDepth = 0;
	$set(this, fSerializer, serialHandler);
	$set(this, fErrorHandler, errHandler);
	$set(this, fFilter, filter);
	$set(this, fLexicalHandler, nullptr);
	$set(this, fNewLine, newLine);
	$set(this, fNSBinder, $new($NamespaceSupport));
	$set(this, fLocalNSBinder, $new($NamespaceSupport));
	$set(this, fDOMConfigProperties, $nc(this->fSerializer)->getOutputFormat());
	$nc(this->fSerializer)->setDocumentLocator(this->fLocator);
	initProperties(this->fDOMConfigProperties);
}

void DOM3TreeWalker::traverse($Node* pos$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Node, pos, pos$renamed);
	$nc(this->fSerializer)->startDocument();
	if ($nc(pos)->getNodeType() != $Node::DOCUMENT_NODE) {
		$var($Document, ownerDoc, pos->getOwnerDocument());
		if (ownerDoc != nullptr && $nc($(ownerDoc->getImplementation()))->hasFeature("Core"_s, "3.0"_s)) {
			this->fIsLevel3DOM = true;
		}
	} else if ($nc($($nc(($cast($Document, pos)))->getImplementation()))->hasFeature("Core"_s, "3.0"_s)) {
		this->fIsLevel3DOM = true;
	}
	if ($instanceOf($LexicalHandler, this->fSerializer)) {
		$set(this, fLexicalHandler, static_cast<$LexicalHandler*>(this->fSerializer));
	}
	if (this->fFilter != nullptr) {
		this->fWhatToShowFilter = $nc(this->fFilter)->getWhatToShow();
	}
	$var($Node, top, pos);
	while (nullptr != pos) {
		startNode(pos);
		$var($Node, nextNode, nullptr);
		$assign(nextNode, pos->getFirstChild());
		while (nullptr == nextNode) {
			endNode(pos);
			if ($nc($of(top))->equals(pos)) {
				break;
			}
			$assign(nextNode, $nc(pos)->getNextSibling());
			if (nullptr == nextNode) {
				$assign(pos, pos->getParentNode());
				if ((nullptr == pos) || ($nc($of(top))->equals(pos))) {
					if (nullptr != pos) {
						endNode(pos);
					}
					$assign(nextNode, nullptr);
					break;
				}
			}
		}
		$assign(pos, nextNode);
	}
	$nc(this->fSerializer)->endDocument();
}

void DOM3TreeWalker::traverse($Node* pos$renamed, $Node* top) {
	$useLocalCurrentObjectStackCache();
	$var($Node, pos, pos$renamed);
	$nc(this->fSerializer)->startDocument();
	if ($nc(pos)->getNodeType() != $Node::DOCUMENT_NODE) {
		$var($Document, ownerDoc, pos->getOwnerDocument());
		if (ownerDoc != nullptr && $nc($(ownerDoc->getImplementation()))->hasFeature("Core"_s, "3.0"_s)) {
			this->fIsLevel3DOM = true;
		}
	} else if ($nc($($nc(($cast($Document, pos)))->getImplementation()))->hasFeature("Core"_s, "3.0"_s)) {
		this->fIsLevel3DOM = true;
	}
	if ($instanceOf($LexicalHandler, this->fSerializer)) {
		$set(this, fLexicalHandler, static_cast<$LexicalHandler*>(this->fSerializer));
	}
	if (this->fFilter != nullptr) {
		this->fWhatToShowFilter = $nc(this->fFilter)->getWhatToShow();
	}
	while (nullptr != pos) {
		startNode(pos);
		$var($Node, nextNode, nullptr);
		$assign(nextNode, pos->getFirstChild());
		while (nullptr == nextNode) {
			endNode(pos);
			if ((nullptr != top) && $of(top)->equals(pos)) {
				break;
			}
			$assign(nextNode, $nc(pos)->getNextSibling());
			if (nullptr == nextNode) {
				$assign(pos, pos->getParentNode());
				if ((nullptr == pos) || ((nullptr != top) && $of(top)->equals(pos))) {
					$assign(nextNode, nullptr);
					break;
				}
			}
		}
		$assign(pos, nextNode);
	}
	$nc(this->fSerializer)->endDocument();
}

void DOM3TreeWalker::dispatachChars($Node* node) {
	$useLocalCurrentObjectStackCache();
	if (this->fSerializer != nullptr) {
		$var($String, data, $nc(($cast($Text, node)))->getData());
		$var($chars, var$0, $nc(data)->toCharArray());
		$nc(this->fSerializer)->characters(var$0, 0, data->length());
	}
}

void DOM3TreeWalker::startNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Locator, node)) {
		$var($Locator, loc, $cast($Locator, node));
		$nc(this->fLocator)->setColumnNumber($nc(loc)->getColumnNumber());
		$nc(this->fLocator)->setLineNumber($nc(loc)->getLineNumber());
		$nc(this->fLocator)->setPublicId($($nc(loc)->getPublicId()));
		$nc(this->fLocator)->setSystemId($($nc(loc)->getSystemId()));
	} else {
		$nc(this->fLocator)->setColumnNumber(0);
		$nc(this->fLocator)->setLineNumber(0);
	}
	switch ($nc(node)->getNodeType()) {
	case $Node::DOCUMENT_TYPE_NODE:
		{
			serializeDocType($cast($DocumentType, node), true);
			break;
		}
	case $Node::COMMENT_NODE:
		{
			serializeComment($cast($Comment, node));
			break;
		}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{
			break;
		}
	case $Node::DOCUMENT_NODE:
		{
			break;
		}
	case $Node::ELEMENT_NODE:
		{
			serializeElement($cast($Element, node), true);
			break;
		}
	case $Node::PROCESSING_INSTRUCTION_NODE:
		{
			serializePI($cast($ProcessingInstruction, node));
			break;
		}
	case $Node::CDATA_SECTION_NODE:
		{
			serializeCDATASection($cast($CDATASection, node));
			break;
		}
	case $Node::TEXT_NODE:
		{
			serializeText($cast($Text, node));
			break;
		}
	case $Node::ENTITY_REFERENCE_NODE:
		{
			serializeEntityReference($cast($EntityReference, node), true);
			break;
		}
	default:
		{}
	}
}

void DOM3TreeWalker::endNode($Node* node) {
	switch ($nc(node)->getNodeType()) {
	case $Node::DOCUMENT_NODE:
		{
			break;
		}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			serializeDocType($cast($DocumentType, node), false);
			break;
		}
	case $Node::ELEMENT_NODE:
		{
			serializeElement($cast($Element, node), false);
			break;
		}
	case $Node::CDATA_SECTION_NODE:
		{
			break;
		}
	case $Node::ENTITY_REFERENCE_NODE:
		{
			serializeEntityReference($cast($EntityReference, node), false);
			break;
		}
	default:
		{}
	}
}

bool DOM3TreeWalker::applyFilter($Node* node, int32_t nodeType) {
	if (this->fFilter != nullptr && ((int32_t)(this->fWhatToShowFilter & (uint32_t)nodeType)) != 0) {
		int16_t code = $nc(this->fFilter)->acceptNode(node);
		switch (code) {
		case $NodeFilter::FILTER_REJECT:
			{}
		case $NodeFilter::FILTER_SKIP:
			{
				return false;
			}
		default:
			{}
		}
	}
	return true;
}

void DOM3TreeWalker::serializeDocType($DocumentType* node, bool bStart) {
	$useLocalCurrentObjectStackCache();
	$var($String, docTypeName, $nc(node)->getNodeName());
	$var($String, publicId, node->getPublicId());
	$var($String, systemId, node->getSystemId());
	$var($String, internalSubset, node->getInternalSubset());
	if (internalSubset != nullptr && !""_s->equals(internalSubset)) {
		if (bStart) {
			try {
				$var($Writer, writer, $nc(this->fSerializer)->getWriter());
				$var($StringBuilder, dtd, $new($StringBuilder));
				dtd->append("<!DOCTYPE "_s);
				dtd->append(docTypeName);
				if (nullptr != publicId) {
					dtd->append(" PUBLIC \""_s);
					dtd->append(publicId);
					dtd->append(u'\"');
				}
				if (nullptr != systemId) {
					char16_t quote = $JdkXmlUtils::getQuoteChar(systemId);
					if (nullptr == publicId) {
						dtd->append(" SYSTEM "_s)->append(quote);
					} else {
						dtd->append(" "_s)->append(quote);
					}
					dtd->append(systemId);
					dtd->append(quote);
				}
				dtd->append(" [ "_s);
				dtd->append(this->fNewLine);
				dtd->append(internalSubset);
				dtd->append("]>"_s);
				dtd->append(this->fNewLine);
				$nc(writer)->write($(dtd->toString()));
				writer->flush();
			} catch ($IOException& e) {
				$init($Utils);
				$init($MsgKey);
				$throwNew($SAXException, $($nc($Utils::messages)->createMessage($MsgKey::ER_WRITING_INTERNAL_SUBSET, nullptr)), e);
			}
		}
	} else if (bStart) {
		if (this->fLexicalHandler != nullptr) {
			$nc(this->fLexicalHandler)->startDTD(docTypeName, publicId, systemId);
		}
	} else if (this->fLexicalHandler != nullptr) {
		$nc(this->fLexicalHandler)->endDTD();
	}
}

void DOM3TreeWalker::serializeComment($Comment* node) {
	$useLocalCurrentObjectStackCache();
	if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::COMMENTS)) != 0) {
		$var($String, data, $nc(node)->getData());
		if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::WELLFORMED)) != 0) {
			isCommentWellFormed(data);
		}
		if (this->fLexicalHandler != nullptr) {
			if (!applyFilter(node, $NodeFilter::SHOW_COMMENT)) {
				return;
			}
			$var($chars, var$0, $nc(data)->toCharArray());
			$nc(this->fLexicalHandler)->comment(var$0, 0, data->length());
		}
	}
}

void DOM3TreeWalker::serializeElement($Element* node, bool bStart) {
	$useLocalCurrentObjectStackCache();
	if (bStart) {
		++this->fElementDepth;
		if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::WELLFORMED)) != 0) {
			isElementWellFormed(node);
		}
		if (!applyFilter(node, $NodeFilter::SHOW_ELEMENT)) {
			return;
		}
		if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::NAMESPACES)) != 0) {
			$nc(this->fNSBinder)->pushContext();
			$nc(this->fLocalNSBinder)->reset();
			recordLocalNSDecl(node);
			fixupElementNS(node);
		}
		$var($String, var$0, $nc(node)->getNamespaceURI());
		$var($String, var$1, node->getLocalName());
		$nc(this->fSerializer)->startElement(var$0, var$1, $(node->getNodeName()));
		serializeAttList(node);
	} else {
		--this->fElementDepth;
		if (!applyFilter(node, $NodeFilter::SHOW_ELEMENT)) {
			return;
		}
		$var($String, var$2, $nc(node)->getNamespaceURI());
		$var($String, var$3, node->getLocalName());
		$nc(this->fSerializer)->endElement(var$2, var$3, $(node->getNodeName()));
		if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::NAMESPACES)) != 0) {
			$nc(this->fNSBinder)->popContext();
		}
	}
}

void DOM3TreeWalker::serializeAttList($Element* node) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, atts, $nc(node)->getAttributes());
	int32_t nAttrs = $nc(atts)->getLength();
	for (int32_t i = 0; i < nAttrs; ++i) {
		$var($Node, attr, atts->item(i));
		$var($String, localName, $nc(attr)->getLocalName());
		$var($String, attrName, attr->getNodeName());
		$var($String, attrPrefix, attr->getPrefix() == nullptr ? ""_s : attr->getPrefix());
		$var($String, attrValue, attr->getNodeValue());
		$var($String, type, nullptr);
		if (this->fIsLevel3DOM) {
			$assign(type, $nc($($nc(($cast($Attr, attr)))->getSchemaTypeInfo()))->getTypeName());
		}
		$assign(type, type == nullptr ? "CDATA"_s : type);
		$var($String, attrNS, attr->getNamespaceURI());
		if (attrNS != nullptr && attrNS->length() == 0) {
			$assign(attrNS, nullptr);
			$assign(attrName, attr->getLocalName());
		}
		bool isSpecified = $nc(($cast($Attr, attr)))->getSpecified();
		bool addAttr = true;
		bool applyFilter = false;
		bool var$0 = $nc(attrName)->equals("xmlns"_s);
		bool xmlnsAttr = var$0 || $nc(attrName)->startsWith("xmlns:"_s);
		if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::WELLFORMED)) != 0) {
			isAttributeWellFormed(attr);
		}
		if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::NAMESPACES)) != 0 && !xmlnsAttr) {
			if (attrNS != nullptr) {
				$assign(attrPrefix, attrPrefix == nullptr ? ""_s : attrPrefix);
				$var($String, declAttrPrefix, $nc(this->fNSBinder)->getPrefix(attrNS));
				$var($String, declAttrNS, $nc(this->fNSBinder)->getURI(attrPrefix));
				bool var$2 = ""_s->equals(attrPrefix);
				bool var$1 = var$2 || ""_s->equals(declAttrPrefix);
				if (var$1 || !$nc(attrPrefix)->equals(declAttrPrefix)) {
					if (declAttrPrefix != nullptr && !""_s->equals(declAttrPrefix)) {
						$assign(attrPrefix, declAttrPrefix);
						if (declAttrPrefix->length() > 0) {
							$assign(attrName, $str({declAttrPrefix, ":"_s, localName}));
						} else {
							$assign(attrName, localName);
						}
					} else if (attrPrefix != nullptr && !""_s->equals(attrPrefix) && declAttrNS == nullptr) {
						if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::NAMESPACEDECLS)) != 0) {
							$nc(this->fSerializer)->addAttribute(DOM3TreeWalker::XMLNS_URI, attrPrefix, $$str({DOM3TreeWalker::XMLNS_PREFIX, ":"_s, attrPrefix}), "CDATA"_s, attrNS);
							$nc(this->fNSBinder)->declarePrefix(attrPrefix, attrNS);
							$nc(this->fLocalNSBinder)->declarePrefix(attrPrefix, attrNS);
						}
					} else {
						int32_t counter = 1;
						$assign(attrPrefix, $str({"NS"_s, $$str(counter++)}));
						while ($nc(this->fLocalNSBinder)->getURI(attrPrefix) != nullptr) {
							$assign(attrPrefix, $str({"NS"_s, $$str(counter++)}));
						}
						$assign(attrName, $str({attrPrefix, ":"_s, localName}));
						if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::NAMESPACEDECLS)) != 0) {
							$nc(this->fSerializer)->addAttribute(DOM3TreeWalker::XMLNS_URI, attrPrefix, $$str({DOM3TreeWalker::XMLNS_PREFIX, ":"_s, attrPrefix}), "CDATA"_s, attrNS);
							$nc(this->fNSBinder)->declarePrefix(attrPrefix, attrNS);
							$nc(this->fLocalNSBinder)->declarePrefix(attrPrefix, attrNS);
						}
					}
				}
			} else if (localName == nullptr) {
				$init($Utils);
				$init($MsgKey);
				$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_NULL_LOCAL_ELEMENT_NAME, $$new($ObjectArray, {$of(attrName)})));
				if (this->fErrorHandler != nullptr) {
					$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_ERROR, msg, $MsgKey::ER_NULL_LOCAL_ELEMENT_NAME, nullptr, nullptr, nullptr));
				}
			} else {
			}
		}
		if (((((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::DISCARDDEFAULT)) != 0) && isSpecified) || (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::DISCARDDEFAULT)) == 0)) {
			applyFilter = true;
		} else {
			addAttr = false;
		}
		if (applyFilter) {
			if (this->fFilter != nullptr && ((int32_t)($nc(this->fFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_ATTRIBUTE)) != 0) {
				if (!xmlnsAttr) {
					int16_t code = $nc(this->fFilter)->acceptNode(attr);
					switch (code) {
					case $NodeFilter::FILTER_REJECT:
						{}
					case $NodeFilter::FILTER_SKIP:
						{
							addAttr = false;
							break;
						}
					default:
						{}
					}
				}
			}
		}
		if (addAttr && xmlnsAttr) {
			if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::NAMESPACEDECLS)) != 0) {
				if (localName != nullptr && !""_s->equals(localName)) {
					$nc(this->fSerializer)->addAttribute(attrNS, localName, attrName, type, attrValue);
				}
			}
		} else if (addAttr && !xmlnsAttr) {
			if ((((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::NAMESPACEDECLS)) != 0) && (attrNS != nullptr)) {
				$nc(this->fSerializer)->addAttribute(attrNS, localName, attrName, type, attrValue);
			} else {
				$nc(this->fSerializer)->addAttribute(""_s, localName, attrName, type, attrValue);
			}
		}
		if (xmlnsAttr && (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::NAMESPACEDECLS)) != 0)) {
			int32_t index = 0;
			$var($String, prefix, (index = attrName->indexOf(":"_s)) < 0 ? ""_s : attrName->substring(index + 1));
			if (!""_s->equals(prefix)) {
				$nc(this->fSerializer)->namespaceAfterStartElement(prefix, attrValue);
			}
		}
	}
}

void DOM3TreeWalker::serializePI($ProcessingInstruction* node) {
	$useLocalCurrentObjectStackCache();
	$var($ProcessingInstruction, pi, node);
	$var($String, name, $nc(pi)->getNodeName());
	if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::WELLFORMED)) != 0) {
		isPIWellFormed(node);
	}
	if (!applyFilter(node, $NodeFilter::SHOW_PROCESSING_INSTRUCTION)) {
		return;
	}
	if ($nc(name)->equals("xslt-next-is-raw"_s)) {
		this->fNextIsRaw = true;
	} else {
		$nc(this->fSerializer)->processingInstruction(name, $(pi->getData()));
	}
}

void DOM3TreeWalker::serializeCDATASection($CDATASection* node) {
	$useLocalCurrentObjectStackCache();
	if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::WELLFORMED)) != 0) {
		isCDATASectionWellFormed(node);
	}
	if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::CDATA)) != 0) {
		$var($String, nodeValue, $nc(node)->getNodeValue());
		int32_t endIndex = $nc(nodeValue)->indexOf("]]>"_s);
		if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::SPLITCDATA)) != 0) {
			if (endIndex >= 0) {
				$var($String, relatedData, nodeValue->substring(0, endIndex + 2));
				$init($Utils);
				$init($MsgKey);
				$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_CDATA_SECTIONS_SPLIT, nullptr));
				if (this->fErrorHandler != nullptr) {
					$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_WARNING, msg, $MsgKey::ER_CDATA_SECTIONS_SPLIT, nullptr, relatedData, nullptr));
				}
			}
		} else if (endIndex >= 0) {
			$var($String, relatedData, nodeValue->substring(0, endIndex + 2));
			$init($Utils);
			$init($MsgKey);
			$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_CDATA_SECTIONS_SPLIT, nullptr));
			if (this->fErrorHandler != nullptr) {
				$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_ERROR, msg, $MsgKey::ER_CDATA_SECTIONS_SPLIT));
			}
			return;
		}
		if (!applyFilter(node, $NodeFilter::SHOW_CDATA_SECTION)) {
			return;
		}
		if (this->fLexicalHandler != nullptr) {
			$nc(this->fLexicalHandler)->startCDATA();
		}
		dispatachChars(node);
		if (this->fLexicalHandler != nullptr) {
			$nc(this->fLexicalHandler)->endCDATA();
		}
	} else {
		dispatachChars(node);
	}
}

void DOM3TreeWalker::serializeText($Text* node) {
	$useLocalCurrentObjectStackCache();
	if (this->fNextIsRaw) {
		this->fNextIsRaw = false;
		$init($Result);
		$nc(this->fSerializer)->processingInstruction($Result::PI_DISABLE_OUTPUT_ESCAPING, ""_s);
		dispatachChars(node);
		$nc(this->fSerializer)->processingInstruction($Result::PI_ENABLE_OUTPUT_ESCAPING, ""_s);
	} else {
		bool bDispatch = false;
		if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::WELLFORMED)) != 0) {
			isTextWellFormed(node);
		}
		bool isElementContentWhitespace = false;
		if (this->fIsLevel3DOM) {
			isElementContentWhitespace = $nc(node)->isElementContentWhitespace();
		}
		if (isElementContentWhitespace) {
			if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::ELEM_CONTENT_WHITESPACE)) != 0) {
				bDispatch = true;
			}
		} else {
			bDispatch = true;
		}
		if (!applyFilter(node, $NodeFilter::SHOW_TEXT)) {
			return;
		}
		bool var$0 = bDispatch;
		if (var$0) {
			bool var$1 = !$nc(this->fSerializer)->getIndent();
			var$0 = (var$1 || !$($($nc($($nc(node)->getData()))->replace(u'\n', u' '))->trim())->isEmpty());
		}
		if (var$0) {
			dispatachChars(node);
		}
	}
}

void DOM3TreeWalker::serializeEntityReference($EntityReference* node, bool bStart) {
	$useLocalCurrentObjectStackCache();
	if (bStart) {
		$var($EntityReference, eref, node);
		if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::ENTITIES)) != 0) {
			if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::WELLFORMED)) != 0) {
				isEntityReferneceWellFormed(node);
			}
			if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::NAMESPACES)) != 0) {
				checkUnboundPrefixInEntRef(node);
			}
		}
		if (this->fLexicalHandler != nullptr && (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::ENTITIES)) != 0 || !$nc(node)->hasChildNodes())) {
			$nc(this->fLexicalHandler)->startEntity($($nc(eref)->getNodeName()));
		}
	} else {
		$var($EntityReference, eref, node);
		if (this->fLexicalHandler != nullptr) {
			$nc(this->fLexicalHandler)->endEntity($($nc(eref)->getNodeName()));
		}
	}
}

bool DOM3TreeWalker::isXMLName($String* s, bool xml11Version) {
	if (s == nullptr) {
		return false;
	}
	if (!xml11Version) {
		return $XMLChar::isValidName(s);
	} else {
		return $XML11Char::isXML11ValidName(s);
	}
}

bool DOM3TreeWalker::isValidQName($String* prefix, $String* local, bool xml11Version) {
	if (local == nullptr) {
		return false;
	}
	bool validNCName = false;
	if (!xml11Version) {
		bool var$0 = (prefix == nullptr || $XMLChar::isValidNCName(prefix));
		validNCName = var$0 && $XMLChar::isValidNCName(local);
	} else {
		bool var$1 = (prefix == nullptr || $XML11Char::isXML11ValidNCName(prefix));
		validNCName = var$1 && $XML11Char::isXML11ValidNCName(local);
	}
	return validNCName;
}

bool DOM3TreeWalker::isWFXMLChar($String* chardata, $Character* refInvalidChar$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Character, refInvalidChar, refInvalidChar$renamed);
	if (chardata == nullptr || ($nc(chardata)->length() == 0)) {
		return true;
	}
	$var($chars, dataarray, $nc(chardata)->toCharArray());
	int32_t datalength = dataarray->length;
	if (this->fIsXMLVersion11) {
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
				$assign(refInvalidChar, $Character::valueOf(ch));
				return false;
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
				$assign(refInvalidChar, $Character::valueOf(ch));
				return false;
			}
		}
	}
	return true;
}

$Character* DOM3TreeWalker::isWFXMLChar($String* chardata) {
	$useLocalCurrentObjectStackCache();
	$var($Character, refInvalidChar, nullptr);
	if (chardata == nullptr || ($nc(chardata)->length() == 0)) {
		return nullptr;
	}
	$var($chars, dataarray, $nc(chardata)->toCharArray());
	int32_t datalength = dataarray->length;
	if (this->fIsXMLVersion11) {
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
				$assign(refInvalidChar, $Character::valueOf(ch));
				return refInvalidChar;
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
				$assign(refInvalidChar, $Character::valueOf(ch));
				return refInvalidChar;
			}
		}
	}
	return nullptr;
}

void DOM3TreeWalker::isCommentWellFormed($String* data) {
	$useLocalCurrentObjectStackCache();
	if (data == nullptr || ($nc(data)->length() == 0)) {
		return;
	}
	$var($chars, dataarray, $nc(data)->toCharArray());
	int32_t datalength = dataarray->length;
	if (this->fIsXMLVersion11) {
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
				$init($Utils);
				$init($MsgKey);
				$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT, $$new($ObjectArray, {$($of($Character::valueOf(c)))})));
				if (this->fErrorHandler != nullptr) {
					$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_INVALID_CHARACTER, nullptr, nullptr, nullptr));
				}
			} else if (c == u'-' && i < datalength && dataarray->get(i) == u'-') {
				$init($Utils);
				$init($MsgKey);
				$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_DASH_IN_COMMENT, nullptr));
				if (this->fErrorHandler != nullptr) {
					$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_INVALID_CHARACTER, nullptr, nullptr, nullptr));
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
					bool var$1 = $XMLChar::isLowSurrogate(c2);
					if (var$1 && $XMLChar::isSupplemental($XMLChar::supplemental(c, c2))) {
						continue;
					}
				}
				$init($Utils);
				$init($MsgKey);
				$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT, $$new($ObjectArray, {$($of($Character::valueOf(c)))})));
				if (this->fErrorHandler != nullptr) {
					$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_INVALID_CHARACTER, nullptr, nullptr, nullptr));
				}
			} else if (c == u'-' && i < datalength && dataarray->get(i) == u'-') {
				$init($Utils);
				$init($MsgKey);
				$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_DASH_IN_COMMENT, nullptr));
				if (this->fErrorHandler != nullptr) {
					$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_INVALID_CHARACTER, nullptr, nullptr, nullptr));
				}
			}
		}
	}
	return;
}

void DOM3TreeWalker::isElementWellFormed($Node* node) {
	$useLocalCurrentObjectStackCache();
	bool isNameWF = false;
	if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::NAMESPACES)) != 0) {
		$var($String, var$0, $nc(node)->getPrefix());
		isNameWF = isValidQName(var$0, $(node->getLocalName()), this->fIsXMLVersion11);
	} else {
		isNameWF = isXMLName($($nc(node)->getNodeName()), this->fIsXMLVersion11);
	}
	if (!isNameWF) {
		$init($Utils);
		$init($MsgKey);
		$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME, $$new($ObjectArray, {
			$of("Element"_s),
			$($of($nc(node)->getNodeName()))
		})));
		if (this->fErrorHandler != nullptr) {
			$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME, nullptr, nullptr, nullptr));
		}
	}
}

void DOM3TreeWalker::isAttributeWellFormed($Node* node) {
	$useLocalCurrentObjectStackCache();
	bool isNameWF = false;
	if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::NAMESPACES)) != 0) {
		$var($String, var$0, $nc(node)->getPrefix());
		isNameWF = isValidQName(var$0, $(node->getLocalName()), this->fIsXMLVersion11);
	} else {
		isNameWF = isXMLName($($nc(node)->getNodeName()), this->fIsXMLVersion11);
	}
	if (!isNameWF) {
		$init($Utils);
		$init($MsgKey);
		$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME, $$new($ObjectArray, {
			$of("Attr"_s),
			$($of($nc(node)->getNodeName()))
		})));
		if (this->fErrorHandler != nullptr) {
			$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME, nullptr, nullptr, nullptr));
		}
	}
	$var($String, value, $nc(node)->getNodeValue());
	if ($nc(value)->indexOf((int32_t)u'<') >= 0) {
		$init($Utils);
		$init($MsgKey);
		$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_LT_IN_ATTVAL, $$new($ObjectArray, {
			$($of($nc($($nc(($cast($Attr, node)))->getOwnerElement()))->getNodeName())),
			$($of(node->getNodeName()))
		})));
		if (this->fErrorHandler != nullptr) {
			$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_LT_IN_ATTVAL, nullptr, nullptr, nullptr));
		}
	}
	$var($NodeList, children, node->getChildNodes());
	for (int32_t i = 0; i < $nc(children)->getLength(); ++i) {
		$var($Node, child, children->item(i));
		if (child == nullptr) {
			continue;
		}
		switch ($nc(child)->getNodeType()) {
		case $Node::TEXT_NODE:
			{
				isTextWellFormed($cast($Text, child));
				break;
			}
		case $Node::ENTITY_REFERENCE_NODE:
			{
				isEntityReferneceWellFormed($cast($EntityReference, child));
				break;
			}
		default:
			{}
		}
	}
}

void DOM3TreeWalker::isPIWellFormed($ProcessingInstruction* node) {
	$useLocalCurrentObjectStackCache();
	if (!isXMLName($($nc(node)->getNodeName()), this->fIsXMLVersion11)) {
		$init($Utils);
		$init($MsgKey);
		$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME, $$new($ObjectArray, {
			$of("ProcessingInstruction"_s),
			$($of($nc(node)->getTarget()))
		})));
		if (this->fErrorHandler != nullptr) {
			$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME, nullptr, nullptr, nullptr));
		}
	}
	$var($Character, invalidChar, isWFXMLChar($($nc(node)->getData())));
	if (invalidChar != nullptr) {
		$init($Utils);
		$init($MsgKey);
		$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_INVALID_CHARACTER_IN_PI, $$new($ObjectArray, {$($of($Integer::toHexString($Character::getNumericValue(invalidChar->charValue()))))})));
		if (this->fErrorHandler != nullptr) {
			$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_INVALID_CHARACTER, nullptr, nullptr, nullptr));
		}
	}
}

void DOM3TreeWalker::isCDATASectionWellFormed($CDATASection* node) {
	$useLocalCurrentObjectStackCache();
	$var($Character, invalidChar, isWFXMLChar($($nc(node)->getData())));
	if (invalidChar != nullptr) {
		$init($Utils);
		$init($MsgKey);
		$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA, $$new($ObjectArray, {$($of($Integer::toHexString($Character::getNumericValue(invalidChar->charValue()))))})));
		if (this->fErrorHandler != nullptr) {
			$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_INVALID_CHARACTER, nullptr, nullptr, nullptr));
		}
	}
}

void DOM3TreeWalker::isTextWellFormed($Text* node) {
	$useLocalCurrentObjectStackCache();
	$var($Character, invalidChar, isWFXMLChar($($nc(node)->getData())));
	if (invalidChar != nullptr) {
		$init($Utils);
		$init($MsgKey);
		$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT, $$new($ObjectArray, {$($of($Integer::toHexString($Character::getNumericValue(invalidChar->charValue()))))})));
		if (this->fErrorHandler != nullptr) {
			$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_INVALID_CHARACTER, nullptr, nullptr, nullptr));
		}
	}
}

void DOM3TreeWalker::isEntityReferneceWellFormed($EntityReference* node) {
	$useLocalCurrentObjectStackCache();
	if (!isXMLName($($nc(node)->getNodeName()), this->fIsXMLVersion11)) {
		$init($Utils);
		$init($MsgKey);
		$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME, $$new($ObjectArray, {
			$of("EntityReference"_s),
			$($of($nc(node)->getNodeName()))
		})));
		if (this->fErrorHandler != nullptr) {
			$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME, nullptr, nullptr, nullptr));
		}
	}
	$var($Node, parent, $nc(node)->getParentNode());
	$var($DocumentType, docType, $nc($(node->getOwnerDocument()))->getDoctype());
	if (docType != nullptr) {
		$var($NamedNodeMap, entities, docType->getEntities());
		for (int32_t i = 0; i < $nc(entities)->getLength(); ++i) {
			$var($Entity, ent, $cast($Entity, entities->item(i)));
			$var($String, nodeName, node->getNodeName() == nullptr ? ""_s : node->getNodeName());
			$var($String, nodeNamespaceURI, node->getNamespaceURI() == nullptr ? ""_s : node->getNamespaceURI());
			$var($String, entName, $nc(ent)->getNodeName() == nullptr ? ""_s : $nc(ent)->getNodeName());
			$var($String, entNamespaceURI, ent->getNamespaceURI() == nullptr ? ""_s : ent->getNamespaceURI());
			if ($nc(parent)->getNodeType() == $Node::ELEMENT_NODE) {
				bool var$0 = $nc(entNamespaceURI)->equals(nodeNamespaceURI);
				if (var$0 && $nc(entName)->equals(nodeName)) {
					if (ent->getNotationName() != nullptr) {
						$init($Utils);
						$init($MsgKey);
						$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_REF_TO_UNPARSED_ENT, $$new($ObjectArray, {$($of(node->getNodeName()))})));
						if (this->fErrorHandler != nullptr) {
							$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_REF_TO_UNPARSED_ENT, nullptr, nullptr, nullptr));
						}
					}
				}
			}
			if ($nc(parent)->getNodeType() == $Node::ATTRIBUTE_NODE) {
				bool var$1 = $nc(entNamespaceURI)->equals(nodeNamespaceURI);
				if (var$1 && $nc(entName)->equals(nodeName)) {
					bool var$3 = ent->getPublicId() != nullptr;
					bool var$2 = var$3 || ent->getSystemId() != nullptr;
					if (var$2 || ent->getNotationName() != nullptr) {
						$init($Utils);
						$init($MsgKey);
						$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_WF_REF_TO_EXTERNAL_ENT, $$new($ObjectArray, {$($of(node->getNodeName()))})));
						if (this->fErrorHandler != nullptr) {
							$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_WF_REF_TO_EXTERNAL_ENT, nullptr, nullptr, nullptr));
						}
					}
				}
			}
		}
	}
}

void DOM3TreeWalker::checkUnboundPrefixInEntRef($Node* node) {
	$useLocalCurrentObjectStackCache();
	$var($Node, child, nullptr);
	$var($Node, next, nullptr);
	for ($assign(child, $nc(node)->getFirstChild()); child != nullptr; $assign(child, next)) {
		$assign(next, $nc(child)->getNextSibling());
		if (child->getNodeType() == $Node::ELEMENT_NODE) {
			$var($String, prefix, child->getPrefix());
			if (prefix != nullptr && $nc(this->fNSBinder)->getURI(prefix) == nullptr) {
				$init($Utils);
				$init($MsgKey);
				$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF, $$new($ObjectArray, {
					$($of(node->getNodeName())),
					$($of(child->getNodeName())),
					$of(prefix)
				})));
				if (this->fErrorHandler != nullptr) {
					$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF, nullptr, nullptr, nullptr));
				}
			}
			$var($NamedNodeMap, attrs, child->getAttributes());
			for (int32_t i = 0; i < $nc(attrs)->getLength(); ++i) {
				$var($String, attrPrefix, $nc($(attrs->item(i)))->getPrefix());
				if (attrPrefix != nullptr && $nc(this->fNSBinder)->getURI(attrPrefix) == nullptr) {
					$init($Utils);
					$init($MsgKey);
					$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF, $$new($ObjectArray, {
						$($of(node->getNodeName())),
						$($of(child->getNodeName())),
						$($of(attrs->item(i)))
					})));
					if (this->fErrorHandler != nullptr) {
						$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_FATAL_ERROR, msg, $MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF, nullptr, nullptr, nullptr));
					}
				}
			}
		}
		if (child->hasChildNodes()) {
			checkUnboundPrefixInEntRef(child);
		}
	}
}

void DOM3TreeWalker::recordLocalNSDecl($Node* node) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, atts, $nc(($cast($Element, node)))->getAttributes());
	int32_t length = $nc(atts)->getLength();
	for (int32_t i = 0; i < length; ++i) {
		$var($Node, attr, atts->item(i));
		$var($String, localName, $nc(attr)->getLocalName());
		$var($String, attrPrefix, attr->getPrefix());
		$var($String, attrValue, attr->getNodeValue());
		$var($String, attrNS, attr->getNamespaceURI());
		$assign(localName, localName == nullptr || $nc(DOM3TreeWalker::XMLNS_PREFIX)->equals(localName) ? ""_s : localName);
		$assign(attrPrefix, attrPrefix == nullptr ? ""_s : attrPrefix);
		$assign(attrValue, attrValue == nullptr ? ""_s : attrValue);
		$assign(attrNS, attrNS == nullptr ? ""_s : attrNS);
		if ($nc(DOM3TreeWalker::XMLNS_URI)->equals(attrNS)) {
			if ($nc(DOM3TreeWalker::XMLNS_URI)->equals(attrValue)) {
				$init($Utils);
				$init($MsgKey);
				$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND, $$new($ObjectArray, {
					$of(attrPrefix),
					$of(DOM3TreeWalker::XMLNS_URI)
				})));
				if (this->fErrorHandler != nullptr) {
					$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_ERROR, msg, $MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND, nullptr, nullptr, nullptr));
				}
			} else if ($nc(DOM3TreeWalker::XMLNS_PREFIX)->equals(attrPrefix)) {
				if ($nc(attrValue)->length() != 0) {
					$nc(this->fNSBinder)->declarePrefix(localName, attrValue);
				} else {
				}
			} else {
				$nc(this->fNSBinder)->declarePrefix(""_s, attrValue);
			}
		}
	}
}

void DOM3TreeWalker::fixupElementNS($Node* node) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespaceURI, $nc(($cast($Element, node)))->getNamespaceURI());
	$var($String, prefix, ($cast($Element, node))->getPrefix());
	$var($String, localName, ($cast($Element, node))->getLocalName());
	if (namespaceURI != nullptr) {
		$assign(prefix, prefix == nullptr ? ""_s : prefix);
		$var($String, inScopeNamespaceURI, $nc(this->fNSBinder)->getURI(prefix));
		if (inScopeNamespaceURI != nullptr && inScopeNamespaceURI->equals(namespaceURI)) {
		} else {
			if (((int32_t)(this->fFeatures & (uint32_t)DOM3TreeWalker::NAMESPACEDECLS)) != 0) {
				bool var$0 = ""_s->equals(prefix);
				if (var$0 || ""_s->equals(namespaceURI)) {
					($cast($Element, node))->setAttributeNS(DOM3TreeWalker::XMLNS_URI, DOM3TreeWalker::XMLNS_PREFIX, namespaceURI);
				} else {
					($cast($Element, node))->setAttributeNS(DOM3TreeWalker::XMLNS_URI, $$str({DOM3TreeWalker::XMLNS_PREFIX, ":"_s, prefix}), namespaceURI);
				}
			}
			$nc(this->fLocalNSBinder)->declarePrefix(prefix, namespaceURI);
			$nc(this->fNSBinder)->declarePrefix(prefix, namespaceURI);
		}
	} else if (localName == nullptr || ""_s->equals(localName)) {
		$init($Utils);
		$init($MsgKey);
		$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_NULL_LOCAL_ELEMENT_NAME, $$new($ObjectArray, {$($of($nc(node)->getNodeName()))})));
		if (this->fErrorHandler != nullptr) {
			$nc(this->fErrorHandler)->handleError($$new($DOMErrorImpl, $DOMError::SEVERITY_ERROR, msg, $MsgKey::ER_NULL_LOCAL_ELEMENT_NAME, nullptr, nullptr, nullptr));
		}
	} else {
		$assign(namespaceURI, $nc(this->fNSBinder)->getURI(""_s));
		if (namespaceURI != nullptr && namespaceURI->length() > 0) {
			($cast($Element, node))->setAttributeNS(DOM3TreeWalker::XMLNS_URI, DOM3TreeWalker::XMLNS_PREFIX, ""_s);
			$nc(this->fLocalNSBinder)->declarePrefix(""_s, ""_s);
			$nc(this->fNSBinder)->declarePrefix(""_s, ""_s);
		}
	}
}

void DOM3TreeWalker::initProperties($Properties* properties) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(properties)->stringPropertyNames()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				$var($Integer, bitFlag, $cast($Integer, $nc(DOM3TreeWalker::fFeatureMap)->get(key)));
				if (bitFlag != nullptr) {
					if ($nc($(properties->getProperty(key)))->endsWith("yes"_s)) {
						this->fFeatures = this->fFeatures | bitFlag->intValue();
					} else {
						this->fFeatures = (int32_t)(this->fFeatures & (uint32_t)~bitFlag->intValue());
					}
				} else {
					$init($DOMConstants);
					if ($nc(($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_FORMAT_PRETTY_PRINT})))->equals(key)) {
						if ($nc($(properties->getProperty(key)))->endsWith("yes"_s)) {
							$nc(this->fSerializer)->setIndent(true);
							$nc(this->fSerializer)->setIndentAmount(4);
						} else {
							$nc(this->fSerializer)->setIndent(false);
						}
					} else {
						if ($nc(($DOMConstants::S_XSL_OUTPUT_OMIT_XML_DECL))->equals(key)) {
							if ($nc($(properties->getProperty(key)))->endsWith("yes"_s)) {
								$nc(this->fSerializer)->setOmitXMLDeclaration(true);
							} else {
								$nc(this->fSerializer)->setOmitXMLDeclaration(false);
							}
						} else {
							if ($nc(($$str({$DOMConstants::S_XERCES_PROPERTIES_NS, $DOMConstants::S_XML_VERSION})))->equals(key)) {
								$var($String, version, properties->getProperty(key));
								if ("1.1"_s->equals(version)) {
									this->fIsXMLVersion11 = true;
									$nc(this->fSerializer)->setVersion(version);
								} else {
									$nc(this->fSerializer)->setVersion("1.0"_s);
								}
							} else {
								if ($nc(($DOMConstants::S_XSL_OUTPUT_ENCODING))->equals(key)) {
									$var($String, encoding, properties->getProperty(key));
									if (encoding != nullptr) {
										$nc(this->fSerializer)->setEncoding(encoding);
									}
								} else {
									$init($OutputPropertiesFactory);
									if ($nc(($OutputPropertiesFactory::S_KEY_ENTITIES))->equals(key)) {
										$var($String, entities, properties->getProperty(key));
										if ($nc($DOMConstants::S_XSL_VALUE_ENTITIES)->equals(entities)) {
											$nc(this->fSerializer)->setDTDEntityExpansion(false);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (this->fNewLine != nullptr) {
		$init($OutputPropertiesFactory);
		$nc(this->fSerializer)->setOutputProperty($OutputPropertiesFactory::S_KEY_LINE_SEPARATOR, this->fNewLine);
	}
}

void clinit$DOM3TreeWalker($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(DOM3TreeWalker::XMLNS_URI, "http://www.w3.org/2000/xmlns/"_s);
	$assignStatic(DOM3TreeWalker::XMLNS_PREFIX, "xmlns"_s);
	$assignStatic(DOM3TreeWalker::XML_URI, "http://www.w3.org/XML/1998/namespace"_s);
	$assignStatic(DOM3TreeWalker::XML_PREFIX, "xml"_s);
	{
		$var($Map, featureMap, $new($HashMap));
		$init($DOMConstants);
		featureMap->put($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_CDATA_SECTIONS}), $($Integer::valueOf(DOM3TreeWalker::CDATA)));
		featureMap->put($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_COMMENTS}), $($Integer::valueOf(DOM3TreeWalker::COMMENTS)));
		featureMap->put($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_ELEMENT_CONTENT_WHITESPACE}), $($Integer::valueOf(DOM3TreeWalker::ELEM_CONTENT_WHITESPACE)));
		featureMap->put($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_ENTITIES}), $($Integer::valueOf(DOM3TreeWalker::ENTITIES)));
		featureMap->put($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_NAMESPACES}), $($Integer::valueOf(DOM3TreeWalker::NAMESPACES)));
		featureMap->put($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_NAMESPACE_DECLARATIONS}), $($Integer::valueOf(DOM3TreeWalker::NAMESPACEDECLS)));
		featureMap->put($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_SPLIT_CDATA}), $($Integer::valueOf(DOM3TreeWalker::SPLITCDATA)));
		featureMap->put($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_WELLFORMED}), $($Integer::valueOf(DOM3TreeWalker::WELLFORMED)));
		featureMap->put($$str({$DOMConstants::S_DOM3_PROPERTIES_NS, $DOMConstants::DOM_DISCARD_DEFAULT_CONTENT}), $($Integer::valueOf(DOM3TreeWalker::DISCARDDEFAULT)));
		$assignStatic(DOM3TreeWalker::fFeatureMap, $Collections::unmodifiableMap(featureMap));
	}
}

DOM3TreeWalker::DOM3TreeWalker() {
}

$Class* DOM3TreeWalker::load$($String* name, bool initialize) {
	$loadClass(DOM3TreeWalker, name, initialize, &_DOM3TreeWalker_ClassInfo_, clinit$DOM3TreeWalker, allocate$DOM3TreeWalker);
	return class$;
}

$Class* DOM3TreeWalker::class$ = nullptr;

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com