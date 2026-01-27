#include <com/sun/org/apache/xalan/internal/xsltc/trax/DOM2SAX.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <java/io/IOException.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Stack.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef DOM2SAX
#undef ELEMENT_NODE
#undef EMPTYSTRING
#undef ENTITY_NODE
#undef ENTITY_REFERENCE_NODE
#undef NOTATION_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE
#undef XMLNS_PREFIX

using $SAXImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Stack = ::java::util::Stack;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $XMLReader = ::org::xml::sax::XMLReader;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _DOM2SAX_FieldInfo_[] = {
	{"EMPTYSTRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOM2SAX, EMPTYSTRING)},
	{"XMLNS_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOM2SAX, XMLNS_PREFIX)},
	{"_dom", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOM2SAX, _dom)},
	{"_sax", "Lorg/xml/sax/ContentHandler;", nullptr, $PRIVATE, $field(DOM2SAX, _sax)},
	{"_lex", "Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PRIVATE, $field(DOM2SAX, _lex)},
	{"_saxImpl", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;", nullptr, $PRIVATE, $field(DOM2SAX, _saxImpl)},
	{"_nsPrefixes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Stack<Ljava/lang/String;>;>;", $PRIVATE, $field(DOM2SAX, _nsPrefixes)},
	{}
};

$MethodInfo _DOM2SAX_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(DOM2SAX, init$, void, $Node*)},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(DOM2SAX, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, getColumnNumber, int32_t)},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, getContentHandler, $ContentHandler*)},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, getDTDHandler, $DTDHandler*)},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, getEntityResolver, $EntityResolver*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, getLineNumber, int32_t)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, getSystemId, $String*)},
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, parse, void, $InputSource*), "java.io.IOException,org.xml.sax.SAXException"},
	{"parse", "()V", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, parse, void), "java.io.IOException,org.xml.sax.SAXException"},
	{"parse", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(DOM2SAX, parse, void, $Node*), "java.io.IOException,org.xml.sax.SAXException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, parse, void, $String*), "java.io.IOException,org.xml.sax.SAXException"},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, setContentHandler, void, $ContentHandler*), "java.lang.NullPointerException"},
	{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, setDTDHandler, void, $DTDHandler*), "java.lang.NullPointerException"},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, setEntityResolver, void, $EntityResolver*), "java.lang.NullPointerException"},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, setErrorHandler, void, $ErrorHandler*), "java.lang.NullPointerException"},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DOM2SAX, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(DOM2SAX, startPrefixMapping, bool, $String*, $String*), "org.xml.sax.SAXException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOM2SAX_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.DOM2SAX",
	"java.lang.Object",
	"org.xml.sax.XMLReader,org.xml.sax.Locator",
	_DOM2SAX_FieldInfo_,
	_DOM2SAX_MethodInfo_
};

$Object* allocate$DOM2SAX($Class* clazz) {
	return $of($alloc(DOM2SAX));
}

int32_t DOM2SAX::hashCode() {
	 return this->$XMLReader::hashCode();
}

bool DOM2SAX::equals(Object$* arg0) {
	 return this->$XMLReader::equals(arg0);
}

$Object* DOM2SAX::clone() {
	 return this->$XMLReader::clone();
}

$String* DOM2SAX::toString() {
	 return this->$XMLReader::toString();
}

void DOM2SAX::finalize() {
	this->$XMLReader::finalize();
}

$String* DOM2SAX::EMPTYSTRING = nullptr;
$String* DOM2SAX::XMLNS_PREFIX = nullptr;

void DOM2SAX::init$($Node* root) {
	$set(this, _dom, nullptr);
	$set(this, _sax, nullptr);
	$set(this, _lex, nullptr);
	$set(this, _saxImpl, nullptr);
	$set(this, _nsPrefixes, $new($HashMap));
	$set(this, _dom, root);
}

$ContentHandler* DOM2SAX::getContentHandler() {
	return this->_sax;
}

void DOM2SAX::setContentHandler($ContentHandler* handler) {
	$set(this, _sax, handler);
	if ($instanceOf($LexicalHandler, handler)) {
		$set(this, _lex, $cast($LexicalHandler, handler));
	}
	if ($instanceOf($SAXImpl, handler)) {
		$set(this, _saxImpl, $cast($SAXImpl, handler));
	}
}

