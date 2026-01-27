#include <com/sun/org/apache/xalan/internal/xsltc/trax/DOM2TO.h>

#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <java/io/IOException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/ext/Locator2.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef DOM2TO
#undef ELEMENT_NODE
#undef EMPTYSTRING
#undef ENTITY_NODE
#undef ENTITY_REFERENCE_NODE
#undef NOTATION_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE
#undef XMLNS_PREFIX

using $NamespaceMappings = ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $XMLReader = ::org::xml::sax::XMLReader;
using $Locator2 = ::org::xml::sax::ext::Locator2;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _DOM2TO_FieldInfo_[] = {
	{"EMPTYSTRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOM2TO, EMPTYSTRING)},
	{"XMLNS_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOM2TO, XMLNS_PREFIX)},
	{"_dom", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOM2TO, _dom)},
	{"_handler", "Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PRIVATE, $field(DOM2TO, _handler)},
	{"xmlVersion", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOM2TO, xmlVersion)},
	{"xmlEncoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOM2TO, xmlEncoding)},
	{}
};

$MethodInfo _DOM2TO_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Node;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC, $method(DOM2TO, init$, void, $Node*, $SerializationHandler*)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(DOM2TO, getColumnNumber, int32_t)},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(DOM2TO, getContentHandler, $ContentHandler*)},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC, $virtualMethod(DOM2TO, getDTDHandler, $DTDHandler*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2TO, getEncoding, $String*)},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC, $virtualMethod(DOM2TO, getEntityResolver, $EntityResolver*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(DOM2TO, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DOM2TO, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(DOM2TO, getLineNumber, int32_t)},
	{"getNodeTypeFromCode", "(S)Ljava/lang/String;", nullptr, $PRIVATE, $method(DOM2TO, getNodeTypeFromCode, $String*, int16_t)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DOM2TO, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2TO, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2TO, getSystemId, $String*)},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOM2TO, getXMLVersion, $String*)},
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(DOM2TO, parse, void, $InputSource*), "java.io.IOException,org.xml.sax.SAXException"},
	{"parse", "()V", nullptr, $PUBLIC, $virtualMethod(DOM2TO, parse, void), "java.io.IOException,org.xml.sax.SAXException"},
	{"parse", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(DOM2TO, parse, void, $Node*), "java.io.IOException,org.xml.sax.SAXException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOM2TO, parse, void, $String*), "java.io.IOException,org.xml.sax.SAXException"},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOM2TO, setContentHandler, void, $ContentHandler*)},
	{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOM2TO, setDTDHandler, void, $DTDHandler*), "java.lang.NullPointerException"},
	{"setDocumentInfo", "(Lorg/w3c/dom/Document;)V", nullptr, $PRIVATE, $method(DOM2TO, setDocumentInfo, void, $Document*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(DOM2TO, setEncoding, void, $String*)},
	{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(DOM2TO, setEntityResolver, void, $EntityResolver*), "java.lang.NullPointerException"},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(DOM2TO, setErrorHandler, void, $ErrorHandler*), "java.lang.NullPointerException"},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(DOM2TO, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DOM2TO, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setXMLVersion", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(DOM2TO, setXMLVersion, void, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOM2TO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.DOM2TO",
	"java.lang.Object",
	"org.xml.sax.XMLReader,org.xml.sax.ext.Locator2",
	_DOM2TO_FieldInfo_,
	_DOM2TO_MethodInfo_
};

$Object* allocate$DOM2TO($Class* clazz) {
	return $of($alloc(DOM2TO));
}

int32_t DOM2TO::hashCode() {
	 return this->$XMLReader::hashCode();
}

bool DOM2TO::equals(Object$* arg0) {
	 return this->$XMLReader::equals(arg0);
}

$Object* DOM2TO::clone() {
	 return this->$XMLReader::clone();
}

$String* DOM2TO::toString() {
	 return this->$XMLReader::toString();
}

void DOM2TO::finalize() {
	this->$XMLReader::finalize();
}

$String* DOM2TO::EMPTYSTRING = nullptr;
$String* DOM2TO::XMLNS_PREFIX = nullptr;

void DOM2TO::init$($Node* root, $SerializationHandler* handler) {
	$set(this, xmlVersion, nullptr);
	$set(this, xmlEncoding, nullptr);
	$set(this, _dom, root);
	$set(this, _handler, handler);
}

$ContentHandler* DOM2TO::getContentHandler() {
	return nullptr;
}

void DOM2TO::setContentHandler($ContentHandler* handler) {
}

void DOM2TO::parse($InputSource* unused) {
	parse(this->_dom);
}

void DOM2TO::parse() {
	if (this->_dom != nullptr) {
		bool isIncomplete = ($nc(this->_dom)->getNodeType() != $Node::DOCUMENT_NODE);
		if (isIncomplete) {
			$nc(this->_handler)->startDocument();
			parse(this->_dom);
			$nc(this->_handler)->endDocument();
		} else {
			parse(this->_dom);
		}
	}
}

