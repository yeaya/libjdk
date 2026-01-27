#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMException.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMManagerDefault.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeProxy.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/BoolStack.h>
#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Math.h>
#include <java/util/Vector.h>
#include <javax/xml/transform/Source.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DEFAULT_BLOCKSIZE
#undef DEFAULT_NUMBLOCKS
#undef DEFAULT_NUMBLOCKS_SMALL
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef ENTITY_REFERENCE_NODE
#undef ER_METHOD_NOT_SUPPORTED
#undef IDENT_DTM_DEFAULT
#undef IDENT_DTM_NODE_BITS
#undef IDENT_NODE_DEFAULT
#undef JJK_DEBUG
#undef NAMESPACE_NODE
#undef NOTATION_NODE
#undef NOTPROCESSED
#undef NTYPES
#undef NULL
#undef PROCESSING_INSTRUCTION_NODE
#undef ROOTNODE
#undef TEXT_NODE

using $intArray2 = $Array<int32_t, 2>;
using $intArray3 = $Array<int32_t, 3>;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMException = ::com::sun::org::apache::xml::internal::dtm::DTMException;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMManagerDefault = ::com::sun::org::apache::xml::internal::dtm::ref::DTMManagerDefault;
using $DTMNodeProxy = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeProxy;
using $ExpandedNameTable = ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable;
using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $BoolStack = ::com::sun::org::apache::xml::internal::utils::BoolStack;
using $SuballocatedIntVector = ::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Vector = ::java::util::Vector;
using $Source = ::javax::xml::transform::Source;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMDefaultBase_FieldInfo_[] = {
	{"JJK_DEBUG", "Z", nullptr, $STATIC | $FINAL, $constField(DTMDefaultBase, JJK_DEBUG)},
	{"ROOTNODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMDefaultBase, ROOTNODE)},
	{"m_size", "I", nullptr, $PROTECTED, $field(DTMDefaultBase, m_size)},
	{"m_exptype", "Lcom/sun/org/apache/xml/internal/utils/SuballocatedIntVector;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_exptype)},
	{"m_firstch", "Lcom/sun/org/apache/xml/internal/utils/SuballocatedIntVector;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_firstch)},
	{"m_nextsib", "Lcom/sun/org/apache/xml/internal/utils/SuballocatedIntVector;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_nextsib)},
	{"m_prevsib", "Lcom/sun/org/apache/xml/internal/utils/SuballocatedIntVector;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_prevsib)},
	{"m_parent", "Lcom/sun/org/apache/xml/internal/utils/SuballocatedIntVector;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_parent)},
	{"m_namespaceDeclSets", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/sun/org/apache/xml/internal/utils/SuballocatedIntVector;>;", $PROTECTED, $field(DTMDefaultBase, m_namespaceDeclSets)},
	{"m_namespaceDeclSetElements", "Lcom/sun/org/apache/xml/internal/utils/SuballocatedIntVector;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_namespaceDeclSetElements)},
	{"m_elemIndexes", "[[[I", nullptr, $PROTECTED, $field(DTMDefaultBase, m_elemIndexes)},
	{"DEFAULT_BLOCKSIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMDefaultBase, DEFAULT_BLOCKSIZE)},
	{"DEFAULT_NUMBLOCKS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMDefaultBase, DEFAULT_NUMBLOCKS)},
	{"DEFAULT_NUMBLOCKS_SMALL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMDefaultBase, DEFAULT_NUMBLOCKS_SMALL)},
	{"NOTPROCESSED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DTMDefaultBase, NOTPROCESSED)},
	{"m_mgr", "Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PUBLIC, $field(DTMDefaultBase, m_mgr)},
	{"m_mgrDefault", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMManagerDefault;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_mgrDefault)},
	{"m_dtmIdent", "Lcom/sun/org/apache/xml/internal/utils/SuballocatedIntVector;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_dtmIdent)},
	{"m_documentBaseURI", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_documentBaseURI)},
	{"m_wsfilter", "Lcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_wsfilter)},
	{"m_shouldStripWS", "Z", nullptr, $PROTECTED, $field(DTMDefaultBase, m_shouldStripWS)},
	{"m_shouldStripWhitespaceStack", "Lcom/sun/org/apache/xml/internal/utils/BoolStack;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_shouldStripWhitespaceStack)},
	{"m_xstrf", "Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_xstrf)},
	{"m_expandedNameTable", "Lcom/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_expandedNameTable)},
	{"m_indexing", "Z", nullptr, $PROTECTED, $field(DTMDefaultBase, m_indexing)},
	{"m_traversers", "[Lcom/sun/org/apache/xml/internal/dtm/DTMAxisTraverser;", nullptr, $PROTECTED, $field(DTMDefaultBase, m_traversers)},
	{}
};

$MethodInfo _DTMDefaultBase_MethodInfo_[] = {
	{"dispatchCharactersEvents", "(ILorg/xml/sax/ContentHandler;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"dispatchToEvents", "(ILorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeNode", "(ILjava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentTypeDeclarationPublicIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentTypeDeclarationSystemIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementById", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStringValue", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnparsedEntityURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;Ljavax/xml/transform/Source;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;Z)V", nullptr, $PUBLIC, $method(DTMDefaultBase, init$, void, $DTMManager*, $Source*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;Ljavax/xml/transform/Source;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;ZIZZ)V", nullptr, $PUBLIC, $method(DTMDefaultBase, init$, void, $DTMManager*, $Source*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool, int32_t, bool, bool)},
	{"_exptype", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, _exptype, int32_t, int32_t)},
	{"_firstch", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, _firstch, int32_t, int32_t)},
	{"_level", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, _level, int32_t, int32_t)},
	{"_nextsib", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, _nextsib, int32_t, int32_t)},
	{"_parent", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, _parent, int32_t, int32_t)},
	{"_prevsib", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, _prevsib, int32_t, int32_t)},
	{"_type", "(I)S", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, _type, int16_t, int32_t)},
	{"appendChild", "(IZZ)V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, appendChild, void, int32_t, bool, bool)},
	{"appendTextChild", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, appendTextChild, void, $String*)},
	{"declareNamespaceInContext", "(II)V", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, declareNamespaceInContext, void, int32_t, int32_t)},
	{"documentRegistration", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, documentRegistration, void)},
	{"documentRelease", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, documentRelease, void)},
	{"dumpDTM", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, dumpDTM, void, $OutputStream*)},
	{"dumpNode", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, dumpNode, $String*, int32_t)},
	{"ensureSizeOfIndex", "(II)V", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, ensureSizeOfIndex, void, int32_t, int32_t)},
	{"error", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, error, void, $String*)},
	{"findElementFromIndex", "(III)I", nullptr, 0, $virtualMethod(DTMDefaultBase, findElementFromIndex, int32_t, int32_t, int32_t, int32_t)},
	{"findGTE", "([IIII)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, findGTE, int32_t, $ints*, int32_t, int32_t, int32_t)},
	{"findInSortedSuballocatedIntVector", "(Lcom/sun/org/apache/xml/internal/utils/SuballocatedIntVector;I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, findInSortedSuballocatedIntVector, int32_t, $SuballocatedIntVector*, int32_t)},
	{"findNamespaceContext", "(I)Lcom/sun/org/apache/xml/internal/utils/SuballocatedIntVector;", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, findNamespaceContext, $SuballocatedIntVector*, int32_t)},
	{"getDTMIDs", "()Lcom/sun/org/apache/xml/internal/utils/SuballocatedIntVector;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getDTMIDs, $SuballocatedIntVector*)},
	{"getDocument", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getDocument, int32_t)},
	{"getDocumentAllDeclarationsProcessed", "()Z", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getDocumentAllDeclarationsProcessed, bool)},
	{"getDocumentBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getDocumentBaseURI, $String*)},
	{"getDocumentEncoding", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getDocumentEncoding, $String*, int32_t)},
	{"getDocumentRoot", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getDocumentRoot, int32_t, int32_t)},
	{"getDocumentStandalone", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getDocumentStandalone, $String*, int32_t)},
	{"getDocumentSystemIdentifier", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getDocumentSystemIdentifier, $String*, int32_t)},
	{"getDocumentVersion", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getDocumentVersion, $String*, int32_t)},
	{"getExpandedTypeID", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getExpandedTypeID, int32_t, int32_t)},
	{"getExpandedTypeID", "(Ljava/lang/String;Ljava/lang/String;I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getExpandedTypeID, int32_t, $String*, $String*, int32_t)},
	{"getFirstAttribute", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getFirstAttribute, int32_t, int32_t)},
	{"getFirstAttributeIdentity", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, getFirstAttributeIdentity, int32_t, int32_t)},
	{"getFirstChild", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getFirstChild, int32_t, int32_t)},
	{"getFirstNamespaceNode", "(IZ)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getFirstNamespaceNode, int32_t, int32_t, bool)},
	{"getLastChild", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getLastChild, int32_t, int32_t)},
	{"getLevel", "(I)S", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getLevel, int16_t, int32_t)},
	{"getLocalNameFromExpandedNameID", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getLocalNameFromExpandedNameID, $String*, int32_t)},
	{"getManager", "()Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getManager, $DTMManager*)},
	{"getNamespaceFromExpandedNameID", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getNamespaceFromExpandedNameID, $String*, int32_t)},
	{"getNamespaceType", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getNamespaceType, int32_t, int32_t)},
	{"getNextAttribute", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getNextAttribute, int32_t, int32_t)},
	{"getNextAttributeIdentity", "(I)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, getNextAttributeIdentity, int32_t, int32_t)},
	{"getNextNamespaceNode", "(IIZ)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getNextNamespaceNode, int32_t, int32_t, int32_t, bool)},
	{"getNextNodeIdentity", "(I)I", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(DTMDefaultBase, getNextNodeIdentity, int32_t, int32_t)},
	{"getNextSibling", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getNextSibling, int32_t, int32_t)},
	{"getNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getNode, $Node*, int32_t)},
	{"getNodeHandle", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getNodeHandle, int32_t, int32_t)},
	{"getNodeIdent", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getNodeIdent, int32_t, int32_t)},
	{"getNodeNameX", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getNodeNameX, $String*, int32_t)},
	{"getNodeType", "(I)S", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getNodeType, int16_t, int32_t)},
	{"getNumberOfNodes", "()I", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(DTMDefaultBase, getNumberOfNodes, int32_t)},
	{"getOwnerDocument", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getOwnerDocument, int32_t, int32_t)},
	{"getParent", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getParent, int32_t, int32_t)},
	{"getPreviousSibling", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getPreviousSibling, int32_t, int32_t)},
	{"getShouldStripWhitespace", "()Z", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, getShouldStripWhitespace, bool)},
	{"getStringValueChunk", "(II[I)[C", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getStringValueChunk, $chars*, int32_t, int32_t, $ints*)},
	{"getStringValueChunkCount", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getStringValueChunkCount, int32_t, int32_t)},
	{"getTypedAttribute", "(II)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, getTypedAttribute, int32_t, int32_t, int32_t)},
	{"getTypedFirstChild", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getTypedFirstChild, int32_t, int32_t, int32_t)},
	{"getTypedNextSibling", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, getTypedNextSibling, int32_t, int32_t, int32_t)},
	{"hasChildNodes", "(I)Z", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, hasChildNodes, bool, int32_t)},
	{"indexNode", "(II)V", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, indexNode, void, int32_t, int32_t)},
	{"isAttributeSpecified", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isCharacterElementContentWhitespace", "(I)Z", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, isCharacterElementContentWhitespace, bool, int32_t)},
	{"isDocumentAllDeclarationsProcessed", "(I)Z", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, isDocumentAllDeclarationsProcessed, bool, int32_t)},
	{"isNodeAfter", "(II)Z", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, isNodeAfter, bool, int32_t, int32_t)},
	{"isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, isSupported, bool, $String*, $String*)},
	{"makeNodeHandle", "(I)I", nullptr, $PUBLIC | $FINAL, $method(DTMDefaultBase, makeNodeHandle, int32_t, int32_t)},
	{"makeNodeIdentity", "(I)I", nullptr, $PUBLIC | $FINAL, $method(DTMDefaultBase, makeNodeIdentity, int32_t, int32_t)},
	{"migrateTo", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, migrateTo, void, $DTMManager*)},
	{"nextNode", "()Z", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(DTMDefaultBase, nextNode, bool)},
	{"popShouldStripWhitespace", "()V", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, popShouldStripWhitespace, void)},
	{"pushShouldStripWhitespace", "(Z)V", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, pushShouldStripWhitespace, void, bool)},
	{"setDocumentBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, setDocumentBaseURI, void, $String*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, setFeature, void, $String*, bool)},
	{"setShouldStripWhitespace", "(Z)V", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBase, setShouldStripWhitespace, void, bool)},
	{"supportsPreStripping", "()Z", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBase, supportsPreStripping, bool)},
	{}
};

