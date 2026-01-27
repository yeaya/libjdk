#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOM.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultDocument.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultElement.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMImplementation.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef EMPTY_STRING
#undef PREFIX_XMLNS

using $NodeImplArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl>;
using $AttrArray = $Array<::org::w3c::dom::Attr>;
using $NodeImplArray2 = $Array<::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl, 2>;
using $AttrImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::AttrImpl;
using $DefaultDocument = ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultDocument;
using $DefaultElement = ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultElement;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::ElementImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl;
using $SchemaDOMImplementation = ::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMImplementation;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $Attr = ::org::w3c::dom::Attr;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

$FieldInfo _SchemaDOM_FieldInfo_[] = {
	{"relationsRowResizeFactor", "I", nullptr, $STATIC | $FINAL, $constField(SchemaDOM, relationsRowResizeFactor)},
	{"relationsColResizeFactor", "I", nullptr, $STATIC | $FINAL, $constField(SchemaDOM, relationsColResizeFactor)},
	{"relations", "[[Lcom/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl;", nullptr, 0, $field(SchemaDOM, relations)},
	{"parent", "Lcom/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl;", nullptr, 0, $field(SchemaDOM, parent)},
	{"currLoc", "I", nullptr, 0, $field(SchemaDOM, currLoc)},
	{"nextFreeLoc", "I", nullptr, 0, $field(SchemaDOM, nextFreeLoc)},
	{"hidden", "Z", nullptr, 0, $field(SchemaDOM, hidden)},
	{"inCDATA", "Z", nullptr, 0, $field(SchemaDOM, inCDATA)},
	{"fAnnotationBuffer", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(SchemaDOM, fAnnotationBuffer)},
	{}
};

$MethodInfo _SchemaDOM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaDOM, init$, void)},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, 0, $virtualMethod(SchemaDOM, characters, void, $XMLString*)},
	{"charactersRaw", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(SchemaDOM, charactersRaw, void, $String*)},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, 0, $virtualMethod(SchemaDOM, comment, void, $XMLString*)},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;III)Lcom/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl;", nullptr, $PUBLIC, $virtualMethod(SchemaDOM, emptyElement, $ElementImpl*, $QName*, $XMLAttributes*, int32_t, int32_t, int32_t)},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;II)Lcom/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl;", nullptr, $PUBLIC, $virtualMethod(SchemaDOM, emptyElement, $ElementImpl*, $QName*, $XMLAttributes*, int32_t, int32_t)},
	{"endAnnotation", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl;)V", nullptr, 0, $virtualMethod(SchemaDOM, endAnnotation, void, $QName*, $ElementImpl*)},
	{"endAnnotationCDATA", "()V", nullptr, 0, $virtualMethod(SchemaDOM, endAnnotationCDATA, void)},
	{"endAnnotationElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, 0, $virtualMethod(SchemaDOM, endAnnotationElement, void, $QName*)},
	{"endAnnotationElement", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(SchemaDOM, endAnnotationElement, void, $String*)},
	{"endElement", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaDOM, endElement, void)},
	{"endSyntheticAnnotationElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Z)V", nullptr, 0, $virtualMethod(SchemaDOM, endSyntheticAnnotationElement, void, $QName*, bool)},
	{"endSyntheticAnnotationElement", "(Ljava/lang/String;Z)V", nullptr, 0, $virtualMethod(SchemaDOM, endSyntheticAnnotationElement, void, $String*, bool)},
	{"escapeAttValue", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SchemaDOM, escapeAttValue, $String*, $String*, int32_t)},
	{"getDocumentElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(SchemaDOM, getDocumentElement, $Element*)},
	{"getImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $virtualMethod(SchemaDOM, getImplementation, $DOMImplementation*)},
	{"indent", "(I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SchemaDOM, indent, void, int32_t)},
	{"printDOM", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaDOM, printDOM, void)},
	{"processAttValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SchemaDOM, processAttValue, $String*, $String*)},
	{"processElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl;)V", nullptr, $PRIVATE, $method(SchemaDOM, processElement, void, $QName*, $XMLAttributes*, $ElementImpl*)},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, 0, $virtualMethod(SchemaDOM, processingInstruction, void, $String*, $XMLString*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaDOM, reset, void)},
	{"resizeRelations", "()V", nullptr, $PRIVATE, $method(SchemaDOM, resizeRelations, void)},
	{"resizeRelations", "(I)V", nullptr, $PRIVATE, $method(SchemaDOM, resizeRelations, void, int32_t)},
	{"startAnnotation", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)V", nullptr, 0, $virtualMethod(SchemaDOM, startAnnotation, void, $QName*, $XMLAttributes*, $NamespaceContext*)},
	{"startAnnotation", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)V", nullptr, 0, $virtualMethod(SchemaDOM, startAnnotation, void, $String*, $XMLAttributes*, $NamespaceContext*)},
	{"startAnnotationCDATA", "()V", nullptr, 0, $virtualMethod(SchemaDOM, startAnnotationCDATA, void)},
	{"startAnnotationElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, 0, $virtualMethod(SchemaDOM, startAnnotationElement, void, $QName*, $XMLAttributes*)},
	{"startAnnotationElement", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, 0, $virtualMethod(SchemaDOM, startAnnotationElement, void, $String*, $XMLAttributes*)},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;III)Lcom/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl;", nullptr, $PUBLIC, $virtualMethod(SchemaDOM, startElement, $ElementImpl*, $QName*, $XMLAttributes*, int32_t, int32_t, int32_t)},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;II)Lcom/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl;", nullptr, $PUBLIC, $virtualMethod(SchemaDOM, startElement, $ElementImpl*, $QName*, $XMLAttributes*, int32_t, int32_t)},
	{"traverse", "(Lorg/w3c/dom/Node;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SchemaDOM, traverse, void, $Node*, int32_t)},
	{}
};

$ClassInfo _SchemaDOM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOM",
	"com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultDocument",
	nullptr,
	_SchemaDOM_FieldInfo_,
	_SchemaDOM_MethodInfo_
};

