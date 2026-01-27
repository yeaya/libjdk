#include <com/sun/org/apache/xml/internal/dtm/ref/dom2dtm/DOM2DTM.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMManagerDefault.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/dom2dtm/DOM2DTM$CharacterNodeHandler.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/dom2dtm/DOM2DTMdefaultNamespaceDeclarationNode.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/QName.h>
#include <com/sun/org/apache/xml/internal/utils/StringBufferPool.h>
#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <com/sun/org/apache/xml/internal/utils/TreeWalker.h>
#include <com/sun/org/apache/xml/internal/utils/XMLCharacterRecognizer.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <java/lang/ClassCastException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Entity.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/ext/DeclHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef DOM2DTM
#undef ELEMENT_NODE
#undef ENTITY_REFERENCE_NODE
#undef ER_NO_DTMIDS_AVAIL
#undef IDENT_DTM_NODE_BITS
#undef INHERIT
#undef JJK_DEBUG
#undef JJK_NEWCODE
#undef NAMESPACE_DECL_NS
#undef NAMESPACE_NODE
#undef NOTPROCESSED
#undef NULL
#undef PROCESSING_INSTRUCTION_NODE
#undef STRIP
#undef TEXT_NODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $DTMManagerDefault = ::com::sun::org::apache::xml::internal::dtm::ref::DTMManagerDefault;
using $ExpandedNameTable = ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable;
using $IncrementalSAXSource = ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource;
using $DOM2DTM$CharacterNodeHandler = ::com::sun::org::apache::xml::internal::dtm::ref::dom2dtm::DOM2DTM$CharacterNodeHandler;
using $DOM2DTMdefaultNamespaceDeclarationNode = ::com::sun::org::apache::xml::internal::dtm::ref::dom2dtm::DOM2DTMdefaultNamespaceDeclarationNode;
using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $QName = ::com::sun::org::apache::xml::internal::utils::QName;
using $StringBufferPool = ::com::sun::org::apache::xml::internal::utils::StringBufferPool;
using $SuballocatedIntVector = ::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector;
using $TreeWalker = ::com::sun::org::apache::xml::internal::utils::TreeWalker;
using $XMLCharacterRecognizer = ::com::sun::org::apache::xml::internal::utils::XMLCharacterRecognizer;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Source = ::javax::xml::transform::Source;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $Entity = ::org::w3c::dom::Entity;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
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
								namespace dom2dtm {

$FieldInfo _DOM2DTM_FieldInfo_[] = {
	{"JJK_DEBUG", "Z", nullptr, $STATIC | $FINAL, $constField(DOM2DTM, JJK_DEBUG)},
	{"JJK_NEWCODE", "Z", nullptr, $STATIC | $FINAL, $constField(DOM2DTM, JJK_NEWCODE)},
	{"NAMESPACE_DECL_NS", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOM2DTM, NAMESPACE_DECL_NS)},
	{"m_pos", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE | $TRANSIENT, $field(DOM2DTM, m_pos)},
	{"m_last_parent", "I", nullptr, $PRIVATE, $field(DOM2DTM, m_last_parent)},
	{"m_last_kid", "I", nullptr, $PRIVATE, $field(DOM2DTM, m_last_kid)},
	{"m_root", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE | $TRANSIENT, $field(DOM2DTM, m_root)},
	{"m_processedFirstElement", "Z", nullptr, 0, $field(DOM2DTM, m_processedFirstElement)},
	{"m_nodesAreProcessed", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(DOM2DTM, m_nodesAreProcessed)},
	{"m_nodes", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/Node;>;", $PROTECTED, $field(DOM2DTM, m_nodes)},
	{"m_walker", "Lcom/sun/org/apache/xml/internal/utils/TreeWalker;", nullptr, 0, $field(DOM2DTM, m_walker)},
	{}
};

$MethodInfo _DOM2DTM_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;Ljavax/xml/transform/dom/DOMSource;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;Z)V", nullptr, $PUBLIC, $method(DOM2DTM, init$, void, $DTMManager*, $DOMSource*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool)},
	{"addNode", "(Lorg/w3c/dom/Node;III)I", nullptr, $PROTECTED, $virtualMethod(DOM2DTM, addNode, int32_t, $Node*, int32_t, int32_t, int32_t)},
	{"dispatchCharactersEvents", "(ILorg/xml/sax/ContentHandler;Z)V", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, dispatchCharactersEvents, void, int32_t, $ContentHandler*, bool), "org.xml.sax.SAXException"},
	{"dispatchNodeData", "(Lorg/w3c/dom/Node;Lorg/xml/sax/ContentHandler;I)V", nullptr, $PROTECTED | $STATIC, $staticMethod(DOM2DTM, dispatchNodeData, void, $Node*, $ContentHandler*, int32_t), "org.xml.sax.SAXException"},
	{"dispatchToEvents", "(ILorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, dispatchToEvents, void, int32_t, $ContentHandler*), "org.xml.sax.SAXException"},
	{"getAttributeNode", "(ILjava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getAttributeNode, int32_t, int32_t, $String*, $String*)},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getContentHandler, $ContentHandler*)},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getDTDHandler, $DTDHandler*)},
	{"getDeclHandler", "()Lorg/xml/sax/ext/DeclHandler;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getDeclHandler, $DeclHandler*)},
	{"getDocumentTypeDeclarationPublicIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getDocumentTypeDeclarationPublicIdentifier, $String*)},
	{"getDocumentTypeDeclarationSystemIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getDocumentTypeDeclarationSystemIdentifier, $String*)},
	{"getElementById", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getElementById, int32_t, $String*)},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getEntityResolver, $EntityResolver*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getErrorHandler, $ErrorHandler*)},
	{"getHandleFromNode", "(Lorg/w3c/dom/Node;)I", nullptr, $PRIVATE, $method(DOM2DTM, getHandleFromNode, int32_t, $Node*)},
	{"getHandleOfNode", "(Lorg/w3c/dom/Node;)I", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getHandleOfNode, int32_t, $Node*)},
	{"getLexicalHandler", "()Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getLexicalHandler, $LexicalHandler*)},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getLocalName, $String*, int32_t)},
	{"getNamespaceURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getNamespaceURI, $String*, int32_t)},
	{"getNextNodeIdentity", "(I)I", nullptr, $PROTECTED, $virtualMethod(DOM2DTM, getNextNodeIdentity, int32_t, int32_t)},
	{"getNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getNode, $Node*, int32_t)},
	{"getNodeData", "(Lorg/w3c/dom/Node;Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(DOM2DTM, getNodeData, void, $Node*, $FastStringBuffer*)},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getNodeName, $String*, int32_t)},
	{"getNodeNameX", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getNodeNameX, $String*, int32_t)},
	{"getNodeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getNodeValue, $String*, int32_t)},
	{"getNumberOfNodes", "()I", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getNumberOfNodes, int32_t)},
	{"getPrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getPrefix, $String*, int32_t)},
	{"getSourceLocatorFor", "(I)Ljavax/xml/transform/SourceLocator;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getSourceLocatorFor, $SourceLocator*, int32_t)},
	{"getStringValue", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getStringValue, $XMLString*, int32_t)},
	{"getUnparsedEntityURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, getUnparsedEntityURI, $String*, $String*)},
	{"isAttributeSpecified", "(I)Z", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, isAttributeSpecified, bool, int32_t)},
	{"isSpace", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(DOM2DTM, isSpace, bool, char16_t)},
	{"isWhitespace", "(I)Z", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, isWhitespace, bool, int32_t)},
	{"logicalNextDOMTextNode", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(DOM2DTM, logicalNextDOMTextNode, $Node*, $Node*)},
	{"lookupNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PROTECTED, $virtualMethod(DOM2DTM, lookupNode, $Node*, int32_t)},
	{"needsTwoThreads", "()Z", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, needsTwoThreads, bool)},
	{"nextNode", "()Z", nullptr, $PROTECTED, $virtualMethod(DOM2DTM, nextNode, bool)},
	{"setIncrementalSAXSource", "(Lcom/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource;)V", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, setIncrementalSAXSource, void, $IncrementalSAXSource*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DOM2DTM, setProperty, void, $String*, Object$*)},
	{}
};

$InnerClassInfo _DOM2DTM_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.DOM2DTM$CharacterNodeHandler", "com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.DOM2DTM", "CharacterNodeHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DOM2DTM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.DOM2DTM",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators",
	nullptr,
	_DOM2DTM_FieldInfo_,
	_DOM2DTM_MethodInfo_,
	nullptr,
	nullptr,
	_DOM2DTM_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.DOM2DTM$CharacterNodeHandler"
};

$Object* allocate$DOM2DTM($Class* clazz) {
	return $of($alloc(DOM2DTM));
}

$String* DOM2DTM::NAMESPACE_DECL_NS = nullptr;

void DOM2DTM::init$($DTMManager* mgr, $DOMSource* domSource, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing) {
	$useLocalCurrentObjectStackCache();
	$DTMDefaultBaseIterators::init$(mgr, domSource, dtmIdentity, whiteSpaceFilter, xstringfactory, doIndexing);
	this->m_last_parent = 0;
	this->m_last_kid = $DTM::NULL;
	this->m_processedFirstElement = false;
	$set(this, m_nodes, $new($ArrayList));
	$set(this, m_walker, $new($TreeWalker, nullptr));
	$set(this, m_pos, ($set(this, m_root, $nc(domSource)->getNode())));
	this->m_last_parent = (this->m_last_kid = $DTM::NULL);
	this->m_last_kid = addNode(this->m_root, this->m_last_parent, this->m_last_kid, $DTM::NULL);
	if ($DTM::ELEMENT_NODE == $nc(this->m_root)->getNodeType()) {
		$var($NamedNodeMap, attrs, $nc(this->m_root)->getAttributes());
		int32_t attrsize = (attrs == nullptr) ? 0 : $nc(attrs)->getLength();
		if (attrsize > 0) {
			int32_t attrIndex = $DTM::NULL;
			for (int32_t i = 0; i < attrsize; ++i) {
				attrIndex = addNode($(attrs->item(i)), 0, attrIndex, $DTM::NULL);
				$nc(this->m_firstch)->setElementAt($DTM::NULL, attrIndex);
			}
			$nc(this->m_nextsib)->setElementAt($DTM::NULL, attrIndex);
		}
	}
	this->m_nodesAreProcessed = false;
}

int32_t DOM2DTM::addNode($Node* node, int32_t parentIndex, int32_t previousSibling, int32_t forceNodeType) {
	$useLocalCurrentObjectStackCache();
	int32_t nodeIndex = $nc(this->m_nodes)->size();
	if ($nc(this->m_dtmIdent)->size() == ($usr(nodeIndex, $DTMManager::IDENT_DTM_NODE_BITS))) {
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
	++this->m_size;
	int32_t type = 0;
	if ($DTM::NULL == forceNodeType) {
		type = $nc(node)->getNodeType();
	} else {
		type = forceNodeType;
	}
	if ($Node::ATTRIBUTE_NODE == type) {
		$var($String, name, $nc(node)->getNodeName());
		bool var$0 = $nc(name)->startsWith("xmlns:"_s);
		if (var$0 || $nc(name)->equals("xmlns"_s)) {
			type = $DTM::NAMESPACE_NODE;
		}
	}
	$nc(this->m_nodes)->add(node);
	$nc(this->m_firstch)->setElementAt($DTMDefaultBase::NOTPROCESSED, nodeIndex);
	$nc(this->m_nextsib)->setElementAt($DTMDefaultBase::NOTPROCESSED, nodeIndex);
	$nc(this->m_prevsib)->setElementAt(previousSibling, nodeIndex);
	$nc(this->m_parent)->setElementAt(parentIndex, nodeIndex);
	if ($DTM::NULL != parentIndex && type != $DTM::ATTRIBUTE_NODE && type != $DTM::NAMESPACE_NODE) {
		if ($DTMDefaultBase::NOTPROCESSED == $nc(this->m_firstch)->elementAt(parentIndex)) {
			$nc(this->m_firstch)->setElementAt(nodeIndex, parentIndex);
		}
	}
	$var($String, nsURI, $nc(node)->getNamespaceURI());
	$var($String, localName, (type == $Node::PROCESSING_INSTRUCTION_NODE) ? node->getNodeName() : node->getLocalName());
	if (((type == $Node::ELEMENT_NODE) || (type == $Node::ATTRIBUTE_NODE)) && nullptr == localName) {
		$assign(localName, node->getNodeName());
	}
	$var($ExpandedNameTable, exnt, this->m_expandedNameTable);
	if (node->getLocalName() == nullptr && (type == $Node::ELEMENT_NODE || type == $Node::ATTRIBUTE_NODE)) {
	}
	int32_t expandedNameID = (nullptr != localName) ? $nc(exnt)->getExpandedTypeID(nsURI, localName, type) : exnt->getExpandedTypeID(type);
	$nc(this->m_exptype)->setElementAt(expandedNameID, nodeIndex);
	indexNode(expandedNameID, nodeIndex);
	if ($DTM::NULL != previousSibling) {
		$nc(this->m_nextsib)->setElementAt(nodeIndex, previousSibling);
	}
	if (type == $DTM::NAMESPACE_NODE) {
		declareNamespaceInContext(parentIndex, nodeIndex);
	}
	return nodeIndex;
}

int32_t DOM2DTM::getNumberOfNodes() {
	return $nc(this->m_nodes)->size();
}

bool DOM2DTM::nextNode() {
	$useLocalCurrentObjectStackCache();
	if (this->m_nodesAreProcessed) {
		return false;
	}
	$var($Node, pos, this->m_pos);
	$var($Node, next, nullptr);
	int32_t nexttype = $DTM::NULL;
	do {
		if ($nc(pos)->hasChildNodes()) {
			$assign(next, pos->getFirstChild());
			if (next != nullptr && $DTM::DOCUMENT_TYPE_NODE == next->getNodeType()) {
				$assign(next, next->getNextSibling());
			}
			if ($DTM::ENTITY_REFERENCE_NODE != pos->getNodeType()) {
				this->m_last_parent = this->m_last_kid;
				this->m_last_kid = $DTM::NULL;
				if (nullptr != this->m_wsfilter) {
					int16_t wsv = $nc(this->m_wsfilter)->getShouldStripSpace(makeNodeHandle(this->m_last_parent), this);
					bool shouldStrip = ($DTMWSFilter::INHERIT == wsv) ? getShouldStripWhitespace() : ($DTMWSFilter::STRIP == wsv);
					pushShouldStripWhitespace(shouldStrip);
				}
			}
		} else {
			if (this->m_last_kid != $DTM::NULL) {
				if ($nc(this->m_firstch)->elementAt(this->m_last_kid) == $DTMDefaultBase::NOTPROCESSED) {
					$nc(this->m_firstch)->setElementAt($DTM::NULL, this->m_last_kid);
				}
			}
			while (this->m_last_parent != $DTM::NULL) {
				$assign(next, $nc(pos)->getNextSibling());
				if (next != nullptr && $DTM::DOCUMENT_TYPE_NODE == next->getNodeType()) {
					$assign(next, next->getNextSibling());
				}
				if (next != nullptr) {
					break;
				}
				$assign(pos, pos->getParentNode());
				if (pos == nullptr) {
				}
				if (pos != nullptr && $DTM::ENTITY_REFERENCE_NODE == pos->getNodeType()) {
				} else {
					popShouldStripWhitespace();
					if (this->m_last_kid == $DTM::NULL) {
						$nc(this->m_firstch)->setElementAt($DTM::NULL, this->m_last_parent);
					} else {
						$nc(this->m_nextsib)->setElementAt($DTM::NULL, this->m_last_kid);
					}
					this->m_last_parent = $nc(this->m_parent)->elementAt(this->m_last_kid = this->m_last_parent);
				}
			}
			if (this->m_last_parent == $DTM::NULL) {
				$assign(next, nullptr);
			}
		}
		if (next != nullptr) {
			nexttype = next->getNodeType();
		}
		if ($DTM::ENTITY_REFERENCE_NODE == nexttype) {
			$assign(pos, next);
		}
	} while ($DTM::ENTITY_REFERENCE_NODE == nexttype);
	if (next == nullptr) {
		$nc(this->m_nextsib)->setElementAt($DTM::NULL, 0);
		this->m_nodesAreProcessed = true;
		$set(this, m_pos, nullptr);
		return false;
	}
	bool suppressNode = false;
	$var($Node, lastTextNode, nullptr);
	nexttype = $nc(next)->getNodeType();
	if ($DTM::TEXT_NODE == nexttype || $DTM::CDATA_SECTION_NODE == nexttype) {
		suppressNode = ((nullptr != this->m_wsfilter) && getShouldStripWhitespace());
		$var($Node, n, next);
		while (n != nullptr) {
			$assign(lastTextNode, n);
			if ($DTM::TEXT_NODE == n->getNodeType()) {
				nexttype = $DTM::TEXT_NODE;
			}
			suppressNode &= $XMLCharacterRecognizer::isWhiteSpace($(n->getNodeValue()));
			$assign(n, logicalNextDOMTextNode(n));
		}
	} else if ($DTM::PROCESSING_INSTRUCTION_NODE == nexttype) {
		suppressNode = ($($nc($($nc(pos)->getNodeName()))->toLowerCase())->equals("xml"_s));
	}
	if (!suppressNode) {
		int32_t nextindex = addNode(next, this->m_last_parent, this->m_last_kid, nexttype);
		this->m_last_kid = nextindex;
		if ($DTM::ELEMENT_NODE == nexttype) {
			int32_t attrIndex = $DTM::NULL;
			$var($NamedNodeMap, attrs, next->getAttributes());
			int32_t attrsize = (attrs == nullptr) ? 0 : $nc(attrs)->getLength();
			if (attrsize > 0) {
				for (int32_t i = 0; i < attrsize; ++i) {
					attrIndex = addNode($(attrs->item(i)), nextindex, attrIndex, $DTM::NULL);
					$nc(this->m_firstch)->setElementAt($DTM::NULL, attrIndex);
					if (!this->m_processedFirstElement && "xmlns:xml"_s->equals($($nc($(attrs->item(i)))->getNodeName()))) {
						this->m_processedFirstElement = true;
					}
				}
			}
			if (!this->m_processedFirstElement) {
				attrIndex = addNode($$new($DOM2DTMdefaultNamespaceDeclarationNode, $cast($Element, next), "xml"_s, DOM2DTM::NAMESPACE_DECL_NS, makeNodeHandle(((attrIndex == $DTM::NULL) ? nextindex : attrIndex) + 1)), nextindex, attrIndex, $DTM::NULL);
				$nc(this->m_firstch)->setElementAt($DTM::NULL, attrIndex);
				this->m_processedFirstElement = true;
			}
			if (attrIndex != $DTM::NULL) {
				$nc(this->m_nextsib)->setElementAt($DTM::NULL, attrIndex);
			}
		}
	}
	if ($DTM::TEXT_NODE == nexttype || $DTM::CDATA_SECTION_NODE == nexttype) {
		$assign(next, lastTextNode);
	}
	$set(this, m_pos, next);
	return true;
}

$Node* DOM2DTM::getNode(int32_t nodeHandle) {
	int32_t identity = makeNodeIdentity(nodeHandle);
	return $cast($Node, $nc(this->m_nodes)->get(identity));
}

$Node* DOM2DTM::lookupNode(int32_t nodeIdentity) {
	return $cast($Node, $nc(this->m_nodes)->get(nodeIdentity));
}

int32_t DOM2DTM::getNextNodeIdentity(int32_t identity) {
	identity += 1;
	if (identity >= $nc(this->m_nodes)->size()) {
		if (!nextNode()) {
			identity = $DTM::NULL;
		}
	}
	return identity;
}

int32_t DOM2DTM::getHandleFromNode($Node* node) {
	if (nullptr != node) {
		int32_t len = $nc(this->m_nodes)->size();
		bool isMore = false;
		int32_t i = 0;
		do {
			for (; i < len; ++i) {
				if ($equals($nc(this->m_nodes)->get(i), node)) {
					return makeNodeHandle(i);
				}
			}
			isMore = nextNode();
			len = $nc(this->m_nodes)->size();
		} while (isMore || i < len);
	}
	return $DTM::NULL;
}

int32_t DOM2DTM::getHandleOfNode($Node* node) {
	if (nullptr != node) {
		bool var$1 = (this->m_root == node);
		if (!var$1) {
			bool var$2 = $nc(this->m_root)->getNodeType() == $DTM::DOCUMENT_NODE;
			var$1 = (var$2 && $equals(this->m_root, node->getOwnerDocument()));
		}
		bool var$0 = var$1;
		if (!var$0) {
			bool var$3 = $nc(this->m_root)->getNodeType() != $DTM::DOCUMENT_NODE;
			if (var$3) {
				var$3 = $nc(this->m_root)->getOwnerDocument() == node->getOwnerDocument();
			}
			var$0 = (var$3);
		}
		if (var$0) {
			{
				$var($Node, cursor, node);
				for (; cursor != nullptr; $assign(cursor, (cursor->getNodeType() != $DTM::ATTRIBUTE_NODE) ? cursor->getParentNode() : static_cast<$Node*>($nc(($cast($Attr, cursor)))->getOwnerElement()))) {
					if (cursor == this->m_root) {
						return getHandleFromNode(node);
					}
				}
			}
		}
	}
	return $DTM::NULL;
}

int32_t DOM2DTM::getAttributeNode(int32_t nodeHandle, $String* namespaceURI$renamed, $String* name) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespaceURI, namespaceURI$renamed);
	if (nullptr == namespaceURI) {
		$assign(namespaceURI, ""_s);
	}
	int32_t type = getNodeType(nodeHandle);
	if ($DTM::ELEMENT_NODE == type) {
		int32_t identity = makeNodeIdentity(nodeHandle);
		while ($DTM::NULL != (identity = getNextNodeIdentity(identity))) {
			type = _type(identity);
			if (type == $DTM::ATTRIBUTE_NODE || type == $DTM::NAMESPACE_NODE) {
				$var($Node, node, lookupNode(identity));
				$var($String, nodeuri, $nc(node)->getNamespaceURI());
				if (nullptr == nodeuri) {
					$assign(nodeuri, ""_s);
				}
				$var($String, nodelocalname, node->getLocalName());
				bool var$0 = $nc(nodeuri)->equals(namespaceURI);
				if (var$0 && $nc(name)->equals(nodelocalname)) {
					return makeNodeHandle(identity);
				}
			} else {
				break;
			}
		}
	}
	return $DTM::NULL;
}

