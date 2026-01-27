#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMManagerDefault.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMStringPool.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMTreeWalker.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/NodeLocator.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/IntStack.h>
#include <com/sun/org/apache/xml/internal/utils/IntVector.h>
#include <com/sun/org/apache/xml/internal/utils/StringVector.h>
#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <com/sun/org/apache/xml/internal/utils/SystemIDResolver.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <java/lang/ClassCastException.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Vector.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/SourceLocator.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/ext/DeclHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DEBUG
#undef DEFAULT_BLOCKSIZE
#undef DEFAULT_NUMBLOCKS
#undef DEFAULT_NUMBLOCKS_SMALL
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef ENTITY_FIELDS_PER
#undef ENTITY_FIELD_NAME
#undef ENTITY_FIELD_NOTATIONNAME
#undef ENTITY_FIELD_PUBLICID
#undef ENTITY_FIELD_SYSTEMID
#undef ER_METHOD_NOT_SUPPORTED
#undef ER_NO_DTMIDS_AVAIL
#undef IDENT_DTM_NODE_BITS
#undef INHERIT
#undef NAMESPACE_NODE
#undef NOTPROCESSED
#undef NULL
#undef PROCESSING_INSTRUCTION_NODE
#undef SAX2DTM
#undef STRIP
#undef TEXT_NODE
#undef TRUE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $DTMManagerDefault = ::com::sun::org::apache::xml::internal::dtm::ref::DTMManagerDefault;
using $DTMStringPool = ::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool;
using $DTMTreeWalker = ::com::sun::org::apache::xml::internal::dtm::ref::DTMTreeWalker;
using $ExpandedNameTable = ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable;
using $IncrementalSAXSource = ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource;
using $NodeLocator = ::com::sun::org::apache::xml::internal::dtm::ref::NodeLocator;
using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $IntStack = ::com::sun::org::apache::xml::internal::utils::IntStack;
using $IntVector = ::com::sun::org::apache::xml::internal::utils::IntVector;
using $StringVector = ::com::sun::org::apache::xml::internal::utils::StringVector;
using $SuballocatedIntVector = ::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::utils::SystemIDResolver;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Vector = ::java::util::Vector;
using $Source = ::javax::xml::transform::Source;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXParseException = ::org::xml::sax::SAXParseException;
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
								namespace sax2dtm {

$FieldInfo _SAX2DTM_FieldInfo_[] = {
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SAX2DTM, DEBUG)},
	{"m_incrementalSAXSource", "Lcom/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource;", nullptr, $PRIVATE, $field(SAX2DTM, m_incrementalSAXSource)},
	{"m_chars", "Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;", nullptr, $PROTECTED, $field(SAX2DTM, m_chars)},
	{"m_data", "Lcom/sun/org/apache/xml/internal/utils/SuballocatedIntVector;", nullptr, $PROTECTED, $field(SAX2DTM, m_data)},
	{"m_parents", "Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, $PROTECTED | $TRANSIENT, $field(SAX2DTM, m_parents)},
	{"m_previous", "I", nullptr, $PROTECTED | $TRANSIENT, $field(SAX2DTM, m_previous)},
	{"m_prefixMappings", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", $PROTECTED | $TRANSIENT, $field(SAX2DTM, m_prefixMappings)},
	{"m_contextIndexes", "Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, $PROTECTED | $TRANSIENT, $field(SAX2DTM, m_contextIndexes)},
	{"m_textType", "I", nullptr, $PROTECTED | $TRANSIENT, $field(SAX2DTM, m_textType)},
	{"m_coalescedTextType", "I", nullptr, $PROTECTED | $TRANSIENT, $field(SAX2DTM, m_coalescedTextType)},
	{"m_locator", "Lorg/xml/sax/Locator;", nullptr, $PROTECTED | $TRANSIENT, $field(SAX2DTM, m_locator)},
	{"m_systemId", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(SAX2DTM, m_systemId)},
	{"m_insideDTD", "Z", nullptr, $PROTECTED | $TRANSIENT, $field(SAX2DTM, m_insideDTD)},
	{"m_walker", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMTreeWalker;", nullptr, $PROTECTED, $field(SAX2DTM, m_walker)},
	{"m_valuesOrPrefixes", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMStringPool;", nullptr, $PROTECTED, $field(SAX2DTM, m_valuesOrPrefixes)},
	{"m_endDocumentOccured", "Z", nullptr, $PROTECTED, $field(SAX2DTM, m_endDocumentOccured)},
	{"m_dataOrQName", "Lcom/sun/org/apache/xml/internal/utils/SuballocatedIntVector;", nullptr, $PROTECTED, $field(SAX2DTM, m_dataOrQName)},
	{"m_idAttributes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PROTECTED, $field(SAX2DTM, m_idAttributes)},
	{"m_fixednames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAX2DTM, m_fixednames)},
	{"m_entities", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(SAX2DTM, m_entities)},
	{"ENTITY_FIELD_PUBLICID", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SAX2DTM, ENTITY_FIELD_PUBLICID)},
	{"ENTITY_FIELD_SYSTEMID", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SAX2DTM, ENTITY_FIELD_SYSTEMID)},
	{"ENTITY_FIELD_NOTATIONNAME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SAX2DTM, ENTITY_FIELD_NOTATIONNAME)},
	{"ENTITY_FIELD_NAME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SAX2DTM, ENTITY_FIELD_NAME)},
	{"ENTITY_FIELDS_PER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SAX2DTM, ENTITY_FIELDS_PER)},
	{"m_textPendingStart", "I", nullptr, $PROTECTED, $field(SAX2DTM, m_textPendingStart)},
	{"m_useSourceLocationProperty", "Z", nullptr, $PROTECTED, $field(SAX2DTM, m_useSourceLocationProperty)},
	{"m_sourceSystemId", "Lcom/sun/org/apache/xml/internal/utils/StringVector;", nullptr, $PROTECTED, $field(SAX2DTM, m_sourceSystemId)},
	{"m_sourceLine", "Lcom/sun/org/apache/xml/internal/utils/IntVector;", nullptr, $PROTECTED, $field(SAX2DTM, m_sourceLine)},
	{"m_sourceColumn", "Lcom/sun/org/apache/xml/internal/utils/IntVector;", nullptr, $PROTECTED, $field(SAX2DTM, m_sourceColumn)},
	{"m_pastFirstElement", "Z", nullptr, 0, $field(SAX2DTM, m_pastFirstElement)},
	{}
};

$MethodInfo _SAX2DTM_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;Ljavax/xml/transform/Source;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;Z)V", nullptr, $PUBLIC, $method(SAX2DTM, init$, void, $DTMManager*, $Source*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;Ljavax/xml/transform/Source;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;ZIZZ)V", nullptr, $PUBLIC, $method(SAX2DTM, init$, void, $DTMManager*, $Source*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool, int32_t, bool, bool)},
	{"_dataOrQName", "(I)I", nullptr, $PROTECTED, $virtualMethod(SAX2DTM, _dataOrQName, int32_t, int32_t)},
	{"addNewDTMID", "(I)V", nullptr, $PROTECTED, $virtualMethod(SAX2DTM, addNewDTMID, void, int32_t)},
	{"addNode", "(IIIIIZ)I", nullptr, $PROTECTED, $virtualMethod(SAX2DTM, addNode, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool)},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, attributeDecl, void, $String*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"charactersFlush", "()V", nullptr, $PROTECTED, $virtualMethod(SAX2DTM, charactersFlush, void)},
	{"clearCoRoutine", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, clearCoRoutine, void)},
	{"clearCoRoutine", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, clearCoRoutine, void, bool)},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"declAlreadyDeclared", "(Ljava/lang/String;)Z", nullptr, $PROTECTED, $virtualMethod(SAX2DTM, declAlreadyDeclared, bool, $String*)},
	{"dispatchCharactersEvents", "(ILorg/xml/sax/ContentHandler;Z)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, dispatchCharactersEvents, void, int32_t, $ContentHandler*, bool), "org.xml.sax.SAXException"},
	{"dispatchToEvents", "(ILorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, dispatchToEvents, void, int32_t, $ContentHandler*), "org.xml.sax.SAXException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, elementDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, endDTD, void), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, endEntity, void, $String*), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, externalEntityDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"getAttributeNode", "(ILjava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getAttributeNode, int32_t, int32_t, $String*, $String*)},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getContentHandler, $ContentHandler*)},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getDTDHandler, $DTDHandler*)},
	{"getDeclHandler", "()Lorg/xml/sax/ext/DeclHandler;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getDeclHandler, $DeclHandler*)},
	{"getDocumentTypeDeclarationPublicIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getDocumentTypeDeclarationPublicIdentifier, $String*)},
	{"getDocumentTypeDeclarationSystemIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getDocumentTypeDeclarationSystemIdentifier, $String*)},
	{"getElementById", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getElementById, int32_t, $String*)},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getEntityResolver, $EntityResolver*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getErrorHandler, $ErrorHandler*)},
	{"getFixedNames", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getFixedNames, $String*, int32_t)},
	{"getIdForNamespace", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getIdForNamespace, int32_t, $String*)},
	{"getLexicalHandler", "()Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getLexicalHandler, $LexicalHandler*)},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getLocalName, $String*, int32_t)},
	{"getNamespaceURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getNamespaceURI, $String*, int32_t)},
	{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getNamespaceURI, $String*, $String*)},
	{"getNextNodeIdentity", "(I)I", nullptr, $PROTECTED, $virtualMethod(SAX2DTM, getNextNodeIdentity, int32_t, int32_t)},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getNodeName, $String*, int32_t)},
	{"getNodeNameX", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getNodeNameX, $String*, int32_t)},
	{"getNodeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getNodeValue, $String*, int32_t)},
	{"getNumberOfNodes", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getNumberOfNodes, int32_t)},
	{"getPrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getPrefix, $String*, int32_t)},
	{"getPrefix", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getPrefix, $String*, $String*, $String*)},
	{"getSourceLocatorFor", "(I)Ljavax/xml/transform/SourceLocator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getSourceLocatorFor, $SourceLocator*, int32_t)},
	{"getStringValue", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getStringValue, $XMLString*, int32_t)},
	{"getUnparsedEntityURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, getUnparsedEntityURI, $String*, $String*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, internalEntityDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"isAttributeSpecified", "(I)Z", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, isAttributeSpecified, bool, int32_t)},
	{"isTextType", "(I)Z", nullptr, $PRIVATE | $FINAL, $method(SAX2DTM, isTextType, bool, int32_t)},
	{"isWhitespace", "(I)Z", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, isWhitespace, bool, int32_t)},
	{"migrateTo", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, migrateTo, void, $DTMManager*)},
	{"needsTwoThreads", "()Z", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, needsTwoThreads, bool)},
	{"nextNode", "()Z", nullptr, $PROTECTED, $virtualMethod(SAX2DTM, nextNode, bool)},
	{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, notationDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, resolveEntity, $InputSource*, $String*, $String*), "org.xml.sax.SAXException"},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, setDocumentLocator, void, $Locator*)},
	{"setIDAttribute", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, setIDAttribute, void, $String*, int32_t)},
	{"setIncrementalSAXSource", "(Lcom/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, setIncrementalSAXSource, void, $IncrementalSAXSource*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, setProperty, void, $String*, Object$*)},
	{"setSourceLocation", "()V", nullptr, $PROTECTED, $virtualMethod(SAX2DTM, setSourceLocation, void)},
	{"setUseSourceLocation", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, setUseSourceLocation, void, bool)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, startCDATA, void), "org.xml.sax.SAXException"},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, startEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, unparsedEntityDecl, void, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _SAX2DTM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators",
	"org.xml.sax.EntityResolver,org.xml.sax.DTDHandler,org.xml.sax.ContentHandler,org.xml.sax.ErrorHandler,org.xml.sax.ext.DeclHandler,org.xml.sax.ext.LexicalHandler",
	_SAX2DTM_FieldInfo_,
	_SAX2DTM_MethodInfo_
};

