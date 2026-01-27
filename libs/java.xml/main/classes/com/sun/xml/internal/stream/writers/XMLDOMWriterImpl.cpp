#include <com/sun/xml/internal/stream/writers/XMLDOMWriterImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/transform/dom/DOMResult.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/EntityReference.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <org/xml/sax/helpers/NamespaceSupport.h>
#include <jcpp.h>

#undef DEFAULT_NS_PREFIX
#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef XMLNS_ATTRIBUTE
#undef XMLNS_ATTRIBUTE_NS_URI

using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $XMLConstants = ::javax::xml::XMLConstants;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $DOMResult = ::javax::xml::transform::dom::DOMResult;
using $Attr = ::org::w3c::dom::Attr;
using $CDATASection = ::org::w3c::dom::CDATASection;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Comment = ::org::w3c::dom::Comment;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $EntityReference = ::org::w3c::dom::EntityReference;
using $Node = ::org::w3c::dom::Node;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $Text = ::org::w3c::dom::Text;
using $NamespaceSupport = ::org::xml::sax::helpers::NamespaceSupport;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

$FieldInfo _XMLDOMWriterImpl_FieldInfo_[] = {
	{"ownerDoc", "Lorg/w3c/dom/Document;", nullptr, $PRIVATE, $field(XMLDOMWriterImpl, ownerDoc)},
	{"currentNode", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(XMLDOMWriterImpl, currentNode)},
	{"node", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(XMLDOMWriterImpl, node)},
	{"namespaceContext", "Lorg/xml/sax/helpers/NamespaceSupport;", nullptr, $PRIVATE, $field(XMLDOMWriterImpl, namespaceContext)},
	{"needContextPop", "[Z", nullptr, $PRIVATE, $field(XMLDOMWriterImpl, needContextPop)},
	{"stringBuffer", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(XMLDOMWriterImpl, stringBuffer)},
	{"resizeValue", "I", nullptr, $PRIVATE, $field(XMLDOMWriterImpl, resizeValue)},
	{"depth", "I", nullptr, $PRIVATE, $field(XMLDOMWriterImpl, depth)},
	{}
};

