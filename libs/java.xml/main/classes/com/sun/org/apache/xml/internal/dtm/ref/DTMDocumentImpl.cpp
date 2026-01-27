#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDocumentImpl.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ChunkedIntArray.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMStringPool.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource_Filter.h>
#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <javax/xml/transform/SourceLocator.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/ext/DeclHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DEBUG
#undef DOCHANDLE_MASK
#undef DOCHANDLE_SHIFT
#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef ENTITY_REFERENCE_NODE
#undef NAMESPACE_NODE
#undef NODEHANDLE_MASK
#undef NULL
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $ChunkedIntArray = ::com::sun::org::apache::xml::internal::dtm::ref::ChunkedIntArray;
using $DTMStringPool = ::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool;
using $ExpandedNameTable = ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable;
using $IncrementalSAXSource = ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource;
using $IncrementalSAXSource_Filter = ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource_Filter;
using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $Node = ::org::w3c::dom::Node;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $Locator = ::org::xml::sax::Locator;
using $DeclHandler = ::org::xml::sax::ext::DeclHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMDocumentImpl_FieldInfo_[] = {
	{"DOCHANDLE_SHIFT", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DTMDocumentImpl, DOCHANDLE_SHIFT)},
	{"NODEHANDLE_MASK", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DTMDocumentImpl, NODEHANDLE_MASK)},
	{"DOCHANDLE_MASK", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DTMDocumentImpl, DOCHANDLE_MASK)},
	{"m_docHandle", "I", nullptr, 0, $field(DTMDocumentImpl, m_docHandle)},
	{"m_docElement", "I", nullptr, 0, $field(DTMDocumentImpl, m_docElement)},
	{"currentParent", "I", nullptr, 0, $field(DTMDocumentImpl, currentParent)},
	{"previousSibling", "I", nullptr, 0, $field(DTMDocumentImpl, previousSibling)},
	{"m_currentNode", "I", nullptr, $PROTECTED, $field(DTMDocumentImpl, m_currentNode)},
	{"previousSiblingWasParent", "Z", nullptr, $PRIVATE, $field(DTMDocumentImpl, previousSiblingWasParent)},
	{"gotslot", "[I", nullptr, 0, $field(DTMDocumentImpl, gotslot)},
	{"done", "Z", nullptr, $PRIVATE, $field(DTMDocumentImpl, done)},
	{"m_isError", "Z", nullptr, 0, $field(DTMDocumentImpl, m_isError)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTMDocumentImpl, DEBUG)},
	{"m_documentBaseURI", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DTMDocumentImpl, m_documentBaseURI)},
	{"m_incrSAXSource", "Lcom/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource;", nullptr, $PRIVATE, $field(DTMDocumentImpl, m_incrSAXSource)},
	{"nodes", "Lcom/sun/org/apache/xml/internal/dtm/ref/ChunkedIntArray;", nullptr, 0, $field(DTMDocumentImpl, nodes)},
	{"m_char", "Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;", nullptr, $PRIVATE, $field(DTMDocumentImpl, m_char)},
	{"m_char_current_start", "I", nullptr, $PRIVATE, $field(DTMDocumentImpl, m_char_current_start)},
	{"m_localNames", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMStringPool;", nullptr, $PRIVATE, $field(DTMDocumentImpl, m_localNames)},
	{"m_nsNames", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMStringPool;", nullptr, $PRIVATE, $field(DTMDocumentImpl, m_nsNames)},
	{"m_prefixNames", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMStringPool;", nullptr, $PRIVATE, $field(DTMDocumentImpl, m_prefixNames)},
	{"m_expandedNames", "Lcom/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable;", nullptr, $PRIVATE, $field(DTMDocumentImpl, m_expandedNames)},
	{"m_xsf", "Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;", nullptr, $PRIVATE, $field(DTMDocumentImpl, m_xsf)},
	{"fixednames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DTMDocumentImpl, fixednames)},
	{}
};

$MethodInfo _DTMDocumentImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;)V", nullptr, $PUBLIC, $method(DTMDocumentImpl, init$, void, $DTMManager*, int32_t, $DTMWSFilter*, $XMLStringFactory*)},
	{"appendAttribute", "(IIIZII)V", nullptr, 0, $virtualMethod(DTMDocumentImpl, appendAttribute, void, int32_t, int32_t, int32_t, bool, int32_t, int32_t)},
	{"appendChild", "(IZZ)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, appendChild, void, int32_t, bool, bool)},
	{"appendComment", "(II)V", nullptr, 0, $virtualMethod(DTMDocumentImpl, appendComment, void, int32_t, int32_t)},
	{"appendEndDocument", "()V", nullptr, 0, $virtualMethod(DTMDocumentImpl, appendEndDocument, void)},
	{"appendEndElement", "()V", nullptr, 0, $virtualMethod(DTMDocumentImpl, appendEndElement, void)},
	{"appendNSDeclaration", "(IIZ)V", nullptr, 0, $virtualMethod(DTMDocumentImpl, appendNSDeclaration, void, int32_t, int32_t, bool)},
	{"appendNode", "(IIII)I", nullptr, $PRIVATE | $FINAL, $method(DTMDocumentImpl, appendNode, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"appendStartDocument", "()V", nullptr, 0, $virtualMethod(DTMDocumentImpl, appendStartDocument, void)},
	{"appendStartElement", "(III)V", nullptr, 0, $virtualMethod(DTMDocumentImpl, appendStartElement, void, int32_t, int32_t, int32_t)},
	{"appendTextChild", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, appendTextChild, void, $String*)},
	{"appendTextChild", "(II)V", nullptr, 0, $virtualMethod(DTMDocumentImpl, appendTextChild, void, int32_t, int32_t)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"dispatchCharactersEvents", "(ILorg/xml/sax/ContentHandler;Z)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, dispatchCharactersEvents, void, int32_t, $ContentHandler*, bool), "org.xml.sax.SAXException"},
	{"dispatchToEvents", "(ILorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, dispatchToEvents, void, int32_t, $ContentHandler*), "org.xml.sax.SAXException"},
	{"documentRegistration", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, documentRegistration, void)},
	{"documentRelease", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, documentRelease, void)},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, endDTD, void), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, endEntity, void, $String*), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"getAttributeNode", "(ILjava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getAttributeNode, int32_t, int32_t, $String*, $String*)},
	{"getAxisIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getAxisIterator, $DTMAxisIterator*, int32_t)},
	{"getAxisTraverser", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisTraverser;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getAxisTraverser, $DTMAxisTraverser*, int32_t)},
	{"getContentBuffer", "()Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;", nullptr, 0, $virtualMethod(DTMDocumentImpl, getContentBuffer, $FastStringBuffer*)},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getContentHandler, $ContentHandler*)},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getDTDHandler, $DTDHandler*)},
	{"getDeclHandler", "()Lorg/xml/sax/ext/DeclHandler;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getDeclHandler, $DeclHandler*)},
	{"getDocument", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getDocument, int32_t)},
	{"getDocumentAllDeclarationsProcessed", "()Z", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getDocumentAllDeclarationsProcessed, bool)},
	{"getDocumentBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getDocumentBaseURI, $String*)},
	{"getDocumentEncoding", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getDocumentEncoding, $String*, int32_t)},
	{"getDocumentRoot", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getDocumentRoot, int32_t)},
	{"getDocumentRoot", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getDocumentRoot, int32_t, int32_t)},
	{"getDocumentStandalone", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getDocumentStandalone, $String*, int32_t)},
	{"getDocumentSystemIdentifier", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getDocumentSystemIdentifier, $String*, int32_t)},
	{"getDocumentTypeDeclarationPublicIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getDocumentTypeDeclarationPublicIdentifier, $String*)},
	{"getDocumentTypeDeclarationSystemIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getDocumentTypeDeclarationSystemIdentifier, $String*)},
	{"getDocumentVersion", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getDocumentVersion, $String*, int32_t)},
	{"getElementById", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getElementById, int32_t, $String*)},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getEntityResolver, $EntityResolver*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getErrorHandler, $ErrorHandler*)},
	{"getExpandedTypeID", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getExpandedTypeID, int32_t, int32_t)},
	{"getExpandedTypeID", "(Ljava/lang/String;Ljava/lang/String;I)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getExpandedTypeID, int32_t, $String*, $String*, int32_t)},
	{"getFirstAttribute", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getFirstAttribute, int32_t, int32_t)},
	{"getFirstChild", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getFirstChild, int32_t, int32_t)},
	{"getFirstNamespaceNode", "(IZ)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getFirstNamespaceNode, int32_t, int32_t, bool)},
	{"getLastChild", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getLastChild, int32_t, int32_t)},
	{"getLevel", "(I)S", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getLevel, int16_t, int32_t)},
	{"getLexicalHandler", "()Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getLexicalHandler, $LexicalHandler*)},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getLocalName, $String*, int32_t)},
	{"getLocalNameFromExpandedNameID", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getLocalNameFromExpandedNameID, $String*, int32_t)},
	{"getLocalNameTable", "()Lcom/sun/org/apache/xml/internal/dtm/ref/DTMStringPool;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getLocalNameTable, $DTMStringPool*)},
	{"getNamespaceFromExpandedNameID", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNamespaceFromExpandedNameID, $String*, int32_t)},
	{"getNamespaceURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNamespaceURI, $String*, int32_t)},
	{"getNextAttribute", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNextAttribute, int32_t, int32_t)},
	{"getNextDescendant", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNextDescendant, int32_t, int32_t, int32_t)},
	{"getNextFollowing", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNextFollowing, int32_t, int32_t, int32_t)},
	{"getNextNamespaceNode", "(IIZ)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNextNamespaceNode, int32_t, int32_t, int32_t, bool)},
	{"getNextPreceding", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNextPreceding, int32_t, int32_t, int32_t)},
	{"getNextSibling", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNextSibling, int32_t, int32_t)},
	{"getNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNode, $Node*, int32_t)},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNodeName, $String*, int32_t)},
	{"getNodeNameX", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNodeNameX, $String*, int32_t)},
	{"getNodeType", "(I)S", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNodeType, int16_t, int32_t)},
	{"getNodeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNodeValue, $String*, int32_t)},
	{"getNsNameTable", "()Lcom/sun/org/apache/xml/internal/dtm/ref/DTMStringPool;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getNsNameTable, $DTMStringPool*)},
	{"getOwnerDocument", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getOwnerDocument, int32_t, int32_t)},
	{"getParent", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getParent, int32_t, int32_t)},
	{"getPrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getPrefix, $String*, int32_t)},
	{"getPrefixNameTable", "()Lcom/sun/org/apache/xml/internal/dtm/ref/DTMStringPool;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getPrefixNameTable, $DTMStringPool*)},
	{"getPreviousSibling", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getPreviousSibling, int32_t, int32_t)},
	{"getSourceLocatorFor", "(I)Ljavax/xml/transform/SourceLocator;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getSourceLocatorFor, $SourceLocator*, int32_t)},
	{"getStringValue", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getStringValue, $XMLString*, int32_t)},
	{"getStringValueChunk", "(II[I)[C", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getStringValueChunk, $chars*, int32_t, int32_t, $ints*)},
	{"getStringValueChunkCount", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getStringValueChunkCount, int32_t, int32_t)},
	{"getTypedAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getTypedAxisIterator, $DTMAxisIterator*, int32_t, int32_t)},
	{"getUnparsedEntityURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, getUnparsedEntityURI, $String*, $String*)},
	{"hasChildNodes", "(I)Z", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, hasChildNodes, bool, int32_t)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"initDocument", "(I)V", nullptr, $FINAL, $method(DTMDocumentImpl, initDocument, void, int32_t)},
	{"isAttributeSpecified", "(I)Z", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, isAttributeSpecified, bool, int32_t)},
	{"isCharacterElementContentWhitespace", "(I)Z", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, isCharacterElementContentWhitespace, bool, int32_t)},
	{"isDocumentAllDeclarationsProcessed", "(I)Z", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, isDocumentAllDeclarationsProcessed, bool, int32_t)},
	{"isNodeAfter", "(II)Z", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, isNodeAfter, bool, int32_t, int32_t)},
	{"isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, isSupported, bool, $String*, $String*)},
	{"migrateTo", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, migrateTo, void, $DTMManager*)},
	{"needsTwoThreads", "()Z", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, needsTwoThreads, bool)},
	{"processAccumulatedText", "()V", nullptr, $PRIVATE, $method(DTMDocumentImpl, processAccumulatedText, void)},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"setContentBuffer", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;)V", nullptr, 0, $virtualMethod(DTMDocumentImpl, setContentBuffer, void, $FastStringBuffer*)},
	{"setDocumentBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, setDocumentBaseURI, void, $String*)},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, setDocumentLocator, void, $Locator*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, setFeature, void, $String*, bool)},
	{"setIncrementalSAXSource", "(Lcom/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, setIncrementalSAXSource, void, $IncrementalSAXSource*)},
	{"setLocalNameTable", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMStringPool;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, setLocalNameTable, void, $DTMStringPool*)},
	{"setNsNameTable", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMStringPool;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, setNsNameTable, void, $DTMStringPool*)},
	{"setPrefixNameTable", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMStringPool;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, setPrefixNameTable, void, $DTMStringPool*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, setProperty, void, $String*, Object$*)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, startCDATA, void), "org.xml.sax.SAXException"},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, startEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"supportsPreStripping", "()Z", nullptr, $PUBLIC, $virtualMethod(DTMDocumentImpl, supportsPreStripping, bool)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DTMDocumentImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDocumentImpl",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.dtm.DTM,org.xml.sax.ContentHandler,org.xml.sax.ext.LexicalHandler",
	_DTMDocumentImpl_FieldInfo_,
	_DTMDocumentImpl_MethodInfo_
};

