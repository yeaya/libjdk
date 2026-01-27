#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/StripFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/TransletException.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/AdaptiveResultTreeImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/BitArray.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMBuilder.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DupFilterIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl$NamespaceAttributeIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl$NamespaceChildrenIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl$NamespaceWildcardIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl$NodeValueIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl$TypedNamespaceIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SimpleResultTreeImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIterNodeList.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$DescendantIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$NamespaceIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$NthDescendantIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$RootIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$SingletonIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMManagerDefault.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeListBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeProxy.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/EmptyIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$AncestorIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$AttributeIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$ChildrenIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$DescendantIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$FollowingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$FollowingSiblingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$ParentIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$PrecedingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$PrecedingSiblingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedAncestorIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedAttributeIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedChildrenIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedDescendantIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedFollowingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedFollowingSiblingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedPrecedingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedPrecedingSiblingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedRootIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedSingletonIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/ToSAXHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/ToXMLSAXHandler.h>
#include <com/sun/org/apache/xml/internal/utils/IntStack.h>
#include <com/sun/org/apache/xml/internal/utils/SystemIDResolver.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Entity.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef ADAPTIVE_RTF
#undef ANCESTOR
#undef ANCESTORORSELF
#undef ATTRIBUTE
#undef ATTRIBUTE_NODE
#undef AXIS_SUPPORT_ERR
#undef CHILD
#undef COMMENT_NODE
#undef DEFAULT_BLOCKSIZE
#undef DESCENDANT
#undef DESCENDANTORSELF
#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef EMPTYITERATOR
#undef EMPTYSTRING
#undef FOLLOWING
#undef FOLLOWINGSIBLING
#undef IDENT_DTM_NODE_BITS
#undef NAMESPACE
#undef NAMESPACE_NODE
#undef NAMESPACE_PREFIX_ERR
#undef NO_TYPE
#undef NTYPES
#undef NULL
#undef PARENT
#undef PRECEDING
#undef PRECEDINGSIBLING
#undef PRESERVE_STRING
#undef PROCESSING_INSTRUCTION_NODE
#undef ROOT
#undef ROOTNODE
#undef ROOT_NODE
#undef SELF
#undef SIMPLE_RTF
#undef TEXT_NODE
#undef TYPED_AXIS_SUPPORT_ERR
#undef XMLSPACE_STRING
#undef XML_PREFIX
#undef XML_URI