$XMLString* DOM2DTM::getStringValue(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	int32_t type = getNodeType(nodeHandle);
	$var($Node, node, getNode(nodeHandle));
	if ($DTM::ELEMENT_NODE == type || $DTM::DOCUMENT_NODE == type || $DTM::DOCUMENT_FRAGMENT_NODE == type) {
		$var($FastStringBuffer, buf, $StringBufferPool::get());
		$var($String, s, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			try {
				getNodeData(node, buf);
				$assign(s, ($nc(buf)->length() > 0) ? $nc(buf)->toString() : ""_s);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$StringBufferPool::free(buf);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		return $nc(this->m_xstrf)->newstr(s);
	} else if ($DTM::TEXT_NODE == type || $DTM::CDATA_SECTION_NODE == type) {
		$var($FastStringBuffer, buf, $StringBufferPool::get());
		while (node != nullptr) {
			$nc(buf)->append($(node->getNodeValue()));
			$assign(node, logicalNextDOMTextNode(node));
		}
		$var($String, s, ($nc(buf)->length() > 0) ? $nc(buf)->toString() : ""_s);
		$StringBufferPool::free(buf);
		return $nc(this->m_xstrf)->newstr(s);
	} else {
		return $nc(this->m_xstrf)->newstr($($nc(node)->getNodeValue()));
	}
}

bool DOM2DTM::isWhitespace(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	int32_t type = getNodeType(nodeHandle);
	$var($Node, node, getNode(nodeHandle));
	if ($DTM::TEXT_NODE == type || $DTM::CDATA_SECTION_NODE == type) {
		$var($FastStringBuffer, buf, $StringBufferPool::get());
		while (node != nullptr) {
			$nc(buf)->append($(node->getNodeValue()));
			$assign(node, logicalNextDOMTextNode(node));
		}
		bool b = $nc(buf)->isWhitespace(0, buf->length());
		$StringBufferPool::free(buf);
		return b;
	}
	return false;
}

void DOM2DTM::getNodeData($Node* node, $FastStringBuffer* buf) {
	$init(DOM2DTM);
	$useLocalCurrentObjectStackCache();
	switch ($nc(node)->getNodeType()) {
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{}
	case $Node::DOCUMENT_NODE:
		{}
	case $Node::ELEMENT_NODE:
		{
			{
				{
					$var($Node, child, node->getFirstChild());
					for (; nullptr != child; $assign(child, $nc(child)->getNextSibling())) {
						getNodeData(child, buf);
					}
				}
			}
			break;
		}
	case $Node::TEXT_NODE:
		{}
	case $Node::CDATA_SECTION_NODE:
		{}
	case $Node::ATTRIBUTE_NODE:
		{
			$nc(buf)->append($(node->getNodeValue()));
			break;
		}
	case $Node::PROCESSING_INSTRUCTION_NODE:
		{
			break;
		}
	default:
		{
			break;
		}
	}
}

$String* DOM2DTM::getNodeName(int32_t nodeHandle) {
	$var($Node, node, getNode(nodeHandle));
	return $nc(node)->getNodeName();
}

$String* DOM2DTM::getNodeNameX(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, nullptr);
	int16_t type = getNodeType(nodeHandle);
	switch (type) {
	case $DTM::NAMESPACE_NODE:
		{
			{
				$var($Node, node, getNode(nodeHandle));
				$assign(name, $nc(node)->getNodeName());
				if ($nc(name)->startsWith("xmlns:"_s)) {
					$assign(name, $QName::getLocalPart(name));
				} else if (name->equals("xmlns"_s)) {
					$assign(name, ""_s);
				}
			}
			break;
		}
	case $DTM::ATTRIBUTE_NODE:
		{}
	case $DTM::ELEMENT_NODE:
		{}
	case $DTM::ENTITY_REFERENCE_NODE:
		{}
	case $DTM::PROCESSING_INSTRUCTION_NODE:
		{
			{
				$var($Node, node, getNode(nodeHandle));
				$assign(name, $nc(node)->getNodeName());
			}
			break;
		}
	default:
		{
			$assign(name, ""_s);
		}
	}
	return name;
}

$String* DOM2DTM::getLocalName(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	{
		int32_t id = makeNodeIdentity(nodeHandle);
		if ($DTM::NULL == id) {
			return nullptr;
		}
		$var($Node, newnode, $cast($Node, $nc(this->m_nodes)->get(id)));
		$var($String, newname, $nc(newnode)->getLocalName());
		if (nullptr == newname) {
			$var($String, qname, newnode->getNodeName());
			if (u'#' == $nc(qname)->charAt(0)) {
				$assign(newname, ""_s);
			} else {
				int32_t index = qname->indexOf((int32_t)u':');
				$assign(newname, (index < 0) ? qname : qname->substring(index + 1));
			}
		}
		return newname;
	}
}

$String* DOM2DTM::getPrefix(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, nullptr);
	int16_t type = getNodeType(nodeHandle);
	switch (type) {
	case $DTM::NAMESPACE_NODE:
		{
			{
				$var($Node, node, getNode(nodeHandle));
				$var($String, qname, $nc(node)->getNodeName());
				int32_t index = $nc(qname)->indexOf((int32_t)u':');
				$assign(prefix, (index < 0) ? ""_s : qname->substring(index + 1));
			}
			break;
		}
	case $DTM::ATTRIBUTE_NODE:
		{}
	case $DTM::ELEMENT_NODE:
		{
			{
				$var($Node, node, getNode(nodeHandle));
				$var($String, qname, $nc(node)->getNodeName());
				int32_t index = $nc(qname)->indexOf((int32_t)u':');
				$assign(prefix, (index < 0) ? ""_s : qname->substring(0, index));
			}
			break;
		}
	default:
		{
			$assign(prefix, ""_s);
		}
	}
	return prefix;
}