$Object* allocate$DTMDocumentImpl($Class* clazz) {
	return $of($alloc(DTMDocumentImpl));
}

int32_t DTMDocumentImpl::hashCode() {
	 return this->$DTM::hashCode();
}

bool DTMDocumentImpl::equals(Object$* arg0) {
	 return this->$DTM::equals(arg0);
}

$Object* DTMDocumentImpl::clone() {
	 return this->$DTM::clone();
}

$String* DTMDocumentImpl::toString() {
	 return this->$DTM::toString();
}

void DTMDocumentImpl::finalize() {
	this->$DTM::finalize();
}

$StringArray* DTMDocumentImpl::fixednames = nullptr;

void DTMDocumentImpl::init$($DTMManager* mgr, int32_t documentNumber, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory) {
	this->m_docHandle = $DTM::NULL;
	this->m_docElement = $DTM::NULL;
	this->currentParent = 0;
	this->previousSibling = 0;
	this->m_currentNode = -1;
	this->previousSiblingWasParent = false;
	$set(this, gotslot, $new($ints, 4));
	this->done = false;
	this->m_isError = false;
	$set(this, m_incrSAXSource, nullptr);
	$set(this, nodes, $new($ChunkedIntArray, 4));
	$set(this, m_char, $new($FastStringBuffer));
	this->m_char_current_start = 0;
	$set(this, m_localNames, $new($DTMStringPool));
	$set(this, m_nsNames, $new($DTMStringPool));
	$set(this, m_prefixNames, $new($DTMStringPool));
	$set(this, m_expandedNames, $new($ExpandedNameTable));
	initDocument(documentNumber);
	$set(this, m_xsf, xstringfactory);
}

