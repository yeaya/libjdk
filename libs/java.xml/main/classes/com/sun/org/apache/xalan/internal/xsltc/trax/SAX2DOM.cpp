#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2DOM.h>

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Constants.h>
#include <com/sun/org/apache/xerces/internal/jaxp/DocumentBuilderFactoryImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <java/lang/ClassCastException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Stack.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/ext/Locator2.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef SAX2DOM
#undef XMLNS_PREFIX
#undef XMLNS_STRING
#undef XMLNS_URI

using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::runtime::Constants;
using $DocumentBuilderFactoryImpl = ::com::sun::org::apache::xerces::internal::jaxp::DocumentBuilderFactoryImpl;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Stack = ::java::util::Stack;
using $DocumentBuilder = ::javax::xml::parsers::DocumentBuilder;
using $DocumentBuilderFactory = ::javax::xml::parsers::DocumentBuilderFactory;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Comment = ::org::w3c::dom::Comment;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $Locator = ::org::xml::sax::Locator;
using $Locator2 = ::org::xml::sax::ext::Locator2;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _SAX2DOM_FieldInfo_[] = {
	{"_root", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(SAX2DOM, _root)},
	{"_document", "Lorg/w3c/dom/Document;", nullptr, $PRIVATE, $field(SAX2DOM, _document)},
	{"_nextSibling", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(SAX2DOM, _nextSibling)},
	{"_nodeStk", "Ljava/util/Stack;", "Ljava/util/Stack<Lorg/w3c/dom/Node;>;", $PRIVATE, $field(SAX2DOM, _nodeStk)},
	{"_namespaceDecls", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(SAX2DOM, _namespaceDecls)},
	{"_lastSibling", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(SAX2DOM, _lastSibling)},
	{"locator", "Lorg/xml/sax/Locator;", nullptr, $PRIVATE, $field(SAX2DOM, locator)},
	{"needToSetDocumentInfo", "Z", nullptr, $PRIVATE, $field(SAX2DOM, needToSetDocumentInfo)},
	{"_textBuffer", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $field(SAX2DOM, _textBuffer)},
	{"_nextSiblingCache", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(SAX2DOM, _nextSiblingCache)},
	{"_factory", "Ljavax/xml/parsers/DocumentBuilderFactory;", nullptr, $PRIVATE, $field(SAX2DOM, _factory)},
	{"_internal", "Z", nullptr, $PRIVATE, $field(SAX2DOM, _internal)},
	{}
};

$MethodInfo _SAX2DOM_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(SAX2DOM, init$, void, bool), "javax.xml.parsers.ParserConfigurationException"},
	{"<init>", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Z)V", nullptr, $PUBLIC, $method(SAX2DOM, init$, void, $Node*, $Node*, bool), "javax.xml.parsers.ParserConfigurationException"},
	{"<init>", "(Lorg/w3c/dom/Node;Z)V", nullptr, $PUBLIC, $method(SAX2DOM, init$, void, $Node*, bool), "javax.xml.parsers.ParserConfigurationException"},
	{"appendTextNode", "()V", nullptr, $PRIVATE, $method(SAX2DOM, appendTextNode, void)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, characters, void, $chars*, int32_t, int32_t)},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, comment, void, $chars*, int32_t, int32_t)},
	{"createDocument", "(Z)Lorg/w3c/dom/Document;", nullptr, $PRIVATE, $method(SAX2DOM, createDocument, $Document*, bool), "javax.xml.parsers.ParserConfigurationException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, endCDATA, void)},
	{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, endDTD, void)},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, endDocument, void)},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, endElement, void, $String*, $String*, $String*)},
	{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, endEntity, void, $String*)},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, endPrefixMapping, void, $String*)},
	{"getDOM", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, getDOM, $Node*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, ignorableWhitespace, void, $chars*, int32_t, int32_t)},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, processingInstruction, void, $String*, $String*)},
	{"setDocumentInfo", "()V", nullptr, $PRIVATE, $method(SAX2DOM, setDocumentInfo, void)},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, setDocumentLocator, void, $Locator*)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, skippedEntity, void, $String*)},
	{"startCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, startCDATA, void)},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, startDocument, void)},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, startElement, void, $String*, $String*, $String*, $Attributes*)},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, startEntity, void, $String*)},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DOM, startPrefixMapping, void, $String*, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SAX2DOM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.SAX2DOM",
	"java.lang.Object",
	"org.xml.sax.ContentHandler,org.xml.sax.ext.LexicalHandler,com.sun.org.apache.xalan.internal.xsltc.runtime.Constants",
	_SAX2DOM_FieldInfo_,
	_SAX2DOM_MethodInfo_
};

$Object* allocate$SAX2DOM($Class* clazz) {
	return $of($alloc(SAX2DOM));
}

int32_t SAX2DOM::hashCode() {
	 return this->$ContentHandler::hashCode();
}