$Object* allocate$SchemaDOM($Class* clazz) {
	return $of($alloc(SchemaDOM));
}

void SchemaDOM::init$() {
	$DefaultDocument::init$();
	$set(this, fAnnotationBuffer, nullptr);
	reset();
}

$ElementImpl* SchemaDOM::startElement($QName* element, $XMLAttributes* attributes, int32_t line, int32_t column, int32_t offset) {
	$var($ElementImpl, node, $new($ElementImpl, line, column, offset));
	processElement(element, attributes, node);
	$set(this, parent, node);
	return node;
}

$ElementImpl* SchemaDOM::emptyElement($QName* element, $XMLAttributes* attributes, int32_t line, int32_t column, int32_t offset) {
	$var($ElementImpl, node, $new($ElementImpl, line, column, offset));
	processElement(element, attributes, node);
	return node;
}

$ElementImpl* SchemaDOM::startElement($QName* element, $XMLAttributes* attributes, int32_t line, int32_t column) {
	return startElement(element, attributes, line, column, -1);
}

$ElementImpl* SchemaDOM::emptyElement($QName* element, $XMLAttributes* attributes, int32_t line, int32_t column) {
	return emptyElement(element, attributes, line, column, -1);
}

void SchemaDOM::processElement($QName* element, $XMLAttributes* attributes, $ElementImpl* node) {
	$useLocalCurrentObjectStackCache();
	$set($nc(node), prefix, $nc(element)->prefix);
	$set(node, localpart, element->localpart);
	$set(node, rawname, element->rawname);
	$set(node, uri, element->uri);
	$set(node, schemaDOM, this);
	$var($AttrArray, attrs, $new($AttrArray, $nc(attributes)->getLength()));
	for (int32_t i = 0; i < attributes->getLength(); ++i) {
		$var($Element, var$0, static_cast<$Element*>(node));
		$var($String, var$1, attributes->getPrefix(i));
		$var($String, var$2, attributes->getLocalName(i));
		$var($String, var$3, attributes->getQName(i));
		$var($String, var$4, attributes->getURI(i));
		attrs->set(i, $$new($AttrImpl, var$0, var$1, var$2, var$3, var$4, $(attributes->getValue(i))));
	}
	$set(node, attrs, attrs);
	if (this->nextFreeLoc == $nc(this->relations)->length) {
		resizeRelations();
	}
	if (!$equals($nc($nc(this->relations)->get(this->currLoc))->get(0), this->parent)) {
		$nc($nc(this->relations)->get(this->nextFreeLoc))->set(0, this->parent);
		this->currLoc = this->nextFreeLoc++;
	}
	bool foundPlace = false;
	int32_t i = 1;
	for (i = 1; i < $nc($nc(this->relations)->get(this->currLoc))->length; ++i) {
		if ($nc($nc(this->relations)->get(this->currLoc))->get(i) == nullptr) {
			foundPlace = true;
			break;
		}
	}
	if (!foundPlace) {
		resizeRelations(this->currLoc);
	}
	$nc($nc(this->relations)->get(this->currLoc))->set(i, node);
	$nc(this->parent)->parentRow = this->currLoc;
	node->row = this->currLoc;
	node->col = i;
}