void DTMDocumentImpl::setIncrementalSAXSource($IncrementalSAXSource* source) {
	$set(this, m_incrSAXSource, source);
	$nc(source)->setContentHandler(this);
	source->setLexicalHandler(this);
}

int32_t DTMDocumentImpl::appendNode(int32_t w0, int32_t w1, int32_t w2, int32_t w3) {
	int32_t slotnumber = $nc(this->nodes)->appendSlot(w0, w1, w2, w3);
	if (this->previousSiblingWasParent) {
		$nc(this->nodes)->writeEntry(this->previousSibling, 2, slotnumber);
	}
	this->previousSiblingWasParent = false;
	return slotnumber;
}

void DTMDocumentImpl::setFeature($String* featureId, bool state) {
}

void DTMDocumentImpl::setLocalNameTable($DTMStringPool* poolRef) {
	$set(this, m_localNames, poolRef);
}

$DTMStringPool* DTMDocumentImpl::getLocalNameTable() {
	return this->m_localNames;
}

void DTMDocumentImpl::setNsNameTable($DTMStringPool* poolRef) {
	$set(this, m_nsNames, poolRef);
}

$DTMStringPool* DTMDocumentImpl::getNsNameTable() {
	return this->m_nsNames;
}

void DTMDocumentImpl::setPrefixNameTable($DTMStringPool* poolRef) {
	$set(this, m_prefixNames, poolRef);
}

$DTMStringPool* DTMDocumentImpl::getPrefixNameTable() {
	return this->m_prefixNames;
}

void DTMDocumentImpl::setContentBuffer($FastStringBuffer* buffer) {
	$set(this, m_char, buffer);
}

$FastStringBuffer* DTMDocumentImpl::getContentBuffer() {
	return this->m_char;
}

$ContentHandler* DTMDocumentImpl::getContentHandler() {
	if ($instanceOf($IncrementalSAXSource_Filter, this->m_incrSAXSource)) {
		return $cast($ContentHandler, this->m_incrSAXSource);
	} else {
		return this;
	}
}

$LexicalHandler* DTMDocumentImpl::getLexicalHandler() {
	if ($instanceOf($IncrementalSAXSource_Filter, this->m_incrSAXSource)) {
		return $cast($LexicalHandler, this->m_incrSAXSource);
	} else {
		return this;
	}
}

$EntityResolver* DTMDocumentImpl::getEntityResolver() {
	return nullptr;
}

$DTDHandler* DTMDocumentImpl::getDTDHandler() {
	return nullptr;
}

$ErrorHandler* DTMDocumentImpl::getErrorHandler() {
	return nullptr;
}

$DeclHandler* DTMDocumentImpl::getDeclHandler() {
	return nullptr;
}

bool DTMDocumentImpl::needsTwoThreads() {
	return nullptr != this->m_incrSAXSource;
}

void DTMDocumentImpl::characters($chars* ch, int32_t start, int32_t length) {
	$nc(this->m_char)->append(ch, start, length);
}

