#include <com/sun/org/apache/xml/internal/utils/TreeWalker.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/dom2dtm/DOM2DTM$CharacterNodeHandler.h>
#include <com/sun/org/apache/xml/internal/utils/AttList.h>
#include <com/sun/org/apache/xml/internal/utils/DOM2Helper.h>
#include <com/sun/org/apache/xml/internal/utils/NodeConsumer.h>
#include <javax/xml/transform/Result.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/EntityReference.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/helpers/LocatorImpl.h>
#include <jcpp.h>

#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef ENTITY_REFERENCE_NODE
#undef PI_DISABLE_OUTPUT_ESCAPING
#undef PI_ENABLE_OUTPUT_ESCAPING
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE

using $DOM2DTM$CharacterNodeHandler = ::com::sun::org::apache::xml::internal::dtm::ref::dom2dtm::DOM2DTM$CharacterNodeHandler;
using $AttList = ::com::sun::org::apache::xml::internal::utils::AttList;
using $DOM2Helper = ::com::sun::org::apache::xml::internal::utils::DOM2Helper;
using $NodeConsumer = ::com::sun::org::apache::xml::internal::utils::NodeConsumer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Result = ::javax::xml::transform::Result;
using $Comment = ::org::w3c::dom::Comment;
using $Element = ::org::w3c::dom::Element;
using $EntityReference = ::org::w3c::dom::EntityReference;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $Text = ::org::w3c::dom::Text;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $Locator = ::org::xml::sax::Locator;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;
using $LocatorImpl = ::org::xml::sax::helpers::LocatorImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _TreeWalker_FieldInfo_[] = {
	{"m_contentHandler", "Lorg/xml/sax/ContentHandler;", nullptr, $PRIVATE, $field(TreeWalker, m_contentHandler)},
	{"m_locator", "Lorg/xml/sax/helpers/LocatorImpl;", nullptr, $PRIVATE, $field(TreeWalker, m_locator)},
	{"nextIsRaw", "Z", nullptr, 0, $field(TreeWalker, nextIsRaw)},
	{}
};