$Object* allocate$SAX2DTM($Class* clazz) {
	return $of($alloc(SAX2DTM));
}

int32_t SAX2DTM::hashCode() {
	 return this->$DTMDefaultBaseIterators::hashCode();
}

bool SAX2DTM::equals(Object$* arg0) {
	 return this->$DTMDefaultBaseIterators::equals(arg0);
}

$Object* SAX2DTM::clone() {
	 return this->$DTMDefaultBaseIterators::clone();
}

$String* SAX2DTM::toString() {
	 return this->$DTMDefaultBaseIterators::toString();
}

void SAX2DTM::finalize() {
	this->$DTMDefaultBaseIterators::finalize();
}

$StringArray* SAX2DTM::m_fixednames = nullptr;

void SAX2DTM::init$($DTMManager* mgr, $Source* source, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing) {
	SAX2DTM::init$(mgr, source, dtmIdentity, whiteSpaceFilter, xstringfactory, doIndexing, $DTMDefaultBase::DEFAULT_BLOCKSIZE, true, false);
}

void SAX2DTM::init$($DTMManager* mgr, $Source* source, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing, int32_t blocksize, bool usePrevsib, bool newNameTable) {
	$DTMDefaultBaseIterators::init$(mgr, source, dtmIdentity, whiteSpaceFilter, xstringfactory, doIndexing, blocksize, usePrevsib, newNameTable);
	$set(this, m_incrementalSAXSource, nullptr);
	this->m_previous = 0;
	$set(this, m_prefixMappings, $new($Vector));
	this->m_textType = $DTM::TEXT_NODE;
	this->m_coalescedTextType = $DTM::TEXT_NODE;
	$set(this, m_locator, nullptr);
	$set(this, m_systemId, nullptr);
	this->m_insideDTD = false;
	$set(this, m_walker, $new($DTMTreeWalker));
	this->m_endDocumentOccured = false;
	$set(this, m_idAttributes, $new($HashMap));
	$set(this, m_entities, nullptr);
	this->m_textPendingStart = -1;
	this->m_useSourceLocationProperty = false;
	this->m_pastFirstElement = false;
	if (blocksize <= 64) {
		$set(this, m_data, $new($SuballocatedIntVector, blocksize, $DTMDefaultBase::DEFAULT_NUMBLOCKS_SMALL));
		$set(this, m_dataOrQName, $new($SuballocatedIntVector, blocksize, $DTMDefaultBase::DEFAULT_NUMBLOCKS_SMALL));
		$set(this, m_valuesOrPrefixes, $new($DTMStringPool, 16));
		$set(this, m_chars, $new($FastStringBuffer, 7, 10));
		$set(this, m_contextIndexes, $new($IntStack, 4));
		$set(this, m_parents, $new($IntStack, 4));
	} else {
		$set(this, m_data, $new($SuballocatedIntVector, blocksize, $DTMDefaultBase::DEFAULT_NUMBLOCKS));
		$set(this, m_dataOrQName, $new($SuballocatedIntVector, blocksize, $DTMDefaultBase::DEFAULT_NUMBLOCKS));
		$set(this, m_valuesOrPrefixes, $new($DTMStringPool));
		$set(this, m_chars, $new($FastStringBuffer, 10, 13));
		$set(this, m_contextIndexes, $new($IntStack));
		$set(this, m_parents, $new($IntStack));
	}
	$nc(this->m_data)->addElement(0);
	this->m_useSourceLocationProperty = $nc(mgr)->getSource_location();
	$set(this, m_sourceSystemId, (this->m_useSourceLocationProperty) ? $new($StringVector) : ($StringVector*)nullptr);
	$set(this, m_sourceLine, (this->m_useSourceLocationProperty) ? $new($IntVector) : ($IntVector*)nullptr);
	$set(this, m_sourceColumn, (this->m_useSourceLocationProperty) ? $new($IntVector) : ($IntVector*)nullptr);
}