using $NodeArray = $Array<::org::w3c::dom::Node>;
using $NodeListArray = $Array<::org::w3c::dom::NodeList>;
using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $StripFilter = ::com::sun::org::apache::xalan::internal::xsltc::StripFilter;
using $TransletException = ::com::sun::org::apache::xalan::internal::xsltc::TransletException;
using $AdaptiveResultTreeImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::AdaptiveResultTreeImpl;
using $BitArray = ::com::sun::org::apache::xalan::internal::xsltc::dom::BitArray;
using $DOMBuilder = ::com::sun::org::apache::xalan::internal::xsltc::dom::DOMBuilder;
using $DupFilterIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::DupFilterIterator;
using $SAXImpl$NamespaceAttributeIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl$NamespaceAttributeIterator;
using $SAXImpl$NamespaceChildrenIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl$NamespaceChildrenIterator;
using $SAXImpl$NamespaceWildcardIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl$NamespaceWildcardIterator;
using $SAXImpl$NodeValueIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl$NodeValueIterator;
using $SAXImpl$TypedNamespaceIterator = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl$TypedNamespaceIterator;
using $SimpleResultTreeImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SimpleResultTreeImpl;
using $XSLTCDTMManager = ::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMAxisIterNodeList = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIterNodeList;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$DescendantIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$DescendantIterator;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $DTMDefaultBaseIterators$NamespaceIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$NamespaceIterator;
using $DTMDefaultBaseIterators$NthDescendantIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$NthDescendantIterator;
using $DTMDefaultBaseIterators$RootIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$RootIterator;
using $DTMDefaultBaseIterators$SingletonIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$SingletonIterator;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $DTMManagerDefault = ::com::sun::org::apache::xml::internal::dtm::ref::DTMManagerDefault;
using $DTMNodeListBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase;
using $DTMNodeProxy = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeProxy;
using $EmptyIterator = ::com::sun::org::apache::xml::internal::dtm::ref::EmptyIterator;
using $ExpandedNameTable = ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable;
using $SAX2DTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $SAX2DTM2$AncestorIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$AncestorIterator;
using $SAX2DTM2$AttributeIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$AttributeIterator;
using $SAX2DTM2$ChildrenIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$ChildrenIterator;
using $SAX2DTM2$DescendantIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$DescendantIterator;
using $SAX2DTM2$FollowingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$FollowingIterator;
using $SAX2DTM2$FollowingSiblingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$FollowingSiblingIterator;
using $SAX2DTM2$ParentIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$ParentIterator;
using $SAX2DTM2$PrecedingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$PrecedingIterator;
using $SAX2DTM2$PrecedingSiblingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$PrecedingSiblingIterator;
using $SAX2DTM2$TypedAncestorIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$TypedAncestorIterator;
using $SAX2DTM2$TypedAttributeIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$TypedAttributeIterator;
using $SAX2DTM2$TypedChildrenIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$TypedChildrenIterator;
using $SAX2DTM2$TypedDescendantIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$TypedDescendantIterator;
using $SAX2DTM2$TypedFollowingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$TypedFollowingIterator;
using $SAX2DTM2$TypedFollowingSiblingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$TypedFollowingSiblingIterator;
using $SAX2DTM2$TypedPrecedingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$TypedPrecedingIterator;
using $SAX2DTM2$TypedPrecedingSiblingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$TypedPrecedingSiblingIterator;
using $SAX2DTM2$TypedRootIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$TypedRootIterator;
using $SAX2DTM2$TypedSingletonIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$TypedSingletonIterator;
using $ExtendedContentHandler = ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $SerializerBase = ::com::sun::org::apache::xml::internal::serializer::SerializerBase;
using $ToSAXHandler = ::com::sun::org::apache::xml::internal::serializer::ToSAXHandler;
using $ToXMLSAXHandler = ::com::sun::org::apache::xml::internal::serializer::ToXMLSAXHandler;
using $IntStack = ::com::sun::org::apache::xml::internal::utils::IntStack;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::utils::SystemIDResolver;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Source = ::javax::xml::transform::Source;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Entity = ::org::w3c::dom::Entity;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _SAXImpl_FieldInfo_[] = {
	{"_uriCount", "I", nullptr, $PRIVATE, $field(SAXImpl, _uriCount)},
	{"_xmlSpaceStack", "[I", nullptr, $PRIVATE, $field(SAXImpl, _xmlSpaceStack)},
	{"_idx", "I", nullptr, $PRIVATE, $field(SAXImpl, _idx)},
	{"_preserve", "Z", nullptr, $PRIVATE, $field(SAXImpl, _preserve)},
	{"XML_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXImpl, XML_PREFIX)},
	{"XMLSPACE_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXImpl, XMLSPACE_STRING)},
	{"PRESERVE_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXImpl, PRESERVE_STRING)},
	{"XML_URI", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXImpl, XML_URI)},
	{"_escaping", "Z", nullptr, $PRIVATE, $field(SAXImpl, _escaping)},
	{"_disableEscaping", "Z", nullptr, $PRIVATE, $field(SAXImpl, _disableEscaping)},
	{"_textNodeToProcess", "I", nullptr, $PRIVATE, $field(SAXImpl, _textNodeToProcess)},
	{"EMPTYSTRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXImpl, EMPTYSTRING)},
	{"EMPTYITERATOR", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXImpl, EMPTYITERATOR)},
	{"_namesSize", "I", nullptr, $PRIVATE, $field(SAXImpl, _namesSize)},
	{"_nsIndex", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/lang/Integer;>;", $PRIVATE, $field(SAXImpl, _nsIndex)},
	{"_size", "I", nullptr, $PRIVATE, $field(SAXImpl, _size)},
	{"_dontEscape", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/BitArray;", nullptr, $PRIVATE, $field(SAXImpl, _dontEscape)},
	{"_documentURIIndex", "I", nullptr, $PRIVATE | $STATIC, $staticField(SAXImpl, _documentURIIndex)},
	{"_document", "Lorg/w3c/dom/Document;", nullptr, $PRIVATE, $field(SAXImpl, _document)},
	{"_node2Ids", "Ljava/util/Map;", "Ljava/util/Map<Lorg/w3c/dom/Node;Ljava/lang/Integer;>;", $PRIVATE, $field(SAXImpl, _node2Ids)},
	{"_hasDOMSource", "Z", nullptr, $PRIVATE, $field(SAXImpl, _hasDOMSource)},
	{"_dtmManager", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager;", nullptr, $PRIVATE, $field(SAXImpl, _dtmManager)},
	{"_nodes", "[Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(SAXImpl, _nodes)},
	{"_nodeLists", "[Lorg/w3c/dom/NodeList;", nullptr, $PRIVATE, $field(SAXImpl, _nodeLists)},
	{}
};

$MethodInfo _SAXImpl_MethodInfo_[] = {
	{"*attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*declaration", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*endCDATA", "()V", nullptr, $PUBLIC},
	{"*endDTD", "()V", nullptr, $PUBLIC},
	{"*endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getDocument", "()I", nullptr, $PUBLIC},
	{"*getExpandedTypeID", "(I)I", nullptr, $PUBLIC},
	{"*getExpandedTypeID2", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"*getNodeHandle", "(I)I", nullptr, $PUBLIC},
	{"*getNodeIdent", "(I)I", nullptr, $PUBLIC},
	{"*getNodeNameX", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*getParent", "(I)I", nullptr, $PUBLIC},
	{"*getStringValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getStringValueX", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager;Ljavax/xml/transform/Source;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;ZZ)V", nullptr, $PUBLIC, $method(SAXImpl, init$, void, $XSLTCDTMManager*, $Source*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool, bool)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager;Ljavax/xml/transform/Source;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;ZIZZ)V", nullptr, $PUBLIC, $method(SAXImpl, init$, void, $XSLTCDTMManager*, $Source*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool, int32_t, bool, bool)},
	{"access$000", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;)Lcom/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(SAXImpl, access$000, $ExpandedNameTable*, SAXImpl*)},
	{"access$100", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;)Lcom/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(SAXImpl, access$100, $ExpandedNameTable*, SAXImpl*)},
	{"access$200", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;I)I", nullptr, $STATIC | $SYNTHETIC, $staticMethod(SAXImpl, access$200, int32_t, SAXImpl*, int32_t)},
	{"access$300", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;I)I", nullptr, $STATIC | $SYNTHETIC, $staticMethod(SAXImpl, access$300, int32_t, SAXImpl*, int32_t)},
	{"access$400", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;I)I", nullptr, $STATIC | $SYNTHETIC, $staticMethod(SAXImpl, access$400, int32_t, SAXImpl*, int32_t)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"characters", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, characters, void, int32_t, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"copy", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, copy, void, $DTMAxisIterator*, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copy", "(Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, $method(SAXImpl, copy, void, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, copy, void, int32_t, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;Z)V", nullptr, $PRIVATE | $FINAL, $method(SAXImpl, copy, void, int32_t, $SerializationHandler*, bool), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copyPI", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PRIVATE, $method(SAXImpl, copyPI, void, int32_t, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"definePrefixAndUri", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(SAXImpl, definePrefixAndUri, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"getAttributeNode", "(II)I", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getAttributeNode, int32_t, int32_t, int32_t)},
	{"getAttributeValue", "(II)Ljava/lang/String;", nullptr, $PUBLIC, $method(SAXImpl, getAttributeValue, $String*, int32_t, int32_t)},
	{"getAttributeValue", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC, $method(SAXImpl, getAttributeValue, $String*, $String*, int32_t)},
	{"getAxisIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getAxisIterator, $DTMAxisIterator*, int32_t)},
	{"getBuilder", "()Lcom/sun/org/apache/xalan/internal/xsltc/dom/DOMBuilder;", nullptr, $PUBLIC, $method(SAXImpl, getBuilder, $DOMBuilder*)},
	{"getChildren", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getChildren, $DTMAxisIterator*, int32_t)},
	{"getDocumentURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getDocumentURI, $String*)},
	{"getDocumentURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getDocumentURI, $String*, int32_t)},
	{"getElementById", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getElementById, int32_t, $String*)},
	{"getElementsWithIDs", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC, $virtualMethod(SAXImpl, getElementsWithIDs, $Map*)},
	{"getGeneralizedType", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $method(SAXImpl, getGeneralizedType, int32_t, $String*)},
	{"getGeneralizedType", "(Ljava/lang/String;Z)I", nullptr, $PUBLIC, $method(SAXImpl, getGeneralizedType, int32_t, $String*, bool)},
	{"getIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getIterator, $DTMAxisIterator*)},
	{"getLanguage", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getLanguage, $String*, int32_t)},
	{"getMapping", "([Ljava/lang/String;[Ljava/lang/String;[I)[S", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getMapping, $shorts*, $StringArray*, $StringArray*, $ints*)},
	{"getMapping2", "([Ljava/lang/String;[Ljava/lang/String;[I)[S", nullptr, $PRIVATE, $method(SAXImpl, getMapping2, $shorts*, $StringArray*, $StringArray*, $ints*)},
	{"getNSType", "(I)I", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getNSType, int32_t, int32_t)},
	{"getNamespaceAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getNamespaceAxisIterator, $DTMAxisIterator*, int32_t, int32_t)},
	{"getNamespaceMapping", "([Ljava/lang/String;)[S", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getNamespaceMapping, $shorts*, $StringArray*)},
	{"getNamespaceName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getNamespaceName, $String*, int32_t)},
	{"getNamespaceType", "(I)I", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getNamespaceType, int32_t, int32_t)},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getNodeName, $String*, int32_t)},
	{"getNodeValueIterator", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;ILjava/lang/String;Z)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getNodeValueIterator, $DTMAxisIterator*, $DTMAxisIterator*, int32_t, $String*, bool)},
	{"getNthDescendant", "(IIZ)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getNthDescendant, $DTMAxisIterator*, int32_t, int32_t, bool)},
	{"getOutputDomBuilder", "()Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getOutputDomBuilder, $SerializationHandler*)},
	{"getResultTreeFrag", "(II)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getResultTreeFrag, $DOM*, int32_t, int32_t)},
	{"getResultTreeFrag", "(IIZ)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getResultTreeFrag, $DOM*, int32_t, int32_t, bool)},
	{"getReverseMapping", "([Ljava/lang/String;[Ljava/lang/String;[I)[I", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getReverseMapping, $ints*, $StringArray*, $StringArray*, $ints*)},
	{"getReverseNamespaceMapping", "([Ljava/lang/String;)[S", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getReverseNamespaceMapping, $shorts*, $StringArray*)},
	{"getShouldStripWhitespace", "()Z", nullptr, $PROTECTED, $virtualMethod(SAXImpl, getShouldStripWhitespace, bool)},
	{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getSize, int32_t)},
	{"getTypedAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getTypedAxisIterator, $DTMAxisIterator*, int32_t, int32_t)},
	{"getTypedChildren", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getTypedChildren, $DTMAxisIterator*, int32_t)},
	{"getTypedDescendantIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $method(SAXImpl, getTypedDescendantIterator, $DTMAxisIterator*, int32_t)},
	{"getUnparsedEntityURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, getUnparsedEntityURI, $String*, $String*)},
	{"handleTextEscaping", "()V", nullptr, $PRIVATE, $method(SAXImpl, handleTextEscaping, void)},
	{"hasDOMSource", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXImpl, hasDOMSource, bool)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"*internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"isAttribute", "(I)Z", nullptr, $PUBLIC, $virtualMethod(SAXImpl, isAttribute, bool, int32_t)},
	{"isElement", "(I)Z", nullptr, $PUBLIC, $virtualMethod(SAXImpl, isElement, bool, int32_t)},
	{"lessThan", "(II)Z", nullptr, $PUBLIC, $virtualMethod(SAXImpl, lessThan, bool, int32_t, int32_t)},
	{"lookupNamespace", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, lookupNamespace, $String*, int32_t, $String*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"makeNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, makeNode, $Node*, int32_t)},
	{"makeNode", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, makeNode, $Node*, $DTMAxisIterator*)},
	{"makeNodeList", "(I)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, makeNodeList, $NodeList*, int32_t)},
	{"makeNodeList", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, makeNodeList, $NodeList*, $DTMAxisIterator*)},
	{"migrateTo", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, migrateTo, void, $DTMManager*)},
	{"*notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"orderNodes", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, orderNodes, $DTMAxisIterator*, $DTMAxisIterator*, int32_t)},
	{"print", "(II)V", nullptr, $PUBLIC, $method(SAXImpl, print, void, int32_t, int32_t)},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"release", "()V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, release, void)},
	{"*setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC},
	{"setDocumentURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, setDocumentURI, void, $String*)},
	{"setEscaping", "(Z)Z", nullptr, $PUBLIC, $method(SAXImpl, setEscaping, bool, bool)},
	{"setFilter", "(Lcom/sun/org/apache/xalan/internal/xsltc/StripFilter;)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, setFilter, void, $StripFilter*)},
	{"setupMapping", "([Ljava/lang/String;[Ljava/lang/String;[I[Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, setupMapping, void, $StringArray*, $StringArray*, $ints*, $StringArray*)},
	{"shallowCopy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAXImpl, shallowCopy, $String*, int32_t, $SerializationHandler*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"*skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*startCDATA", "()V", nullptr, $PUBLIC},
	{"*startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(SAXImpl, startElement, void, $String*, $String*, $String*, $Attributes*, $Node*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"*startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAXImpl, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"xmlSpaceDefine", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(SAXImpl, xmlSpaceDefine, void, $String*, int32_t)},
	{"xmlSpaceRevert", "(I)V", nullptr, $PRIVATE, $method(SAXImpl, xmlSpaceRevert, void, int32_t)},
	{}
};

$InnerClassInfo _SAXImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceAttributeIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl", "NamespaceAttributeIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceChildrenIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl", "NamespaceChildrenIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceWildcardIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl", "NamespaceWildcardIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NodeValueIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl", "NodeValueIterator", $PRIVATE | $FINAL},
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$TypedNamespaceIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl", "TypedNamespaceIterator", $PUBLIC},
	{}
};

$ClassInfo _SAXImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl",
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2",
	"com.sun.org.apache.xalan.internal.xsltc.DOMEnhancedForDTM,com.sun.org.apache.xalan.internal.xsltc.dom.DOMBuilder",
	_SAXImpl_FieldInfo_,
	_SAXImpl_MethodInfo_,
	nullptr,
	nullptr,
	_SAXImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceAttributeIterator,com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceChildrenIterator,com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NamespaceWildcardIterator,com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$NodeValueIterator,com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$TypedNamespaceIterator"
};

$Object* allocate$SAXImpl($Class* clazz) {
	return $of($alloc(SAXImpl));
}

int32_t SAXImpl::getExpandedTypeID2(int32_t nodeHandle) {
	 return this->$SAX2DTM2::getExpandedTypeID2(nodeHandle);
}

$String* SAXImpl::getNodeNameX(int32_t nodeHandle) {
	 return this->$SAX2DTM2::getNodeNameX(nodeHandle);
}

$String* SAXImpl::getStringValueX(int32_t nodeHandle) {
	 return this->$SAX2DTM2::getStringValueX(nodeHandle);
}

$String* SAXImpl::getStringValue() {
	 return this->$SAX2DTM2::getStringValue();
}

void SAXImpl::notationDecl($String* name, $String* publicId, $String* systemId) {
	this->$SAX2DTM2::notationDecl(name, publicId, systemId);
}

void SAXImpl::unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) {
	this->$SAX2DTM2::unparsedEntityDecl(name, publicId, systemId, notationName);
}

void SAXImpl::setDocumentLocator($Locator* locator) {
	this->$SAX2DTM2::setDocumentLocator(locator);
}

void SAXImpl::endPrefixMapping($String* prefix) {
	this->$SAX2DTM2::endPrefixMapping(prefix);
}

void SAXImpl::skippedEntity($String* name) {
	this->$SAX2DTM2::skippedEntity(name);
}

void SAXImpl::elementDecl($String* name, $String* model) {
	this->$SAX2DTM2::elementDecl(name, model);
}

void SAXImpl::attributeDecl($String* eName, $String* aName, $String* type, $String* valueDefault, $String* value) {
	this->$SAX2DTM2::attributeDecl(eName, aName, type, valueDefault, value);
}

void SAXImpl::internalEntityDecl($String* name, $String* value) {
	this->$SAX2DTM2::internalEntityDecl(name, value);
}

void SAXImpl::externalEntityDecl($String* name, $String* publicId, $String* systemId) {
	this->$SAX2DTM2::externalEntityDecl(name, publicId, systemId);
}

void SAXImpl::startDTD($String* name, $String* publicId, $String* systemId) {
	this->$SAX2DTM2::startDTD(name, publicId, systemId);
}

void SAXImpl::endDTD() {
	this->$SAX2DTM2::endDTD();
}

void SAXImpl::startEntity($String* name) {
	this->$SAX2DTM2::startEntity(name);
}

void SAXImpl::endEntity($String* name) {
	this->$SAX2DTM2::endEntity(name);
}

void SAXImpl::startCDATA() {
	this->$SAX2DTM2::startCDATA();
}

void SAXImpl::endCDATA() {
	this->$SAX2DTM2::endCDATA();
}

int32_t SAXImpl::getParent(int32_t nodeHandle) {
	 return this->$SAX2DTM2::getParent(nodeHandle);
}

int32_t SAXImpl::getDocument() {
	 return this->$SAX2DTM2::getDocument();
}

int32_t SAXImpl::getExpandedTypeID(int32_t nodeHandle) {
	 return this->$SAX2DTM2::getExpandedTypeID(nodeHandle);
}

int32_t SAXImpl::getNodeIdent(int32_t nodeHandle) {
	 return this->$SAX2DTM2::getNodeIdent(nodeHandle);
}

int32_t SAXImpl::getNodeHandle(int32_t nodeId) {
	 return this->$SAX2DTM2::getNodeHandle(nodeId);
}

int32_t SAXImpl::hashCode() {
	 return this->$SAX2DTM2::hashCode();
}

bool SAXImpl::equals(Object$* arg0) {
	 return this->$SAX2DTM2::equals(arg0);
}

$Object* SAXImpl::clone() {
	 return this->$SAX2DTM2::clone();
}

$String* SAXImpl::toString() {
	 return this->$SAX2DTM2::toString();
}

void SAXImpl::finalize() {
	this->$SAX2DTM2::finalize();
}

void SAXImpl::declaration($String* version, $String* encoding, $String* standalone) {
	this->$SAX2DTM2::declaration(version, encoding, standalone);
}

$String* SAXImpl::XML_PREFIX = nullptr;
$String* SAXImpl::XMLSPACE_STRING = nullptr;
$String* SAXImpl::PRESERVE_STRING = nullptr;
$String* SAXImpl::XML_URI = nullptr;
$String* SAXImpl::EMPTYSTRING = nullptr;
$DTMAxisIterator* SAXImpl::EMPTYITERATOR = nullptr;
int32_t SAXImpl::_documentURIIndex = 0;

int32_t SAXImpl::access$400(SAXImpl* x0, int32_t x1) {
	$init(SAXImpl);
	return $nc(x0)->_nextsib(x1);
}

int32_t SAXImpl::access$300(SAXImpl* x0, int32_t x1) {
	$init(SAXImpl);
	return $nc(x0)->_nextsib(x1);
}

int32_t SAXImpl::access$200(SAXImpl* x0, int32_t x1) {
	$init(SAXImpl);
	return $nc(x0)->_firstch(x1);
}

$ExpandedNameTable* SAXImpl::access$100(SAXImpl* x0) {
	$init(SAXImpl);
	return $nc(x0)->m_expandedNameTable;
}

$ExpandedNameTable* SAXImpl::access$000(SAXImpl* x0) {
	$init(SAXImpl);
	return $nc(x0)->m_expandedNameTable;
}

void SAXImpl::setDocumentURI($String* uri) {
	if (uri != nullptr) {
		setDocumentBaseURI($($SystemIDResolver::getAbsoluteURI(uri)));
	}
}

$String* SAXImpl::getDocumentURI() {
	$useLocalCurrentObjectStackCache();
	$var($String, baseURI, getDocumentBaseURI());
	$var($String, var$0, nullptr);
	if (baseURI != nullptr) {
		$assign(var$0, baseURI);
	} else {
		$var($String, var$1, "rtf"_s);
		$assign(var$0, $concat(var$1, $$str(SAXImpl::_documentURIIndex++)));
	}
	return var$0;
}

$String* SAXImpl::getDocumentURI(int32_t node) {
	return getDocumentURI();
}

void SAXImpl::setupMapping($StringArray* names, $StringArray* urisArray, $ints* typesArray, $StringArray* namespaces) {
}

$String* SAXImpl::lookupNamespace(int32_t node, $String* prefix) {
	$useLocalCurrentObjectStackCache();
	int32_t anode = 0;
	int32_t nsnode = 0;
	$var($SAX2DTM2$AncestorIterator, ancestors, $new($SAX2DTM2$AncestorIterator, this));
	if (isElement(node)) {
		ancestors->includeSelf();
	}
	ancestors->setStartNode(node);
	while ((anode = ancestors->next()) != $DTM::NULL) {
		$var($DTMDefaultBaseIterators$NamespaceIterator, namespaces, $new($DTMDefaultBaseIterators$NamespaceIterator, this));
		namespaces->setStartNode(anode);
		while ((nsnode = namespaces->next()) != $DTM::NULL) {
			if ($nc($(getLocalName(nsnode)))->equals(prefix)) {
				return getNodeValue(nsnode);
			}
		}
	}
	$init($BasisLibrary);
	$BasisLibrary::runTimeError($BasisLibrary::NAMESPACE_PREFIX_ERR, $of(prefix));
	return nullptr;
}

bool SAXImpl::isElement(int32_t node) {
	return getNodeType(node) == $DTM::ELEMENT_NODE;
}

bool SAXImpl::isAttribute(int32_t node) {
	return getNodeType(node) == $DTM::ATTRIBUTE_NODE;
}

int32_t SAXImpl::getSize() {
	return getNumberOfNodes();
}

void SAXImpl::setFilter($StripFilter* filter) {
}

bool SAXImpl::lessThan(int32_t node1, int32_t node2) {
	if (node1 == $DTM::NULL) {
		return false;
	}
	if (node2 == $DTM::NULL) {
		return true;
	}
	return (node1 < node2);
}

$Node* SAXImpl::makeNode(int32_t index) {
	if (this->_nodes == nullptr) {
		$set(this, _nodes, $new($NodeArray, this->_namesSize));
	}
	int32_t nodeID = makeNodeIdentity(index);
	if (nodeID < 0) {
		return nullptr;
	} else if (nodeID < $nc(this->_nodes)->length) {
		return ($nc(this->_nodes)->get(nodeID) != nullptr) ? $nc(this->_nodes)->get(nodeID) : ($nc(this->_nodes)->set(nodeID, static_cast<$Node*>(static_cast<$Document*>($$new($DTMNodeProxy, static_cast<$DTM*>(this), index)))));
	} else {
		return static_cast<$Node*>(static_cast<$Document*>($new($DTMNodeProxy, static_cast<$DTM*>(this), index)));
	}
}

$Node* SAXImpl::makeNode($DTMAxisIterator* iter) {
	return makeNode($nc(iter)->next());
}

$NodeList* SAXImpl::makeNodeList(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (this->_nodeLists == nullptr) {
		$set(this, _nodeLists, $new($NodeListArray, this->_namesSize));
	}
	int32_t nodeID = makeNodeIdentity(index);
	if (nodeID < 0) {
		return nullptr;
	} else if (nodeID < $nc(this->_nodeLists)->length) {
		return ($nc(this->_nodeLists)->get(nodeID) != nullptr) ? $nc(this->_nodeLists)->get(nodeID) : ($nc(this->_nodeLists)->set(nodeID, $$new($DTMAxisIterNodeList, this, $$new($DTMDefaultBaseIterators$SingletonIterator, this, index))));
	} else {
		return $new($DTMAxisIterNodeList, this, $$new($DTMDefaultBaseIterators$SingletonIterator, this, index));
	}
}

$NodeList* SAXImpl::makeNodeList($DTMAxisIterator* iter) {
	return $new($DTMAxisIterNodeList, this, iter);
}

$DTMAxisIterator* SAXImpl::getNodeValueIterator($DTMAxisIterator* iterator, int32_t type, $String* value, bool op) {
	return static_cast<$DTMAxisIterator*>(($new($SAXImpl$NodeValueIterator, this, iterator, type, value, op)));
}

$DTMAxisIterator* SAXImpl::orderNodes($DTMAxisIterator* source, int32_t node) {
	return $new($DupFilterIterator, source);
}

$DTMAxisIterator* SAXImpl::getIterator() {
	return $new($DTMDefaultBaseIterators$SingletonIterator, this, getDocument(), true);
}

int32_t SAXImpl::getNSType(int32_t node) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, getNamespaceURI(node));
	if (s == nullptr) {
		return 0;
	}
	int32_t eType = getIdForNamespace(s);
	return $nc(($cast($Integer, $($nc(this->_nsIndex)->get($($Integer::valueOf(eType)))))))->intValue();
}

int32_t SAXImpl::getNamespaceType(int32_t node) {
	return $SAX2DTM2::getNamespaceType(node);
}

int32_t SAXImpl::getGeneralizedType($String* name) {
	return getGeneralizedType(name, true);
}

int32_t SAXImpl::getGeneralizedType($String* name, bool searchOnly) {
	$useLocalCurrentObjectStackCache();
	$var($String, lName, nullptr);
	$var($String, ns, nullptr);
	int32_t index = -1;
	int32_t code = 0;
	if ((index = $nc(name)->lastIndexOf(":"_s)) > -1) {
		$assign(ns, name->substring(0, index));
	}
	int32_t lNameStartIdx = index + 1;
	if ($nc(name)->charAt(lNameStartIdx) == u'@') {
		code = $DTM::ATTRIBUTE_NODE;
		++lNameStartIdx;
	} else {
		code = $DTM::ELEMENT_NODE;
	}
	$assign(lName, (lNameStartIdx == 0) ? name : $nc(name)->substring(lNameStartIdx));
	return $nc(this->m_expandedNameTable)->getExpandedTypeID(ns, lName, code, searchOnly);
}

$shorts* SAXImpl::getMapping($StringArray* names, $StringArray* uris, $ints* types) {
	if (this->_namesSize < 0) {
		return getMapping2(names, uris, types);
	}
	int32_t i = 0;
	int32_t namesLength = $nc(names)->length;
	int32_t exLength = $nc(this->m_expandedNameTable)->getSize();
	$var($shorts, result, $new($shorts, exLength));
	for (i = 0; i < $DTM::NTYPES; ++i) {
		result->set(i, (int16_t)i);
	}
	for (i = $DTM::NTYPES; i < exLength; ++i) {
		result->set(i, $nc(this->m_expandedNameTable)->getType(i));
	}
	for (i = 0; i < namesLength; ++i) {
		int32_t genType = $nc(this->m_expandedNameTable)->getExpandedTypeID($nc(uris)->get(i), names->get(i), $nc(types)->get(i), true);
		if (genType >= 0 && genType < exLength) {
			result->set(genType, (int16_t)(i + $DTM::NTYPES));
		}
	}
	return result;
}

$ints* SAXImpl::getReverseMapping($StringArray* names, $StringArray* uris, $ints* types) {
	int32_t i = 0;
	$var($ints, result, $new($ints, $nc(names)->length + $DTM::NTYPES));
	for (i = 0; i < $DTM::NTYPES; ++i) {
		result->set(i, i);
	}
	for (i = 0; i < names->length; ++i) {
		int32_t type = $nc(this->m_expandedNameTable)->getExpandedTypeID($nc(uris)->get(i), names->get(i), $nc(types)->get(i), true);
		result->set(i + $DTM::NTYPES, type);
	}
	return (result);
}

$shorts* SAXImpl::getMapping2($StringArray* names, $StringArray* uris, $ints* types) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t namesLength = $nc(names)->length;
	int32_t exLength = $nc(this->m_expandedNameTable)->getSize();
	$var($ints, generalizedTypes, nullptr);
	if (namesLength > 0) {
		$assign(generalizedTypes, $new($ints, namesLength));
	}
	int32_t resultLength = exLength;
	for (i = 0; i < namesLength; ++i) {
		$nc(generalizedTypes)->set(i, $nc(this->m_expandedNameTable)->getExpandedTypeID($nc(uris)->get(i), names->get(i), $nc(types)->get(i), false));
		if (this->_namesSize < 0 && generalizedTypes->get(i) >= resultLength) {
			resultLength = generalizedTypes->get(i) + 1;
		}
	}
	$var($shorts, result, $new($shorts, resultLength));
	for (i = 0; i < $DTM::NTYPES; ++i) {
		result->set(i, (int16_t)i);
	}
	for (i = $DTM::NTYPES; i < exLength; ++i) {
		result->set(i, $nc(this->m_expandedNameTable)->getType(i));
	}
	for (i = 0; i < namesLength; ++i) {
		int32_t genType = $nc(generalizedTypes)->get(i);
		if (genType >= 0 && genType < resultLength) {
			result->set(genType, (int16_t)(i + $DTM::NTYPES));
		}
	}
	return (result);
}

$shorts* SAXImpl::getNamespaceMapping($StringArray* namespaces) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t nsLength = $nc(namespaces)->length;
	int32_t mappingLength = this->_uriCount;
	$var($shorts, result, $new($shorts, mappingLength));
	for (i = 0; i < mappingLength; ++i) {
		result->set(i, (int16_t)(-1));
	}
	for (i = 0; i < nsLength; ++i) {
		int32_t eType = getIdForNamespace(namespaces->get(i));
		$var($Integer, type, $cast($Integer, $nc(this->_nsIndex)->get($($Integer::valueOf(eType)))));
		if (type != nullptr) {
			result->set(type->intValue(), (int16_t)i);
		}
	}
	return (result);
}

$shorts* SAXImpl::getReverseNamespaceMapping($StringArray* namespaces) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t length = $nc(namespaces)->length;
	$var($shorts, result, $new($shorts, length));
	for (i = 0; i < length; ++i) {
		int32_t eType = getIdForNamespace(namespaces->get(i));
		$var($Integer, type, $cast($Integer, $nc(this->_nsIndex)->get($($Integer::valueOf(eType)))));
		result->set(i, (type == nullptr) ? (int16_t)-1 : $nc(type)->shortValue());
	}
	return result;
}