void DTMDocumentImpl::processAccumulatedText() {
	int32_t len = $nc(this->m_char)->length();
	if (len != this->m_char_current_start) {
		appendTextChild(this->m_char_current_start, len - this->m_char_current_start);
		this->m_char_current_start = len;
	}
}

void DTMDocumentImpl::endDocument() {
	appendEndDocument();
}

void DTMDocumentImpl::endElement($String* namespaceURI, $String* localName, $String* qName) {
	processAccumulatedText();
	appendEndElement();
}

void DTMDocumentImpl::endPrefixMapping($String* prefix) {
}

void DTMDocumentImpl::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
}

void DTMDocumentImpl::processingInstruction($String* target, $String* data) {
	processAccumulatedText();
}

void DTMDocumentImpl::setDocumentLocator($Locator* locator) {
}

void DTMDocumentImpl::skippedEntity($String* name) {
	processAccumulatedText();
}

void DTMDocumentImpl::startDocument() {
	appendStartDocument();
}

void DTMDocumentImpl::startElement($String* namespaceURI, $String* localName$renamed, $String* qName$renamed, $Attributes* atts) {
	$useLocalCurrentObjectStackCache();
	$var($String, localName, localName$renamed);
	$var($String, qName, qName$renamed);
	processAccumulatedText();
	$var($String, prefix, nullptr);
	int32_t colon = $nc(qName)->indexOf((int32_t)u':');
	if (colon > 0) {
		$assign(prefix, qName->substring(0, colon));
	}
	$nc($System::out)->println($$str({"Prefix="_s, prefix, " index="_s, $$str($nc(this->m_prefixNames)->stringToIndex(prefix))}));
	int32_t var$0 = $nc(this->m_nsNames)->stringToIndex(namespaceURI);
	int32_t var$1 = $nc(this->m_localNames)->stringToIndex(localName);
	appendStartElement(var$0, var$1, $nc(this->m_prefixNames)->stringToIndex(prefix));
	int32_t nAtts = (atts == nullptr) ? 0 : $nc(atts)->getLength();
	for (int32_t i = nAtts - 1; i >= 0; --i) {
		$assign(qName, atts->getQName(i));
		bool var$2 = $nc(qName)->startsWith("xmlns:"_s);
		if (var$2 || "xmlns"_s->equals(qName)) {
			$assign(prefix, nullptr);
			colon = $nc(qName)->indexOf((int32_t)u':');
			if (colon > 0) {
				$assign(prefix, qName->substring(0, colon));
			} else {
				$assign(prefix, nullptr);
			}
			int32_t var$3 = $nc(this->m_prefixNames)->stringToIndex(prefix);
			int32_t var$4 = $nc(this->m_nsNames)->stringToIndex($(atts->getValue(i)));
			appendNSDeclaration(var$3, var$4, $nc($(atts->getType(i)))->equalsIgnoreCase("ID"_s));
		}
	}
	for (int32_t i = nAtts - 1; i >= 0; --i) {
		$assign(qName, atts->getQName(i));
		bool var$5 = $nc(qName)->startsWith("xmlns:"_s);
		if (!(var$5 || "xmlns"_s->equals(qName))) {
			$assign(prefix, nullptr);
			colon = $nc(qName)->indexOf((int32_t)u':');
			if (colon > 0) {
				$assign(prefix, qName->substring(0, colon));
				$assign(localName, qName->substring(colon + 1));
			} else {
				$assign(prefix, ""_s);
				$assign(localName, qName);
			}
			$nc(this->m_char)->append($(atts->getValue(i)));
			int32_t contentEnd = $nc(this->m_char)->length();
			bool var$6 = "xmlns"_s->equals(prefix);
			if (!(var$6 || "xmlns"_s->equals(qName))) {
				int32_t var$7 = $nc(this->m_nsNames)->stringToIndex($(atts->getURI(i)));
				int32_t var$8 = $nc(this->m_localNames)->stringToIndex(localName);
				int32_t var$9 = $nc(this->m_prefixNames)->stringToIndex(prefix);
				appendAttribute(var$7, var$8, var$9, $nc($(atts->getType(i)))->equalsIgnoreCase("ID"_s), this->m_char_current_start, contentEnd - this->m_char_current_start);
			}
			this->m_char_current_start = contentEnd;
		}
	}
}

void DTMDocumentImpl::startPrefixMapping($String* prefix, $String* uri) {
}

void DTMDocumentImpl::comment($chars* ch, int32_t start, int32_t length) {
	processAccumulatedText();
	$nc(this->m_char)->append(ch, start, length);
	appendComment(this->m_char_current_start, length);
	this->m_char_current_start += length;
}

void DTMDocumentImpl::endCDATA() {
}

void DTMDocumentImpl::endDTD() {
}

void DTMDocumentImpl::endEntity($String* name) {
}

void DTMDocumentImpl::startCDATA() {
}

void DTMDocumentImpl::startDTD($String* name, $String* publicId, $String* systemId) {
}

void DTMDocumentImpl::startEntity($String* name) {
}

void DTMDocumentImpl::initDocument(int32_t documentNumber) {
	this->m_docHandle = $sl(documentNumber, DTMDocumentImpl::DOCHANDLE_SHIFT);
	$nc(this->nodes)->writeSlot(0, $DTM::DOCUMENT_NODE, -1, -1, 0);
	this->done = false;
}

bool DTMDocumentImpl::hasChildNodes(int32_t nodeHandle) {
	return (getFirstChild(nodeHandle) != $DTM::NULL);
}

int32_t DTMDocumentImpl::getFirstChild(int32_t nodeHandle) {
	nodeHandle &= (uint32_t)DTMDocumentImpl::NODEHANDLE_MASK;
	$nc(this->nodes)->readSlot(nodeHandle, this->gotslot);
	int16_t type = (int16_t)((int32_t)($nc(this->gotslot)->get(0) & (uint32_t)0x0000FFFF));
	if ((type == $DTM::ELEMENT_NODE) || (type == $DTM::DOCUMENT_NODE) || (type == $DTM::ENTITY_REFERENCE_NODE)) {
		int32_t kid = nodeHandle + 1;
		$nc(this->nodes)->readSlot(kid, this->gotslot);
		while ($DTM::ATTRIBUTE_NODE == ((int32_t)($nc(this->gotslot)->get(0) & (uint32_t)0x0000FFFF))) {
			kid = $nc(this->gotslot)->get(2);
			if (kid == $DTM::NULL) {
				return $DTM::NULL;
			}
			$nc(this->nodes)->readSlot(kid, this->gotslot);
		}
		if ($nc(this->gotslot)->get(1) == nodeHandle) {
			int32_t firstChild = kid | this->m_docHandle;
			return firstChild;
		}
	}
	return $DTM::NULL;
}