$ClassInfo _DTMDefaultBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBase",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.dtm.DTM",
	_DTMDefaultBase_FieldInfo_,
	_DTMDefaultBase_MethodInfo_
};

$Object* allocate$DTMDefaultBase($Class* clazz) {
	return $of($alloc(DTMDefaultBase));
}

void DTMDefaultBase::init$($DTMManager* mgr, $Source* source, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing) {
	DTMDefaultBase::init$(mgr, source, dtmIdentity, whiteSpaceFilter, xstringfactory, doIndexing, DTMDefaultBase::DEFAULT_BLOCKSIZE, true, false);
}

void DTMDefaultBase::init$($DTMManager* mgr, $Source* source, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing, int32_t blocksize, bool usePrevsib, bool newNameTable) {
	this->m_size = 0;
	$set(this, m_namespaceDeclSets, nullptr);
	$set(this, m_namespaceDeclSetElements, nullptr);
	$set(this, m_mgrDefault, nullptr);
	this->m_shouldStripWS = false;
	int32_t numblocks = 0;
	if (blocksize <= 64) {
		numblocks = DTMDefaultBase::DEFAULT_NUMBLOCKS_SMALL;
		$set(this, m_dtmIdent, $new($SuballocatedIntVector, 4, 1));
	} else {
		numblocks = DTMDefaultBase::DEFAULT_NUMBLOCKS;
		$set(this, m_dtmIdent, $new($SuballocatedIntVector, 32));
	}
	$set(this, m_exptype, $new($SuballocatedIntVector, blocksize, numblocks));
	$set(this, m_firstch, $new($SuballocatedIntVector, blocksize, numblocks));
	$set(this, m_nextsib, $new($SuballocatedIntVector, blocksize, numblocks));
	$set(this, m_parent, $new($SuballocatedIntVector, blocksize, numblocks));
	if (usePrevsib) {
		$set(this, m_prevsib, $new($SuballocatedIntVector, blocksize, numblocks));
	}
	$set(this, m_mgr, mgr);
	if ($instanceOf($DTMManagerDefault, mgr)) {
		$set(this, m_mgrDefault, $cast($DTMManagerDefault, mgr));
	}
	$set(this, m_documentBaseURI, (nullptr != source) ? $nc(source)->getSystemId() : ($String*)nullptr);
	$nc(this->m_dtmIdent)->setElementAt(dtmIdentity, 0);
	$set(this, m_wsfilter, whiteSpaceFilter);
	$set(this, m_xstrf, xstringfactory);
	this->m_indexing = doIndexing;
	if (doIndexing) {
		$set(this, m_expandedNameTable, $new($ExpandedNameTable));
	} else {
		$set(this, m_expandedNameTable, $nc(this->m_mgrDefault)->getExpandedNameTable(this));
	}
	if (nullptr != whiteSpaceFilter) {
		$set(this, m_shouldStripWhitespaceStack, $new($BoolStack));
		pushShouldStripWhitespace(false);
	}
}