$String* DOM2DTM::getNamespaceURI(int32_t nodeHandle) {
	{
		int32_t id = makeNodeIdentity(nodeHandle);
		if (id == $DTM::NULL) {
			return nullptr;
		}
		$var($Node, node, $cast($Node, $nc(this->m_nodes)->get(id)));
		return $nc(node)->getNamespaceURI();
	}
}

$Node* DOM2DTM::logicalNextDOMTextNode($Node* n$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Node, n, n$renamed);
	$var($Node, p, $nc(n)->getNextSibling());
	if (p == nullptr) {
		for ($assign(n, n->getParentNode()); n != nullptr && $DTM::ENTITY_REFERENCE_NODE == n->getNodeType(); $assign(n, $nc(n)->getParentNode())) {
			$assign(p, n->getNextSibling());
			if (p != nullptr) {
				break;
			}
		}
	}
	$assign(n, p);
	while (n != nullptr && $DTM::ENTITY_REFERENCE_NODE == n->getNodeType()) {
		if (n->hasChildNodes()) {
			$assign(n, n->getFirstChild());
		} else {
			$assign(n, n->getNextSibling());
		}
	}
	if (n != nullptr) {
		int32_t ntype = n->getNodeType();
		if ($DTM::TEXT_NODE != ntype && $DTM::CDATA_SECTION_NODE != ntype) {
			$assign(n, nullptr);
		}
	}
	return n;
}