void SchemaDOM::endElement() {
	this->currLoc = $nc(this->parent)->row;
	$set(this, parent, $cast($ElementImpl, $nc($nc(this->relations)->get(this->currLoc))->get(0)));
}

void SchemaDOM::comment($XMLString* text) {
	$nc(this->fAnnotationBuffer)->append("<!--"_s);
	if ($nc(text)->length > 0) {
		$nc(this->fAnnotationBuffer)->append(text->ch, text->offset, text->length);
	}
	$nc(this->fAnnotationBuffer)->append("-->"_s);
}

void SchemaDOM::processingInstruction($String* target, $XMLString* data) {
	$nc(this->fAnnotationBuffer)->append("<?"_s)->append(target);
	if ($nc(data)->length > 0) {
		$nc(this->fAnnotationBuffer)->append(u' ')->append(data->ch, data->offset, data->length);
	}
	$nc(this->fAnnotationBuffer)->append("?>"_s);
}

void SchemaDOM::characters($XMLString* text) {
	if (!this->inCDATA) {
		$var($StringBuffer, annotationBuffer, this->fAnnotationBuffer);
		for (int32_t i = $nc(text)->offset; i < text->offset + text->length; ++i) {
			char16_t ch = $nc(text->ch)->get(i);
			if (ch == u'&') {
				$nc(annotationBuffer)->append("&amp;"_s);
			} else if (ch == u'<') {
				$nc(annotationBuffer)->append("&lt;"_s);
			} else if (ch == u'>') {
				$nc(annotationBuffer)->append("&gt;"_s);
			} else if (ch == u'\r') {
				$nc(annotationBuffer)->append("&#xD;"_s);
			} else {
				$nc(annotationBuffer)->append(ch);
			}
		}
	} else {
		$nc(this->fAnnotationBuffer)->append($nc(text)->ch, text->offset, text->length);
	}
}

void SchemaDOM::charactersRaw($String* text) {
	$nc(this->fAnnotationBuffer)->append(text);
}

void SchemaDOM::endAnnotation($QName* elemName, $ElementImpl* annotation) {
	$nc(this->fAnnotationBuffer)->append("\n</"_s)->append($nc(elemName)->rawname)->append(">"_s);
	$set($nc(annotation), fAnnotation, $nc(this->fAnnotationBuffer)->toString());
	$set(this, fAnnotationBuffer, nullptr);
}

void SchemaDOM::endAnnotationElement($QName* elemName) {
	endAnnotationElement($nc(elemName)->rawname);
}

void SchemaDOM::endAnnotationElement($String* elemRawName) {
	$nc(this->fAnnotationBuffer)->append("</"_s)->append(elemRawName)->append(">"_s);
}

void SchemaDOM::endSyntheticAnnotationElement($QName* elemName, bool complete) {
	endSyntheticAnnotationElement($nc(elemName)->rawname, complete);
}

void SchemaDOM::endSyntheticAnnotationElement($String* elemRawName, bool complete) {
	if (complete) {
		$nc(this->fAnnotationBuffer)->append("\n</"_s)->append(elemRawName)->append(">"_s);
		$set($nc(this->parent), fSyntheticAnnotation, $nc(this->fAnnotationBuffer)->toString());
		$set(this, fAnnotationBuffer, nullptr);
	} else {
		$nc(this->fAnnotationBuffer)->append("</"_s)->append(elemRawName)->append(">"_s);
	}
}

void SchemaDOM::startAnnotationCDATA() {
	this->inCDATA = true;
	$nc(this->fAnnotationBuffer)->append("<![CDATA["_s);
}

void SchemaDOM::endAnnotationCDATA() {
	$nc(this->fAnnotationBuffer)->append("]]>"_s);
	this->inCDATA = false;
}