void SAXImpl::init$($XSLTCDTMManager* mgr, $Source* source, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing, bool buildIdIndex) {
	SAXImpl::init$(mgr, source, dtmIdentity, whiteSpaceFilter, xstringfactory, doIndexing, $DTMDefaultBase::DEFAULT_BLOCKSIZE, buildIdIndex, false);
}

void SAXImpl::init$($XSLTCDTMManager* mgr, $Source* source, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing, int32_t blocksize, bool buildIdIndex, bool newNameTable) {
	$useLocalCurrentObjectStackCache();
	$SAX2DTM2::init$(mgr, source, dtmIdentity, whiteSpaceFilter, xstringfactory, doIndexing, blocksize, false, buildIdIndex, newNameTable);
	this->_uriCount = 0;
	this->_idx = 1;
	this->_preserve = false;
	this->_escaping = true;
	this->_disableEscaping = false;
	this->_textNodeToProcess = $DTM::NULL;
	this->_namesSize = -1;
	$set(this, _nsIndex, $new($HashMap));
	this->_size = 0;
	$set(this, _dontEscape, nullptr);
	$set(this, _node2Ids, nullptr);
	this->_hasDOMSource = false;
	$set(this, _dtmManager, mgr);
	this->_size = blocksize;
	$set(this, _xmlSpaceStack, $new($ints, blocksize <= 64 ? 4 : 64));
	$nc(this->_xmlSpaceStack)->set(0, $DTMDefaultBase::ROOTNODE);
	if ($instanceOf($DOMSource, source)) {
		this->_hasDOMSource = true;
		$var($DOMSource, domsrc, $cast($DOMSource, source));
		$var($Node, node, $nc(domsrc)->getNode());
		if ($instanceOf($Document, node)) {
			$set(this, _document, $cast($Document, node));
		} else {
			$set(this, _document, $nc(node)->getOwnerDocument());
		}
		$set(this, _node2Ids, $new($HashMap));
	}
}

