#include <com/sun/org/apache/xml/internal/dtm/ref/DTMTreeWalker.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/utils/NodeConsumer.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <javax/xml/transform/Result.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef ENTITY_REFERENCE_NODE
#undef NULL
#undef PI_DISABLE_OUTPUT_ESCAPING
#undef PI_ENABLE_OUTPUT_ESCAPING
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $NodeConsumer = ::com::sun::org::apache::xml::internal::utils::NodeConsumer;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Result = ::javax::xml::transform::Result;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMTreeWalker_FieldInfo_[] = {
	{"m_contentHandler", "Lorg/xml/sax/ContentHandler;", nullptr, $PRIVATE, $field(DTMTreeWalker, m_contentHandler)},
	{"m_dtm", "Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PROTECTED, $field(DTMTreeWalker, m_dtm)},
	{"nextIsRaw", "Z", nullptr, 0, $field(DTMTreeWalker, nextIsRaw)},
	{}
};

$MethodInfo _DTMTreeWalker_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DTMTreeWalker, init$, void)},
	{"<init>", "(Lorg/xml/sax/ContentHandler;Lcom/sun/org/apache/xml/internal/dtm/DTM;)V", nullptr, $PUBLIC, $method(DTMTreeWalker, init$, void, $ContentHandler*, $DTM*)},
	{"dispatachChars", "(I)V", nullptr, $PRIVATE | $FINAL, $method(DTMTreeWalker, dispatachChars, void, int32_t), "org.xml.sax.SAXException"},
	{"endNode", "(I)V", nullptr, $PROTECTED, $virtualMethod(DTMTreeWalker, endNode, void, int32_t), "org.xml.sax.SAXException"},
	{"getcontentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(DTMTreeWalker, getcontentHandler, $ContentHandler*)},
	{"setDTM", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;)V", nullptr, $PUBLIC, $virtualMethod(DTMTreeWalker, setDTM, void, $DTM*)},
	{"setcontentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(DTMTreeWalker, setcontentHandler, void, $ContentHandler*)},
	{"startNode", "(I)V", nullptr, $PROTECTED, $virtualMethod(DTMTreeWalker, startNode, void, int32_t), "org.xml.sax.SAXException"},
	{"traverse", "(I)V", nullptr, $PUBLIC, $virtualMethod(DTMTreeWalker, traverse, void, int32_t), "org.xml.sax.SAXException"},
	{"traverse", "(II)V", nullptr, $PUBLIC, $virtualMethod(DTMTreeWalker, traverse, void, int32_t, int32_t), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _DTMTreeWalker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMTreeWalker",
	"java.lang.Object",
	nullptr,
	_DTMTreeWalker_FieldInfo_,
	_DTMTreeWalker_MethodInfo_
};

$Object* allocate$DTMTreeWalker($Class* clazz) {
	return $of($alloc(DTMTreeWalker));
}

void DTMTreeWalker::setDTM($DTM* dtm) {
	$set(this, m_dtm, dtm);
}

$ContentHandler* DTMTreeWalker::getcontentHandler() {
	return this->m_contentHandler;
}

void DTMTreeWalker::setcontentHandler($ContentHandler* ch) {
	$set(this, m_contentHandler, ch);
}

void DTMTreeWalker::init$() {
	$set(this, m_contentHandler, nullptr);
	this->nextIsRaw = false;
}

void DTMTreeWalker::init$($ContentHandler* contentHandler, $DTM* dtm) {
	$set(this, m_contentHandler, nullptr);
	this->nextIsRaw = false;
	$set(this, m_contentHandler, contentHandler);
	$set(this, m_dtm, dtm);
}

void DTMTreeWalker::traverse(int32_t pos) {
	int32_t top = pos;
	while ($DTM::NULL != pos) {
		startNode(pos);
		int32_t nextNode = $nc(this->m_dtm)->getFirstChild(pos);
		while ($DTM::NULL == nextNode) {
			endNode(pos);
			if (top == pos) {
				break;
			}
			nextNode = $nc(this->m_dtm)->getNextSibling(pos);
			if ($DTM::NULL == nextNode) {
				pos = $nc(this->m_dtm)->getParent(pos);
				if (($DTM::NULL == pos) || (top == pos)) {
					if ($DTM::NULL != pos) {
						endNode(pos);
					}
					nextNode = $DTM::NULL;
					break;
				}
			}
		}
		pos = nextNode;
	}
}

void DTMTreeWalker::traverse(int32_t pos, int32_t top) {
	while ($DTM::NULL != pos) {
		startNode(pos);
		int32_t nextNode = $nc(this->m_dtm)->getFirstChild(pos);
		while ($DTM::NULL == nextNode) {
			endNode(pos);
			if (($DTM::NULL != top) && top == pos) {
				break;
			}
			nextNode = $nc(this->m_dtm)->getNextSibling(pos);
			if ($DTM::NULL == nextNode) {
				pos = $nc(this->m_dtm)->getParent(pos);
				if (($DTM::NULL == pos) || (($DTM::NULL != top) && (top == pos))) {
					nextNode = $DTM::NULL;
					break;
				}
			}
		}
		pos = nextNode;
	}
}

void DTMTreeWalker::dispatachChars(int32_t node) {
	$nc(this->m_dtm)->dispatchCharactersEvents(node, this->m_contentHandler, false);
}

void DTMTreeWalker::startNode(int32_t node) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($NodeConsumer, this->m_contentHandler)) {
	}
	{
		$var($DTM, dtm, nullptr)
		$var($String, ns, nullptr)
		$var($AttributesImpl, attrs, nullptr)
		switch ($nc(this->m_dtm)->getNodeType(node)) {
		case $DTM::COMMENT_NODE:
			{
				{
					$var($XMLString, data, $nc(this->m_dtm)->getStringValue(node));
					if ($instanceOf($LexicalHandler, this->m_contentHandler)) {
						$var($LexicalHandler, lh, $cast($LexicalHandler, this->m_contentHandler));
						$nc(data)->dispatchAsComment(lh);
					}
				}
				break;
			}
		case $DTM::DOCUMENT_FRAGMENT_NODE:
			{
				break;
			}
		case $DTM::DOCUMENT_NODE:
			{
				$nc(this->m_contentHandler)->startDocument();
				break;
			}
		case $DTM::ELEMENT_NODE:
			{
				$assign(dtm, this->m_dtm);
				for (int32_t nsn = $nc(dtm)->getFirstNamespaceNode(node, true); $DTM::NULL != nsn; nsn = dtm->getNextNamespaceNode(node, nsn, true)) {
					$var($String, prefix, dtm->getNodeNameX(nsn));
					$nc(this->m_contentHandler)->startPrefixMapping(prefix, $(dtm->getNodeValue(nsn)));
				}
				$assign(ns, $nc(dtm)->getNamespaceURI(node));
				if (nullptr == ns) {
					$assign(ns, ""_s);
				}
				$assign(attrs, $new($AttributesImpl));
				for (int32_t i = dtm->getFirstAttribute(node); i != $DTM::NULL; i = dtm->getNextAttribute(i)) {
					$var($String, var$0, dtm->getNamespaceURI(i));
					$var($String, var$1, dtm->getLocalName(i));
					$var($String, var$2, dtm->getNodeName(i));
					$var($String, var$3, "CDATA"_s);
					$nc(attrs)->addAttribute(var$0, var$1, var$2, var$3, $(dtm->getNodeValue(i)));
				}
				$var($String, var$4, ns);
				$var($String, var$5, $nc(this->m_dtm)->getLocalName(node));
				$nc(this->m_contentHandler)->startElement(var$4, var$5, $($nc(this->m_dtm)->getNodeName(node)), attrs);
				break;
			}
		case $DTM::PROCESSING_INSTRUCTION_NODE:
			{
				{
					$var($String, name, $nc(this->m_dtm)->getNodeName(node));
					if ($nc(name)->equals("xslt-next-is-raw"_s)) {
						this->nextIsRaw = true;
					} else {
						$nc(this->m_contentHandler)->processingInstruction(name, $($nc(this->m_dtm)->getNodeValue(node)));
					}
				}
				break;
			}
		case $DTM::CDATA_SECTION_NODE:
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
		case $DTM::TEXT_NODE:
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
		case $DTM::ENTITY_REFERENCE_NODE:
			{
				{
					if ($instanceOf($LexicalHandler, this->m_contentHandler)) {
						$nc(($cast($LexicalHandler, this->m_contentHandler)))->startEntity($($nc(this->m_dtm)->getNodeName(node)));
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

void DTMTreeWalker::endNode(int32_t node) {
	$useLocalCurrentObjectStackCache();
	{
		$var($String, ns, nullptr)
		switch ($nc(this->m_dtm)->getNodeType(node)) {
		case $DTM::DOCUMENT_NODE:
			{
				$nc(this->m_contentHandler)->endDocument();
				break;
			}
		case $DTM::ELEMENT_NODE:
			{
				$assign(ns, $nc(this->m_dtm)->getNamespaceURI(node));
				if (nullptr == ns) {
					$assign(ns, ""_s);
				}
				$var($String, var$0, ns);
				$var($String, var$1, $nc(this->m_dtm)->getLocalName(node));
				$nc(this->m_contentHandler)->endElement(var$0, var$1, $($nc(this->m_dtm)->getNodeName(node)));
				for (int32_t nsn = $nc(this->m_dtm)->getFirstNamespaceNode(node, true); $DTM::NULL != nsn; nsn = $nc(this->m_dtm)->getNextNamespaceNode(node, nsn, true)) {
					$var($String, prefix, $nc(this->m_dtm)->getNodeNameX(nsn));
					$nc(this->m_contentHandler)->endPrefixMapping(prefix);
				}
				break;
			}
		case $DTM::CDATA_SECTION_NODE:
			{
				break;
			}
		case $DTM::ENTITY_REFERENCE_NODE:
			{
				{
					if ($instanceOf($LexicalHandler, this->m_contentHandler)) {
						$var($LexicalHandler, lh, $cast($LexicalHandler, this->m_contentHandler));
						$nc(lh)->endEntity($($nc(this->m_dtm)->getNodeName(node)));
					}
				}
				break;
			}
		default:
			{}
		}
	}
}

DTMTreeWalker::DTMTreeWalker() {
}

$Class* DTMTreeWalker::load$($String* name, bool initialize) {
	$loadClass(DTMTreeWalker, name, initialize, &_DTMTreeWalker_ClassInfo_, allocate$DTMTreeWalker);
	return class$;
}

$Class* DTMTreeWalker::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com