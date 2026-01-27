#include <com/sun/org/apache/xml/internal/utils/DOMBuilder.h>

#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/XMLCharacterRecognizer.h>
#include <java/io/Writer.h>
#include <java/util/Stack.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/EntityReference.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef ER_CANT_HAVE_MORE_THAN_ONE_ROOT
#undef ER_CANT_OUTPUT_TEXT_BEFORE_DOC
#undef TEXT_NODE

using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $XMLCharacterRecognizer = ::com::sun::org::apache::xml::internal::utils::XMLCharacterRecognizer;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Stack = ::java::util::Stack;
using $CDATASection = ::org::w3c::dom::CDATASection;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Document = ::org::w3c::dom::Document;
using $DocumentFragment = ::org::w3c::dom::DocumentFragment;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $Text = ::org::w3c::dom::Text;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _DOMBuilder_FieldInfo_[] = {
	{"m_doc", "Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $field(DOMBuilder, m_doc)},
	{"m_currentNode", "Lorg/w3c/dom/Node;", nullptr, $PROTECTED, $field(DOMBuilder, m_currentNode)},
	{"m_root", "Lorg/w3c/dom/Node;", nullptr, $PROTECTED, $field(DOMBuilder, m_root)},
	{"m_nextSibling", "Lorg/w3c/dom/Node;", nullptr, $PROTECTED, $field(DOMBuilder, m_nextSibling)},
	{"m_docFrag", "Lorg/w3c/dom/DocumentFragment;", nullptr, $PUBLIC, $field(DOMBuilder, m_docFrag)},
	{"m_elemStack", "Ljava/util/Stack;", "Ljava/util/Stack<Lorg/w3c/dom/Node;>;", $PROTECTED, $field(DOMBuilder, m_elemStack)},
	{"m_inCData", "Z", nullptr, $PROTECTED, $field(DOMBuilder, m_inCData)},
	{}
};

$MethodInfo _DOMBuilder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Document;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(DOMBuilder, init$, void, $Document*, $Node*)},
	{"<init>", "(Lorg/w3c/dom/Document;Lorg/w3c/dom/DocumentFragment;)V", nullptr, $PUBLIC, $method(DOMBuilder, init$, void, $Document*, $DocumentFragment*)},
	{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(DOMBuilder, init$, void, $Document*)},
	{"append", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $virtualMethod(DOMBuilder, append, void, $Node*), "org.xml.sax.SAXException"},
	{"cdata", "([CII)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, cdata, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"charactersRaw", "([CII)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, charactersRaw, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, endDTD, void), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, endEntity, void, $String*), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"entityReference", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, entityReference, void, $String*), "org.xml.sax.SAXException"},
	{"getCurrentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, getCurrentNode, $Node*)},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, getNextSibling, $Node*)},
	{"getRootDocument", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, getRootDocument, $Node*)},
	{"getRootNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, getRootNode, $Node*)},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, getWriter, $Writer*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"isOutsideDocElem", "()Z", nullptr, $PRIVATE, $method(DOMBuilder, isOutsideDocElem, bool)},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, setDocumentLocator, void, $Locator*)},
	{"setIDAttribute", "(Ljava/lang/String;Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, setIDAttribute, void, $String*, $Element*)},
	{"setNextSibling", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, setNextSibling, void, $Node*)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, startCDATA, void), "org.xml.sax.SAXException"},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, startEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMBuilder, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMBuilder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.DOMBuilder",
	"java.lang.Object",
	"org.xml.sax.ContentHandler,org.xml.sax.ext.LexicalHandler",
	_DOMBuilder_FieldInfo_,
	_DOMBuilder_MethodInfo_
};

$Object* allocate$DOMBuilder($Class* clazz) {
	return $of($alloc(DOMBuilder));
}

int32_t DOMBuilder::hashCode() {
	 return this->$ContentHandler::hashCode();
}

bool DOMBuilder::equals(Object$* arg0) {
	 return this->$ContentHandler::equals(arg0);
}

$Object* DOMBuilder::clone() {
	 return this->$ContentHandler::clone();
}

$String* DOMBuilder::toString() {
	 return this->$ContentHandler::toString();
}

void DOMBuilder::finalize() {
	this->$ContentHandler::finalize();
}

void DOMBuilder::init$($Document* doc, $Node* node) {
	$set(this, m_currentNode, nullptr);
	$set(this, m_root, nullptr);
	$set(this, m_nextSibling, nullptr);
	$set(this, m_docFrag, nullptr);
	$set(this, m_elemStack, $new($Stack));
	this->m_inCData = false;
	$set(this, m_doc, doc);
	$set(this, m_currentNode, ($set(this, m_root, node)));
	if ($instanceOf($Element, node)) {
		$nc(this->m_elemStack)->push(node);
	}
}