void DOM2TO::parse($Node* node) {
	$useLocalCurrentObjectStackCache();
	if (node == nullptr) {
		return;
	}
	{
		$var($Node, next, nullptr)
		$var($String, qname, nullptr)
		int32_t colon = 0;
		$var($String, prefix, nullptr)
		$var($NamedNodeMap, map, nullptr)
		int32_t length = 0;
		$var($NamespaceMappings, nm, nullptr)
		$var($String, uri, nullptr)
		$var($String, localName, nullptr)
		switch ($nc(node)->getNodeType()) {
		case $Node::ATTRIBUTE_NODE:
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
				$nc(this->_handler)->startCDATA();
				$nc(this->_handler)->characters($(node->getNodeValue()));
				$nc(this->_handler)->endCDATA();
				break;
			}
		case $Node::COMMENT_NODE:
			{
				$nc(this->_handler)->comment($(node->getNodeValue()));
				break;
			}
		case $Node::DOCUMENT_NODE:
			{
				setDocumentInfo($cast($Document, node));
				$nc(this->_handler)->setDocumentLocator(this);
				$nc(this->_handler)->startDocument();
				$assign(next, node->getFirstChild());
				while (next != nullptr) {
					parse(next);
					$assign(next, next->getNextSibling());
				}
				$nc(this->_handler)->endDocument();
				break;
			}
		case $Node::DOCUMENT_FRAGMENT_NODE:
			{
				$assign(next, node->getFirstChild());
				while (next != nullptr) {
					parse(next);
					$assign(next, next->getNextSibling());
				}
				break;
			}
		case $Node::ELEMENT_NODE:
			{
				$assign(qname, node->getNodeName());
				$nc(this->_handler)->startElement(nullptr, nullptr, qname);
				$assign(map, node->getAttributes());
				length = $nc(map)->getLength();
				for (int32_t i = 0; i < length; ++i) {
					$var($Node, attr, map->item(i));
					$var($String, qnameAttr, $nc(attr)->getNodeName());
					if ($nc(qnameAttr)->startsWith(DOM2TO::XMLNS_PREFIX)) {
						$var($String, uriAttr, attr->getNodeValue());
						colon = qnameAttr->lastIndexOf((int32_t)u':');
						$assign(prefix, (colon > 0) ? qnameAttr->substring(colon + 1) : DOM2TO::EMPTYSTRING);
						$nc(this->_handler)->namespaceAfterStartElement(prefix, uriAttr);
					}
				}
				$assign(nm, nullptr);
				for (int32_t i = 0; i < length; ++i) {
					$var($Node, attr, map->item(i));
					$var($String, qnameAttr, $nc(attr)->getNodeName());
					if (!$nc(qnameAttr)->startsWith(DOM2TO::XMLNS_PREFIX)) {
						$var($String, uriAttr, attr->getNamespaceURI());
						if (uriAttr != nullptr && !uriAttr->equals(DOM2TO::EMPTYSTRING)) {
							colon = qnameAttr->lastIndexOf((int32_t)u':');
							if (nm == nullptr) {
								$assign(nm, $new($NamespaceMappings));
							}
							$var($String, newPrefix, $nc(nm)->lookupPrefix(uriAttr));
							if (newPrefix == nullptr) {
								$assign(newPrefix, nm->generateNextPrefix());
							}
							$assign(prefix, (colon > 0) ? qnameAttr->substring(0, colon) : newPrefix);
							$nc(this->_handler)->namespaceAfterStartElement(prefix, uriAttr);
							$nc(this->_handler)->addAttribute(($$str({prefix, ":"_s, qnameAttr})), $(attr->getNodeValue()));
						} else {
							$nc(this->_handler)->addAttribute(qnameAttr, $(attr->getNodeValue()));
						}
					}
				}
				$assign(uri, node->getNamespaceURI());
				$assign(localName, node->getLocalName());
				if (uri != nullptr) {
					colon = $nc(qname)->lastIndexOf((int32_t)u':');
					$assign(prefix, (colon > 0) ? qname->substring(0, colon) : DOM2TO::EMPTYSTRING);
					$nc(this->_handler)->namespaceAfterStartElement(prefix, uri);
				} else if (uri == nullptr && localName != nullptr) {
					$assign(prefix, DOM2TO::EMPTYSTRING);
					$nc(this->_handler)->namespaceAfterStartElement(prefix, DOM2TO::EMPTYSTRING);
				}
				$assign(next, node->getFirstChild());
				while (next != nullptr) {
					parse(next);
					$assign(next, next->getNextSibling());
				}
				$nc(this->_handler)->endElement(qname);
				break;
			}
		case $Node::PROCESSING_INSTRUCTION_NODE:
			{
				$var($String, var$0, node->getNodeName());
				$nc(this->_handler)->processingInstruction(var$0, $(node->getNodeValue()));
				break;
			}
		case $Node::TEXT_NODE:
			{
				$nc(this->_handler)->characters($(node->getNodeValue()));
				break;
			}
		}
	}
}