int32_t DTMDocumentImpl::getLastChild(int32_t nodeHandle) {
	nodeHandle &= (uint32_t)DTMDocumentImpl::NODEHANDLE_MASK;
	int32_t lastChild = $DTM::NULL;
	for (int32_t nextkid = getFirstChild(nodeHandle); nextkid != $DTM::NULL; nextkid = getNextSibling(nextkid)) {
		lastChild = nextkid;
	}
	return lastChild | this->m_docHandle;
}

int32_t DTMDocumentImpl::getAttributeNode(int32_t nodeHandle, $String* namespaceURI, $String* name) {
	int32_t nsIndex = $nc(this->m_nsNames)->stringToIndex(namespaceURI);
	int32_t nameIndex = $nc(this->m_localNames)->stringToIndex(name);
	nodeHandle &= (uint32_t)DTMDocumentImpl::NODEHANDLE_MASK;
	$nc(this->nodes)->readSlot(nodeHandle, this->gotslot);
	int16_t type = (int16_t)((int32_t)($nc(this->gotslot)->get(0) & (uint32_t)0x0000FFFF));
	if (type == $DTM::ELEMENT_NODE) {
		++nodeHandle;
	}
	while (type == $DTM::ATTRIBUTE_NODE) {
		if ((nsIndex == ($nc(this->gotslot)->get(0) << 16)) && ($nc(this->gotslot)->get(3) == nameIndex)) {
			return nodeHandle | this->m_docHandle;
		}
		nodeHandle = $nc(this->gotslot)->get(2);
		$nc(this->nodes)->readSlot(nodeHandle, this->gotslot);
	}
	return $DTM::NULL;
}

int32_t DTMDocumentImpl::getFirstAttribute(int32_t nodeHandle) {
	nodeHandle &= (uint32_t)DTMDocumentImpl::NODEHANDLE_MASK;
	if ($DTM::ELEMENT_NODE != ((int32_t)($nc(this->nodes)->readEntry(nodeHandle, 0) & (uint32_t)0x0000FFFF))) {
		return $DTM::NULL;
	}
	++nodeHandle;
	return ($DTM::ATTRIBUTE_NODE == ((int32_t)($nc(this->nodes)->readEntry(nodeHandle, 0) & (uint32_t)0x0000FFFF))) ? nodeHandle | this->m_docHandle : $DTM::NULL;
}

int32_t DTMDocumentImpl::getFirstNamespaceNode(int32_t nodeHandle, bool inScope) {
	return $DTM::NULL;
}

int32_t DTMDocumentImpl::getNextSibling(int32_t nodeHandle) {
	nodeHandle &= (uint32_t)DTMDocumentImpl::NODEHANDLE_MASK;
	if (nodeHandle == 0) {
		return $DTM::NULL;
	}
	int16_t type = (int16_t)((int32_t)($nc(this->nodes)->readEntry(nodeHandle, 0) & (uint32_t)0x0000FFFF));
	if ((type == $DTM::ELEMENT_NODE) || (type == $DTM::ATTRIBUTE_NODE) || (type == $DTM::ENTITY_REFERENCE_NODE)) {
		int32_t nextSib = $nc(this->nodes)->readEntry(nodeHandle, 2);
		if (nextSib == $DTM::NULL) {
			return $DTM::NULL;
		}
		if (nextSib != 0) {
			return (this->m_docHandle | nextSib);
		}
	}
	int32_t thisParent = $nc(this->nodes)->readEntry(nodeHandle, 1);
	if ($nc(this->nodes)->readEntry(++nodeHandle, 1) == thisParent) {
		return (this->m_docHandle | nodeHandle);
	}
	return $DTM::NULL;
}

int32_t DTMDocumentImpl::getPreviousSibling(int32_t nodeHandle) {
	nodeHandle &= (uint32_t)DTMDocumentImpl::NODEHANDLE_MASK;
	if (nodeHandle == 0) {
		return $DTM::NULL;
	}
	int32_t parent = $nc(this->nodes)->readEntry(nodeHandle, 1);
	int32_t kid = $DTM::NULL;
	for (int32_t nextkid = getFirstChild(parent); nextkid != nodeHandle; nextkid = getNextSibling(nextkid)) {
		kid = nextkid;
	}
	return kid | this->m_docHandle;
}

int32_t DTMDocumentImpl::getNextAttribute(int32_t nodeHandle) {
	nodeHandle &= (uint32_t)DTMDocumentImpl::NODEHANDLE_MASK;
	$nc(this->nodes)->readSlot(nodeHandle, this->gotslot);
	int16_t type = (int16_t)((int32_t)($nc(this->gotslot)->get(0) & (uint32_t)0x0000FFFF));
	if (type == $DTM::ELEMENT_NODE) {
		return getFirstAttribute(nodeHandle);
	} else if (type == $DTM::ATTRIBUTE_NODE) {
		if ($nc(this->gotslot)->get(2) != $DTM::NULL) {
			return (this->m_docHandle | $nc(this->gotslot)->get(2));
		}
	}
	return $DTM::NULL;
}

int32_t DTMDocumentImpl::getNextNamespaceNode(int32_t baseHandle, int32_t namespaceHandle, bool inScope) {
	return $DTM::NULL;
}