void DTMDefaultBase::ensureSizeOfIndex(int32_t namespaceID, int32_t LocalNameID) {
	$useLocalCurrentObjectStackCache();
	if (nullptr == this->m_elemIndexes) {
		$set(this, m_elemIndexes, $new($intArray3, namespaceID + 20));
	} else if ($nc(this->m_elemIndexes)->length <= namespaceID) {
		$var($intArray3, indexes, this->m_elemIndexes);
		$set(this, m_elemIndexes, $new($intArray3, namespaceID + 20));
		$System::arraycopy(indexes, 0, this->m_elemIndexes, 0, $nc(indexes)->length);
	}
	$var($intArray2, localNameIndex, $nc(this->m_elemIndexes)->get(namespaceID));
	if (nullptr == localNameIndex) {
		$assign(localNameIndex, $new($intArray2, LocalNameID + 100));
		$nc(this->m_elemIndexes)->set(namespaceID, localNameIndex);
	} else if ($nc(localNameIndex)->length <= LocalNameID) {
		$var($intArray2, indexes, localNameIndex);
		$assign(localNameIndex, $new($intArray2, LocalNameID + 100));
		$System::arraycopy(indexes, 0, localNameIndex, 0, indexes->length);
		$nc(this->m_elemIndexes)->set(namespaceID, localNameIndex);
	}
	$var($ints, elemHandles, $nc(localNameIndex)->get(LocalNameID));
	if (nullptr == elemHandles) {
		$assign(elemHandles, $new($ints, 128));
		localNameIndex->set(LocalNameID, elemHandles);
		elemHandles->set(0, 1);
	} else if ($nc(elemHandles)->length <= elemHandles->get(0) + 1) {
		$var($ints, indexes, elemHandles);
		$assign(elemHandles, $new($ints, elemHandles->get(0) + 1024));
		$System::arraycopy(indexes, 0, elemHandles, 0, indexes->length);
		localNameIndex->set(LocalNameID, elemHandles);
	}
}

void DTMDefaultBase::indexNode(int32_t expandedTypeID, int32_t identity) {
	$useLocalCurrentObjectStackCache();
	$var($ExpandedNameTable, ent, this->m_expandedNameTable);
	int16_t type = $nc(ent)->getType(expandedTypeID);
	if ($DTM::ELEMENT_NODE == type) {
		int32_t namespaceID = ent->getNamespaceID(expandedTypeID);
		int32_t localNameID = ent->getLocalNameID(expandedTypeID);
		ensureSizeOfIndex(namespaceID, localNameID);
		$var($ints, index, $nc($nc(this->m_elemIndexes)->get(namespaceID))->get(localNameID));
		$nc(index)->set(index->get(0), identity);
		++(*index)[0];
	}
}

int32_t DTMDefaultBase::findGTE($ints* list, int32_t start, int32_t len, int32_t value) {
	int32_t low = start;
	int32_t high = start + (len - 1);
	int32_t end = high;
	while (low <= high) {
		int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
		int32_t c = $nc(list)->get(mid);
		if (c > value) {
			high = mid - 1;
		} else if (c < value) {
			low = mid + 1;
		} else {
			return mid;
		}
	}
	return (low <= end && $nc(list)->get(low) > value) ? low : -1;
}

int32_t DTMDefaultBase::findElementFromIndex(int32_t nsIndex, int32_t lnIndex, int32_t firstPotential) {
	$useLocalCurrentObjectStackCache();
	$var($intArray3, indexes, this->m_elemIndexes);
	if (nullptr != indexes && nsIndex < indexes->length) {
		$var($intArray2, lnIndexs, indexes->get(nsIndex));
		if (nullptr != lnIndexs && lnIndex < lnIndexs->length) {
			$var($ints, elems, lnIndexs->get(lnIndex));
			if (nullptr != elems) {
				int32_t pos = findGTE(elems, 1, elems->get(0), firstPotential);
				if (pos > -1) {
					return elems->get(pos);
				}
			}
		}
	}
	return DTMDefaultBase::NOTPROCESSED;
}

int16_t DTMDefaultBase::_type(int32_t identity) {
	int32_t info = _exptype(identity);
	if ($DTM::NULL != info) {
		return $nc(this->m_expandedNameTable)->getType(info);
	} else {
		return (int16_t)$DTM::NULL;
	}
}