$String* DOM2DTM::getNodeValue(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	int32_t type = _exptype(makeNodeIdentity(nodeHandle));
	type = ($DTM::NULL != type) ? getNodeType(nodeHandle) : (int16_t)$DTM::NULL;
	if ($DTM::TEXT_NODE != type && $DTM::CDATA_SECTION_NODE != type) {
		return $nc($(getNode(nodeHandle)))->getNodeValue();
	}
	$var($Node, node, getNode(nodeHandle));
	$var($Node, n, logicalNextDOMTextNode(node));
	if (n == nullptr) {
		return $nc(node)->getNodeValue();
	}
	$var($FastStringBuffer, buf, $StringBufferPool::get());
	$nc(buf)->append($($nc(node)->getNodeValue()));
	while (n != nullptr) {
		buf->append($(n->getNodeValue()));
		$assign(n, logicalNextDOMTextNode(n));
	}
	$var($String, s, (buf->length() > 0) ? buf->toString() : ""_s);
	$StringBufferPool::free(buf);
	return s;
}

$String* DOM2DTM::getDocumentTypeDeclarationSystemIdentifier() {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, nullptr);
	if ($nc(this->m_root)->getNodeType() == $Node::DOCUMENT_NODE) {
		$assign(doc, $cast($Document, this->m_root));
	} else {
		$assign(doc, $nc(this->m_root)->getOwnerDocument());
	}
	if (nullptr != doc) {
		$var($DocumentType, dtd, doc->getDoctype());
		if (nullptr != dtd) {
			return dtd->getSystemId();
		}
	}
	return nullptr;
}