$MethodInfo _XMLDOMWriterImpl_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/transform/dom/DOMResult;)V", nullptr, $PUBLIC, $method(XMLDOMWriterImpl, init$, void, $DOMResult*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, close, void), "javax.xml.stream.XMLStreamException"},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, flush, void), "javax.xml.stream.XMLStreamException"},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, getNamespaceContext, $NamespaceContext*)},
	{"getNode", "()Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(XMLDOMWriterImpl, getNode, $Node*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, getPrefix, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, getProperty, $Object*, $String*), "java.lang.IllegalArgumentException"},
	{"getQName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XMLDOMWriterImpl, getQName, $String*, $String*, $String*)},
	{"incDepth", "()V", nullptr, $PRIVATE, $method(XMLDOMWriterImpl, incDepth, void)},
	{"setDefaultNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, setDefaultNamespace, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"setNamespaceContext", "(Ljavax/xml/namespace/NamespaceContext;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, setNamespaceContext, void, $NamespaceContext*), "javax.xml.stream.XMLStreamException"},
	{"setPrefix", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, setPrefix, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeAttribute, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeAttribute, void, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeAttribute, void, $String*, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeCData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeCData, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeCharacters", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeCharacters, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeCharacters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeCharacters, void, $chars*, int32_t, int32_t), "javax.xml.stream.XMLStreamException"},
	{"writeComment", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeComment, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeDTD", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeDTD, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeDefaultNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeDefaultNamespace, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeEmptyElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeEmptyElement, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeEmptyElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeEmptyElement, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeEmptyElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeEmptyElement, void, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeEndDocument", "()V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeEndDocument, void), "javax.xml.stream.XMLStreamException"},
	{"writeEndElement", "()V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeEndElement, void), "javax.xml.stream.XMLStreamException"},
	{"writeEntityRef", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeEntityRef, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeNamespace", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeNamespace, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeProcessingInstruction", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeProcessingInstruction, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeProcessingInstruction, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartDocument", "()V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeStartDocument, void), "javax.xml.stream.XMLStreamException"},
	{"writeStartDocument", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeStartDocument, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartDocument", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeStartDocument, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartDocument", "(Ljava/lang/String;Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeStartDocument, void, $String*, $String*, bool, bool), "javax.xml.stream.XMLStreamException"},
	{"writeStartElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeStartElement, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeStartElement, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLDOMWriterImpl, writeStartElement, void, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{}
};

$ClassInfo _XMLDOMWriterImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.writers.XMLDOMWriterImpl",
	"java.lang.Object",
	"com.sun.xml.internal.stream.writers.XMLStreamWriterBase",
	_XMLDOMWriterImpl_FieldInfo_,
	_XMLDOMWriterImpl_MethodInfo_
};

$Object* allocate$XMLDOMWriterImpl($Class* clazz) {
	return $of($alloc(XMLDOMWriterImpl));
}

void XMLDOMWriterImpl::init$($DOMResult* result) {
	$set(this, ownerDoc, nullptr);
	$set(this, currentNode, nullptr);
	$set(this, node, nullptr);
	$set(this, namespaceContext, nullptr);
	$set(this, needContextPop, nullptr);
	$set(this, stringBuffer, nullptr);
	this->resizeValue = 20;
	this->depth = 0;
	$set(this, node, $nc(result)->getNode());
	if ($nc(this->node)->getNodeType() == $Node::DOCUMENT_NODE) {
		$set(this, ownerDoc, $cast($Document, this->node));
		$set(this, currentNode, this->ownerDoc);
	} else {
		$set(this, ownerDoc, $nc(this->node)->getOwnerDocument());
		$set(this, currentNode, this->node);
	}
	$set(this, stringBuffer, $new($StringBuffer));
	$set(this, needContextPop, $new($booleans, this->resizeValue));
	$set(this, namespaceContext, $new($NamespaceSupport));
}

void XMLDOMWriterImpl::close() {
}

void XMLDOMWriterImpl::flush() {
}

$NamespaceContext* XMLDOMWriterImpl::getNamespaceContext() {
	return nullptr;
}

$String* XMLDOMWriterImpl::getPrefix($String* namespaceURI) {
	$var($String, prefix, nullptr);
	if (this->namespaceContext != nullptr) {
		$assign(prefix, $nc(this->namespaceContext)->getPrefix(namespaceURI));
	}
	return prefix;
}

$Object* XMLDOMWriterImpl::getProperty($String* str) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void XMLDOMWriterImpl::setDefaultNamespace($String* uri) {
	$init($XMLConstants);
	$nc(this->namespaceContext)->declarePrefix($XMLConstants::DEFAULT_NS_PREFIX, uri);
	if (!$nc(this->needContextPop)->get(this->depth)) {
		$nc(this->needContextPop)->set(this->depth, true);
	}
}

void XMLDOMWriterImpl::setNamespaceContext($NamespaceContext* namespaceContext) {
	$throwNew($UnsupportedOperationException);
}

void XMLDOMWriterImpl::setPrefix($String* prefix, $String* uri) {
	if (prefix == nullptr) {
		$throwNew($XMLStreamException, "Prefix cannot be null"_s);
	}
	$nc(this->namespaceContext)->declarePrefix(prefix, uri);
	if (!$nc(this->needContextPop)->get(this->depth)) {
		$nc(this->needContextPop)->set(this->depth, true);
	}
}

void XMLDOMWriterImpl::writeAttribute($String* localName, $String* value) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->currentNode)->getNodeType() == $Node::ELEMENT_NODE) {
		$var($Attr, attr, $nc(this->ownerDoc)->createAttribute(localName));
		$nc(attr)->setValue(value);
		$nc(($cast($Element, this->currentNode)))->setAttributeNode(attr);
	} else {
		$throwNew($IllegalStateException, $$str({"Current DOM Node type  is "_s, $$str($nc(this->currentNode)->getNodeType()), "and does not allow attributes to be set "_s}));
	}
}

void XMLDOMWriterImpl::writeAttribute($String* namespaceURI, $String* localName, $String* value) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->currentNode)->getNodeType() == $Node::ELEMENT_NODE) {
		$var($String, prefix, nullptr);
		if (namespaceURI == nullptr) {
			$throwNew($XMLStreamException, "NamespaceURI cannot be null"_s);
		}
		if (localName == nullptr) {
			$throwNew($XMLStreamException, "Local name cannot be null"_s);
		}
		if (this->namespaceContext != nullptr) {
			$assign(prefix, $nc(this->namespaceContext)->getPrefix(namespaceURI));
		}
		if (prefix == nullptr) {
			$throwNew($XMLStreamException, $$str({"Namespace URI "_s, namespaceURI, "is not bound to any prefix"_s}));
		}
		$var($String, qualifiedName, nullptr);
		if ($nc(prefix)->isEmpty()) {
			$assign(qualifiedName, localName);
		} else {
			$assign(qualifiedName, getQName(prefix, localName));
		}
		$var($Attr, attr, $nc(this->ownerDoc)->createAttributeNS(namespaceURI, qualifiedName));
		$nc(attr)->setValue(value);
		$nc(($cast($Element, this->currentNode)))->setAttributeNode(attr);
	} else {
		$throwNew($IllegalStateException, $$str({"Current DOM Node type  is "_s, $$str($nc(this->currentNode)->getNodeType()), "and does not allow attributes to be set "_s}));
	}
}