int32_t DTMDocumentImpl::getNextDescendant(int32_t subtreeRootHandle, int32_t nodeHandle) {
	subtreeRootHandle &= (uint32_t)DTMDocumentImpl::NODEHANDLE_MASK;
	nodeHandle &= (uint32_t)DTMDocumentImpl::NODEHANDLE_MASK;
	if (nodeHandle == 0) {
		return $DTM::NULL;
	}
	while (!this->m_isError) {
		if (this->done && (nodeHandle > $nc(this->nodes)->slotsUsed())) {
			break;
		}
		if (nodeHandle > subtreeRootHandle) {
			$nc(this->nodes)->readSlot(nodeHandle + 1, this->gotslot);
			if ($nc(this->gotslot)->get(2) != 0) {
				int16_t type = (int16_t)((int32_t)($nc(this->gotslot)->get(0) & (uint32_t)0x0000FFFF));
				if (type == $DTM::ATTRIBUTE_NODE) {
					nodeHandle += 2;
				} else {
					int32_t nextParentPos = $nc(this->gotslot)->get(1);
					if (nextParentPos >= subtreeRootHandle) {
						return (this->m_docHandle | (nodeHandle + 1));
					} else {
						break;
					}
				}
			} else if (!this->done) {
			} else {
				break;
			}
		} else {
			++nodeHandle;
		}
	}
	return $DTM::NULL;
}

int32_t DTMDocumentImpl::getNextFollowing(int32_t axisContextHandle, int32_t nodeHandle) {
	return $DTM::NULL;
}

int32_t DTMDocumentImpl::getNextPreceding(int32_t axisContextHandle, int32_t nodeHandle) {
	nodeHandle &= (uint32_t)DTMDocumentImpl::NODEHANDLE_MASK;
	while (nodeHandle > 1) {
		--nodeHandle;
		if ($DTM::ATTRIBUTE_NODE == ((int32_t)($nc(this->nodes)->readEntry(nodeHandle, 0) & (uint32_t)0x0000FFFF))) {
			continue;
		}
		return (this->m_docHandle | $nc(this->nodes)->specialFind(axisContextHandle, nodeHandle));
	}
	return $DTM::NULL;
}

int32_t DTMDocumentImpl::getParent(int32_t nodeHandle) {
	return (this->m_docHandle | $nc(this->nodes)->readEntry(nodeHandle, 1));
}

int32_t DTMDocumentImpl::getDocumentRoot() {
	return (this->m_docHandle | this->m_docElement);
}

int32_t DTMDocumentImpl::getDocument() {
	return this->m_docHandle;
}

int32_t DTMDocumentImpl::getOwnerDocument(int32_t nodeHandle) {
	if (((int32_t)(nodeHandle & (uint32_t)DTMDocumentImpl::NODEHANDLE_MASK)) == 0) {
		return $DTM::NULL;
	}
	return ((int32_t)(nodeHandle & (uint32_t)DTMDocumentImpl::DOCHANDLE_MASK));
}

int32_t DTMDocumentImpl::getDocumentRoot(int32_t nodeHandle) {
	if (((int32_t)(nodeHandle & (uint32_t)DTMDocumentImpl::NODEHANDLE_MASK)) == 0) {
		return $DTM::NULL;
	}
	return ((int32_t)(nodeHandle & (uint32_t)DTMDocumentImpl::DOCHANDLE_MASK));
}

$XMLString* DTMDocumentImpl::getStringValue(int32_t nodeHandle) {
	$nc(this->nodes)->readSlot(nodeHandle, this->gotslot);
	int32_t nodetype = (int32_t)($nc(this->gotslot)->get(0) & (uint32_t)255);
	$var($String, value, nullptr);
	switch (nodetype) {
	case $DTM::TEXT_NODE:
		{}
	case $DTM::COMMENT_NODE:
		{}
	case $DTM::CDATA_SECTION_NODE:
		{
			$assign(value, $nc(this->m_char)->getString($nc(this->gotslot)->get(2), $nc(this->gotslot)->get(3)));
			break;
		}
	case $DTM::PROCESSING_INSTRUCTION_NODE:
		{}
	case $DTM::ATTRIBUTE_NODE:
		{}
	case $DTM::ELEMENT_NODE:
		{}
	case $DTM::ENTITY_REFERENCE_NODE:
		{}
	default:
		{
			break;
		}
	}
	return $nc(this->m_xsf)->newstr(value);
}

int32_t DTMDocumentImpl::getStringValueChunkCount(int32_t nodeHandle) {
	return 0;
}

$chars* DTMDocumentImpl::getStringValueChunk(int32_t nodeHandle, int32_t chunkIndex, $ints* startAndLen) {
	return $new($chars, 0);
}

int32_t DTMDocumentImpl::getExpandedTypeID(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	$nc(this->nodes)->readSlot(nodeHandle, this->gotslot);
	$var($String, qName, $nc(this->m_localNames)->indexToString($nc(this->gotslot)->get(3)));
	int32_t colonpos = $nc(qName)->indexOf(":"_s);
	$var($String, localName, qName->substring(colonpos + 1));
	$var($String, namespace$, $nc(this->m_nsNames)->indexToString($nc(this->gotslot)->get(0) << 16));
	$var($String, expandedName, $str({namespace$, ":"_s, localName}));
	int32_t expandedNameID = $nc(this->m_nsNames)->stringToIndex(expandedName);
	return expandedNameID;
}

int32_t DTMDocumentImpl::getExpandedTypeID($String* namespace$, $String* localName, int32_t type) {
	$var($String, expandedName, $str({namespace$, ":"_s, localName}));
	int32_t expandedNameID = $nc(this->m_nsNames)->stringToIndex(expandedName);
	return expandedNameID;
}

$String* DTMDocumentImpl::getLocalNameFromExpandedNameID(int32_t ExpandedNameID) {
	$useLocalCurrentObjectStackCache();
	$var($String, expandedName, $nc(this->m_localNames)->indexToString(ExpandedNameID));
	int32_t colonpos = $nc(expandedName)->indexOf(":"_s);
	$var($String, localName, expandedName->substring(colonpos + 1));
	return localName;
}

$String* DTMDocumentImpl::getNamespaceFromExpandedNameID(int32_t ExpandedNameID) {
	$useLocalCurrentObjectStackCache();
	$var($String, expandedName, $nc(this->m_localNames)->indexToString(ExpandedNameID));
	int32_t colonpos = $nc(expandedName)->indexOf(":"_s);
	$var($String, nsName, expandedName->substring(0, colonpos));
	return nsName;
}