$String* DOM2DTM::getDocumentTypeDeclarationPublicIdentifier() {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, nullptr);
	if ($nc(this->m_root)->getNodeType() == $Node::DOCUMENT_NODE) {
		$assign(doc, $cast($Document, this->m_root));
	} else {
		$assign(doc, $nc(this->m_root)->getOwnerDocument());
	}
	if (nullptr != doc) {
		$var($DocumentType, dtd, doc->getDoctype());
		if (nullptr != dtd) {
			return dtd->getPublicId();
		}
	}
	return nullptr;
}

int32_t DOM2DTM::getElementById($String* elementId) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, ($nc(this->m_root)->getNodeType() == $Node::DOCUMENT_NODE) ? $cast($Document, this->m_root) : $nc(this->m_root)->getOwnerDocument());
	if (nullptr != doc) {
		$var($Node, elem, doc->getElementById(elementId));
		if (nullptr != elem) {
			int32_t elemHandle = getHandleFromNode(elem);
			if ($DTM::NULL == elemHandle) {
				int32_t identity = $nc(this->m_nodes)->size() - 1;
				while ($DTM::NULL != (identity = getNextNodeIdentity(identity))) {
					$var($Node, node, getNode(identity));
					if (node == elem) {
						elemHandle = getHandleFromNode(elem);
						break;
					}
				}
			}
			return elemHandle;
		}
	}
	return $DTM::NULL;
}