void XMLDOMWriterImpl::writeAttribute($String* prefix, $String* namespaceURI, $String* localName, $String* value) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->currentNode)->getNodeType() == $Node::ELEMENT_NODE) {
		if (namespaceURI == nullptr) {
			$throwNew($XMLStreamException, "NamespaceURI cannot be null"_s);
		}
		if (localName == nullptr) {
			$throwNew($XMLStreamException, "Local name cannot be null"_s);
		}
		if (prefix == nullptr) {
			$throwNew($XMLStreamException, "prefix cannot be null"_s);
		}
		$var($String, qualifiedName, nullptr);
		if ($nc(prefix)->isEmpty()) {
			$assign(qualifiedName, localName);
		} else {
			$assign(qualifiedName, getQName(prefix, localName));
		}
		$var($Attr, attr, $nc(this->ownerDoc)->createAttributeNS(namespaceURI, qualifiedName));
		$nc(attr)->setValue(value);
		$nc(($cast($Element, this->currentNode)))->setAttributeNodeNS(attr);
	} else {
		$throwNew($IllegalStateException, $$str({"Current DOM Node type  is "_s, $$str($nc(this->currentNode)->getNodeType()), "and does not allow attributes to be set "_s}));
	}
}

void XMLDOMWriterImpl::writeCData($String* data) {
	$useLocalCurrentObjectStackCache();
	if (data == nullptr) {
		$throwNew($XMLStreamException, "CDATA cannot be null"_s);
	}
	$var($CDATASection, cdata, $nc(this->ownerDoc)->createCDATASection(data));
	$nc($(getNode()))->appendChild(cdata);
}

void XMLDOMWriterImpl::writeCharacters($String* charData) {
	$var($Text, text, $nc(this->ownerDoc)->createTextNode(charData));
	$nc(this->currentNode)->appendChild(text);
}

void XMLDOMWriterImpl::writeCharacters($chars* values, int32_t param, int32_t param2) {
	$useLocalCurrentObjectStackCache();
	$var($Text, text, $nc(this->ownerDoc)->createTextNode($$new($String, values, param, param2)));
	$nc(this->currentNode)->appendChild(text);
}

void XMLDOMWriterImpl::writeComment($String* str) {
	$useLocalCurrentObjectStackCache();
	$var($Comment, comment, $nc(this->ownerDoc)->createComment(str));
	$nc($(getNode()))->appendChild(comment);
}