void SAXImpl::migrateTo($DTMManager* manager) {
	$SAX2DTM2::migrateTo(manager);
	if ($instanceOf($XSLTCDTMManager, manager)) {
		$set(this, _dtmManager, $cast($XSLTCDTMManager, manager));
	}
}

int32_t SAXImpl::getElementById($String* idString) {
	$useLocalCurrentObjectStackCache();
	$var($Node, node, $nc(this->_document)->getElementById(idString));
	if (node != nullptr) {
		$var($Integer, id, $cast($Integer, $nc(this->_node2Ids)->get(node)));
		return (id != nullptr) ? $nc(id)->intValue() : $DTM::NULL;
	} else {
		return $DTM::NULL;
	}
}

bool SAXImpl::hasDOMSource() {
	return this->_hasDOMSource;
}

void SAXImpl::xmlSpaceDefine($String* val, int32_t node) {
	bool setting = $nc(val)->equals(SAXImpl::PRESERVE_STRING);
	if (setting != this->_preserve) {
		$nc(this->_xmlSpaceStack)->set(this->_idx++, node);
		this->_preserve = setting;
	}
}

void SAXImpl::xmlSpaceRevert(int32_t node) {
	if (node == $nc(this->_xmlSpaceStack)->get(this->_idx - 1)) {
		--this->_idx;
		this->_preserve = !this->_preserve;
	}
}