$MethodInfo _TreeWalker_MethodInfo_[] = {
	{"<init>", "(Lorg/xml/sax/ContentHandler;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TreeWalker, init$, void, $ContentHandler*, $String*)},
	{"<init>", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $method(TreeWalker, init$, void, $ContentHandler*)},
	{"dispatachChars", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE | $FINAL, $method(TreeWalker, dispatachChars, void, $Node*), "org.xml.sax.SAXException"},
	{"endNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $virtualMethod(TreeWalker, endNode, void, $Node*), "org.xml.sax.SAXException"},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(TreeWalker, getContentHandler, $ContentHandler*)},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(TreeWalker, setContentHandler, void, $ContentHandler*)},
	{"startNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $virtualMethod(TreeWalker, startNode, void, $Node*), "org.xml.sax.SAXException"},
	{"traverse", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(TreeWalker, traverse, void, $Node*), "org.xml.sax.SAXException"},
	{"traverse", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(TreeWalker, traverse, void, $Node*, $Node*), "org.xml.sax.SAXException"},
	{"traverseFragment", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(TreeWalker, traverseFragment, void, $Node*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _TreeWalker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.TreeWalker",
	"java.lang.Object",
	nullptr,
	_TreeWalker_FieldInfo_,
	_TreeWalker_MethodInfo_
};

$Object* allocate$TreeWalker($Class* clazz) {
	return $of($alloc(TreeWalker));
}

$ContentHandler* TreeWalker::getContentHandler() {
	return this->m_contentHandler;
}

void TreeWalker::setContentHandler($ContentHandler* ch) {
	$set(this, m_contentHandler, ch);
}

void TreeWalker::init$($ContentHandler* contentHandler, $String* systemId) {
	$set(this, m_contentHandler, nullptr);
	$set(this, m_locator, $new($LocatorImpl));
	this->nextIsRaw = false;
	$set(this, m_contentHandler, contentHandler);
	if (this->m_contentHandler != nullptr) {
		$nc(this->m_contentHandler)->setDocumentLocator(this->m_locator);
	}
	if (systemId != nullptr) {
		$nc(this->m_locator)->setSystemId(systemId);
	}
}

void TreeWalker::init$($ContentHandler* contentHandler) {
	TreeWalker::init$(contentHandler, nullptr);
}

void TreeWalker::traverse($Node* pos) {
	$nc(this->m_contentHandler)->startDocument();
	traverseFragment(pos);
	$nc(this->m_contentHandler)->endDocument();
}

void TreeWalker::traverseFragment($Node* pos$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Node, pos, pos$renamed);
	$var($Node, top, pos);
	while (nullptr != pos) {
		startNode(pos);
		$var($Node, nextNode, pos->getFirstChild());
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
}

void TreeWalker::traverse($Node* pos$renamed, $Node* top) {
	$useLocalCurrentObjectStackCache();
	$var($Node, pos, pos$renamed);
	$nc(this->m_contentHandler)->startDocument();
	while (nullptr != pos) {
		startNode(pos);
		$var($Node, nextNode, pos->getFirstChild());
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
	$nc(this->m_contentHandler)->endDocument();
}

void TreeWalker::dispatachChars($Node* node) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DOM2DTM$CharacterNodeHandler, this->m_contentHandler)) {
		$nc(($cast($DOM2DTM$CharacterNodeHandler, this->m_contentHandler)))->characters(node);
	} else {
		$var($String, data, $nc(($cast($Text, node)))->getData());
		$var($chars, var$0, $nc(data)->toCharArray());
		$nc(this->m_contentHandler)->characters(var$0, 0, data->length());
	}
}

void TreeWalker::startNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($NodeConsumer, this->m_contentHandler)) {
		$nc(($cast($NodeConsumer, this->m_contentHandler)))->setOriginatingNode(node);
	}
	if ($instanceOf($Locator, node)) {
		$var($Locator, loc, $cast($Locator, node));
		$nc(this->m_locator)->setColumnNumber($nc(loc)->getColumnNumber());
		$nc(this->m_locator)->setLineNumber($nc(loc)->getLineNumber());
		$nc(this->m_locator)->setPublicId($($nc(loc)->getPublicId()));
		$nc(this->m_locator)->setSystemId($($nc(loc)->getSystemId()));
	} else {
		$nc(this->m_locator)->setColumnNumber(0);
		$nc(this->m_locator)->setLineNumber(0);
	}
	{
		$var($NamedNodeMap, atts, nullptr)
		int32_t nAttrs = 0;
		$var($String, ns, nullptr)
		switch ($nc(node)->getNodeType()) {
		case $Node::COMMENT_NODE:
			{
				{
					$var($String, data, $nc(($cast($Comment, node)))->getData());
					if ($instanceOf($LexicalHandler, this->m_contentHandler)) {
						$var($LexicalHandler, lh, $cast($LexicalHandler, this->m_contentHandler));
						$var($chars, var$0, $nc(data)->toCharArray());
						$nc(lh)->comment(var$0, 0, data->length());
					}
				}
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
				$assign(atts, $nc(($cast($Element, node)))->getAttributes());
				nAttrs = $nc(atts)->getLength();
				for (int32_t i = 0; i < nAttrs; ++i) {
					$var($Node, attr, atts->item(i));
					$var($String, attrName, $nc(attr)->getNodeName());
					bool var$1 = $nc(attrName)->equals("xmlns"_s);
					if (var$1 || $nc(attrName)->startsWith("xmlns:"_s)) {
						int32_t index = 0;
						$var($String, prefix, (index = attrName->indexOf(":"_s)) < 0 ? ""_s : attrName->substring(index + 1));
						$nc(this->m_contentHandler)->startPrefixMapping(prefix, $(attr->getNodeValue()));
					}
				}
				$assign(ns, $DOM2Helper::getNamespaceOfNode(node));
				if (nullptr == ns) {
					$assign(ns, ""_s);
				}
				$var($String, var$2, ns);
				$var($String, var$3, $DOM2Helper::getLocalNameOfNode(node));
				$var($String, var$4, node->getNodeName());
				$nc(this->m_contentHandler)->startElement(var$2, var$3, var$4, $$new($AttList, atts));
				break;
			}
		case $Node::PROCESSING_INSTRUCTION_NODE:
			{
				{
					$var($ProcessingInstruction, pi, $cast($ProcessingInstruction, node));
					$var($String, name, pi->getNodeName());
					if ($nc(name)->equals("xslt-next-is-raw"_s)) {
						this->nextIsRaw = true;
					} else {
						$var($String, var$5, pi->getNodeName());
						$nc(this->m_contentHandler)->processingInstruction(var$5, $(pi->getData()));
					}
				}
				break;
			}
		case $Node::CDATA_SECTION_NODE:
			{
				{
					bool isLexH = ($instanceOf($LexicalHandler, this->m_contentHandler));
					$var($LexicalHandler, lh, isLexH ? ($cast($LexicalHandler, this->m_contentHandler)) : ($LexicalHandler*)nullptr);
					if (isLexH) {
						$nc(lh)->startCDATA();
					}
					dispatachChars(node);
					{
						if (isLexH) {
							$nc(lh)->endCDATA();
						}
					}
				}
				break;
			}
		case $Node::TEXT_NODE:
			{
				{
					if (this->nextIsRaw) {
						this->nextIsRaw = false;
						$init($Result);
						$nc(this->m_contentHandler)->processingInstruction($Result::PI_DISABLE_OUTPUT_ESCAPING, ""_s);
						dispatachChars(node);
						$nc(this->m_contentHandler)->processingInstruction($Result::PI_ENABLE_OUTPUT_ESCAPING, ""_s);
					} else {
						dispatachChars(node);
					}
				}
				break;
			}
		case $Node::ENTITY_REFERENCE_NODE:
			{
				{
					$var($EntityReference, eref, $cast($EntityReference, node));
					if ($instanceOf($LexicalHandler, this->m_contentHandler)) {
						$nc(($cast($LexicalHandler, this->m_contentHandler)))->startEntity($(eref->getNodeName()));
					} else {
					}
				}
				break;
			}
		default:
			{}
		}
	}
}

void TreeWalker::endNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	{
		$var($String, ns, nullptr)
		$var($NamedNodeMap, atts, nullptr)
		int32_t nAttrs = 0;
		switch ($nc(node)->getNodeType()) {
		case $Node::DOCUMENT_NODE:
			{
				break;
			}
		case $Node::ELEMENT_NODE:
			{
				$assign(ns, $DOM2Helper::getNamespaceOfNode(node));
				if (nullptr == ns) {
					$assign(ns, ""_s);
				}
				$var($String, var$0, ns);
				$var($String, var$1, $DOM2Helper::getLocalNameOfNode(node));
				$nc(this->m_contentHandler)->endElement(var$0, var$1, $(node->getNodeName()));
				$assign(atts, $nc(($cast($Element, node)))->getAttributes());
				nAttrs = $nc(atts)->getLength();
				for (int32_t i = 0; i < nAttrs; ++i) {
					$var($Node, attr, atts->item(i));
					$var($String, attrName, $nc(attr)->getNodeName());
					bool var$2 = $nc(attrName)->equals("xmlns"_s);
					if (var$2 || $nc(attrName)->startsWith("xmlns:"_s)) {
						int32_t index = 0;
						$var($String, prefix, (index = attrName->indexOf(":"_s)) < 0 ? ""_s : attrName->substring(index + 1));
						$nc(this->m_contentHandler)->endPrefixMapping(prefix);
					}
				}
				break;
			}
		case $Node::CDATA_SECTION_NODE:
			{
				break;
			}
		case $Node::ENTITY_REFERENCE_NODE:
			{
				{
					$var($EntityReference, eref, $cast($EntityReference, node));
					if ($instanceOf($LexicalHandler, this->m_contentHandler)) {
						$var($LexicalHandler, lh, $cast($LexicalHandler, this->m_contentHandler));
						$nc(lh)->endEntity($(eref->getNodeName()));
					}
				}
				break;
			}
		default:
			{}
		}
	}
}

TreeWalker::TreeWalker() {
}

$Class* TreeWalker::load$($String* name, bool initialize) {
	$loadClass(TreeWalker, name, initialize, &_TreeWalker_ClassInfo_, allocate$TreeWalker);
	return class$;
}

$Class* TreeWalker::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com