void DOMBuilder::init$($Document* doc, $DocumentFragment* docFrag) {
	$set(this, m_currentNode, nullptr);
	$set(this, m_root, nullptr);
	$set(this, m_nextSibling, nullptr);
	$set(this, m_docFrag, nullptr);
	$set(this, m_elemStack, $new($Stack));
	this->m_inCData = false;
	$set(this, m_doc, doc);
	$set(this, m_docFrag, docFrag);
}

void DOMBuilder::init$($Document* doc) {
	$set(this, m_currentNode, nullptr);
	$set(this, m_root, nullptr);
	$set(this, m_nextSibling, nullptr);
	$set(this, m_docFrag, nullptr);
	$set(this, m_elemStack, $new($Stack));
	this->m_inCData = false;
	$set(this, m_doc, doc);
}

$Node* DOMBuilder::getRootDocument() {
	return (nullptr != this->m_docFrag) ? static_cast<$Node*>(this->m_docFrag) : static_cast<$Node*>(this->m_doc);
}

$Node* DOMBuilder::getRootNode() {
	return this->m_root;
}

$Node* DOMBuilder::getCurrentNode() {
	return this->m_currentNode;
}

void DOMBuilder::setNextSibling($Node* nextSibling) {
	$set(this, m_nextSibling, nextSibling);
}

$Node* DOMBuilder::getNextSibling() {
	return this->m_nextSibling;
}

$Writer* DOMBuilder::getWriter() {
	return nullptr;
}

void DOMBuilder::append($Node* newNode) {
	$useLocalCurrentObjectStackCache();
	$var($Node, currentNode, this->m_currentNode);
	if (nullptr != currentNode) {
		if (currentNode == this->m_root && this->m_nextSibling != nullptr) {
			currentNode->insertBefore(newNode, this->m_nextSibling);
		} else {
			currentNode->appendChild(newNode);
		}
	} else if (nullptr != this->m_docFrag) {
		if (this->m_nextSibling != nullptr) {
			$nc(this->m_docFrag)->insertBefore(newNode, this->m_nextSibling);
		} else {
			$nc(this->m_docFrag)->appendChild(newNode);
		}
	} else {
		bool ok = true;
		int16_t type = $nc(newNode)->getNodeType();
		if (type == $Node::TEXT_NODE) {
			$var($String, data, newNode->getNodeValue());
			if ((nullptr != data) && ($(data->trim())->length() > 0)) {
				$init($XMLErrorResources);
				$throwNew($SAXException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, nullptr)));
			}
			ok = false;
		} else if (type == $Node::ELEMENT_NODE) {
			if ($nc(this->m_doc)->getDocumentElement() != nullptr) {
				ok = false;
				$init($XMLErrorResources);
				$throwNew($SAXException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, nullptr)));
			}
		}
		if (ok) {
			if (this->m_nextSibling != nullptr) {
				$nc(this->m_doc)->insertBefore(newNode, this->m_nextSibling);
			} else {
				$nc(this->m_doc)->appendChild(newNode);
			}
		}
	}
}

void DOMBuilder::setDocumentLocator($Locator* locator) {
}

void DOMBuilder::startDocument() {
}

void DOMBuilder::endDocument() {
}

void DOMBuilder::startElement($String* ns, $String* localName, $String* name, $Attributes* atts) {
	$useLocalCurrentObjectStackCache();
	$var($Element, elem, nullptr);
	if ((nullptr == ns) || ($nc(ns)->length() == 0)) {
		$assign(elem, $nc(this->m_doc)->createElementNS(nullptr, name));
	} else {
		$assign(elem, $nc(this->m_doc)->createElementNS(ns, name));
	}
	append(elem);
	try {
		int32_t nAtts = $nc(atts)->getLength();
		if (0 != nAtts) {
			for (int32_t i = 0; i < nAtts; ++i) {
				if ($nc($(atts->getType(i)))->equalsIgnoreCase("ID"_s)) {
					setIDAttribute($(atts->getValue(i)), elem);
				}
				$var($String, attrNS, atts->getURI(i));
				if (""_s->equals(attrNS)) {
					$assign(attrNS, nullptr);
				}
				$var($String, attrQName, atts->getQName(i));
				bool var$0 = $nc(attrQName)->startsWith("xmlns:"_s);
				if (var$0 || $nc(attrQName)->equals("xmlns"_s)) {
					$assign(attrNS, "http://www.w3.org/2000/xmlns/"_s);
				}
				$nc(elem)->setAttributeNS(attrNS, attrQName, $(atts->getValue(i)));
			}
		}
		$nc(this->m_elemStack)->push(elem);
		$set(this, m_currentNode, elem);
	} catch ($Exception& de) {
		$throwNew($SAXException, $cast($Exception, de));
	}
}