void SchemaDOM::resizeRelations() {
	$useLocalCurrentObjectStackCache();
	$var($NodeImplArray2, temp, $new($NodeImplArray2, $nc(this->relations)->length + SchemaDOM::relationsRowResizeFactor));
	$System::arraycopy(this->relations, 0, temp, 0, $nc(this->relations)->length);
	for (int32_t i = $nc(this->relations)->length; i < temp->length; ++i) {
		temp->set(i, $$new($NodeImplArray, SchemaDOM::relationsColResizeFactor));
	}
	$set(this, relations, temp);
}

void SchemaDOM::resizeRelations(int32_t i) {
	$var($NodeImplArray, temp, $new($NodeImplArray, $nc($nc(this->relations)->get(i))->length + SchemaDOM::relationsColResizeFactor));
	$System::arraycopy($nc(this->relations)->get(i), 0, temp, 0, $nc($nc(this->relations)->get(i))->length);
	$nc(this->relations)->set(i, temp);
}

void SchemaDOM::reset() {
	$useLocalCurrentObjectStackCache();
	if (this->relations != nullptr) {
		for (int32_t i = 0; i < $nc(this->relations)->length; ++i) {
			for (int32_t j = 0; j < $nc($nc(this->relations)->get(i))->length; ++j) {
				$nc($nc(this->relations)->get(i))->set(j, nullptr);
			}
		}
	}
	$set(this, relations, $new($NodeImplArray2, SchemaDOM::relationsRowResizeFactor));
	$set(this, parent, $new($ElementImpl, 0, 0, 0));
	$set($nc(this->parent), rawname, "DOCUMENT_NODE"_s);
	this->currLoc = 0;
	this->nextFreeLoc = 1;
	this->inCDATA = false;
	for (int32_t i = 0; i < SchemaDOM::relationsRowResizeFactor; ++i) {
		$nc(this->relations)->set(i, $$new($NodeImplArray, SchemaDOM::relationsColResizeFactor));
	}
	$nc($nc(this->relations)->get(this->currLoc))->set(0, this->parent);
}

void SchemaDOM::printDOM() {
}

void SchemaDOM::traverse($Node* node, int32_t depth) {
	$init(SchemaDOM);
	$useLocalCurrentObjectStackCache();
	indent(depth);
	$nc($System::out)->print($$str({"<"_s, $($nc(node)->getNodeName())}));
	if ($nc(node)->hasAttributes()) {
		$var($NamedNodeMap, attrs, node->getAttributes());
		for (int32_t i = 0; i < $nc(attrs)->getLength(); ++i) {
			$var($String, var$1, $$str({"  "_s, $($nc(($cast($Attr, $(attrs->item(i)))))->getName()), "=\""_s}));
			$var($String, var$0, $$concat(var$1, $($nc(($cast($Attr, $(attrs->item(i)))))->getValue())));
			$nc($System::out)->print($$concat(var$0, "\""_s));
		}
	}
	if ($nc(node)->hasChildNodes()) {
		$nc($System::out)->println(">"_s);
		depth += 4;
		{
			$var($Node, child, node->getFirstChild());
			for (; child != nullptr; $assign(child, $nc(child)->getNextSibling())) {
				traverse(child, depth);
			}
		}
		depth -= 4;
		indent(depth);
		$nc($System::out)->println($$str({"</"_s, $(node->getNodeName()), ">"_s}));
	} else {
		$nc($System::out)->println("/>"_s);
	}
}

void SchemaDOM::indent(int32_t amount) {
	$init(SchemaDOM);
	for (int32_t i = 0; i < amount; ++i) {
		$nc($System::out)->print(u' ');
	}
}

$Element* SchemaDOM::getDocumentElement() {
	return $cast($ElementImpl, $nc($nc(this->relations)->get(0))->get(1));
}

$DOMImplementation* SchemaDOM::getImplementation() {
	return $SchemaDOMImplementation::getDOMImplementation();
}

void SchemaDOM::startAnnotation($QName* elemName, $XMLAttributes* attributes, $NamespaceContext* namespaceContext) {
	startAnnotation($nc(elemName)->rawname, attributes, namespaceContext);
}