$String* DOM2DTM::getUnparsedEntityURI($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($String, url, ""_s);
	$var($Document, doc, ($nc(this->m_root)->getNodeType() == $Node::DOCUMENT_NODE) ? $cast($Document, this->m_root) : $nc(this->m_root)->getOwnerDocument());
	if (nullptr != doc) {
		$var($DocumentType, doctype, doc->getDoctype());
		if (nullptr != doctype) {
			$var($NamedNodeMap, entities, doctype->getEntities());
			if (nullptr == entities) {
				return url;
			}
			$var($Entity, entity, $cast($Entity, $nc(entities)->getNamedItem(name)));
			if (nullptr == entity) {
				return url;
			}
			$var($String, notationName, $nc(entity)->getNotationName());
			if (nullptr != notationName) {
				$assign(url, entity->getSystemId());
				if (nullptr == url) {
					$assign(url, entity->getPublicId());
				} else {
				}
			}
		}
	}
	return url;
}

bool DOM2DTM::isAttributeSpecified(int32_t attributeHandle) {
	int32_t type = getNodeType(attributeHandle);
	if ($DTM::ATTRIBUTE_NODE == type) {
		$var($Attr, attr, $cast($Attr, getNode(attributeHandle)));
		return $nc(attr)->getSpecified();
	}
	return false;
}