void SAX2DTM::setUseSourceLocation(bool useSourceLocation) {
	this->m_useSourceLocationProperty = useSourceLocation;
}

int32_t SAX2DTM::_dataOrQName(int32_t identity) {
	if (identity < this->m_size) {
		return $nc(this->m_dataOrQName)->elementAt(identity);
	}
	while (true) {
		bool isMore = nextNode();
		if (!isMore) {
			return $DTM::NULL;
		} else if (identity < this->m_size) {
			return $nc(this->m_dataOrQName)->elementAt(identity);
		}
	}
}

void SAX2DTM::clearCoRoutine() {
	clearCoRoutine(true);
}

void SAX2DTM::clearCoRoutine(bool callDoTerminate) {
	if (nullptr != this->m_incrementalSAXSource) {
		if (callDoTerminate) {
			$nc(this->m_incrementalSAXSource)->deliverMoreNodes(false);
		}
		$set(this, m_incrementalSAXSource, nullptr);
	}
}

void SAX2DTM::setIncrementalSAXSource($IncrementalSAXSource* incrementalSAXSource) {
	$set(this, m_incrementalSAXSource, incrementalSAXSource);
	$nc(incrementalSAXSource)->setContentHandler(this);
	incrementalSAXSource->setLexicalHandler(this);
	incrementalSAXSource->setDTDHandler(this);
}

$ContentHandler* SAX2DTM::getContentHandler() {
	if ($nc($($nc($of(this->m_incrementalSAXSource))->getClass()->getName()))->equals("com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Filter"_s)) {
		return $cast($ContentHandler, this->m_incrementalSAXSource);
	} else {
		return this;
	}
}

$LexicalHandler* SAX2DTM::getLexicalHandler() {
	if ($nc($($nc($of(this->m_incrementalSAXSource))->getClass()->getName()))->equals("com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Filter"_s)) {
		return $cast($LexicalHandler, this->m_incrementalSAXSource);
	} else {
		return this;
	}
}

$EntityResolver* SAX2DTM::getEntityResolver() {
	return this;
}

$DTDHandler* SAX2DTM::getDTDHandler() {
	return this;
}

$ErrorHandler* SAX2DTM::getErrorHandler() {
	return this;
}

$DeclHandler* SAX2DTM::getDeclHandler() {
	return this;
}

bool SAX2DTM::needsTwoThreads() {
	return nullptr != this->m_incrementalSAXSource;
}

void SAX2DTM::dispatchCharactersEvents(int32_t nodeHandle, $ContentHandler* ch, bool normalize) {
	$useLocalCurrentObjectStackCache();
	int32_t identity = makeNodeIdentity(nodeHandle);
	if (identity == $DTM::NULL) {
		return;
	}
	int32_t type = _type(identity);
	if (isTextType(type)) {
		int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(identity);
		int32_t offset = $nc(this->m_data)->elementAt(dataIndex);
		int32_t length = $nc(this->m_data)->elementAt(dataIndex + 1);
		if (normalize) {
			$nc(this->m_chars)->sendNormalizedSAXcharacters(ch, offset, length);
		} else {
			$nc(this->m_chars)->sendSAXcharacters(ch, offset, length);
		}
	} else {
		int32_t firstChild = _firstch(identity);
		if ($DTM::NULL != firstChild) {
			int32_t offset = -1;
			int32_t length = 0;
			int32_t startNode = identity;
			identity = firstChild;
			do {
				type = _type(identity);
				if (isTextType(type)) {
					int32_t dataIndex = _dataOrQName(identity);
					if (-1 == offset) {
						offset = $nc(this->m_data)->elementAt(dataIndex);
					}
					length += $nc(this->m_data)->elementAt(dataIndex + 1);
				}
				identity = getNextNodeIdentity(identity);
			} while ($DTM::NULL != identity && (_parent(identity) >= startNode));
			if (length > 0) {
				if (normalize) {
					$nc(this->m_chars)->sendNormalizedSAXcharacters(ch, offset, length);
				} else {
					$nc(this->m_chars)->sendSAXcharacters(ch, offset, length);
				}
			}
		} else if (type != $DTM::ELEMENT_NODE) {
			int32_t dataIndex = _dataOrQName(identity);
			if (dataIndex < 0) {
				dataIndex = -dataIndex;
				dataIndex = $nc(this->m_data)->elementAt(dataIndex + 1);
			}
			$var($String, str, $nc(this->m_valuesOrPrefixes)->indexToString(dataIndex));
			if (normalize) {
				$var($chars, var$0, $nc(str)->toCharArray());
				$FastStringBuffer::sendNormalizedSAXcharacters(var$0, 0, str->length(), ch);
			} else {
				$var($chars, var$1, $nc(str)->toCharArray());
				$nc(ch)->characters(var$1, 0, str->length());
			}
		}
	}
}