bool SAXImpl::getShouldStripWhitespace() {
	return this->_preserve ? false : $SAX2DTM2::getShouldStripWhitespace();
}

void SAXImpl::handleTextEscaping() {
	if (this->_disableEscaping && this->_textNodeToProcess != $DTM::NULL && _type(this->_textNodeToProcess) == $DTM::TEXT_NODE) {
		if (this->_dontEscape == nullptr) {
			$set(this, _dontEscape, $new($BitArray, this->_size));
		}
		if (this->_textNodeToProcess >= $nc(this->_dontEscape)->size()) {
			$nc(this->_dontEscape)->resize($nc(this->_dontEscape)->size() * 2);
		}
		$nc(this->_dontEscape)->setBit(this->_textNodeToProcess);
		this->_disableEscaping = false;
	}
	this->_textNodeToProcess = $DTM::NULL;
}

void SAXImpl::characters($chars* ch, int32_t start, int32_t length) {
	$SAX2DTM2::characters(ch, start, length);
	this->_disableEscaping = !this->_escaping;
	this->_textNodeToProcess = getNumberOfNodes();
}

void SAXImpl::startDocument() {
	$useLocalCurrentObjectStackCache();
	$SAX2DTM2::startDocument();
	$var($Object, var$0, $of($Integer::valueOf(0)));
	$nc(this->_nsIndex)->put(var$0, $($Integer::valueOf(this->_uriCount++)));
	definePrefixAndUri(SAXImpl::XML_PREFIX, SAXImpl::XML_URI);
}