bool DOM2SAX::startPrefixMapping($String* prefix, $String* uri) {
	$useLocalCurrentObjectStackCache();
	bool pushed = true;
	$var($Stack, uriStack, $cast($Stack, $nc(this->_nsPrefixes)->get(prefix)));
	if (uriStack != nullptr) {
		if (uriStack->isEmpty()) {
			$nc(this->_sax)->startPrefixMapping(prefix, uri);
			uriStack->push(uri);
		} else {
			$var($String, lastUri, $cast($String, uriStack->peek()));
			if (!$nc(lastUri)->equals(uri)) {
				$nc(this->_sax)->startPrefixMapping(prefix, uri);
				uriStack->push(uri);
			} else {
				pushed = false;
			}
		}
	} else {
		$nc(this->_sax)->startPrefixMapping(prefix, uri);
		$nc(this->_nsPrefixes)->put(prefix, $assign(uriStack, $new($Stack)));
		uriStack->push(uri);
	}
	return pushed;
}

void DOM2SAX::endPrefixMapping($String* prefix) {
	$var($Stack, uriStack, $cast($Stack, $nc(this->_nsPrefixes)->get(prefix)));
	if (uriStack != nullptr) {
		$nc(this->_sax)->endPrefixMapping(prefix);
		uriStack->pop();
	}
}

void DOM2SAX::parse($InputSource* unused) {
	parse(this->_dom);
}

void DOM2SAX::parse() {
	if (this->_dom != nullptr) {
		bool isIncomplete = ($nc(this->_dom)->getNodeType() != $Node::DOCUMENT_NODE);
		if (isIncomplete) {
			$nc(this->_sax)->startDocument();
			parse(this->_dom);
			$nc(this->_sax)->endDocument();
		} else {
			parse(this->_dom);
		}
	}
}

void DOM2SAX::parse($Node* node) {
	$useLocalCurrentObjectStackCache();
	if (node == nullptr) {
		return;
	}
	{
		$var($String, cdata, nullptr)
		$var($Node, next, nullptr)
		$var($String, prefix, nullptr)
		$var($List, pushedPrefixes, nullptr)
		$var($AttributesImpl, attrs, nullptr)
		$var($NamedNodeMap, map, nullptr)
		int32_t length = 0;
		$var($String, qname, nullptr)
		$var($String, uri, nullptr)
		$var($String, localName, nullptr)
		int32_t nPushedPrefixes = 0;
		$var($String, data, nullptr)
		switch ($nc(node)->getNodeType()) {
		case $Node::ATTRIBUTE_NODE:
			{}
		case $Node::DOCUMENT_FRAGMENT_NODE:
			{}
		case $Node::DOCUMENT_TYPE_NODE:
			{}
		case $Node::ENTITY_NODE:
			{}
		case $Node::ENTITY_REFERENCE_NODE:
			{}
		case $Node::NOTATION_NODE:
			{
				break;
			}
		case $Node::CDATA_SECTION_NODE:
			{
				$assign(cdata, node->getNodeValue());
				if (this->_lex != nullptr) {
					$nc(this->_lex)->startCDATA();
					$var($chars, var$0, $nc(cdata)->toCharArray());
					$nc(this->_sax)->characters(var$0, 0, cdata->length());
					$nc(this->_lex)->endCDATA();
				} else {
					$var($chars, var$1, $nc(cdata)->toCharArray());
					$nc(this->_sax)->characters(var$1, 0, cdata->length());
				}
				break;
			}
		case $Node::COMMENT_NODE:
			{
				if (this->_lex != nullptr) {
					$var($String, value, node->getNodeValue());
					$var($chars, var$2, $nc(value)->toCharArray());
					$nc(this->_lex)->comment(var$2, 0, value->length());
				}
				break;
			}
		case $Node::DOCUMENT_NODE:
			{
				$nc(this->_sax)->setDocumentLocator(this);
				$nc(this->_sax)->startDocument();
				$assign(next, node->getFirstChild());
				while (next != nullptr) {
					parse(next);
					$assign(next, next->getNextSibling());
				}
				$nc(this->_sax)->endDocument();
				break;
			}
		case $Node::ELEMENT_NODE:
			{
				$assign(pushedPrefixes, $new($ArrayList));
				$assign(attrs, $new($AttributesImpl));
				$assign(map, node->getAttributes());
				length = $nc(map)->getLength();
				for (int32_t i = 0; i < length; ++i) {
					$var($Node, attr, map->item(i));
					$var($String, qnameAttr, $nc(attr)->getNodeName());
					if ($nc(qnameAttr)->startsWith(DOM2SAX::XMLNS_PREFIX)) {
						$var($String, uriAttr, attr->getNodeValue());
						int32_t colon = qnameAttr->lastIndexOf((int32_t)u':');
						$assign(prefix, (colon > 0) ? qnameAttr->substring(colon + 1) : DOM2SAX::EMPTYSTRING);
						if (startPrefixMapping(prefix, uriAttr)) {
							$nc(pushedPrefixes)->add(prefix);
						}
					}
				}
				for (int32_t i = 0; i < length; ++i) {
					$var($Node, attr, map->item(i));
					$var($String, qnameAttr, $nc(attr)->getNodeName());
					if (!$nc(qnameAttr)->startsWith(DOM2SAX::XMLNS_PREFIX)) {
						$var($String, uriAttr, attr->getNamespaceURI());
						if (uriAttr != nullptr) {
							int32_t colon = qnameAttr->lastIndexOf((int32_t)u':');
							if (colon > 0) {
								$assign(prefix, qnameAttr->substring(0, colon));
							} else {
								$assign(prefix, $BasisLibrary::generatePrefix());
								$assign(qnameAttr, $str({prefix, $$str(u':'), qnameAttr}));
							}
							if (startPrefixMapping(prefix, uriAttr)) {
								$nc(pushedPrefixes)->add(prefix);
							}
						}
						$var($String, var$3, attr->getNamespaceURI());
						$var($String, var$4, attr->getLocalName());
						$var($String, var$5, qnameAttr);
						$var($String, var$6, "CDATA"_s);
						$nc(attrs)->addAttribute(var$3, var$4, var$5, var$6, $(attr->getNodeValue()));
					}
				}
				$assign(qname, node->getNodeName());
				$assign(uri, node->getNamespaceURI());
				$assign(localName, node->getLocalName());
				if (uri != nullptr) {
					int32_t colon = $nc(qname)->lastIndexOf((int32_t)u':');
					$assign(prefix, (colon > 0) ? qname->substring(0, colon) : DOM2SAX::EMPTYSTRING);
					if (startPrefixMapping(prefix, uri)) {
						$nc(pushedPrefixes)->add(prefix);
					}
				}
				if (this->_saxImpl != nullptr) {
					$nc(this->_saxImpl)->startElement(uri, localName, qname, attrs, node);
				} else {
					$nc(this->_sax)->startElement(uri, localName, qname, attrs);
				}
				$assign(next, node->getFirstChild());
				while (next != nullptr) {
					parse(next);
					$assign(next, next->getNextSibling());
				}
				$nc(this->_sax)->endElement(uri, localName, qname);
				nPushedPrefixes = $nc(pushedPrefixes)->size();
				for (int32_t i = 0; i < nPushedPrefixes; ++i) {
					endPrefixMapping($cast($String, $(pushedPrefixes->get(i))));
				}
				break;
			}
		case $Node::PROCESSING_INSTRUCTION_NODE:
			{
				$var($String, var$7, node->getNodeName());
				$nc(this->_sax)->processingInstruction(var$7, $(node->getNodeValue()));
				break;
			}
		case $Node::TEXT_NODE:
			{
				$assign(data, node->getNodeValue());
				$var($chars, var$8, $nc(data)->toCharArray());
				$nc(this->_sax)->characters(var$8, 0, data->length());
				break;
			}
		}
	}
}