$String* SAX2DTM::getNodeName(int32_t nodeHandle) {
	int32_t expandedTypeID = getExpandedTypeID(nodeHandle);
	int32_t namespaceID = $nc(this->m_expandedNameTable)->getNamespaceID(expandedTypeID);
	if (0 == namespaceID) {
		int32_t type = getNodeType(nodeHandle);
		if (type == $DTM::NAMESPACE_NODE) {
			if (nullptr == $nc(this->m_expandedNameTable)->getLocalName(expandedTypeID)) {
				return "xmlns"_s;
			} else {
				return $str({"xmlns:"_s, $($nc(this->m_expandedNameTable)->getLocalName(expandedTypeID))});
			}
		} else if (0 == $nc(this->m_expandedNameTable)->getLocalNameID(expandedTypeID)) {
			return $nc(SAX2DTM::m_fixednames)->get(type);
		} else {
			return $nc(this->m_expandedNameTable)->getLocalName(expandedTypeID);
		}
	} else {
		int32_t qnameIndex = $nc(this->m_dataOrQName)->elementAt(makeNodeIdentity(nodeHandle));
		if (qnameIndex < 0) {
			qnameIndex = -qnameIndex;
			qnameIndex = $nc(this->m_data)->elementAt(qnameIndex);
		}
		return $nc(this->m_valuesOrPrefixes)->indexToString(qnameIndex);
	}
}

$String* SAX2DTM::getNodeNameX(int32_t nodeHandle) {
	int32_t expandedTypeID = getExpandedTypeID(nodeHandle);
	int32_t namespaceID = $nc(this->m_expandedNameTable)->getNamespaceID(expandedTypeID);
	if (namespaceID == 0) {
		$var($String, name, $nc(this->m_expandedNameTable)->getLocalName(expandedTypeID));
		if (name == nullptr) {
			return ""_s;
		} else {
			return name;
		}
	} else {
		int32_t qnameIndex = $nc(this->m_dataOrQName)->elementAt(makeNodeIdentity(nodeHandle));
		if (qnameIndex < 0) {
			qnameIndex = -qnameIndex;
			qnameIndex = $nc(this->m_data)->elementAt(qnameIndex);
		}
		return $nc(this->m_valuesOrPrefixes)->indexToString(qnameIndex);
	}
}

bool SAX2DTM::isAttributeSpecified(int32_t attributeHandle) {
	return true;
}

$String* SAX2DTM::getDocumentTypeDeclarationSystemIdentifier() {
	$init($XMLErrorResources);
	error($($XMLMessages::createXMLMessage($XMLErrorResources::ER_METHOD_NOT_SUPPORTED, nullptr)));
	return nullptr;
}

int32_t SAX2DTM::getNextNodeIdentity(int32_t identity) {
	identity += 1;
	while (identity >= this->m_size) {
		if (this->m_incrementalSAXSource == nullptr) {
			return $DTM::NULL;
		}
		nextNode();
	}
	return identity;
}