void SAXImpl::endDocument() {
	$SAX2DTM2::endDocument();
	handleTextEscaping();
	this->_namesSize = $nc(this->m_expandedNameTable)->getSize();
}

void SAXImpl::startElement($String* uri, $String* localName, $String* qname, $Attributes* attributes, $Node* node) {
	this->startElement(uri, localName, qname, attributes);
	if (this->m_buildIdIndex) {
		$nc(this->_node2Ids)->put(node, $($Integer::valueOf($nc(this->m_parents)->peek())));
	}
}

void SAXImpl::startElement($String* uri, $String* localName, $String* qname, $Attributes* attributes) {
	$SAX2DTM2::startElement(uri, localName, qname, attributes);
	handleTextEscaping();
	if (this->m_wsfilter != nullptr) {
		int32_t index = $nc(attributes)->getIndex(SAXImpl::XMLSPACE_STRING);
		if (index >= 0) {
			$var($String, var$0, attributes->getValue(index));
			xmlSpaceDefine(var$0, $nc(this->m_parents)->peek());
		}
	}
}

void SAXImpl::endElement($String* namespaceURI, $String* localName, $String* qname) {
	$SAX2DTM2::endElement(namespaceURI, localName, qname);
	handleTextEscaping();
	if (this->m_wsfilter != nullptr) {
		xmlSpaceRevert(this->m_previous);
	}
}

void SAXImpl::processingInstruction($String* target, $String* data) {
	$SAX2DTM2::processingInstruction(target, data);
	handleTextEscaping();
}

void SAXImpl::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	$SAX2DTM2::ignorableWhitespace(ch, start, length);
	this->_textNodeToProcess = getNumberOfNodes();
}

void SAXImpl::startPrefixMapping($String* prefix, $String* uri) {
	$SAX2DTM2::startPrefixMapping(prefix, uri);
	handleTextEscaping();
	definePrefixAndUri(prefix, uri);
}

void SAXImpl::definePrefixAndUri($String* prefix, $String* uri) {
	$useLocalCurrentObjectStackCache();
	$var($Integer, eType, $Integer::valueOf(getIdForNamespace(uri)));
	if ($nc(this->_nsIndex)->get(eType) == nullptr) {
		$nc(this->_nsIndex)->put(eType, $($Integer::valueOf(this->_uriCount++)));
	}
}

void SAXImpl::comment($chars* ch, int32_t start, int32_t length) {
	$SAX2DTM2::comment(ch, start, length);
	handleTextEscaping();
}

bool SAXImpl::setEscaping(bool value) {
	bool temp = this->_escaping;
	this->_escaping = value;
	return temp;
}

void SAXImpl::print(int32_t node, int32_t level) {
	$useLocalCurrentObjectStackCache();
	{
		$var($String, name, nullptr)
		switch (getNodeType(node)) {
		case $DTM::ROOT_NODE:
			{}
		case $DTM::DOCUMENT_NODE:
			{
				print(getFirstChild(node), level);
				break;
			}
		case $DTM::TEXT_NODE:
			{}
		case $DTM::COMMENT_NODE:
			{}
		case $DTM::PROCESSING_INSTRUCTION_NODE:
			{
				$nc($System::out)->print($(getStringValueX(node)));
				break;
			}
		default:
			{
				$assign(name, getNodeName(node));
				$nc($System::out)->print($$str({"<"_s, name}));
				for (int32_t a = getFirstAttribute(node); a != $DTM::NULL; a = getNextAttribute(a)) {
					$var($String, var$1, $$str({"\n"_s, $(getNodeName(a)), "=\""_s}));
					$var($String, var$0, $$concat(var$1, $(getStringValueX(a))));
					$nc($System::out)->print($$concat(var$0, "\""_s));
				}
				$nc($System::out)->print(u'>');
				for (int32_t child = getFirstChild(node); child != $DTM::NULL; child = getNextSibling(child)) {
					print(child, level + 1);
				}
				$nc($System::out)->println($$str({"</"_s, name, $$str(u'>')}));
				break;
			}
		}
	}
}

$String* SAXImpl::getNodeName(int32_t node) {
	int32_t nodeh = node;
	int16_t type = getNodeType(nodeh);
	switch (type) {
	case $DTM::ROOT_NODE:
		{}
	case $DTM::DOCUMENT_NODE:
		{}
	case $DTM::TEXT_NODE:
		{}
	case $DTM::COMMENT_NODE:
		{
			return SAXImpl::EMPTYSTRING;
		}
	case $DTM::NAMESPACE_NODE:
		{
			return this->getLocalName(nodeh);
		}
	default:
		{
			return $SAX2DTM2::getNodeName(nodeh);
		}
	}
}

$String* SAXImpl::getNamespaceName(int32_t node) {
	if (node == $DTM::NULL) {
		return ""_s;
	}
	$var($String, s, nullptr);
	return ($assign(s, getNamespaceURI(node))) == nullptr ? SAXImpl::EMPTYSTRING : s;
}

int32_t SAXImpl::getAttributeNode(int32_t type, int32_t element) {
	for (int32_t attr = getFirstAttribute(element); attr != $DTM::NULL; attr = getNextAttribute(attr)) {
		if (getExpandedTypeID(attr) == type) {
			return attr;
		}
	}
	return $DTM::NULL;
}

$String* SAXImpl::getAttributeValue(int32_t type, int32_t element) {
	int32_t attr = getAttributeNode(type, element);
	return (attr != $DTM::NULL) ? getStringValueX(attr) : SAXImpl::EMPTYSTRING;
}

$String* SAXImpl::getAttributeValue($String* name, int32_t element) {
	return getAttributeValue(getGeneralizedType(name), element);
}

$DTMAxisIterator* SAXImpl::getChildren(int32_t node) {
	return ($$new($SAX2DTM2$ChildrenIterator, this))->setStartNode(node);
}

$DTMAxisIterator* SAXImpl::getTypedChildren(int32_t type) {
	return ($new($SAX2DTM2$TypedChildrenIterator, this, type));
}