$String* DTMDocumentImpl::getNodeName(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	$nc(this->nodes)->readSlot(nodeHandle, this->gotslot);
	int16_t type = (int16_t)((int32_t)($nc(this->gotslot)->get(0) & (uint32_t)0x0000FFFF));
	$var($String, name, $nc(DTMDocumentImpl::fixednames)->get(type));
	if (nullptr == name) {
		int32_t i = $nc(this->gotslot)->get(3);
		$nc($System::out)->println($$str({"got i="_s, $$str(i), " "_s, $$str((i >> 16)), "/"_s, $$str(((int32_t)(i & (uint32_t)0x0000FFFF)))}));
		$assign(name, $nc(this->m_localNames)->indexToString((int32_t)(i & (uint32_t)0x0000FFFF)));
		$var($String, prefix, $nc(this->m_prefixNames)->indexToString(i >> 16));
		if (prefix != nullptr && prefix->length() > 0) {
			$assign(name, $str({prefix, ":"_s, name}));
		}
	}
	return name;
}

$String* DTMDocumentImpl::getNodeNameX(int32_t nodeHandle) {
	return nullptr;
}

$String* DTMDocumentImpl::getLocalName(int32_t nodeHandle) {
	$nc(this->nodes)->readSlot(nodeHandle, this->gotslot);
	int16_t type = (int16_t)((int32_t)($nc(this->gotslot)->get(0) & (uint32_t)0x0000FFFF));
	$var($String, name, ""_s);
	if ((type == $DTM::ELEMENT_NODE) || (type == $DTM::ATTRIBUTE_NODE)) {
		int32_t i = $nc(this->gotslot)->get(3);
		$assign(name, $nc(this->m_localNames)->indexToString((int32_t)(i & (uint32_t)0x0000FFFF)));
		if (name == nullptr) {
			$assign(name, ""_s);
		}
	}
	return name;
}

$String* DTMDocumentImpl::getPrefix(int32_t nodeHandle) {
	$nc(this->nodes)->readSlot(nodeHandle, this->gotslot);
	int16_t type = (int16_t)((int32_t)($nc(this->gotslot)->get(0) & (uint32_t)0x0000FFFF));
	$var($String, name, ""_s);
	if ((type == $DTM::ELEMENT_NODE) || (type == $DTM::ATTRIBUTE_NODE)) {
		int32_t i = $nc(this->gotslot)->get(3);
		$assign(name, $nc(this->m_prefixNames)->indexToString(i >> 16));
		if (name == nullptr) {
			$assign(name, ""_s);
		}
	}
	return name;
}

$String* DTMDocumentImpl::getNamespaceURI(int32_t nodeHandle) {
	return nullptr;
}

$String* DTMDocumentImpl::getNodeValue(int32_t nodeHandle) {
	$nc(this->nodes)->readSlot(nodeHandle, this->gotslot);
	int32_t nodetype = (int32_t)($nc(this->gotslot)->get(0) & (uint32_t)255);
	$var($String, value, nullptr);
	switch (nodetype) {
	case $DTM::ATTRIBUTE_NODE:
		{
			$nc(this->nodes)->readSlot(nodeHandle + 1, this->gotslot);
		}
	case $DTM::TEXT_NODE:
		{}
	case $DTM::COMMENT_NODE:
		{}
	case $DTM::CDATA_SECTION_NODE:
		{
			$assign(value, $nc(this->m_char)->getString($nc(this->gotslot)->get(2), $nc(this->gotslot)->get(3)));
			break;
		}
	case $DTM::PROCESSING_INSTRUCTION_NODE:
		{}
	case $DTM::ELEMENT_NODE:
		{}
	case $DTM::ENTITY_REFERENCE_NODE:
		{}
	default:
		{
			break;
		}
	}
	return value;
}

int16_t DTMDocumentImpl::getNodeType(int32_t nodeHandle) {
	return (int16_t)((int32_t)($nc(this->nodes)->readEntry(nodeHandle, 0) & (uint32_t)0x0000FFFF));
}

int16_t DTMDocumentImpl::getLevel(int32_t nodeHandle) {
	int16_t count = (int16_t)0;
	while (nodeHandle != 0) {
		++count;
		nodeHandle = $nc(this->nodes)->readEntry(nodeHandle, 1);
	}
	return count;
}

bool DTMDocumentImpl::isSupported($String* feature, $String* version) {
	return false;
}

$String* DTMDocumentImpl::getDocumentBaseURI() {
	return this->m_documentBaseURI;
}

void DTMDocumentImpl::setDocumentBaseURI($String* baseURI) {
	$set(this, m_documentBaseURI, baseURI);
}

$String* DTMDocumentImpl::getDocumentSystemIdentifier(int32_t nodeHandle) {
	return nullptr;
}

$String* DTMDocumentImpl::getDocumentEncoding(int32_t nodeHandle) {
	return nullptr;
}

$String* DTMDocumentImpl::getDocumentStandalone(int32_t nodeHandle) {
	return nullptr;
}

$String* DTMDocumentImpl::getDocumentVersion(int32_t documentHandle) {
	return nullptr;
}

bool DTMDocumentImpl::getDocumentAllDeclarationsProcessed() {
	return false;
}

$String* DTMDocumentImpl::getDocumentTypeDeclarationSystemIdentifier() {
	return nullptr;
}

$String* DTMDocumentImpl::getDocumentTypeDeclarationPublicIdentifier() {
	return nullptr;
}

int32_t DTMDocumentImpl::getElementById($String* elementId) {
	return 0;
}

$String* DTMDocumentImpl::getUnparsedEntityURI($String* name) {
	return nullptr;
}

bool DTMDocumentImpl::supportsPreStripping() {
	return false;
}

bool DTMDocumentImpl::isNodeAfter(int32_t nodeHandle1, int32_t nodeHandle2) {
	return false;
}

bool DTMDocumentImpl::isCharacterElementContentWhitespace(int32_t nodeHandle) {
	return false;
}

bool DTMDocumentImpl::isDocumentAllDeclarationsProcessed(int32_t documentHandle) {
	return false;
}

bool DTMDocumentImpl::isAttributeSpecified(int32_t attributeHandle) {
	return false;
}

void DTMDocumentImpl::dispatchCharactersEvents(int32_t nodeHandle, $ContentHandler* ch, bool normalize) {
}

void DTMDocumentImpl::dispatchToEvents(int32_t nodeHandle, $ContentHandler* ch) {
}