$DTDHandler* DOM2SAX::getDTDHandler() {
	return nullptr;
}

$ErrorHandler* DOM2SAX::getErrorHandler() {
	return nullptr;
}

bool DOM2SAX::getFeature($String* name) {
	return false;
}

void DOM2SAX::setFeature($String* name, bool value) {
}

void DOM2SAX::parse($String* sysId) {
	$throwNew($IOException, "This method is not yet implemented."_s);
}

void DOM2SAX::setDTDHandler($DTDHandler* handler) {
}

void DOM2SAX::setEntityResolver($EntityResolver* resolver) {
}

$EntityResolver* DOM2SAX::getEntityResolver() {
	return nullptr;
}

void DOM2SAX::setErrorHandler($ErrorHandler* handler) {
}

void DOM2SAX::setProperty($String* name, Object$* value) {
}

$Object* DOM2SAX::getProperty($String* name) {
	return $of(nullptr);
}

int32_t DOM2SAX::getColumnNumber() {
	return 0;
}

int32_t DOM2SAX::getLineNumber() {
	return 0;
}

$String* DOM2SAX::getPublicId() {
	return nullptr;
}

$String* DOM2SAX::getSystemId() {
	return nullptr;
}

DOM2SAX::DOM2SAX() {
}

void clinit$DOM2SAX($Class* class$) {
	$assignStatic(DOM2SAX::EMPTYSTRING, ""_s);
	$assignStatic(DOM2SAX::XMLNS_PREFIX, "xmlns"_s);
}

$Class* DOM2SAX::load$($String* name, bool initialize) {
	$loadClass(DOM2SAX, name, initialize, &_DOM2SAX_ClassInfo_, clinit$DOM2SAX, allocate$DOM2SAX);
	return class$;
}

$Class* DOM2SAX::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com