$DTMAxisIterator* SAXImpl::getAxisIterator(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	switch (axis) {
	case $Axis::SELF:
		{
			return $new($DTMDefaultBaseIterators$SingletonIterator, this);
		}
	case $Axis::CHILD:
		{
			return $new($SAX2DTM2$ChildrenIterator, this);
		}
	case $Axis::PARENT:
		{
			return $new($SAX2DTM2$ParentIterator, this);
		}
	case $Axis::ANCESTOR:
		{
			return $new($SAX2DTM2$AncestorIterator, this);
		}
	case $Axis::ANCESTORORSELF:
		{
			return ($$new($SAX2DTM2$AncestorIterator, this))->includeSelf();
		}
	case $Axis::ATTRIBUTE:
		{
			return $new($SAX2DTM2$AttributeIterator, this);
		}
	case $Axis::DESCENDANT:
		{
			return $new($SAX2DTM2$DescendantIterator, this);
		}
	case $Axis::DESCENDANTORSELF:
		{
			return ($$new($SAX2DTM2$DescendantIterator, this))->includeSelf();
		}
	case $Axis::FOLLOWING:
		{
			return $new($SAX2DTM2$FollowingIterator, this);
		}
	case $Axis::PRECEDING:
		{
			return $new($SAX2DTM2$PrecedingIterator, this);
		}
	case $Axis::FOLLOWINGSIBLING:
		{
			return $new($SAX2DTM2$FollowingSiblingIterator, this);
		}
	case $Axis::PRECEDINGSIBLING:
		{
			return $new($SAX2DTM2$PrecedingSiblingIterator, this);
		}
	case $Axis::NAMESPACE:
		{
			return $new($DTMDefaultBaseIterators$NamespaceIterator, this);
		}
	case $Axis::ROOT:
		{
			return $new($DTMDefaultBaseIterators$RootIterator, this);
		}
	default:
		{
			$init($BasisLibrary);
			$BasisLibrary::runTimeError($BasisLibrary::AXIS_SUPPORT_ERR, $($of($Axis::getNames(axis))));
		}
	}
	return nullptr;
}

$DTMAxisIterator* SAXImpl::getTypedAxisIterator(int32_t axis, int32_t type) {
	$useLocalCurrentObjectStackCache();
	if (axis == $Axis::CHILD) {
		return $new($SAX2DTM2$TypedChildrenIterator, this, type);
	}
	if (type == $DOM::NO_TYPE) {
		return (SAXImpl::EMPTYITERATOR);
	}
	switch (axis) {
	case $Axis::SELF:
		{
			return $new($SAX2DTM2$TypedSingletonIterator, this, type);
		}
	case $Axis::CHILD:
		{
			return $new($SAX2DTM2$TypedChildrenIterator, this, type);
		}
	case $Axis::PARENT:
		{
			return $$new($SAX2DTM2$ParentIterator, this)->setNodeType(type);
		}
	case $Axis::ANCESTOR:
		{
			return $new($SAX2DTM2$TypedAncestorIterator, this, type);
		}
	case $Axis::ANCESTORORSELF:
		{
			return ($$new($SAX2DTM2$TypedAncestorIterator, this, type))->includeSelf();
		}
	case $Axis::ATTRIBUTE:
		{
			return $new($SAX2DTM2$TypedAttributeIterator, this, type);
		}
	case $Axis::DESCENDANT:
		{
			return $new($SAX2DTM2$TypedDescendantIterator, this, type);
		}
	case $Axis::DESCENDANTORSELF:
		{
			return ($$new($SAX2DTM2$TypedDescendantIterator, this, type))->includeSelf();
		}
	case $Axis::FOLLOWING:
		{
			return $new($SAX2DTM2$TypedFollowingIterator, this, type);
		}
	case $Axis::PRECEDING:
		{
			return $new($SAX2DTM2$TypedPrecedingIterator, this, type);
		}
	case $Axis::FOLLOWINGSIBLING:
		{
			return $new($SAX2DTM2$TypedFollowingSiblingIterator, this, type);
		}
	case $Axis::PRECEDINGSIBLING:
		{
			return $new($SAX2DTM2$TypedPrecedingSiblingIterator, this, type);
		}
	case $Axis::NAMESPACE:
		{
			return $new($SAXImpl$TypedNamespaceIterator, this, type);
		}
	case $Axis::ROOT:
		{
			return $new($SAX2DTM2$TypedRootIterator, this, type);
		}
	default:
		{
			$init($BasisLibrary);
			$BasisLibrary::runTimeError($BasisLibrary::TYPED_AXIS_SUPPORT_ERR, $($of($Axis::getNames(axis))));
		}
	}
	return nullptr;
}

$DTMAxisIterator* SAXImpl::getNamespaceAxisIterator(int32_t axis, int32_t ns) {
	if (ns == $DOM::NO_TYPE) {
		return SAXImpl::EMPTYITERATOR;
	} else {
		switch (axis) {
		case $Axis::CHILD:
			{
				return $new($SAXImpl$NamespaceChildrenIterator, this, ns);
			}
		case $Axis::ATTRIBUTE:
			{
				return $new($SAXImpl$NamespaceAttributeIterator, this, ns);
			}
		default:
			{
				return $new($SAXImpl$NamespaceWildcardIterator, this, axis, ns);
			}
		}
	}
}

$DTMAxisIterator* SAXImpl::getTypedDescendantIterator(int32_t type) {
	return $new($SAX2DTM2$TypedDescendantIterator, this, type);
}

$DTMAxisIterator* SAXImpl::getNthDescendant(int32_t type, int32_t n, bool includeself) {
	return $new($DTMDefaultBaseIterators$NthDescendantIterator, this, n);
}

void SAXImpl::characters(int32_t node, $SerializationHandler* handler) {
	if (node != $DTM::NULL) {
		try {
			dispatchCharactersEvents(node, handler, false);
		} catch ($SAXException& e) {
			$throwNew($TransletException, static_cast<$Exception*>(e));
		}
	}
}

void SAXImpl::copy($DTMAxisIterator* nodes, $SerializationHandler* handler) {
	int32_t node = 0;
	while ((node = $nc(nodes)->next()) != $DTM::NULL) {
		copy(node, handler);
	}
}

void SAXImpl::copy($SerializationHandler* handler) {
	copy(getDocument(), handler);
}

void SAXImpl::copy(int32_t node, $SerializationHandler* handler) {
	copy(node, handler, false);
}

void SAXImpl::copy(int32_t node, $SerializationHandler* handler, bool isChild) {
	$useLocalCurrentObjectStackCache();
	int32_t nodeID = makeNodeIdentity(node);
	int32_t eType = _exptype2(nodeID);
	int32_t type = _exptype2Type(eType);
	try {
		{
			bool oldEscapeSetting = false;
			bool escapeBit = false;
			switch (type) {
			case $DTM::ROOT_NODE:
				{}
			case $DTM::DOCUMENT_NODE:
				{
					for (int32_t c = _firstch2(nodeID); c != $DTM::NULL; c = _nextsib2(c)) {
						copy(makeNodeHandle(c), handler, true);
					}
					break;
				}
			case $DTM::PROCESSING_INSTRUCTION_NODE:
				{
					copyPI(node, handler);
					break;
				}
			case $DTM::COMMENT_NODE:
				{
					$nc(handler)->comment($(getStringValueX(node)));
					break;
				}
			case $DTM::TEXT_NODE:
				{
					oldEscapeSetting = false;
					escapeBit = false;
					if (this->_dontEscape != nullptr) {
						escapeBit = $nc(this->_dontEscape)->getBit(getNodeIdent(node));
						if (escapeBit) {
							oldEscapeSetting = $nc(handler)->setEscaping(false);
						}
					}
					copyTextNode(nodeID, handler);
					if (escapeBit) {
						$nc(handler)->setEscaping(oldEscapeSetting);
					}
					break;
				}
			case $DTM::ATTRIBUTE_NODE:
				{
					copyAttribute(nodeID, eType, handler);
					break;
				}
			case $DTM::NAMESPACE_NODE:
				{
					$var($String, var$0, getNodeNameX(node));
					$nc(handler)->namespaceAfterStartElement(var$0, $(getNodeValue(node)));
					break;
				}
			default:
				{
					if (type == $DTM::ELEMENT_NODE) {
						$var($String, name, copyElement(nodeID, eType, handler));
						copyNS(nodeID, handler, !isChild);
						copyAttributes(nodeID, handler);
						for (int32_t c = _firstch2(nodeID); c != $DTM::NULL; c = _nextsib2(c)) {
							copy(makeNodeHandle(c), handler, true);
						}
						$nc(handler)->endElement(name);
					} else {
						$var($String, uri, getNamespaceName(node));
						if ($nc(uri)->length() != 0) {
							$var($String, prefix, getPrefix(node));
							$nc(handler)->namespaceAfterStartElement(prefix, uri);
						}
						$var($String, var$1, getNodeName(node));
						$nc(handler)->addAttribute(var$1, $(getNodeValue(node)));
					}
					break;
				}
			}
		}
	} catch ($Exception& e) {
		$throwNew($TransletException, $cast($Exception, e));
	}
}