int32_t DTMDefaultBase::_exptype(int32_t identity) {
	if (identity == $DTM::NULL) {
		return $DTM::NULL;
	}
	while (identity >= this->m_size) {
		if (!nextNode() && identity >= this->m_size) {
			return $DTM::NULL;
		}
	}
	return $nc(this->m_exptype)->elementAt(identity);
}

int32_t DTMDefaultBase::_level(int32_t identity) {
	while (identity >= this->m_size) {
		bool isMore = nextNode();
		if (!isMore && identity >= this->m_size) {
			return $DTM::NULL;
		}
	}
	int32_t i = 0;
	while ($DTM::NULL != (identity = _parent(identity))) {
		++i;
	}
	return i;
}

int32_t DTMDefaultBase::_firstch(int32_t identity) {
	int32_t info = (identity >= this->m_size) ? DTMDefaultBase::NOTPROCESSED : $nc(this->m_firstch)->elementAt(identity);
	while (info == DTMDefaultBase::NOTPROCESSED) {
		bool isMore = nextNode();
		if (identity >= this->m_size && !isMore) {
			return $DTM::NULL;
		} else {
			info = $nc(this->m_firstch)->elementAt(identity);
			if (info == DTMDefaultBase::NOTPROCESSED && !isMore) {
				return $DTM::NULL;
			}
		}
	}
	return info;
}

int32_t DTMDefaultBase::_nextsib(int32_t identity) {
	int32_t info = (identity >= this->m_size) ? DTMDefaultBase::NOTPROCESSED : $nc(this->m_nextsib)->elementAt(identity);
	while (info == DTMDefaultBase::NOTPROCESSED) {
		bool isMore = nextNode();
		if (identity >= this->m_size && !isMore) {
			return $DTM::NULL;
		} else {
			info = $nc(this->m_nextsib)->elementAt(identity);
			if (info == DTMDefaultBase::NOTPROCESSED && !isMore) {
				return $DTM::NULL;
			}
		}
	}
	return info;
}

int32_t DTMDefaultBase::_prevsib(int32_t identity) {
	if (identity < this->m_size) {
		return $nc(this->m_prevsib)->elementAt(identity);
	}
	while (true) {
		bool isMore = nextNode();
		if (identity >= this->m_size && !isMore) {
			return $DTM::NULL;
		} else if (identity < this->m_size) {
			return $nc(this->m_prevsib)->elementAt(identity);
		}
	}
}

int32_t DTMDefaultBase::_parent(int32_t identity) {
	if (identity < this->m_size) {
		return $nc(this->m_parent)->elementAt(identity);
	}
	while (true) {
		bool isMore = nextNode();
		if (identity >= this->m_size && !isMore) {
			return $DTM::NULL;
		} else if (identity < this->m_size) {
			return $nc(this->m_parent)->elementAt(identity);
		}
	}
}

void DTMDefaultBase::dumpDTM($OutputStream* os$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($OutputStream, os, os$renamed);
	try {
		if (os == nullptr) {
			$var($File, f, $new($File, $$str({"DTMDump"_s, $$str($nc($of(($of(this))))->hashCode()), ".txt"_s})));
			$nc($System::err)->println($$str({"Dumping... "_s, $(f->getAbsolutePath())}));
			$assign(os, $new($FileOutputStream, f));
		}
		$var($PrintStream, ps, $new($PrintStream, os));
		while (nextNode()) {
		}
		int32_t nRecords = this->m_size;
		ps->println($$str({"Total nodes: "_s, $$str(nRecords)}));
		for (int32_t index = 0; index < nRecords; ++index) {
			int32_t i = makeNodeHandle(index);
			ps->println($$str({"=========== index="_s, $$str(index), " handle="_s, $$str(i), " ==========="_s}));
			ps->println($$str({"NodeName: "_s, $(getNodeName(i))}));
			ps->println($$str({"NodeNameX: "_s, $(getNodeNameX(i))}));
			ps->println($$str({"LocalName: "_s, $(getLocalName(i))}));
			ps->println($$str({"NamespaceURI: "_s, $(getNamespaceURI(i))}));
			ps->println($$str({"Prefix: "_s, $(getPrefix(i))}));
			int32_t exTypeID = _exptype(index);
			ps->println($$str({"Expanded Type ID: "_s, $($Integer::toHexString(exTypeID))}));
			int32_t type = _type(index);
			$var($String, typestring, nullptr);
			switch (type) {
			case $DTM::ATTRIBUTE_NODE:
				{
					$assign(typestring, "ATTRIBUTE_NODE"_s);
					break;
				}
			case $DTM::CDATA_SECTION_NODE:
				{
					$assign(typestring, "CDATA_SECTION_NODE"_s);
					break;
				}
			case $DTM::COMMENT_NODE:
				{
					$assign(typestring, "COMMENT_NODE"_s);
					break;
				}
			case $DTM::DOCUMENT_FRAGMENT_NODE:
				{
					$assign(typestring, "DOCUMENT_FRAGMENT_NODE"_s);
					break;
				}
			case $DTM::DOCUMENT_NODE:
				{
					$assign(typestring, "DOCUMENT_NODE"_s);
					break;
				}
			case $DTM::DOCUMENT_TYPE_NODE:
				{
					$assign(typestring, "DOCUMENT_NODE"_s);
					break;
				}
			case $DTM::ELEMENT_NODE:
				{
					$assign(typestring, "ELEMENT_NODE"_s);
					break;
				}
			case $DTM::ENTITY_NODE:
				{
					$assign(typestring, "ENTITY_NODE"_s);
					break;
				}
			case $DTM::ENTITY_REFERENCE_NODE:
				{
					$assign(typestring, "ENTITY_REFERENCE_NODE"_s);
					break;
				}
			case $DTM::NAMESPACE_NODE:
				{
					$assign(typestring, "NAMESPACE_NODE"_s);
					break;
				}
			case $DTM::NOTATION_NODE:
				{
					$assign(typestring, "NOTATION_NODE"_s);
					break;
				}
			case $DTM::NULL:
				{
					$assign(typestring, "NULL"_s);
					break;
				}
			case $DTM::PROCESSING_INSTRUCTION_NODE:
				{
					$assign(typestring, "PROCESSING_INSTRUCTION_NODE"_s);
					break;
				}
			case $DTM::TEXT_NODE:
				{
					$assign(typestring, "TEXT_NODE"_s);
					break;
				}
			default:
				{
					$assign(typestring, "Unknown!"_s);
					break;
				}
			}
			ps->println($$str({"Type: "_s, typestring}));
			int32_t firstChild = _firstch(index);
			if ($DTM::NULL == firstChild) {
				ps->println("First child: DTM.NULL"_s);
			} else if (DTMDefaultBase::NOTPROCESSED == firstChild) {
				ps->println("First child: NOTPROCESSED"_s);
			} else {
				ps->println($$str({"First child: "_s, $$str(firstChild)}));
			}
			if (this->m_prevsib != nullptr) {
				int32_t prevSibling = _prevsib(index);
				if ($DTM::NULL == prevSibling) {
					ps->println("Prev sibling: DTM.NULL"_s);
				} else if (DTMDefaultBase::NOTPROCESSED == prevSibling) {
					ps->println("Prev sibling: NOTPROCESSED"_s);
				} else {
					ps->println($$str({"Prev sibling: "_s, $$str(prevSibling)}));
				}
			}
			int32_t nextSibling = _nextsib(index);
			if ($DTM::NULL == nextSibling) {
				ps->println("Next sibling: DTM.NULL"_s);
			} else if (DTMDefaultBase::NOTPROCESSED == nextSibling) {
				ps->println("Next sibling: NOTPROCESSED"_s);
			} else {
				ps->println($$str({"Next sibling: "_s, $$str(nextSibling)}));
			}
			int32_t parent = _parent(index);
			if ($DTM::NULL == parent) {
				ps->println("Parent: DTM.NULL"_s);
			} else if (DTMDefaultBase::NOTPROCESSED == parent) {
				ps->println("Parent: NOTPROCESSED"_s);
			} else {
				ps->println($$str({"Parent: "_s, $$str(parent)}));
			}
			int32_t level = _level(index);
			ps->println($$str({"Level: "_s, $$str(level)}));
			ps->println($$str({"Node Value: "_s, $(getNodeValue(i))}));
			ps->println($$str({"String Value: "_s, $(getStringValue(i))}));
		}
	} catch ($IOException& ioe) {
		ioe->printStackTrace($System::err);
		$throwNew($RuntimeException, $(ioe->getMessage()));
	}
}