void SchemaDOM::startAnnotation($String* elemRawName, $XMLAttributes* attributes, $NamespaceContext* namespaceContext) {
	$useLocalCurrentObjectStackCache();
	if (this->fAnnotationBuffer == nullptr) {
		$set(this, fAnnotationBuffer, $new($StringBuffer, 256));
	}
	$nc(this->fAnnotationBuffer)->append("<"_s)->append(elemRawName)->append(" "_s);
	$var($List, namespaces, $new($ArrayList));
	for (int32_t i = 0; i < $nc(attributes)->getLength(); ++i) {
		$var($String, aValue, attributes->getValue(i));
		$var($String, aPrefix, attributes->getPrefix(i));
		$var($String, aQName, attributes->getQName(i));
		$init($XMLSymbols);
		if (aPrefix == $XMLSymbols::PREFIX_XMLNS || aQName == $XMLSymbols::PREFIX_XMLNS) {
			namespaces->add(aPrefix == $XMLSymbols::PREFIX_XMLNS ? $(attributes->getLocalName(i)) : $XMLSymbols::EMPTY_STRING);
		}
		$nc(this->fAnnotationBuffer)->append(aQName)->append("=\""_s)->append($(processAttValue(aValue)))->append("\" "_s);
	}
	$var($Enumeration, currPrefixes, $nc(namespaceContext)->getAllPrefixes());
	while ($nc(currPrefixes)->hasMoreElements()) {
		$var($String, prefix, $cast($String, currPrefixes->nextElement()));
		$var($String, uri, namespaceContext->getURI(prefix));
		if (uri == nullptr) {
			$init($XMLSymbols);
			$assign(uri, $XMLSymbols::EMPTY_STRING);
		}
		if (!namespaces->contains(prefix)) {
			$init($XMLSymbols);
			if (prefix == $XMLSymbols::EMPTY_STRING) {
				$nc(this->fAnnotationBuffer)->append("xmlns"_s)->append("=\""_s)->append($(processAttValue(uri)))->append("\" "_s);
			} else {
				$nc(this->fAnnotationBuffer)->append("xmlns:"_s)->append(prefix)->append("=\""_s)->append($(processAttValue(uri)))->append("\" "_s);
			}
		}
	}
	$nc(this->fAnnotationBuffer)->append(">\n"_s);
}

void SchemaDOM::startAnnotationElement($QName* elemName, $XMLAttributes* attributes) {
	startAnnotationElement($nc(elemName)->rawname, attributes);
}

void SchemaDOM::startAnnotationElement($String* elemRawName, $XMLAttributes* attributes) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fAnnotationBuffer)->append("<"_s)->append(elemRawName);
	for (int32_t i = 0; i < $nc(attributes)->getLength(); ++i) {
		$var($String, aValue, attributes->getValue(i));
		$nc(this->fAnnotationBuffer)->append(" "_s)->append($(attributes->getQName(i)))->append("=\""_s)->append($(processAttValue(aValue)))->append("\""_s);
	}
	$nc(this->fAnnotationBuffer)->append(">"_s);
}

$String* SchemaDOM::processAttValue($String* original) {
	$init(SchemaDOM);
	int32_t length = $nc(original)->length();
	for (int32_t i = 0; i < length; ++i) {
		char16_t currChar = original->charAt(i);
		if (currChar == u'\"' || currChar == u'<' || currChar == u'&' || currChar == 9 || currChar == 10 || currChar == 13) {
			return escapeAttValue(original, i);
		}
	}
	return original;
}

$String* SchemaDOM::escapeAttValue($String* original, int32_t from) {
	$init(SchemaDOM);
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t length = $nc(original)->length();
	$var($StringBuffer, newVal, $new($StringBuffer, length));
	newVal->append($(original->substring(0, from)));
	for (i = from; i < length; ++i) {
		char16_t currChar = original->charAt(i);
		if (currChar == u'\"') {
			newVal->append("&quot;"_s);
		} else if (currChar == u'<') {
			newVal->append("&lt;"_s);
		} else if (currChar == u'&') {
			newVal->append("&amp;"_s);
		} else if (currChar == 9) {
			newVal->append("&#x9;"_s);
		} else if (currChar == 10) {
			newVal->append("&#xA;"_s);
		} else if (currChar == 13) {
			newVal->append("&#xD;"_s);
		} else {
			newVal->append(currChar);
		}
	}
	return newVal->toString();
}

SchemaDOM::SchemaDOM() {
}

$Class* SchemaDOM::load$($String* name, bool initialize) {
	$loadClass(SchemaDOM, name, initialize, &_SchemaDOM_ClassInfo_, allocate$SchemaDOM);
	return class$;
}

$Class* SchemaDOM::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com