void SAXImpl::copyPI(int32_t node, $SerializationHandler* handler) {
	$useLocalCurrentObjectStackCache();
	$var($String, target, getNodeName(node));
	$var($String, value, getStringValueX(node));
	try {
		$nc(handler)->processingInstruction(target, value);
	} catch ($Exception& e) {
		$throwNew($TransletException, $cast($Exception, e));
	}
}

$String* SAXImpl::shallowCopy(int32_t node, $SerializationHandler* handler) {
	$useLocalCurrentObjectStackCache();
	int32_t nodeID = makeNodeIdentity(node);
	int32_t exptype = _exptype2(nodeID);
	int32_t type = _exptype2Type(exptype);
	try {
		{
			$var($String, name, nullptr)
			$var($String, uri1, nullptr)
			switch (type) {
			case $DTM::ELEMENT_NODE:
				{
					$assign(name, copyElement(nodeID, exptype, handler));
					copyNS(nodeID, handler, true);
					return name;
				}
			case $DTM::ROOT_NODE:
				{}
			case $DTM::DOCUMENT_NODE:
				{
					return SAXImpl::EMPTYSTRING;
				}
			case $DTM::TEXT_NODE:
				{
					copyTextNode(nodeID, handler);
					return nullptr;
				}
			case $DTM::PROCESSING_INSTRUCTION_NODE:
				{
					copyPI(node, handler);
					return nullptr;
				}
			case $DTM::COMMENT_NODE:
				{
					$nc(handler)->comment($(getStringValueX(node)));
					return nullptr;
				}
			case $DTM::NAMESPACE_NODE:
				{
					$var($String, var$0, getNodeNameX(node));
					$nc(handler)->namespaceAfterStartElement(var$0, $(getNodeValue(node)));
					return nullptr;
				}
			case $DTM::ATTRIBUTE_NODE:
				{
					copyAttribute(nodeID, exptype, handler);
					return nullptr;
				}
			default:
				{
					$assign(uri1, getNamespaceName(node));
					if ($nc(uri1)->length() != 0) {
						$var($String, prefix, getPrefix(node));
						$nc(handler)->namespaceAfterStartElement(prefix, uri1);
					}
					$var($String, var$1, getNodeName(node));
					$nc(handler)->addAttribute(var$1, $(getNodeValue(node)));
					return nullptr;
				}
			}
		}
	} catch ($Exception& e) {
		$throwNew($TransletException, $cast($Exception, e));
	}
	$shouldNotReachHere();
}

$String* SAXImpl::getLanguage(int32_t node) {
	int32_t parent = node;
	while ($DTM::NULL != parent) {
		if ($DTM::ELEMENT_NODE == getNodeType(parent)) {
			int32_t langAttr = getAttributeNode(parent, "http://www.w3.org/XML/1998/namespace"_s, "lang"_s);
			if ($DTM::NULL != langAttr) {
				return getNodeValue(langAttr);
			}
		}
		parent = getParent(parent);
	}
	return (nullptr);
}

$DOMBuilder* SAXImpl::getBuilder() {
	return this;
}

$SerializationHandler* SAXImpl::getOutputDomBuilder() {
	return $new($ToXMLSAXHandler, static_cast<$ContentHandler*>(static_cast<$SAX2DTM*>(static_cast<$SAX2DTM2*>(this))), "UTF-8"_s);
}

$DOM* SAXImpl::getResultTreeFrag(int32_t initSize, int32_t rtfType) {
	return getResultTreeFrag(initSize, rtfType, true);
}

$DOM* SAXImpl::getResultTreeFrag(int32_t initSize, int32_t rtfType, bool addToManager) {
	$useLocalCurrentObjectStackCache();
	if (rtfType == $DOM::SIMPLE_RTF) {
		if (addToManager) {
			int32_t dtmPos = $nc(this->_dtmManager)->getFirstFreeDTMID();
			$var($SimpleResultTreeImpl, rtf, $new($SimpleResultTreeImpl, this->_dtmManager, $sl(dtmPos, $DTMManager::IDENT_DTM_NODE_BITS)));
			$nc(this->_dtmManager)->addDTM(rtf, dtmPos, 0);
			return rtf;
		} else {
			return $new($SimpleResultTreeImpl, this->_dtmManager, 0);
		}
	} else if (rtfType == $DOM::ADAPTIVE_RTF) {
		if (addToManager) {
			int32_t dtmPos = $nc(this->_dtmManager)->getFirstFreeDTMID();
			$var($AdaptiveResultTreeImpl, rtf, $new($AdaptiveResultTreeImpl, this->_dtmManager, $sl(dtmPos, $DTMManager::IDENT_DTM_NODE_BITS), this->m_wsfilter, initSize, this->m_buildIdIndex));
			$nc(this->_dtmManager)->addDTM(rtf, dtmPos, 0);
			return rtf;
		} else {
			return $new($AdaptiveResultTreeImpl, this->_dtmManager, 0, this->m_wsfilter, initSize, this->m_buildIdIndex);
		}
	} else {
		return $cast($DOM, $nc(this->_dtmManager)->getDTM(nullptr, true, this->m_wsfilter, true, false, false, initSize, this->m_buildIdIndex));
	}
}

$Map* SAXImpl::getElementsWithIDs() {
	return this->m_idAttributes;
}

$String* SAXImpl::getUnparsedEntityURI($String* name) {
	$useLocalCurrentObjectStackCache();
	if (this->_document != nullptr) {
		$var($String, uri, ""_s);
		$var($DocumentType, doctype, $nc(this->_document)->getDoctype());
		if (doctype != nullptr) {
			$var($NamedNodeMap, entities, doctype->getEntities());
			if (entities == nullptr) {
				return uri;
			}
			$var($Entity, entity, $cast($Entity, $nc(entities)->getNamedItem(name)));
			if (entity == nullptr) {
				return uri;
			}
			$var($String, notationName, $nc(entity)->getNotationName());
			if (notationName != nullptr) {
				$assign(uri, entity->getSystemId());
				if (uri == nullptr) {
					$assign(uri, entity->getPublicId());
				}
			}
		}
		return uri;
	} else {
		return $SAX2DTM2::getUnparsedEntityURI(name);
	}
}

void SAXImpl::release() {
	$nc(this->_dtmManager)->release(this, true);
}

void clinit$SAXImpl($Class* class$) {
	$assignStatic(SAXImpl::XML_PREFIX, "xml"_s);
	$assignStatic(SAXImpl::XMLSPACE_STRING, "xml:space"_s);
	$assignStatic(SAXImpl::PRESERVE_STRING, "preserve"_s);
	$assignStatic(SAXImpl::XML_URI, "http://www.w3.org/XML/1998/namespace"_s);
	$assignStatic(SAXImpl::EMPTYSTRING, ""_s);
	$assignStatic(SAXImpl::EMPTYITERATOR, $EmptyIterator::getInstance());
	SAXImpl::_documentURIIndex = 0;
}

SAXImpl::SAXImpl() {
}

$Class* SAXImpl::load$($String* name, bool initialize) {
	$loadClass(SAXImpl, name, initialize, &_SAXImpl_ClassInfo_, clinit$SAXImpl, allocate$SAXImpl);
	return class$;
}

$Class* SAXImpl::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com