$String* DTMDefaultBase::dumpNode(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	if (nodeHandle == $DTM::NULL) {
		return "[null]"_s;
	}
	$var($String, typestring, nullptr);
	switch (getNodeType(nodeHandle)) {
	case $DTM::ATTRIBUTE_NODE:
		{
			$assign(typestring, "ATTR"_s);
			break;
		}
	case $DTM::CDATA_SECTION_NODE:
		{
			$assign(typestring, "CDATA"_s);
			break;
		}
	case $DTM::COMMENT_NODE:
		{
			$assign(typestring, "COMMENT"_s);
			break;
		}
	case $DTM::DOCUMENT_FRAGMENT_NODE:
		{
			$assign(typestring, "DOC_FRAG"_s);
			break;
		}
	case $DTM::DOCUMENT_NODE:
		{
			$assign(typestring, "DOC"_s);
			break;
		}
	case $DTM::DOCUMENT_TYPE_NODE:
		{
			$assign(typestring, "DOC_TYPE"_s);
			break;
		}
	case $DTM::ELEMENT_NODE:
		{
			$assign(typestring, "ELEMENT"_s);
			break;
		}
	case $DTM::ENTITY_NODE:
		{
			$assign(typestring, "ENTITY"_s);
			break;
		}
	case $DTM::ENTITY_REFERENCE_NODE:
		{
			$assign(typestring, "ENT_REF"_s);
			break;
		}
	case $DTM::NAMESPACE_NODE:
		{
			$assign(typestring, "NAMESPACE"_s);
			break;
		}
	case $DTM::NOTATION_NODE:
		{
			$assign(typestring, "NOTATION"_s);
			break;
		}
	case $DTM::NULL:
		{
			$assign(typestring, "null"_s);
			break;
		}
	case $DTM::PROCESSING_INSTRUCTION_NODE:
		{
			$assign(typestring, "PI"_s);
			break;
		}
	case $DTM::TEXT_NODE:
		{
			$assign(typestring, "TEXT"_s);
			break;
		}
	default:
		{
			$assign(typestring, "Unknown!"_s);
			break;
		}
	}
	$var($String, var$5, $$str({"["_s, $$str(nodeHandle), ": "_s, typestring, "(0x"_s, $($Integer::toHexString(getExpandedTypeID(nodeHandle))), ") "_s}));
	$var($String, var$4, $$concat(var$5, $(getNodeNameX(nodeHandle))));
	$var($String, var$3, $$concat(var$4, " {"_s));
	$var($String, var$2, $$concat(var$3, $(getNamespaceURI(nodeHandle))));
	$var($String, var$1, $$concat(var$2, "}=\""_s));
	$var($String, var$0, $$concat(var$1, $(getNodeValue(nodeHandle))));
	return $concat(var$0, "\"]"_s);
}

void DTMDefaultBase::setFeature($String* featureId, bool state) {
}

bool DTMDefaultBase::hasChildNodes(int32_t nodeHandle) {
	int32_t identity = makeNodeIdentity(nodeHandle);
	int32_t firstChild = _firstch(identity);
	return firstChild != $DTM::NULL;
}

int32_t DTMDefaultBase::makeNodeHandle(int32_t nodeIdentity) {
	if ($DTM::NULL == nodeIdentity) {
		return $DTM::NULL;
	}
	return $nc(this->m_dtmIdent)->elementAt($usr(nodeIdentity, $DTMManager::IDENT_DTM_NODE_BITS)) + ((int32_t)(nodeIdentity & (uint32_t)$DTMManager::IDENT_NODE_DEFAULT));
}

int32_t DTMDefaultBase::makeNodeIdentity(int32_t nodeHandle) {
	if ($DTM::NULL == nodeHandle) {
		return $DTM::NULL;
	}
	if (this->m_mgrDefault != nullptr) {
		int32_t whichDTMindex = $usr(nodeHandle, $DTMManager::IDENT_DTM_NODE_BITS);
		if (!$equals($nc($nc(this->m_mgrDefault)->m_dtms)->get(whichDTMindex), this)) {
			return $DTM::NULL;
		} else {
			return $nc($nc(this->m_mgrDefault)->m_dtm_offsets)->get(whichDTMindex) | ((int32_t)(nodeHandle & (uint32_t)$DTMManager::IDENT_NODE_DEFAULT));
		}
	}
	int32_t whichDTMid = $nc(this->m_dtmIdent)->indexOf((int32_t)(nodeHandle & (uint32_t)$DTMManager::IDENT_DTM_DEFAULT));
	return (whichDTMid == $DTM::NULL) ? $DTM::NULL : ($sl(whichDTMid, $DTMManager::IDENT_DTM_NODE_BITS)) + ((int32_t)(nodeHandle & (uint32_t)$DTMManager::IDENT_NODE_DEFAULT));
}

int32_t DTMDefaultBase::getFirstChild(int32_t nodeHandle) {
	int32_t identity = makeNodeIdentity(nodeHandle);
	int32_t firstChild = _firstch(identity);
	return makeNodeHandle(firstChild);
}