void DOMBuilder::endElement($String* ns, $String* localName, $String* name) {
	$nc(this->m_elemStack)->pop();
	$set(this, m_currentNode, $nc(this->m_elemStack)->isEmpty() ? ($Node*)nullptr : $cast($Node, $nc(this->m_elemStack)->peek()));
}

void DOMBuilder::setIDAttribute($String* id, $Element* elem) {
}

void DOMBuilder::characters($chars* ch, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isOutsideDocElem();
	if (var$0 && $XMLCharacterRecognizer::isWhiteSpace(ch, start, length)) {
		return;
	}
	if (this->m_inCData) {
		cdata(ch, start, length);
		return;
	}
	$var($String, s, $new($String, ch, start, length));
	$var($Node, childNode, nullptr);
	$assign(childNode, this->m_currentNode != nullptr ? $nc(this->m_currentNode)->getLastChild() : ($Node*)nullptr);
	if (childNode != nullptr && childNode->getNodeType() == $Node::TEXT_NODE) {
		$nc(($cast($Text, childNode)))->appendData(s);
	} else {
		$var($Text, text, $nc(this->m_doc)->createTextNode(s));
		append(text);
	}
}

void DOMBuilder::charactersRaw($chars* ch, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isOutsideDocElem();
	if (var$0 && $XMLCharacterRecognizer::isWhiteSpace(ch, start, length)) {
		return;
	}
	$var($String, s, $new($String, ch, start, length));
	append($($nc(this->m_doc)->createProcessingInstruction("xslt-next-is-raw"_s, "formatter-to-dom"_s)));
	append($($nc(this->m_doc)->createTextNode(s)));
}

void DOMBuilder::startEntity($String* name) {
}

void DOMBuilder::endEntity($String* name) {
}

void DOMBuilder::entityReference($String* name) {
	append($($nc(this->m_doc)->createEntityReference(name)));
}

void DOMBuilder::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (isOutsideDocElem()) {
		return;
	}
	$var($String, s, $new($String, ch, start, length));
	append($($nc(this->m_doc)->createTextNode(s)));
}

bool DOMBuilder::isOutsideDocElem() {
	bool var$0 = (nullptr == this->m_docFrag) && $nc(this->m_elemStack)->size() == 0;
	return var$0 && (nullptr == this->m_currentNode || $nc(this->m_currentNode)->getNodeType() == $Node::DOCUMENT_NODE);
}

void DOMBuilder::processingInstruction($String* target, $String* data) {
	append($($nc(this->m_doc)->createProcessingInstruction(target, data)));
}

void DOMBuilder::comment($chars* ch, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	append($($nc(this->m_doc)->createComment($$new($String, ch, start, length))));
}

void DOMBuilder::startCDATA() {
	this->m_inCData = true;
	append($($nc(this->m_doc)->createCDATASection(""_s)));
}

void DOMBuilder::endCDATA() {
	this->m_inCData = false;
}

void DOMBuilder::cdata($chars* ch, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isOutsideDocElem();
	if (var$0 && $XMLCharacterRecognizer::isWhiteSpace(ch, start, length)) {
		return;
	}
	$var($String, s, $new($String, ch, start, length));
	$var($CDATASection, section, $cast($CDATASection, $nc(this->m_currentNode)->getLastChild()));
	$nc(section)->appendData(s);
}

void DOMBuilder::startDTD($String* name, $String* publicId, $String* systemId) {
}

void DOMBuilder::endDTD() {
}

void DOMBuilder::startPrefixMapping($String* prefix, $String* uri) {
}

void DOMBuilder::endPrefixMapping($String* prefix) {
}

void DOMBuilder::skippedEntity($String* name) {
}

DOMBuilder::DOMBuilder() {
}

$Class* DOMBuilder::load$($String* name, bool initialize) {
	$loadClass(DOMBuilder, name, initialize, &_DOMBuilder_ClassInfo_, allocate$DOMBuilder);
	return class$;
}

$Class* DOMBuilder::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com