void SAX2DTM::dispatchToEvents(int32_t nodeHandle, $ContentHandler* ch) {
	$useLocalCurrentObjectStackCache();
	$var($DTMTreeWalker, treeWalker, this->m_walker);
	$var($ContentHandler, prevCH, $nc(treeWalker)->getcontentHandler());
	if (nullptr != prevCH) {
		$assign(treeWalker, $new($DTMTreeWalker));
	}
	treeWalker->setcontentHandler(ch);
	treeWalker->setDTM(this);
	{
		$var($Throwable, var$0, nullptr);
		try {
			treeWalker->traverse(nodeHandle);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			treeWalker->setcontentHandler(nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t SAX2DTM::getNumberOfNodes() {
	return this->m_size;
}

bool SAX2DTM::nextNode() {
	if (nullptr == this->m_incrementalSAXSource) {
		return false;
	}
	if (this->m_endDocumentOccured) {
		clearCoRoutine();
		return false;
	}
	$var($Object, gotMore, $nc(this->m_incrementalSAXSource)->deliverMoreNodes(true));
	if (!($instanceOf($Boolean, gotMore))) {
		if ($instanceOf($RuntimeException, gotMore)) {
			$throw($cast($RuntimeException, gotMore));
		} else if ($instanceOf($Exception, gotMore)) {
			$throwNew($WrappedRuntimeException, $cast($Exception, gotMore));
		}
		clearCoRoutine();
		return false;
	}
	$init($Boolean);
	if (!$equals(gotMore, $Boolean::TRUE)) {
		clearCoRoutine();
	}
	return true;
}

bool SAX2DTM::isTextType(int32_t type) {
	return ($DTM::TEXT_NODE == type || $DTM::CDATA_SECTION_NODE == type);
}

int32_t SAX2DTM::addNode(int32_t type, int32_t expandedTypeID, int32_t parentIndex, int32_t previousSibling, int32_t dataOrPrefix, bool canHaveFirstChild) {
	int32_t nodeIndex = this->m_size++;
	if ($nc(this->m_dtmIdent)->size() == ($usr(nodeIndex, $DTMManager::IDENT_DTM_NODE_BITS))) {
		addNewDTMID(nodeIndex);
	}
	$nc(this->m_firstch)->addElement(canHaveFirstChild ? $DTMDefaultBase::NOTPROCESSED : $DTM::NULL);
	$nc(this->m_nextsib)->addElement($DTMDefaultBase::NOTPROCESSED);
	$nc(this->m_parent)->addElement(parentIndex);
	$nc(this->m_exptype)->addElement(expandedTypeID);
	$nc(this->m_dataOrQName)->addElement(dataOrPrefix);
	if (this->m_prevsib != nullptr) {
		$nc(this->m_prevsib)->addElement(previousSibling);
	}
	if ($DTM::NULL != previousSibling) {
		$nc(this->m_nextsib)->setElementAt(nodeIndex, previousSibling);
	}
	if (this->m_locator != nullptr && this->m_useSourceLocationProperty) {
		setSourceLocation();
	}
	switch (type) {
	case $DTM::NAMESPACE_NODE:
		{
			declareNamespaceInContext(parentIndex, nodeIndex);
			break;
		}
	case $DTM::ATTRIBUTE_NODE:
		{
			break;
		}
	default:
		{
			if ($DTM::NULL == previousSibling && $DTM::NULL != parentIndex) {
				$nc(this->m_firstch)->setElementAt(nodeIndex, parentIndex);
			}
			break;
		}
	}
	return nodeIndex;
}

void SAX2DTM::addNewDTMID(int32_t nodeIndex) {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->m_mgr == nullptr) {
			$throwNew($ClassCastException);
		}
		$var($DTMManagerDefault, mgrD, $cast($DTMManagerDefault, this->m_mgr));
		int32_t id = $nc(mgrD)->getFirstFreeDTMID();
		mgrD->addDTM(this, id, nodeIndex);
		$nc(this->m_dtmIdent)->addElement($sl(id, $DTMManager::IDENT_DTM_NODE_BITS));
	} catch ($ClassCastException& e) {
		$init($XMLErrorResources);
		error($($XMLMessages::createXMLMessage($XMLErrorResources::ER_NO_DTMIDS_AVAIL, nullptr)));
	}
}

void SAX2DTM::migrateTo($DTMManager* manager) {
	$DTMDefaultBaseIterators::migrateTo(manager);
	int32_t numDTMs = $nc(this->m_dtmIdent)->size();
	int32_t dtmId = $nc(this->m_mgrDefault)->getFirstFreeDTMID();
	int32_t nodeIndex = 0;
	for (int32_t i = 0; i < numDTMs; ++i) {
		$nc(this->m_dtmIdent)->setElementAt($sl(dtmId, $DTMManager::IDENT_DTM_NODE_BITS), i);
		$nc(this->m_mgrDefault)->addDTM(this, dtmId, nodeIndex);
		++dtmId;
		nodeIndex += ($sl(1, $DTMManager::IDENT_DTM_NODE_BITS));
	}
}

void SAX2DTM::setSourceLocation() {
	$useLocalCurrentObjectStackCache();
	$nc(this->m_sourceSystemId)->addElement($($nc(this->m_locator)->getSystemId()));
	$nc(this->m_sourceLine)->addElement($nc(this->m_locator)->getLineNumber());
	$nc(this->m_sourceColumn)->addElement($nc(this->m_locator)->getColumnNumber());
	if ($nc(this->m_sourceSystemId)->size() != this->m_size) {
		$var($String, msg, $str({"CODING ERROR in Source Location: "_s, $$str(this->m_size), " != "_s, $$str($nc(this->m_sourceSystemId)->size())}));
		$nc($System::err)->println(msg);
		$throwNew($RuntimeException, msg);
	}
}

$String* SAX2DTM::getNodeValue(int32_t nodeHandle) {
	int32_t identity = makeNodeIdentity(nodeHandle);
	int32_t type = _type(identity);
	if (isTextType(type)) {
		int32_t dataIndex = _dataOrQName(identity);
		int32_t offset = $nc(this->m_data)->elementAt(dataIndex);
		int32_t length = $nc(this->m_data)->elementAt(dataIndex + 1);
		return $nc(this->m_chars)->getString(offset, length);
	} else if ($DTM::ELEMENT_NODE == type || $DTM::DOCUMENT_FRAGMENT_NODE == type || $DTM::DOCUMENT_NODE == type) {
		return nullptr;
	} else {
		int32_t dataIndex = _dataOrQName(identity);
		if (dataIndex < 0) {
			dataIndex = -dataIndex;
			dataIndex = $nc(this->m_data)->elementAt(dataIndex + 1);
		}
		return $nc(this->m_valuesOrPrefixes)->indexToString(dataIndex);
	}
}

$String* SAX2DTM::getLocalName(int32_t nodeHandle) {
	return $nc(this->m_expandedNameTable)->getLocalName(_exptype(makeNodeIdentity(nodeHandle)));
}

$String* SAX2DTM::getUnparsedEntityURI($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($String, url, ""_s);
	if (nullptr == this->m_entities) {
		return url;
	}
	int32_t n = $nc(this->m_entities)->size();
	for (int32_t i = 0; i < n; i += SAX2DTM::ENTITY_FIELDS_PER) {
		$var($String, ename, $cast($String, $nc(this->m_entities)->get(i + SAX2DTM::ENTITY_FIELD_NAME)));
		if (nullptr != ename && ename->equals(name)) {
			$var($String, nname, $cast($String, $nc(this->m_entities)->get(i + SAX2DTM::ENTITY_FIELD_NOTATIONNAME)));
			if (nullptr != nname) {
				$assign(url, $cast($String, $nc(this->m_entities)->get(i + SAX2DTM::ENTITY_FIELD_SYSTEMID)));
				if (nullptr == url) {
					$assign(url, $cast($String, $nc(this->m_entities)->get(i + SAX2DTM::ENTITY_FIELD_PUBLICID)));
				}
			}
			break;
		}
	}
	return url;
}

$String* SAX2DTM::getPrefix(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	int32_t identity = makeNodeIdentity(nodeHandle);
	int32_t type = _type(identity);
	if ($DTM::ELEMENT_NODE == type) {
		int32_t prefixIndex = _dataOrQName(identity);
		if (0 == prefixIndex) {
			return ""_s;
		} else {
			$var($String, qname, $nc(this->m_valuesOrPrefixes)->indexToString(prefixIndex));
			return getPrefix(qname, nullptr);
		}
	} else if ($DTM::ATTRIBUTE_NODE == type) {
		int32_t prefixIndex = _dataOrQName(identity);
		if (prefixIndex < 0) {
			prefixIndex = $nc(this->m_data)->elementAt(-prefixIndex);
			$var($String, qname, $nc(this->m_valuesOrPrefixes)->indexToString(prefixIndex));
			return getPrefix(qname, nullptr);
		}
	}
	return ""_s;
}

int32_t SAX2DTM::getAttributeNode(int32_t nodeHandle, $String* namespaceURI, $String* name) {
	$useLocalCurrentObjectStackCache();
	for (int32_t attrH = getFirstAttribute(nodeHandle); $DTM::NULL != attrH; attrH = getNextAttribute(attrH)) {
		$var($String, attrNS, getNamespaceURI(attrH));
		$var($String, attrName, getLocalName(attrH));
		bool nsMatch = namespaceURI == attrNS || (namespaceURI != nullptr && namespaceURI->equals(attrNS));
		if (nsMatch && $nc(name)->equals(attrName)) {
			return attrH;
		}
	}
	return $DTM::NULL;
}

$String* SAX2DTM::getDocumentTypeDeclarationPublicIdentifier() {
	$init($XMLErrorResources);
	error($($XMLMessages::createXMLMessage($XMLErrorResources::ER_METHOD_NOT_SUPPORTED, nullptr)));
	return nullptr;
}

$String* SAX2DTM::getNamespaceURI(int32_t nodeHandle) {
	return $nc(this->m_expandedNameTable)->getNamespace(_exptype(makeNodeIdentity(nodeHandle)));
}

$XMLString* SAX2DTM::getStringValue(int32_t nodeHandle) {
	int32_t identity = makeNodeIdentity(nodeHandle);
	int32_t type = 0;
	if (identity == $DTM::NULL) {
		type = $DTM::NULL;
	} else {
		type = _type(identity);
	}
	if (isTextType(type)) {
		int32_t dataIndex = _dataOrQName(identity);
		int32_t offset = $nc(this->m_data)->elementAt(dataIndex);
		int32_t length = $nc(this->m_data)->elementAt(dataIndex + 1);
		return $nc(this->m_xstrf)->newstr(this->m_chars, offset, length);
	} else {
		int32_t firstChild = _firstch(identity);
		if ($DTM::NULL != firstChild) {
			int32_t offset = -1;
			int32_t length = 0;
			int32_t startNode = identity;
			identity = firstChild;
			do {
				type = _type(identity);
				if (isTextType(type)) {
					int32_t dataIndex = _dataOrQName(identity);
					if (-1 == offset) {
						offset = $nc(this->m_data)->elementAt(dataIndex);
					}
					length += $nc(this->m_data)->elementAt(dataIndex + 1);
				}
				identity = getNextNodeIdentity(identity);
			} while ($DTM::NULL != identity && (_parent(identity) >= startNode));
			if (length > 0) {
				return $nc(this->m_xstrf)->newstr(this->m_chars, offset, length);
			}
		} else if (type != $DTM::ELEMENT_NODE) {
			int32_t dataIndex = _dataOrQName(identity);
			if (dataIndex < 0) {
				dataIndex = -dataIndex;
				dataIndex = $nc(this->m_data)->elementAt(dataIndex + 1);
			}
			return $nc(this->m_xstrf)->newstr($($nc(this->m_valuesOrPrefixes)->indexToString(dataIndex)));
		}
	}
	return $nc(this->m_xstrf)->emptystr();
}

bool SAX2DTM::isWhitespace(int32_t nodeHandle) {
	int32_t identity = makeNodeIdentity(nodeHandle);
	int32_t type = 0;
	if (identity == $DTM::NULL) {
		type = $DTM::NULL;
	} else {
		type = _type(identity);
	}
	if (isTextType(type)) {
		int32_t dataIndex = _dataOrQName(identity);
		int32_t offset = $nc(this->m_data)->elementAt(dataIndex);
		int32_t length = $nc(this->m_data)->elementAt(dataIndex + 1);
		return $nc(this->m_chars)->isWhitespace(offset, length);
	}
	return false;
}

int32_t SAX2DTM::getElementById($String* elementId) {
	$var($Integer, intObj, nullptr);
	bool isMore = true;
	do {
		$assign(intObj, $cast($Integer, $nc(this->m_idAttributes)->get(elementId)));
		if (nullptr != intObj) {
			return makeNodeHandle(intObj->intValue());
		}
		if (!isMore || this->m_endDocumentOccured) {
			break;
		}
		isMore = nextNode();
	} while (nullptr == intObj);
	return $DTM::NULL;
}

$String* SAX2DTM::getPrefix($String* qname, $String* uri) {
	$var($String, prefix, nullptr);
	int32_t uriIndex = -1;
	if (nullptr != uri && uri->length() > 0) {
		do {
			uriIndex = $nc(this->m_prefixMappings)->indexOf(uri, ++uriIndex);
		} while (((int32_t)(uriIndex & (uint32_t)1)) == 0);
		if (uriIndex >= 0) {
			$assign(prefix, $cast($String, $nc(this->m_prefixMappings)->get(uriIndex - 1)));
		} else if (nullptr != qname) {
			int32_t indexOfNSSep = qname->indexOf((int32_t)u':');
			if (qname->equals("xmlns"_s)) {
				$assign(prefix, ""_s);
			} else if (qname->startsWith("xmlns:"_s)) {
				$assign(prefix, qname->substring(indexOfNSSep + 1));
			} else {
				$assign(prefix, (indexOfNSSep > 0) ? qname->substring(0, indexOfNSSep) : ($String*)nullptr);
			}
		} else {
			$assign(prefix, nullptr);
		}
	} else if (nullptr != qname) {
		int32_t indexOfNSSep = qname->indexOf((int32_t)u':');
		if (indexOfNSSep > 0) {
			if (qname->startsWith("xmlns:"_s)) {
				$assign(prefix, qname->substring(indexOfNSSep + 1));
			} else {
				$assign(prefix, qname->substring(0, indexOfNSSep));
			}
		} else if (qname->equals("xmlns"_s)) {
			$assign(prefix, ""_s);
		} else {
			$assign(prefix, nullptr);
		}
	} else {
		$assign(prefix, nullptr);
	}
	return prefix;
}

int32_t SAX2DTM::getIdForNamespace($String* uri) {
	return $nc(this->m_valuesOrPrefixes)->stringToIndex(uri);
}

$String* SAX2DTM::getNamespaceURI($String* prefix$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	$var($String, uri, ""_s);
	int32_t prefixIndex = $nc(this->m_contextIndexes)->peek() - 1;
	if (nullptr == prefix) {
		$assign(prefix, ""_s);
	}
	do {
		prefixIndex = $nc(this->m_prefixMappings)->indexOf(prefix, ++prefixIndex);
	} while ((prefixIndex >= 0) && ((int32_t)(prefixIndex & (uint32_t)1)) == 1);
	if (prefixIndex > -1) {
		$assign(uri, $cast($String, $nc(this->m_prefixMappings)->get(prefixIndex + 1)));
	}
	return uri;
}

void SAX2DTM::setIDAttribute($String* id, int32_t elem) {
	$nc(this->m_idAttributes)->put(id, $($Integer::valueOf(elem)));
}

void SAX2DTM::charactersFlush() {
	if (this->m_textPendingStart >= 0) {
		int32_t length = $nc(this->m_chars)->size() - this->m_textPendingStart;
		bool doStrip = false;
		if (getShouldStripWhitespace()) {
			doStrip = $nc(this->m_chars)->isWhitespace(this->m_textPendingStart, length);
		}
		if (doStrip) {
			$nc(this->m_chars)->setLength(this->m_textPendingStart);
		} else if (length > 0) {
			int32_t exName = $nc(this->m_expandedNameTable)->getExpandedTypeID($DTM::TEXT_NODE);
			int32_t dataIndex = $nc(this->m_data)->size();
			this->m_previous = addNode(this->m_coalescedTextType, exName, $nc(this->m_parents)->peek(), this->m_previous, dataIndex, false);
			$nc(this->m_data)->addElement(this->m_textPendingStart);
			$nc(this->m_data)->addElement(length);
		}
		this->m_textPendingStart = -1;
		this->m_textType = (this->m_coalescedTextType = $DTM::TEXT_NODE);
	}
}

$InputSource* SAX2DTM::resolveEntity($String* publicId, $String* systemId) {
	return nullptr;
}

void SAX2DTM::notationDecl($String* name, $String* publicId, $String* systemId) {
}

void SAX2DTM::unparsedEntityDecl($String* name, $String* publicId, $String* systemId$renamed, $String* notationName) {
	$useLocalCurrentObjectStackCache();
	$var($String, systemId, systemId$renamed);
	if (nullptr == this->m_entities) {
		$set(this, m_entities, $new($ArrayList));
	}
	try {
		$assign(systemId, $SystemIDResolver::getAbsoluteURI(systemId, $(getDocumentBaseURI())));
	} catch ($Exception& e) {
		$throwNew($SAXException, $cast($Exception, e));
	}
	$nc(this->m_entities)->add(publicId);
	$nc(this->m_entities)->add(systemId);
	$nc(this->m_entities)->add(notationName);
	$nc(this->m_entities)->add(name);
}

void SAX2DTM::setDocumentLocator($Locator* locator) {
	$set(this, m_locator, locator);
	$set(this, m_systemId, $nc(locator)->getSystemId());
}

void SAX2DTM::startDocument() {
	int32_t doc = addNode($DTM::DOCUMENT_NODE, $nc(this->m_expandedNameTable)->getExpandedTypeID($DTM::DOCUMENT_NODE), $DTM::NULL, $DTM::NULL, 0, true);
	$nc(this->m_parents)->push(doc);
	this->m_previous = $DTM::NULL;
	$nc(this->m_contextIndexes)->push($nc(this->m_prefixMappings)->size());
}

void SAX2DTM::endDocument() {
	charactersFlush();
	$nc(this->m_nextsib)->setElementAt($DTM::NULL, 0);
	if ($nc(this->m_firstch)->elementAt(0) == $DTMDefaultBase::NOTPROCESSED) {
		$nc(this->m_firstch)->setElementAt($DTM::NULL, 0);
	}
	if ($DTM::NULL != this->m_previous) {
		$nc(this->m_nextsib)->setElementAt($DTM::NULL, this->m_previous);
	}
	$set(this, m_parents, nullptr);
	$set(this, m_prefixMappings, nullptr);
	$set(this, m_contextIndexes, nullptr);
	this->m_endDocumentOccured = true;
	$set(this, m_locator, nullptr);
}

void SAX2DTM::startPrefixMapping($String* prefix$renamed, $String* uri) {
	$var($String, prefix, prefix$renamed);
	if (nullptr == prefix) {
		$assign(prefix, ""_s);
	}
	$nc(this->m_prefixMappings)->add(prefix);
	$nc(this->m_prefixMappings)->add(uri);
}

void SAX2DTM::endPrefixMapping($String* prefix$renamed) {
	$var($String, prefix, prefix$renamed);
	if (nullptr == prefix) {
		$assign(prefix, ""_s);
	}
	int32_t index = $nc(this->m_contextIndexes)->peek() - 1;
	do {
		index = $nc(this->m_prefixMappings)->indexOf(prefix, ++index);
	} while ((index >= 0) && (((int32_t)(index & (uint32_t)1)) == 1));
	if (index > -1) {
		$nc(this->m_prefixMappings)->setElementAt("%@$#^@#"_s, index);
		$nc(this->m_prefixMappings)->setElementAt("%@$#^@#"_s, index + 1);
	}
}

bool SAX2DTM::declAlreadyDeclared($String* prefix) {
	$useLocalCurrentObjectStackCache();
	int32_t startDecls = $nc(this->m_contextIndexes)->peek();
	$var($Vector, prefixMappings, this->m_prefixMappings);
	int32_t nDecls = $nc(prefixMappings)->size();
	for (int32_t i = startDecls; i < nDecls; i += 2) {
		$var($String, prefixDecl, $cast($String, prefixMappings->get(i)));
		if (prefixDecl == nullptr) {
			continue;
		}
		if ($nc(prefixDecl)->equals(prefix)) {
			return true;
		}
	}
	return false;
}

void SAX2DTM::startElement($String* uri, $String* localName$renamed, $String* qName, $Attributes* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($String, localName, localName$renamed);
	charactersFlush();
	bool var$0 = (localName == nullptr || $nc(localName)->isEmpty());
	if (var$0 && (uri == nullptr || $nc(uri)->isEmpty())) {
		$assign(localName, qName);
	}
	int32_t exName = $nc(this->m_expandedNameTable)->getExpandedTypeID(uri, localName, $DTM::ELEMENT_NODE);
	$var($String, prefix, getPrefix(qName, uri));
	int32_t prefixIndex = (nullptr != prefix) ? $nc(this->m_valuesOrPrefixes)->stringToIndex(qName) : 0;
	int32_t elemNode = addNode($DTM::ELEMENT_NODE, exName, $nc(this->m_parents)->peek(), this->m_previous, prefixIndex, true);
	if (this->m_indexing) {
		indexNode(exName, elemNode);
	}
	$nc(this->m_parents)->push(elemNode);
	int32_t startDecls = $nc(this->m_contextIndexes)->peek();
	int32_t nDecls = $nc(this->m_prefixMappings)->size();
	int32_t prev = $DTM::NULL;
	if (!this->m_pastFirstElement) {
		$assign(prefix, "xml"_s);
		$var($String, declURL, "http://www.w3.org/XML/1998/namespace"_s);
		exName = $nc(this->m_expandedNameTable)->getExpandedTypeID(nullptr, prefix, $DTM::NAMESPACE_NODE);
		int32_t val = $nc(this->m_valuesOrPrefixes)->stringToIndex(declURL);
		prev = addNode($DTM::NAMESPACE_NODE, exName, elemNode, prev, val, false);
		this->m_pastFirstElement = true;
	}
	for (int32_t i = startDecls; i < nDecls; i += 2) {
		$assign(prefix, $cast($String, $nc(this->m_prefixMappings)->get(i)));
		if (prefix == nullptr) {
			continue;
		}
		$var($String, declURL, $cast($String, $nc(this->m_prefixMappings)->get(i + 1)));
		exName = $nc(this->m_expandedNameTable)->getExpandedTypeID(nullptr, prefix, $DTM::NAMESPACE_NODE);
		int32_t val = $nc(this->m_valuesOrPrefixes)->stringToIndex(declURL);
		prev = addNode($DTM::NAMESPACE_NODE, exName, elemNode, prev, val, false);
	}
	int32_t n = $nc(attributes)->getLength();
	for (int32_t i = 0; i < n; ++i) {
		$var($String, attrUri, attributes->getURI(i));
		$var($String, attrQName, attributes->getQName(i));
		$var($String, valString, attributes->getValue(i));
		$assign(prefix, getPrefix(attrQName, attrUri));
		int32_t nodeType = 0;
		$var($String, attrLocalName, attributes->getLocalName(i));
		bool var$1 = (nullptr != attrQName);
		if (var$1) {
			bool var$2 = attrQName->equals("xmlns"_s);
			var$1 = (var$2 || attrQName->startsWith("xmlns:"_s));
		}
		if (var$1) {
			if (declAlreadyDeclared(prefix)) {
				continue;
			}
			nodeType = $DTM::NAMESPACE_NODE;
		} else {
			nodeType = $DTM::ATTRIBUTE_NODE;
			if ($nc($(attributes->getType(i)))->equalsIgnoreCase("ID"_s)) {
				setIDAttribute(valString, elemNode);
			}
		}
		if (nullptr == valString) {
			$assign(valString, ""_s);
		}
		int32_t val = $nc(this->m_valuesOrPrefixes)->stringToIndex(valString);
		if (nullptr != prefix) {
			prefixIndex = $nc(this->m_valuesOrPrefixes)->stringToIndex(attrQName);
			int32_t dataIndex = $nc(this->m_data)->size();
			$nc(this->m_data)->addElement(prefixIndex);
			$nc(this->m_data)->addElement(val);
			val = -dataIndex;
		}
		exName = $nc(this->m_expandedNameTable)->getExpandedTypeID(attrUri, attrLocalName, nodeType);
		prev = addNode(nodeType, exName, elemNode, prev, val, false);
	}
	if ($DTM::NULL != prev) {
		$nc(this->m_nextsib)->setElementAt($DTM::NULL, prev);
	}
	if (nullptr != this->m_wsfilter) {
		int16_t wsv = $nc(this->m_wsfilter)->getShouldStripSpace(makeNodeHandle(elemNode), this);
		bool shouldStrip = ($DTMWSFilter::INHERIT == wsv) ? getShouldStripWhitespace() : ($DTMWSFilter::STRIP == wsv);
		pushShouldStripWhitespace(shouldStrip);
	}
	this->m_previous = $DTM::NULL;
	$nc(this->m_contextIndexes)->push($nc(this->m_prefixMappings)->size());
}

void SAX2DTM::endElement($String* uri, $String* localName, $String* qName) {
	charactersFlush();
	$nc(this->m_contextIndexes)->quickPop(1);
	int32_t topContextIndex = $nc(this->m_contextIndexes)->peek();
	if (topContextIndex != $nc(this->m_prefixMappings)->size()) {
		$nc(this->m_prefixMappings)->setSize(topContextIndex);
	}
	int32_t lastNode = this->m_previous;
	this->m_previous = $nc(this->m_parents)->pop();
	if ($DTM::NULL == lastNode) {
		$nc(this->m_firstch)->setElementAt($DTM::NULL, this->m_previous);
	} else {
		$nc(this->m_nextsib)->setElementAt($DTM::NULL, lastNode);
	}
	popShouldStripWhitespace();
}

void SAX2DTM::characters($chars* ch, int32_t start, int32_t length) {
	if (this->m_textPendingStart == -1) {
		this->m_textPendingStart = $nc(this->m_chars)->size();
		this->m_coalescedTextType = this->m_textType;
	} else if (this->m_textType == $DTM::TEXT_NODE) {
		this->m_coalescedTextType = $DTM::TEXT_NODE;
	}
	$nc(this->m_chars)->append(ch, start, length);
}

void SAX2DTM::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	characters(ch, start, length);
}

void SAX2DTM::processingInstruction($String* target, $String* data) {
	charactersFlush();
	int32_t exName = $nc(this->m_expandedNameTable)->getExpandedTypeID(nullptr, target, $DTM::PROCESSING_INSTRUCTION_NODE);
	int32_t dataIndex = $nc(this->m_valuesOrPrefixes)->stringToIndex(data);
	this->m_previous = addNode($DTM::PROCESSING_INSTRUCTION_NODE, exName, $nc(this->m_parents)->peek(), this->m_previous, dataIndex, false);
}

void SAX2DTM::skippedEntity($String* name) {
}

void SAX2DTM::warning($SAXParseException* e) {
	$nc($System::err)->println($($nc(e)->getMessage()));
}

void SAX2DTM::error($SAXParseException* e) {
	$throw(e);
}

void SAX2DTM::fatalError($SAXParseException* e) {
	$throw(e);
}

void SAX2DTM::elementDecl($String* name, $String* model) {
}

void SAX2DTM::attributeDecl($String* eName, $String* aName, $String* type, $String* valueDefault, $String* value) {
}

void SAX2DTM::internalEntityDecl($String* name, $String* value) {
}

void SAX2DTM::externalEntityDecl($String* name, $String* publicId, $String* systemId) {
}

void SAX2DTM::startDTD($String* name, $String* publicId, $String* systemId) {
	this->m_insideDTD = true;
}

void SAX2DTM::endDTD() {
	this->m_insideDTD = false;
}

void SAX2DTM::startEntity($String* name) {
}

void SAX2DTM::endEntity($String* name) {
}

void SAX2DTM::startCDATA() {
	this->m_textType = $DTM::CDATA_SECTION_NODE;
}

void SAX2DTM::endCDATA() {
	this->m_textType = $DTM::TEXT_NODE;
}

void SAX2DTM::comment($chars* ch, int32_t start, int32_t length) {
	if (this->m_insideDTD) {
		return;
	}
	charactersFlush();
	int32_t exName = $nc(this->m_expandedNameTable)->getExpandedTypeID($DTM::COMMENT_NODE);
	int32_t dataIndex = $nc(this->m_valuesOrPrefixes)->stringToIndex($$new($String, ch, start, length));
	this->m_previous = addNode($DTM::COMMENT_NODE, exName, $nc(this->m_parents)->peek(), this->m_previous, dataIndex, false);
}

void SAX2DTM::setProperty($String* property, Object$* value) {
}

$SourceLocator* SAX2DTM::getSourceLocatorFor(int32_t node) {
	$useLocalCurrentObjectStackCache();
	if (this->m_useSourceLocationProperty) {
		node = makeNodeIdentity(node);
		$var($String, var$0, $nc(this->m_sourceSystemId)->elementAt(node));
		int32_t var$1 = $nc(this->m_sourceLine)->elementAt(node);
		return $new($NodeLocator, nullptr, var$0, var$1, $nc(this->m_sourceColumn)->elementAt(node));
	} else if (this->m_locator != nullptr) {
		return $new($NodeLocator, nullptr, $($nc(this->m_locator)->getSystemId()), -1, -1);
	} else if (this->m_systemId != nullptr) {
		return $new($NodeLocator, nullptr, this->m_systemId, -1, -1);
	}
	return nullptr;
}

$String* SAX2DTM::getFixedNames(int32_t type) {
	return $nc(SAX2DTM::m_fixednames)->get(type);
}

void clinit$SAX2DTM($Class* class$) {
	$assignStatic(SAX2DTM::m_fixednames, $new($StringArray, {
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

SAX2DTM::SAX2DTM() {
}

$Class* SAX2DTM::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM, name, initialize, &_SAX2DTM_ClassInfo_, clinit$SAX2DTM, allocate$SAX2DTM);
	return class$;
}

$Class* SAX2DTM::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com