$DTDHandler* DOM2TO::getDTDHandler() {
	return nullptr;
}

$ErrorHandler* DOM2TO::getErrorHandler() {
	return nullptr;
}

bool DOM2TO::getFeature($String* name) {
	return false;
}

void DOM2TO::setFeature($String* name, bool value) {
}

void DOM2TO::parse($String* sysId) {
	$throwNew($IOException, "This method is not yet implemented."_s);
}

void DOM2TO::setDTDHandler($DTDHandler* handler) {
}

void DOM2TO::setEntityResolver($EntityResolver* resolver) {
}

$EntityResolver* DOM2TO::getEntityResolver() {
	return nullptr;
}

void DOM2TO::setErrorHandler($ErrorHandler* handler) {
}

void DOM2TO::setProperty($String* name, Object$* value) {
}

$Object* DOM2TO::getProperty($String* name) {
	return $of(nullptr);
}

int32_t DOM2TO::getColumnNumber() {
	return 0;
}

int32_t DOM2TO::getLineNumber() {
	return 0;
}

$String* DOM2TO::getPublicId() {
	return nullptr;
}

$String* DOM2TO::getSystemId() {
	return nullptr;
}

void DOM2TO::setDocumentInfo($Document* document) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(document)->getXmlStandalone()) {
		$nc(this->_handler)->setStandalone($($Boolean::toString(document->getXmlStandalone())));
	}
	setXMLVersion($($nc(document)->getXmlVersion()));
	setEncoding($($nc(document)->getXmlEncoding()));
}

$String* DOM2TO::getXMLVersion() {
	return this->xmlVersion;
}

void DOM2TO::setXMLVersion($String* version) {
	if (version != nullptr) {
		$set(this, xmlVersion, version);
		$nc(this->_handler)->setVersion(this->xmlVersion);
	}
}

$String* DOM2TO::getEncoding() {
	return this->xmlEncoding;
}

void DOM2TO::setEncoding($String* encoding) {
	if (encoding != nullptr) {
		$set(this, xmlEncoding, encoding);
		$nc(this->_handler)->setEncoding(encoding);
	}
}

$String* DOM2TO::getNodeTypeFromCode(int16_t code) {
	$var($String, retval, nullptr);
	switch (code) {
	case $Node::ATTRIBUTE_NODE:
		{
			$assign(retval, "ATTRIBUTE_NODE"_s);
			break;
		}
	case $Node::CDATA_SECTION_NODE:
		{
			$assign(retval, "CDATA_SECTION_NODE"_s);
			break;
		}
	case $Node::COMMENT_NODE:
		{
			$assign(retval, "COMMENT_NODE"_s);
			break;
		}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{
			$assign(retval, "DOCUMENT_FRAGMENT_NODE"_s);
			break;
		}
	case $Node::DOCUMENT_NODE:
		{
			$assign(retval, "DOCUMENT_NODE"_s);
			break;
		}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			$assign(retval, "DOCUMENT_TYPE_NODE"_s);
			break;
		}
	case $Node::ELEMENT_NODE:
		{
			$assign(retval, "ELEMENT_NODE"_s);
			break;
		}
	case $Node::ENTITY_NODE:
		{
			$assign(retval, "ENTITY_NODE"_s);
			break;
		}
	case $Node::ENTITY_REFERENCE_NODE:
		{
			$assign(retval, "ENTITY_REFERENCE_NODE"_s);
			break;
		}
	case $Node::NOTATION_NODE:
		{
			$assign(retval, "NOTATION_NODE"_s);
			break;
		}
	case $Node::PROCESSING_INSTRUCTION_NODE:
		{
			$assign(retval, "PROCESSING_INSTRUCTION_NODE"_s);
			break;
		}
	case $Node::TEXT_NODE:
		{
			$assign(retval, "TEXT_NODE"_s);
			break;
		}
	}
	return retval;
}

DOM2TO::DOM2TO() {
}

void clinit$DOM2TO($Class* class$) {
	$assignStatic(DOM2TO::EMPTYSTRING, ""_s);
	$assignStatic(DOM2TO::XMLNS_PREFIX, "xmlns"_s);
}

$Class* DOM2TO::load$($String* name, bool initialize) {
	$loadClass(DOM2TO, name, initialize, &_DOM2TO_ClassInfo_, clinit$DOM2TO, allocate$DOM2TO);
	return class$;
}

$Class* DOM2TO::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com