bool SAX2DOM::equals(Object$* arg0) {
	 return this->$ContentHandler::equals(arg0);
}

$Object* SAX2DOM::clone() {
	 return this->$ContentHandler::clone();
}

$String* SAX2DOM::toString() {
	 return this->$ContentHandler::toString();
}

void SAX2DOM::finalize() {
	this->$ContentHandler::finalize();
}

void SAX2DOM::init$(bool overrideDefaultParser) {
	$set(this, _root, nullptr);
	$set(this, _document, nullptr);
	$set(this, _nextSibling, nullptr);
	$set(this, _nodeStk, $new($Stack));
	$set(this, _namespaceDecls, nullptr);
	$set(this, _lastSibling, nullptr);
	$set(this, locator, nullptr);
	this->needToSetDocumentInfo = true;
	$set(this, _textBuffer, $new($StringBuilder));
	$set(this, _nextSiblingCache, nullptr);
	this->_internal = true;
	$set(this, _document, createDocument(overrideDefaultParser));
	$set(this, _root, this->_document);
}

void SAX2DOM::init$($Node* root, $Node* nextSibling, bool overrideDefaultParser) {
	$set(this, _root, nullptr);
	$set(this, _document, nullptr);
	$set(this, _nextSibling, nullptr);
	$set(this, _nodeStk, $new($Stack));
	$set(this, _namespaceDecls, nullptr);
	$set(this, _lastSibling, nullptr);
	$set(this, locator, nullptr);
	this->needToSetDocumentInfo = true;
	$set(this, _textBuffer, $new($StringBuilder));
	$set(this, _nextSiblingCache, nullptr);
	this->_internal = true;
	$set(this, _root, root);
	if ($instanceOf($Document, root)) {
		$set(this, _document, $cast($Document, root));
	} else if (root != nullptr) {
		$set(this, _document, root->getOwnerDocument());
	} else {
		$set(this, _document, createDocument(overrideDefaultParser));
		$set(this, _root, this->_document);
	}
	$set(this, _nextSibling, nextSibling);
}

void SAX2DOM::init$($Node* root, bool overrideDefaultParser) {
	SAX2DOM::init$(root, nullptr, overrideDefaultParser);
}

$Node* SAX2DOM::getDOM() {
	return this->_root;
}

void SAX2DOM::characters($chars* ch, int32_t start, int32_t length) {
	if (length == 0) {
		return;
	}
	$var($Node, last, $cast($Node, $nc(this->_nodeStk)->peek()));
	if (!$equals(last, this->_document)) {
		$set(this, _nextSiblingCache, this->_nextSibling);
		$nc(this->_textBuffer)->append(ch, start, length);
	}
}

void SAX2DOM::appendTextNode() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->_textBuffer)->length() > 0) {
		$var($Node, last, $cast($Node, $nc(this->_nodeStk)->peek()));
		if (last == this->_root && this->_nextSiblingCache != nullptr) {
			$set(this, _lastSibling, $nc(last)->insertBefore($($nc(this->_document)->createTextNode($($nc(this->_textBuffer)->toString()))), this->_nextSiblingCache));
		} else {
			$set(this, _lastSibling, $nc(last)->appendChild($($nc(this->_document)->createTextNode($($nc(this->_textBuffer)->toString())))));
		}
		$nc(this->_textBuffer)->setLength(0);
	}
}

void SAX2DOM::startDocument() {
	$nc(this->_nodeStk)->push(this->_root);
}

void SAX2DOM::endDocument() {
	$nc(this->_nodeStk)->pop();
}

void SAX2DOM::setDocumentInfo() {
	if (this->locator == nullptr) {
		return;
	}
	try {
		$nc(this->_document)->setXmlVersion($($nc(($cast($Locator2, this->locator)))->getXMLVersion()));
	} catch ($ClassCastException& e) {
	}
}