int32_t DTMDefaultBase::getTypedFirstChild(int32_t nodeHandle, int32_t nodeType) {
	int32_t firstChild = 0;
	int32_t eType = 0;
	if (nodeType < $DTM::NTYPES) {
		for (firstChild = _firstch(makeNodeIdentity(nodeHandle)); firstChild != $DTM::NULL; firstChild = _nextsib(firstChild)) {
			eType = _exptype(firstChild);
			if (eType == nodeType || (eType >= $DTM::NTYPES && $nc(this->m_expandedNameTable)->getType(eType) == nodeType)) {
				return makeNodeHandle(firstChild);
			}
		}
	} else {
		for (firstChild = _firstch(makeNodeIdentity(nodeHandle)); firstChild != $DTM::NULL; firstChild = _nextsib(firstChild)) {
			if (_exptype(firstChild) == nodeType) {
				return makeNodeHandle(firstChild);
			}
		}
	}
	return $DTM::NULL;
}

int32_t DTMDefaultBase::getLastChild(int32_t nodeHandle) {
	int32_t identity = makeNodeIdentity(nodeHandle);
	int32_t child = _firstch(identity);
	int32_t lastChild = $DTM::NULL;
	while (child != $DTM::NULL) {
		lastChild = child;
		child = _nextsib(child);
	}
	return makeNodeHandle(lastChild);
}

int32_t DTMDefaultBase::getFirstAttribute(int32_t nodeHandle) {
	int32_t nodeID = makeNodeIdentity(nodeHandle);
	return makeNodeHandle(getFirstAttributeIdentity(nodeID));
}

int32_t DTMDefaultBase::getFirstAttributeIdentity(int32_t identity) {
	int32_t type = _type(identity);
	if ($DTM::ELEMENT_NODE == type) {
		while ($DTM::NULL != (identity = getNextNodeIdentity(identity))) {
			type = _type(identity);
			if (type == $DTM::ATTRIBUTE_NODE) {
				return identity;
			} else if ($DTM::NAMESPACE_NODE != type) {
				break;
			}
		}
	}
	return $DTM::NULL;
}

int32_t DTMDefaultBase::getTypedAttribute(int32_t nodeHandle, int32_t attType) {
	int32_t type = getNodeType(nodeHandle);
	if ($DTM::ELEMENT_NODE == type) {
		int32_t identity = makeNodeIdentity(nodeHandle);
		while ($DTM::NULL != (identity = getNextNodeIdentity(identity))) {
			type = _type(identity);
			if (type == $DTM::ATTRIBUTE_NODE) {
				if (_exptype(identity) == attType) {
					return makeNodeHandle(identity);
				}
			} else if ($DTM::NAMESPACE_NODE != type) {
				break;
			}
		}
	}
	return $DTM::NULL;
}

int32_t DTMDefaultBase::getNextSibling(int32_t nodeHandle) {
	if (nodeHandle == $DTM::NULL) {
		return $DTM::NULL;
	}
	return makeNodeHandle(_nextsib(makeNodeIdentity(nodeHandle)));
}

int32_t DTMDefaultBase::getTypedNextSibling(int32_t nodeHandle, int32_t nodeType) {
	if (nodeHandle == $DTM::NULL) {
		return $DTM::NULL;
	}
	int32_t node = makeNodeIdentity(nodeHandle);
	int32_t eType = 0;
	while (true) {
		bool var$0 = (node = _nextsib(node)) != $DTM::NULL;
		if (var$0) {
			bool var$1 = (eType = _exptype(node)) != nodeType;
			var$0 = (var$1 && $nc(this->m_expandedNameTable)->getType(eType) != nodeType);
		}
		if (!(var$0)) {
			break;
		}
		{
		}
	}
	return (node == $DTM::NULL ? $DTM::NULL : makeNodeHandle(node));
}

int32_t DTMDefaultBase::getPreviousSibling(int32_t nodeHandle) {
	if (nodeHandle == $DTM::NULL) {
		return $DTM::NULL;
	}
	if (this->m_prevsib != nullptr) {
		return makeNodeHandle(_prevsib(makeNodeIdentity(nodeHandle)));
	} else {
		int32_t nodeID = makeNodeIdentity(nodeHandle);
		int32_t parent = _parent(nodeID);
		int32_t node = _firstch(parent);
		int32_t result = $DTM::NULL;
		while (node != nodeID) {
			result = node;
			node = _nextsib(node);
		}
		return makeNodeHandle(result);
	}
}

int32_t DTMDefaultBase::getNextAttribute(int32_t nodeHandle) {
	int32_t nodeID = makeNodeIdentity(nodeHandle);
	if (_type(nodeID) == $DTM::ATTRIBUTE_NODE) {
		return makeNodeHandle(getNextAttributeIdentity(nodeID));
	}
	return $DTM::NULL;
}

int32_t DTMDefaultBase::getNextAttributeIdentity(int32_t identity) {
	while ($DTM::NULL != (identity = getNextNodeIdentity(identity))) {
		int32_t type = _type(identity);
		if (type == $DTM::ATTRIBUTE_NODE) {
			return identity;
		} else if (type != $DTM::NAMESPACE_NODE) {
			break;
		}
	}
	return $DTM::NULL;
}

void DTMDefaultBase::declareNamespaceInContext(int32_t elementNodeIndex, int32_t namespaceNodeIndex) {
	$useLocalCurrentObjectStackCache();
	$var($SuballocatedIntVector, nsList, nullptr);
	if (this->m_namespaceDeclSets == nullptr) {
		$set(this, m_namespaceDeclSetElements, $new($SuballocatedIntVector, 32));
		$nc(this->m_namespaceDeclSetElements)->addElement(elementNodeIndex);
		$set(this, m_namespaceDeclSets, $new($Vector));
		$assign(nsList, $new($SuballocatedIntVector, 32));
		$nc(this->m_namespaceDeclSets)->add(nsList);
	} else {
		int32_t last = $nc(this->m_namespaceDeclSetElements)->size() - 1;
		if (last >= 0 && elementNodeIndex == $nc(this->m_namespaceDeclSetElements)->elementAt(last)) {
			$assign(nsList, $cast($SuballocatedIntVector, $nc(this->m_namespaceDeclSets)->get(last)));
		}
	}
	if (nsList == nullptr) {
		$nc(this->m_namespaceDeclSetElements)->addElement(elementNodeIndex);
		$var($SuballocatedIntVector, inherited, findNamespaceContext(_parent(elementNodeIndex)));
		if (inherited != nullptr) {
			int32_t isize = inherited->size();
			$assign(nsList, $new($SuballocatedIntVector, $Math::max($Math::min(isize + 16, 2048), 32)));
			for (int32_t i = 0; i < isize; ++i) {
				nsList->addElement(inherited->elementAt(i));
			}
		} else {
			$assign(nsList, $new($SuballocatedIntVector, 32));
		}
		$nc(this->m_namespaceDeclSets)->add(nsList);
	}
	int32_t newEType = _exptype(namespaceNodeIndex);
	for (int32_t i = $nc(nsList)->size() - 1; i >= 0; --i) {
		if (newEType == getExpandedTypeID(nsList->elementAt(i))) {
			nsList->setElementAt(makeNodeHandle(namespaceNodeIndex), i);
			return;
		}
	}
	nsList->addElement(makeNodeHandle(namespaceNodeIndex));
}