void XMLDOMWriterImpl::writeDTD($String* str) {
	$throwNew($UnsupportedOperationException);
}

void XMLDOMWriterImpl::writeDefaultNamespace($String* namespaceURI) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->currentNode)->getNodeType() == $Node::ELEMENT_NODE) {
		$init($XMLConstants);
		$var($String, qname, $XMLConstants::XMLNS_ATTRIBUTE);
		$nc(($cast($Element, this->currentNode)))->setAttributeNS($XMLConstants::XMLNS_ATTRIBUTE_NS_URI, qname, namespaceURI);
	} else {
		$throwNew($IllegalStateException, $$str({"Current DOM Node type  is "_s, $$str($nc(this->currentNode)->getNodeType()), "and does not allow attributes to be set "_s}));
	}
}

void XMLDOMWriterImpl::writeEmptyElement($String* localName) {
	if (this->ownerDoc != nullptr) {
		$var($Element, element, $nc(this->ownerDoc)->createElement(localName));
		if (this->currentNode != nullptr) {
			$nc(this->currentNode)->appendChild(element);
		} else {
			$nc(this->ownerDoc)->appendChild(element);
		}
	}
}

void XMLDOMWriterImpl::writeEmptyElement($String* namespaceURI, $String* localName) {
	$useLocalCurrentObjectStackCache();
	if (this->ownerDoc != nullptr) {
		$var($String, qualifiedName, nullptr);
		$var($String, prefix, nullptr);
		if (namespaceURI == nullptr) {
			$throwNew($XMLStreamException, "NamespaceURI cannot be null"_s);
		}
		if (localName == nullptr) {
			$throwNew($XMLStreamException, "Local name cannot be null"_s);
		}
		if (this->namespaceContext != nullptr) {
			$assign(prefix, $nc(this->namespaceContext)->getPrefix(namespaceURI));
		}
		if (prefix == nullptr) {
			$throwNew($XMLStreamException, $$str({"Namespace URI "_s, namespaceURI, "is not bound to any prefix"_s}));
		}
		if (""_s->equals(prefix)) {
			$assign(qualifiedName, localName);
		} else {
			$assign(qualifiedName, getQName(prefix, localName));
		}
		$var($Element, element, $nc(this->ownerDoc)->createElementNS(namespaceURI, qualifiedName));
		if (this->currentNode != nullptr) {
			$nc(this->currentNode)->appendChild(element);
		} else {
			$nc(this->ownerDoc)->appendChild(element);
		}
	}
}

void XMLDOMWriterImpl::writeEmptyElement($String* prefix, $String* localName, $String* namespaceURI) {
	$useLocalCurrentObjectStackCache();
	if (this->ownerDoc != nullptr) {
		if (namespaceURI == nullptr) {
			$throwNew($XMLStreamException, "NamespaceURI cannot be null"_s);
		}
		if (localName == nullptr) {
			$throwNew($XMLStreamException, "Local name cannot be null"_s);
		}
		if (prefix == nullptr) {
			$throwNew($XMLStreamException, "Prefix cannot be null"_s);
		}
		$var($String, qualifiedName, nullptr);
		if (""_s->equals(prefix)) {
			$assign(qualifiedName, localName);
		} else {
			$assign(qualifiedName, getQName(prefix, localName));
		}
		$var($Element, el, $nc(this->ownerDoc)->createElementNS(namespaceURI, qualifiedName));
		if (this->currentNode != nullptr) {
			$nc(this->currentNode)->appendChild(el);
		} else {
			$nc(this->ownerDoc)->appendChild(el);
		}
	}
}

void XMLDOMWriterImpl::writeEndDocument() {
	$set(this, currentNode, nullptr);
	for (int32_t i = 0; i < this->depth; ++i) {
		if ($nc(this->needContextPop)->get(this->depth)) {
			$nc(this->needContextPop)->set(this->depth, false);
			$nc(this->namespaceContext)->popContext();
		}
		--this->depth;
	}
	this->depth = 0;
}