$Node* DTMDocumentImpl::getNode(int32_t nodeHandle) {
	return nullptr;
}

void DTMDocumentImpl::appendChild(int32_t newChild, bool clone, bool cloneDepth) {
	bool sameDoc = (((int32_t)(newChild & (uint32_t)DTMDocumentImpl::DOCHANDLE_MASK)) == this->m_docHandle);
	if (clone || !sameDoc) {
	} else {
	}
}

void DTMDocumentImpl::appendTextChild($String* str) {
}

void DTMDocumentImpl::appendTextChild(int32_t m_char_current_start, int32_t contentLength) {
	int32_t w0 = $DTM::TEXT_NODE;
	int32_t w1 = this->currentParent;
	int32_t w2 = m_char_current_start;
	int32_t w3 = contentLength;
	int32_t ourslot = appendNode(w0, w1, w2, w3);
	this->previousSibling = ourslot;
}

void DTMDocumentImpl::appendComment(int32_t m_char_current_start, int32_t contentLength) {
	int32_t w0 = $DTM::COMMENT_NODE;
	int32_t w1 = this->currentParent;
	int32_t w2 = m_char_current_start;
	int32_t w3 = contentLength;
	int32_t ourslot = appendNode(w0, w1, w2, w3);
	this->previousSibling = ourslot;
}

void DTMDocumentImpl::appendStartElement(int32_t namespaceIndex, int32_t localNameIndex, int32_t prefixIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t w0 = (namespaceIndex << 16) | $DTM::ELEMENT_NODE;
	int32_t w1 = this->currentParent;
	int32_t w2 = 0;
	int32_t w3 = localNameIndex | (prefixIndex << 16);
	$nc($System::out)->println($$str({"set w3="_s, $$str(w3), " "_s, $$str((w3 >> 16)), "/"_s, $$str(((int32_t)(w3 & (uint32_t)0x0000FFFF)))}));
	int32_t ourslot = appendNode(w0, w1, w2, w3);
	this->currentParent = ourslot;
	this->previousSibling = 0;
	if (this->m_docElement == $DTM::NULL) {
		this->m_docElement = ourslot;
	}
}

void DTMDocumentImpl::appendNSDeclaration(int32_t prefixIndex, int32_t namespaceIndex, bool isID) {
	int32_t namespaceForNamespaces = $nc(this->m_nsNames)->stringToIndex("http://www.w3.org/2000/xmlns/"_s);
	int32_t w0 = $DTM::NAMESPACE_NODE | ($nc(this->m_nsNames)->stringToIndex("http://www.w3.org/2000/xmlns/"_s) << 16);
	int32_t w1 = this->currentParent;
	int32_t w2 = 0;
	int32_t w3 = namespaceIndex;
	int32_t ourslot = appendNode(w0, w1, w2, w3);
	this->previousSibling = ourslot;
	this->previousSiblingWasParent = false;
	return;
}

void DTMDocumentImpl::appendAttribute(int32_t namespaceIndex, int32_t localNameIndex, int32_t prefixIndex, bool isID, int32_t m_char_current_start, int32_t contentLength) {
	$useLocalCurrentObjectStackCache();
	int32_t w0 = $DTM::ATTRIBUTE_NODE | (namespaceIndex << 16);
	int32_t w1 = this->currentParent;
	int32_t w2 = 0;
	int32_t w3 = localNameIndex | (prefixIndex << 16);
	$nc($System::out)->println($$str({"set w3="_s, $$str(w3), " "_s, $$str((w3 >> 16)), "/"_s, $$str(((int32_t)(w3 & (uint32_t)0x0000FFFF)))}));
	int32_t ourslot = appendNode(w0, w1, w2, w3);
	this->previousSibling = ourslot;
	w0 = $DTM::TEXT_NODE;
	w1 = ourslot;
	w2 = m_char_current_start;
	w3 = contentLength;
	appendNode(w0, w1, w2, w3);
	this->previousSiblingWasParent = true;
	return;
}

$DTMAxisTraverser* DTMDocumentImpl::getAxisTraverser(int32_t axis) {
	return nullptr;
}

$DTMAxisIterator* DTMDocumentImpl::getAxisIterator(int32_t axis) {
	return nullptr;
}

$DTMAxisIterator* DTMDocumentImpl::getTypedAxisIterator(int32_t axis, int32_t type) {
	return nullptr;
}

void DTMDocumentImpl::appendEndElement() {
	if (this->previousSiblingWasParent) {
		$nc(this->nodes)->writeEntry(this->previousSibling, 2, $DTM::NULL);
	}
	this->previousSibling = this->currentParent;
	$nc(this->nodes)->readSlot(this->currentParent, this->gotslot);
	this->currentParent = (int32_t)($nc(this->gotslot)->get(1) & (uint32_t)0x0000FFFF);
	this->previousSiblingWasParent = true;
}

void DTMDocumentImpl::appendStartDocument() {
	this->m_docElement = $DTM::NULL;
	initDocument(0);
}

void DTMDocumentImpl::appendEndDocument() {
	this->done = true;
}

void DTMDocumentImpl::setProperty($String* property, Object$* value) {
}

$SourceLocator* DTMDocumentImpl::getSourceLocatorFor(int32_t node) {
	return nullptr;
}

void DTMDocumentImpl::documentRegistration() {
}

void DTMDocumentImpl::documentRelease() {
}

void DTMDocumentImpl::migrateTo($DTMManager* manager) {
}

void clinit$DTMDocumentImpl($Class* class$) {
	$assignStatic(DTMDocumentImpl::fixednames, $new($StringArray, {
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		"#text"_s,
		"#cdata_section"_s,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		"#comment"_s,
		"#document"_s,
		($String*)nullptr,
		"#document-fragment"_s,
		($String*)nullptr
	}));
}

DTMDocumentImpl::DTMDocumentImpl() {
}

$Class* DTMDocumentImpl::load$($String* name, bool initialize) {
	$loadClass(DTMDocumentImpl, name, initialize, &_DTMDocumentImpl_ClassInfo_, clinit$DTMDocumentImpl, allocate$DTMDocumentImpl);
	return class$;
}

$Class* DTMDocumentImpl::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com