void DOM2DTM::setIncrementalSAXSource($IncrementalSAXSource* source) {
}

$ContentHandler* DOM2DTM::getContentHandler() {
	return nullptr;
}

$LexicalHandler* DOM2DTM::getLexicalHandler() {
	return nullptr;
}

$EntityResolver* DOM2DTM::getEntityResolver() {
	return nullptr;
}

$DTDHandler* DOM2DTM::getDTDHandler() {
	return nullptr;
}

$ErrorHandler* DOM2DTM::getErrorHandler() {
	return nullptr;
}

$DeclHandler* DOM2DTM::getDeclHandler() {
	return nullptr;
}

bool DOM2DTM::needsTwoThreads() {
	return false;
}

bool DOM2DTM::isSpace(char16_t ch) {
	$init(DOM2DTM);
	return $XMLCharacterRecognizer::isWhiteSpace(ch);
}

void DOM2DTM::dispatchCharactersEvents(int32_t nodeHandle, $ContentHandler* ch, bool normalize) {
	$useLocalCurrentObjectStackCache();
	if (normalize) {
		$var($XMLString, str, getStringValue(nodeHandle));
		$assign(str, $nc(str)->fixWhiteSpace(true, true, false));
		str->dispatchCharactersEvents(ch);
	} else {
		int32_t type = getNodeType(nodeHandle);
		$var($Node, node, getNode(nodeHandle));
		dispatchNodeData(node, ch, 0);
		if ($DTM::TEXT_NODE == type || $DTM::CDATA_SECTION_NODE == type) {
			while (nullptr != ($assign(node, logicalNextDOMTextNode(node)))) {
				dispatchNodeData(node, ch, 0);
			}
		}
	}
}