void XMLDOMWriterImpl::writeEndElement() {
	$var($Node, node, $nc(this->currentNode)->getParentNode());
	if ($nc(this->currentNode)->getNodeType() == $Node::DOCUMENT_NODE) {
		$set(this, currentNode, nullptr);
	} else {
		$set(this, currentNode, node);
	}
	if ($nc(this->needContextPop)->get(this->depth)) {
		$nc(this->needContextPop)->set(this->depth, false);
		$nc(this->namespaceContext)->popContext();
	}
	--this->depth;
}

void XMLDOMWriterImpl::writeEntityRef($String* name) {
	$var($EntityReference, er, $nc(this->ownerDoc)->createEntityReference(name));
	$nc(this->currentNode)->appendChild(er);
}

void XMLDOMWriterImpl::writeNamespace($String* prefix, $String* namespaceURI) {
	if (prefix == nullptr) {
		$throwNew($XMLStreamException, "prefix cannot be null"_s);
	}
	if (namespaceURI == nullptr) {
		$throwNew($XMLStreamException, "NamespaceURI cannot be null"_s);
	}
	$var($String, qname, nullptr);
	if ($nc(prefix)->isEmpty()) {
		$init($XMLConstants);
		$assign(qname, $XMLConstants::XMLNS_ATTRIBUTE);
	} else {
		$init($XMLConstants);
		$assign(qname, getQName($XMLConstants::XMLNS_ATTRIBUTE, prefix));
	}
	$init($XMLConstants);
	$nc(($cast($Element, this->currentNode)))->setAttributeNS($XMLConstants::XMLNS_ATTRIBUTE_NS_URI, qname, namespaceURI);
}

void XMLDOMWriterImpl::writeProcessingInstruction($String* target) {
	if (target == nullptr) {
		$throwNew($XMLStreamException, "Target cannot be null"_s);
	}
	$var($ProcessingInstruction, pi, $nc(this->ownerDoc)->createProcessingInstruction(target, ""_s));
	$nc(this->currentNode)->appendChild(pi);
}

void XMLDOMWriterImpl::writeProcessingInstruction($String* target, $String* data) {
	if (target == nullptr) {
		$throwNew($XMLStreamException, "Target cannot be null"_s);
	}
	$var($ProcessingInstruction, pi, $nc(this->ownerDoc)->createProcessingInstruction(target, data));
	$nc(this->currentNode)->appendChild(pi);
}

void XMLDOMWriterImpl::writeStartDocument() {
	$nc(this->ownerDoc)->setXmlVersion("1.0"_s);
}

void XMLDOMWriterImpl::writeStartDocument($String* version) {
	writeStartDocument(nullptr, version, false, false);
}

void XMLDOMWriterImpl::writeStartDocument($String* encoding, $String* version) {
	writeStartDocument(encoding, version, false, false);
}

void XMLDOMWriterImpl::writeStartDocument($String* encoding, $String* version, bool standalone, bool standaloneSet) {
	$load($DocumentImpl);
	if (encoding != nullptr && $nc($of(this->ownerDoc))->getClass()->isAssignableFrom($DocumentImpl::class$)) {
		$nc(($cast($DocumentImpl, this->ownerDoc)))->setXmlEncoding(encoding);
	}
	$nc(this->ownerDoc)->setXmlVersion(version);
	if (standaloneSet) {
		$nc(this->ownerDoc)->setXmlStandalone(standalone);
	}
}

void XMLDOMWriterImpl::writeStartElement($String* localName) {
	if (this->ownerDoc != nullptr) {
		$var($Element, element, $nc(this->ownerDoc)->createElement(localName));
		if (this->currentNode != nullptr) {
			$nc(this->currentNode)->appendChild(element);
		} else {
			$nc(this->ownerDoc)->appendChild(element);
		}
		$set(this, currentNode, element);
	}
	if ($nc(this->needContextPop)->get(this->depth)) {
		$nc(this->namespaceContext)->pushContext();
	}
	incDepth();
}