$SuballocatedIntVector* DTMDefaultBase::findNamespaceContext(int32_t elementNodeIndex) {
	if (nullptr != this->m_namespaceDeclSetElements) {
		int32_t wouldBeAt = findInSortedSuballocatedIntVector(this->m_namespaceDeclSetElements, elementNodeIndex);
		if (wouldBeAt >= 0) {
			return $cast($SuballocatedIntVector, $nc(this->m_namespaceDeclSets)->get(wouldBeAt));
		}
		if (wouldBeAt == -1) {
			return nullptr;
		}
		wouldBeAt = -1 - wouldBeAt;
		int32_t candidate = $nc(this->m_namespaceDeclSetElements)->elementAt(--wouldBeAt);
		int32_t ancestor = _parent(elementNodeIndex);
		if (wouldBeAt == 0 && candidate < ancestor) {
			int32_t rootHandle = getDocumentRoot(makeNodeHandle(elementNodeIndex));
			int32_t rootID = makeNodeIdentity(rootHandle);
			int32_t uppermostNSCandidateID = 0;
			if (getNodeType(rootHandle) == $DTM::DOCUMENT_NODE) {
				int32_t ch = _firstch(rootID);
				uppermostNSCandidateID = (ch != $DTM::NULL) ? ch : rootID;
			} else {
				uppermostNSCandidateID = rootID;
			}
			if (candidate == uppermostNSCandidateID) {
				return $cast($SuballocatedIntVector, $nc(this->m_namespaceDeclSets)->get(wouldBeAt));
			}
		}
		while (wouldBeAt >= 0 && ancestor > 0) {
			if (candidate == ancestor) {
				return $cast($SuballocatedIntVector, $nc(this->m_namespaceDeclSets)->get(wouldBeAt));
			} else if (candidate < ancestor) {
				do {
					ancestor = _parent(ancestor);
				} while (candidate < ancestor);
			} else if (wouldBeAt > 0) {
				candidate = $nc(this->m_namespaceDeclSetElements)->elementAt(--wouldBeAt);
			} else {
				break;
			}
		}
	}
	return nullptr;
}

int32_t DTMDefaultBase::findInSortedSuballocatedIntVector($SuballocatedIntVector* vector, int32_t lookfor) {
	int32_t i = 0;
	if (vector != nullptr) {
		int32_t first = 0;
		int32_t last = vector->size() - 1;
		while (first <= last) {
			i = (first + last) / 2;
			int32_t test = lookfor - vector->elementAt(i);
			if (test == 0) {
				return i;
			} else if (test < 0) {
				last = i - 1;
			} else {
				first = i + 1;
			}
		}
		if (first > i) {
			i = first;
		}
	}
	return -1 - i;
}

int32_t DTMDefaultBase::getFirstNamespaceNode(int32_t nodeHandle, bool inScope) {
	if (inScope) {
		int32_t identity = makeNodeIdentity(nodeHandle);
		if (_type(identity) == $DTM::ELEMENT_NODE) {
			$var($SuballocatedIntVector, nsContext, findNamespaceContext(identity));
			if (nsContext == nullptr || $nc(nsContext)->size() < 1) {
				return $DTM::NULL;
			}
			return $nc(nsContext)->elementAt(0);
		} else {
			return $DTM::NULL;
		}
	} else {
		int32_t identity = makeNodeIdentity(nodeHandle);
		if (_type(identity) == $DTM::ELEMENT_NODE) {
			while ($DTM::NULL != (identity = getNextNodeIdentity(identity))) {
				int32_t type = _type(identity);
				if (type == $DTM::NAMESPACE_NODE) {
					return makeNodeHandle(identity);
				} else if ($DTM::ATTRIBUTE_NODE != type) {
					break;
				}
			}
			return $DTM::NULL;
		} else {
			return $DTM::NULL;
		}
	}
}

int32_t DTMDefaultBase::getNextNamespaceNode(int32_t baseHandle, int32_t nodeHandle, bool inScope) {
	if (inScope) {
		$var($SuballocatedIntVector, nsContext, findNamespaceContext(makeNodeIdentity(baseHandle)));
		if (nsContext == nullptr) {
			return $DTM::NULL;
		}
		int32_t i = 1 + $nc(nsContext)->indexOf(nodeHandle);
		if (i <= 0 || i == nsContext->size()) {
			return $DTM::NULL;
		}
		return nsContext->elementAt(i);
	} else {
		int32_t identity = makeNodeIdentity(nodeHandle);
		while ($DTM::NULL != (identity = getNextNodeIdentity(identity))) {
			int32_t type = _type(identity);
			if (type == $DTM::NAMESPACE_NODE) {
				return makeNodeHandle(identity);
			} else if (type != $DTM::ATTRIBUTE_NODE) {
				break;
			}
		}
	}
	return $DTM::NULL;
}

int32_t DTMDefaultBase::getParent(int32_t nodeHandle) {
	int32_t identity = makeNodeIdentity(nodeHandle);
	if (identity > 0) {
		return makeNodeHandle(_parent(identity));
	} else {
		return $DTM::NULL;
	}
}

int32_t DTMDefaultBase::getDocument() {
	return $nc(this->m_dtmIdent)->elementAt(0);
}

int32_t DTMDefaultBase::getOwnerDocument(int32_t nodeHandle) {
	if ($DTM::DOCUMENT_NODE == getNodeType(nodeHandle)) {
		return $DTM::NULL;
	}
	return getDocumentRoot(nodeHandle);
}

int32_t DTMDefaultBase::getDocumentRoot(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(getManager()))->getDTM(nodeHandle)))->getDocument();
}

int32_t DTMDefaultBase::getStringValueChunkCount(int32_t nodeHandle) {
	$init($XMLErrorResources);
	error($($XMLMessages::createXMLMessage($XMLErrorResources::ER_METHOD_NOT_SUPPORTED, nullptr)));
	return 0;
}