void SAX2DOM::startElement($String* namespace$, $String* localName, $String* qName, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	appendTextNode();
	if (this->needToSetDocumentInfo) {
		setDocumentInfo();
		this->needToSetDocumentInfo = false;
	}
	$var($Element, tmp, $nc(this->_document)->createElementNS(namespace$, qName));
	if (this->_namespaceDecls != nullptr) {
		int32_t nDecls = $nc(this->_namespaceDecls)->size();
		for (int32_t i = 0; i < nDecls; ++i) {
			$var($String, prefix, $cast($String, $nc(this->_namespaceDecls)->get(i++)));
			$init($Constants);
			if (prefix == nullptr || $nc(prefix)->equals($Constants::EMPTYSTRING)) {
				$nc(tmp)->setAttributeNS($Constants::XMLNS_URI, $Constants::XMLNS_PREFIX, $cast($String, $($nc(this->_namespaceDecls)->get(i))));
			} else {
				$nc(tmp)->setAttributeNS($Constants::XMLNS_URI, $$str({$Constants::XMLNS_STRING, prefix}), $cast($String, $($nc(this->_namespaceDecls)->get(i))));
			}
		}
		$nc(this->_namespaceDecls)->clear();
	}
	int32_t nattrs = $nc(attrs)->getLength();
	for (int32_t i = 0; i < nattrs; ++i) {
		$var($String, attQName, attrs->getQName(i));
		$var($String, attURI, attrs->getURI(i));
		$init($XMLSymbols);
		$var($String, type, (attrs->getType(i) == nullptr) ? $XMLSymbols::fCDATASymbol : attrs->getType(i));
		if ($nc($(attrs->getLocalName(i)))->equals(""_s)) {
			$nc(tmp)->setAttribute(attQName, $(attrs->getValue(i)));
			if ($nc(type)->equals("ID"_s)) {
				tmp->setIdAttribute(attQName, true);
			}
		} else {
			$nc(tmp)->setAttributeNS(attURI, attQName, $(attrs->getValue(i)));
			if ($nc(type)->equals("ID"_s)) {
				tmp->setIdAttributeNS(attURI, $(attrs->getLocalName(i)), true);
			}
		}
	}
	$var($Node, last, $cast($Node, $nc(this->_nodeStk)->peek()));
	if (last == this->_root && this->_nextSibling != nullptr) {
		$nc(last)->insertBefore(tmp, this->_nextSibling);
	} else {
		$nc(last)->appendChild(tmp);
	}
	$nc(this->_nodeStk)->push(tmp);
	$set(this, _lastSibling, nullptr);
}

void SAX2DOM::endElement($String* namespace$, $String* localName, $String* qName) {
	appendTextNode();
	$nc(this->_nodeStk)->pop();
	$set(this, _lastSibling, nullptr);
}

void SAX2DOM::startPrefixMapping($String* prefix, $String* uri) {
	if (this->_namespaceDecls == nullptr) {
		$set(this, _namespaceDecls, $new($ArrayList, 2));
	}
	$nc(this->_namespaceDecls)->add(prefix);
	$nc(this->_namespaceDecls)->add(uri);
}

void SAX2DOM::endPrefixMapping($String* prefix) {
}

void SAX2DOM::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
}

void SAX2DOM::processingInstruction($String* target, $String* data) {
	$useLocalCurrentObjectStackCache();
	appendTextNode();
	$var($Node, last, $cast($Node, $nc(this->_nodeStk)->peek()));
	$var($ProcessingInstruction, pi, $nc(this->_document)->createProcessingInstruction(target, data));
	if (pi != nullptr) {
		if (last == this->_root && this->_nextSibling != nullptr) {
			$nc(last)->insertBefore(pi, this->_nextSibling);
		} else {
			$nc(last)->appendChild(pi);
		}
		$set(this, _lastSibling, pi);
	}
}

void SAX2DOM::setDocumentLocator($Locator* locator) {
	$set(this, locator, locator);
}

void SAX2DOM::skippedEntity($String* name) {
}

void SAX2DOM::comment($chars* ch, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	appendTextNode();
	$var($Node, last, $cast($Node, $nc(this->_nodeStk)->peek()));
	$var($Comment, comment, $nc(this->_document)->createComment($$new($String, ch, start, length)));
	if (comment != nullptr) {
		if (last == this->_root && this->_nextSibling != nullptr) {
			$nc(last)->insertBefore(comment, this->_nextSibling);
		} else {
			$nc(last)->appendChild(comment);
		}
		$set(this, _lastSibling, comment);
	}
}

void SAX2DOM::startCDATA() {
}

void SAX2DOM::endCDATA() {
}

void SAX2DOM::startEntity($String* name) {
}

void SAX2DOM::endDTD() {
}

void SAX2DOM::endEntity($String* name) {
}

void SAX2DOM::startDTD($String* name, $String* publicId, $String* systemId) {
}

$Document* SAX2DOM::createDocument(bool overrideDefaultParser) {
	$useLocalCurrentObjectStackCache();
	if (this->_factory == nullptr) {
		$set(this, _factory, $JdkXmlUtils::getDOMFactory(overrideDefaultParser));
		this->_internal = true;
		if (!($instanceOf($DocumentBuilderFactoryImpl, this->_factory))) {
			this->_internal = false;
		}
	}
	$var($Document, doc, nullptr);
	if (this->_internal) {
		$assign(doc, $nc($($nc(this->_factory)->newDocumentBuilder()))->newDocument());
	} else {
		$synchronized(SAX2DOM::class$) {
			$assign(doc, $nc($($nc(this->_factory)->newDocumentBuilder()))->newDocument());
		}
	}
	return doc;
}

SAX2DOM::SAX2DOM() {
}

$Class* SAX2DOM::load$($String* name, bool initialize) {
	$loadClass(SAX2DOM, name, initialize, &_SAX2DOM_ClassInfo_, allocate$SAX2DOM);
	return class$;
}

$Class* SAX2DOM::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com