void XMLDOMWriterImpl::writeStartElement($String* namespaceURI, $String* localName) {
	$useLocalCurrentObjectStackCache();
	if (this->ownerDoc != nullptr) {
		$var($String, qualifiedName, nullptr);
		$var($String, prefix, nullptr);
		if (namespaceURI == nullptr) {
			$throwNew($XMLStreamException, "NamespaceURI cannot be null"_s);
		}
		if (localName == nullptr) {
			$throwNew($XMLStreamException, "Local name cannot be null"_s);
		}
		if (this->namespaceContext != nullptr) {
			$assign(prefix, $nc(this->namespaceContext)->getPrefix(namespaceURI));
		}
		if (prefix == nullptr) {
			$throwNew($XMLStreamException, $$str({"Namespace URI "_s, namespaceURI, "is not bound to any prefix"_s}));
		}
		if (""_s->equals(prefix)) {
			$assign(qualifiedName, localName);
		} else {
			$assign(qualifiedName, getQName(prefix, localName));
		}
		$var($Element, element, $nc(this->ownerDoc)->createElementNS(namespaceURI, qualifiedName));
		if (this->currentNode != nullptr) {
			$nc(this->currentNode)->appendChild(element);
		} else {
			$nc(this->ownerDoc)->appendChild(element);
		}
		$set(this, currentNode, element);
	}
	if ($nc(this->needContextPop)->get(this->depth)) {
		$nc(this->namespaceContext)->pushContext();
	}
	incDepth();
}

void XMLDOMWriterImpl::writeStartElement($String* prefix, $String* localName, $String* namespaceURI) {
	$useLocalCurrentObjectStackCache();
	if (this->ownerDoc != nullptr) {
		$var($String, qname, nullptr);
		if (namespaceURI == nullptr) {
			$throwNew($XMLStreamException, "NamespaceURI cannot be null"_s);
		}
		if (localName == nullptr) {
			$throwNew($XMLStreamException, "Local name cannot be null"_s);
		}
		if (prefix == nullptr) {
			$throwNew($XMLStreamException, "Prefix cannot be null"_s);
		}
		if ($nc(prefix)->isEmpty()) {
			$assign(qname, localName);
		} else {
			$assign(qname, getQName(prefix, localName));
		}
		$var($Element, el, $nc(this->ownerDoc)->createElementNS(namespaceURI, qname));
		if (this->currentNode != nullptr) {
			$nc(this->currentNode)->appendChild(el);
		} else {
			$nc(this->ownerDoc)->appendChild(el);
		}
		$set(this, currentNode, el);
		if ($nc(this->needContextPop)->get(this->depth)) {
			$nc(this->namespaceContext)->pushContext();
		}
		incDepth();
	}
}

$String* XMLDOMWriterImpl::getQName($String* prefix, $String* localName) {
	$nc(this->stringBuffer)->setLength(0);
	$nc(this->stringBuffer)->append(prefix);
	$nc(this->stringBuffer)->append(":"_s);
	$nc(this->stringBuffer)->append(localName);
	return $nc(this->stringBuffer)->toString();
}

$Node* XMLDOMWriterImpl::getNode() {
	if (this->currentNode == nullptr) {
		return this->ownerDoc;
	} else {
		return this->currentNode;
	}
}

void XMLDOMWriterImpl::incDepth() {
	++this->depth;
	if (this->depth == $nc(this->needContextPop)->length) {
		$var($booleans, array, $new($booleans, this->depth + this->resizeValue));
		$System::arraycopy(this->needContextPop, 0, array, 0, this->depth);
		$set(this, needContextPop, array);
	}
}

XMLDOMWriterImpl::XMLDOMWriterImpl() {
}

$Class* XMLDOMWriterImpl::load$($String* name, bool initialize) {
	$loadClass(XMLDOMWriterImpl, name, initialize, &_XMLDOMWriterImpl_ClassInfo_, allocate$XMLDOMWriterImpl);
	return class$;
}

$Class* XMLDOMWriterImpl::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com