void DOM2DTM::dispatchNodeData($Node* node, $ContentHandler* ch, int32_t depth) {
	$init(DOM2DTM);
	$useLocalCurrentObjectStackCache();
	{
		$var($String, str, nullptr)
		switch ($nc(node)->getNodeType()) {
		case $Node::DOCUMENT_FRAGMENT_NODE:
			{}
		case $Node::DOCUMENT_NODE:
			{}
		case $Node::ELEMENT_NODE:
			{
				{
					{
						$var($Node, child, node->getFirstChild());
						for (; nullptr != child; $assign(child, $nc(child)->getNextSibling())) {
							dispatchNodeData(child, ch, depth + 1);
						}
					}
				}
				break;
			}
		case $Node::PROCESSING_INSTRUCTION_NODE:
			{}
		case $Node::COMMENT_NODE:
			{
				if (0 != depth) {
					break;
				}
			}
		case $Node::TEXT_NODE:
			{}
		case $Node::CDATA_SECTION_NODE:
			{}
		case $Node::ATTRIBUTE_NODE:
			{
				$assign(str, node->getNodeValue());
				if ($instanceOf($DOM2DTM$CharacterNodeHandler, ch)) {
					$nc(($cast($DOM2DTM$CharacterNodeHandler, ch)))->characters(node);
				} else {
					$var($chars, var$0, $nc(str)->toCharArray());
					$nc(ch)->characters(var$0, 0, str->length());
				}
				break;
			}
		default:
			{
				break;
			}
		}
	}
}

void DOM2DTM::dispatchToEvents(int32_t nodeHandle, $ContentHandler* ch) {
	$useLocalCurrentObjectStackCache();
	$var($TreeWalker, treeWalker, this->m_walker);
	$var($ContentHandler, prevCH, $nc(treeWalker)->getContentHandler());
	if (nullptr != prevCH) {
		$assign(treeWalker, $new($TreeWalker, nullptr));
	}
	treeWalker->setContentHandler(ch);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Node, node, getNode(nodeHandle));
			treeWalker->traverseFragment(node);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			treeWalker->setContentHandler(nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void DOM2DTM::setProperty($String* property, Object$* value) {
}

$SourceLocator* DOM2DTM::getSourceLocatorFor(int32_t node) {
	return nullptr;
}

DOM2DTM::DOM2DTM() {
}

void clinit$DOM2DTM($Class* class$) {
	$assignStatic(DOM2DTM::NAMESPACE_DECL_NS, "http://www.w3.org/XML/1998/namespace"_s);
}

$Class* DOM2DTM::load$($String* name, bool initialize) {
	$loadClass(DOM2DTM, name, initialize, &_DOM2DTM_ClassInfo_, clinit$DOM2DTM, allocate$DOM2DTM);
	return class$;
}

$Class* DOM2DTM::class$ = nullptr;

								} // dom2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com