$chars* DTMDefaultBase::getStringValueChunk(int32_t nodeHandle, int32_t chunkIndex, $ints* startAndLen) {
	$init($XMLErrorResources);
	error($($XMLMessages::createXMLMessage($XMLErrorResources::ER_METHOD_NOT_SUPPORTED, nullptr)));
	return nullptr;
}

int32_t DTMDefaultBase::getExpandedTypeID(int32_t nodeHandle) {
	int32_t id = makeNodeIdentity(nodeHandle);
	if (id == $DTM::NULL) {
		return $DTM::NULL;
	}
	return _exptype(id);
}

int32_t DTMDefaultBase::getExpandedTypeID($String* namespace$, $String* localName, int32_t type) {
	$var($ExpandedNameTable, ent, this->m_expandedNameTable);
	return $nc(ent)->getExpandedTypeID(namespace$, localName, type);
}

$String* DTMDefaultBase::getLocalNameFromExpandedNameID(int32_t expandedNameID) {
	return $nc(this->m_expandedNameTable)->getLocalName(expandedNameID);
}

$String* DTMDefaultBase::getNamespaceFromExpandedNameID(int32_t expandedNameID) {
	return $nc(this->m_expandedNameTable)->getNamespace(expandedNameID);
}

int32_t DTMDefaultBase::getNamespaceType(int32_t nodeHandle) {
	int32_t identity = makeNodeIdentity(nodeHandle);
	int32_t expandedNameID = _exptype(identity);
	return $nc(this->m_expandedNameTable)->getNamespaceID(expandedNameID);
}

$String* DTMDefaultBase::getNodeNameX(int32_t nodeHandle) {
	$init($XMLErrorResources);
	error($($XMLMessages::createXMLMessage($XMLErrorResources::ER_METHOD_NOT_SUPPORTED, nullptr)));
	return nullptr;
}

int16_t DTMDefaultBase::getNodeType(int32_t nodeHandle) {
	if (nodeHandle == $DTM::NULL) {
		return (int16_t)$DTM::NULL;
	}
	return $nc(this->m_expandedNameTable)->getType(_exptype(makeNodeIdentity(nodeHandle)));
}

int16_t DTMDefaultBase::getLevel(int32_t nodeHandle) {
	int32_t identity = makeNodeIdentity(nodeHandle);
	return (int16_t)(_level(identity) + 1);
}

int32_t DTMDefaultBase::getNodeIdent(int32_t nodeHandle) {
	return makeNodeIdentity(nodeHandle);
}

int32_t DTMDefaultBase::getNodeHandle(int32_t nodeId) {
	return makeNodeHandle(nodeId);
}

bool DTMDefaultBase::isSupported($String* feature, $String* version) {
	return false;
}

$String* DTMDefaultBase::getDocumentBaseURI() {
	return this->m_documentBaseURI;
}

void DTMDefaultBase::setDocumentBaseURI($String* baseURI) {
	$set(this, m_documentBaseURI, baseURI);
}

$String* DTMDefaultBase::getDocumentSystemIdentifier(int32_t nodeHandle) {
	return this->m_documentBaseURI;
}

$String* DTMDefaultBase::getDocumentEncoding(int32_t nodeHandle) {
	return "UTF-8"_s;
}

$String* DTMDefaultBase::getDocumentStandalone(int32_t nodeHandle) {
	return nullptr;
}

$String* DTMDefaultBase::getDocumentVersion(int32_t documentHandle) {
	return nullptr;
}

bool DTMDefaultBase::getDocumentAllDeclarationsProcessed() {
	return true;
}

bool DTMDefaultBase::supportsPreStripping() {
	return true;
}

bool DTMDefaultBase::isNodeAfter(int32_t nodeHandle1, int32_t nodeHandle2) {
	int32_t index1 = makeNodeIdentity(nodeHandle1);
	int32_t index2 = makeNodeIdentity(nodeHandle2);
	return index1 != $DTM::NULL && index2 != $DTM::NULL && index1 <= index2;
}

bool DTMDefaultBase::isCharacterElementContentWhitespace(int32_t nodeHandle) {
	return false;
}

bool DTMDefaultBase::isDocumentAllDeclarationsProcessed(int32_t documentHandle) {
	return true;
}

$Node* DTMDefaultBase::getNode(int32_t nodeHandle) {
	return static_cast<$Node*>(static_cast<$Document*>($new($DTMNodeProxy, this, nodeHandle)));
}

void DTMDefaultBase::appendChild(int32_t newChild, bool clone, bool cloneDepth) {
	$init($XMLErrorResources);
	error($($XMLMessages::createXMLMessage($XMLErrorResources::ER_METHOD_NOT_SUPPORTED, nullptr)));
}

void DTMDefaultBase::appendTextChild($String* str) {
	$init($XMLErrorResources);
	error($($XMLMessages::createXMLMessage($XMLErrorResources::ER_METHOD_NOT_SUPPORTED, nullptr)));
}

void DTMDefaultBase::error($String* msg) {
	$throwNew($DTMException, msg);
}

bool DTMDefaultBase::getShouldStripWhitespace() {
	return this->m_shouldStripWS;
}

void DTMDefaultBase::pushShouldStripWhitespace(bool shouldStrip) {
	this->m_shouldStripWS = shouldStrip;
	if (nullptr != this->m_shouldStripWhitespaceStack) {
		$nc(this->m_shouldStripWhitespaceStack)->push(shouldStrip);
	}
}

void DTMDefaultBase::popShouldStripWhitespace() {
	if (nullptr != this->m_shouldStripWhitespaceStack) {
		this->m_shouldStripWS = $nc(this->m_shouldStripWhitespaceStack)->popAndTop();
	}
}

void DTMDefaultBase::setShouldStripWhitespace(bool shouldStrip) {
	this->m_shouldStripWS = shouldStrip;
	if (nullptr != this->m_shouldStripWhitespaceStack) {
		$nc(this->m_shouldStripWhitespaceStack)->setTop(shouldStrip);
	}
}

void DTMDefaultBase::documentRegistration() {
}

void DTMDefaultBase::documentRelease() {
}

void DTMDefaultBase::migrateTo($DTMManager* mgr) {
	$set(this, m_mgr, mgr);
	if ($instanceOf($DTMManagerDefault, mgr)) {
		$set(this, m_mgrDefault, $cast($DTMManagerDefault, mgr));
	}
}

$DTMManager* DTMDefaultBase::getManager() {
	return this->m_mgr;
}

$SuballocatedIntVector* DTMDefaultBase::getDTMIDs() {
	if (this->m_mgr == nullptr) {
		return nullptr;
	}
	return this->m_dtmIdent;
}

DTMDefaultBase::DTMDefaultBase() {
}

$Class* DTMDefaultBase::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBase, name, initialize, &_DTMDefaultBase_ClassInfo_, allocate$DTMDefaultBase);
	return class$;
}

$Class* DTMDefaultBase::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com