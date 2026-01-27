#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Map.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/EntityReference.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/ls/LSException.h>
#include <jcpp.h>

#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef ELEMENT_NODE
#undef ENTITY_REFERENCE_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE

using $AttrArray = $Array<::org::w3c::dom::Attr>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $1NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::ElementImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Map = ::java::util::Map;
using $Attr = ::org::w3c::dom::Attr;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $DOMException = ::org::w3c::dom::DOMException;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $Text = ::org::w3c::dom::Text;
using $LSException = ::org::w3c::dom::ls::LSException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$MethodInfo _DOMUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(DOMUtil, init$, void)},
	{"copyInto", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, copyInto, void, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"createDOMException", "(SLjava/lang/Throwable;)Lorg/w3c/dom/DOMException;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, createDOMException, $DOMException*, int16_t, $Throwable*)},
	{"createLSException", "(SLjava/lang/Throwable;)Lorg/w3c/dom/ls/LSException;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, createLSException, $LSException*, int16_t, $Throwable*)},
	{"getAnnotation", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getAnnotation, $String*, $Node*)},
	{"getAttr", "(Lorg/w3c/dom/Element;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getAttr, $Attr*, $Element*, $String*)},
	{"getAttrNS", "(Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getAttrNS, $Attr*, $Element*, $String*, $String*)},
	{"getAttrValue", "(Lorg/w3c/dom/Element;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getAttrValue, $String*, $Element*, $String*)},
	{"getAttrValueNS", "(Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getAttrValueNS, $String*, $Element*, $String*, $String*)},
	{"getAttrs", "(Lorg/w3c/dom/Element;)[Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getAttrs, $AttrArray*, $Element*)},
	{"getChildText", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getChildText, $String*, $Node*)},
	{"getDocument", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getDocument, $Document*, $Node*)},
	{"getFirstChildElement", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getFirstChildElement, $Element*, $Node*)},
	{"getFirstChildElement", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getFirstChildElement, $Element*, $Node*, $String*)},
	{"getFirstChildElement", "(Lorg/w3c/dom/Node;[Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getFirstChildElement, $Element*, $Node*, $StringArray*)},
	{"getFirstChildElement", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getFirstChildElement, $Element*, $Node*, $String*, $String*, $String*)},
	{"getFirstChildElementNS", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getFirstChildElementNS, $Element*, $Node*, $String*, $String*)},
	{"getFirstChildElementNS", "(Lorg/w3c/dom/Node;[[Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getFirstChildElementNS, $Element*, $Node*, $StringArray2*)},
	{"getFirstVisibleChildElement", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getFirstVisibleChildElement, $Element*, $Node*)},
	{"getFirstVisibleChildElement", "(Lorg/w3c/dom/Node;Ljava/util/Map;)Lorg/w3c/dom/Element;", "(Lorg/w3c/dom/Node;Ljava/util/Map<Lorg/w3c/dom/Node;Ljava/lang/String;>;)Lorg/w3c/dom/Element;", $PUBLIC | $STATIC, $staticMethod(DOMUtil, getFirstVisibleChildElement, $Element*, $Node*, $Map*)},
	{"getLastChildElement", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getLastChildElement, $Element*, $Node*)},
	{"getLastChildElement", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getLastChildElement, $Element*, $Node*, $String*)},
	{"getLastChildElement", "(Lorg/w3c/dom/Node;[Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getLastChildElement, $Element*, $Node*, $StringArray*)},
	{"getLastChildElement", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getLastChildElement, $Element*, $Node*, $String*, $String*, $String*)},
	{"getLastChildElementNS", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getLastChildElementNS, $Element*, $Node*, $String*, $String*)},
	{"getLastChildElementNS", "(Lorg/w3c/dom/Node;[[Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getLastChildElementNS, $Element*, $Node*, $StringArray2*)},
	{"getLastVisibleChildElement", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getLastVisibleChildElement, $Element*, $Node*)},
	{"getLastVisibleChildElement", "(Lorg/w3c/dom/Node;Ljava/util/Map;)Lorg/w3c/dom/Element;", "(Lorg/w3c/dom/Node;Ljava/util/Map<Lorg/w3c/dom/Node;Ljava/lang/String;>;)Lorg/w3c/dom/Element;", $PUBLIC | $STATIC, $staticMethod(DOMUtil, getLastVisibleChildElement, $Element*, $Node*, $Map*)},
	{"getLocalName", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getLocalName, $String*, $Node*)},
	{"getName", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getName, $String*, $Node*)},
	{"getNamespaceURI", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getNamespaceURI, $String*, $Node*)},
	{"getNextSiblingElement", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getNextSiblingElement, $Element*, $Node*)},
	{"getNextSiblingElement", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getNextSiblingElement, $Element*, $Node*, $String*)},
	{"getNextSiblingElement", "(Lorg/w3c/dom/Node;[Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getNextSiblingElement, $Element*, $Node*, $StringArray*)},
	{"getNextSiblingElement", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getNextSiblingElement, $Element*, $Node*, $String*, $String*, $String*)},
	{"getNextSiblingElementNS", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getNextSiblingElementNS, $Element*, $Node*, $String*, $String*)},
	{"getNextSiblingElementNS", "(Lorg/w3c/dom/Node;[[Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getNextSiblingElementNS, $Element*, $Node*, $StringArray2*)},
	{"getNextVisibleSiblingElement", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getNextVisibleSiblingElement, $Element*, $Node*)},
	{"getNextVisibleSiblingElement", "(Lorg/w3c/dom/Node;Ljava/util/Map;)Lorg/w3c/dom/Element;", "(Lorg/w3c/dom/Node;Ljava/util/Map<Lorg/w3c/dom/Node;Ljava/lang/String;>;)Lorg/w3c/dom/Element;", $PUBLIC | $STATIC, $staticMethod(DOMUtil, getNextVisibleSiblingElement, $Element*, $Node*, $Map*)},
	{"getParent", "(Lorg/w3c/dom/Element;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getParent, $Element*, $Element*)},
	{"getPrefix", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getPrefix, $String*, $Node*)},
	{"getRoot", "(Lorg/w3c/dom/Document;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getRoot, $Element*, $Document*)},
	{"getSyntheticAnnotation", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getSyntheticAnnotation, $String*, $Node*)},
	{"getValue", "(Lorg/w3c/dom/Attr;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, getValue, $String*, $Attr*)},
	{"isHidden", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, isHidden, bool, $Node*)},
	{"isHidden", "(Lorg/w3c/dom/Node;Ljava/util/Map;)Z", "(Lorg/w3c/dom/Node;Ljava/util/Map<Lorg/w3c/dom/Node;Ljava/lang/String;>;)Z", $PUBLIC | $STATIC, $staticMethod(DOMUtil, isHidden, bool, $Node*, $Map*)},
	{"setHidden", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, setHidden, void, $Node*)},
	{"setHidden", "(Lorg/w3c/dom/Node;Ljava/util/Map;)V", "(Lorg/w3c/dom/Node;Ljava/util/Map<Lorg/w3c/dom/Node;Ljava/lang/String;>;)V", $PUBLIC | $STATIC, $staticMethod(DOMUtil, setHidden, void, $Node*, $Map*)},
	{"setVisible", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMUtil, setVisible, void, $Node*)},
	{"setVisible", "(Lorg/w3c/dom/Node;Ljava/util/Map;)V", "(Lorg/w3c/dom/Node;Ljava/util/Map<Lorg/w3c/dom/Node;Ljava/lang/String;>;)V", $PUBLIC | $STATIC, $staticMethod(DOMUtil, setVisible, void, $Node*, $Map*)},
	{}
};

$ClassInfo _DOMUtil_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.DOMUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DOMUtil_MethodInfo_
};

$Object* allocate$DOMUtil($Class* clazz) {
	return $of($alloc(DOMUtil));
}

void DOMUtil::init$() {
}

void DOMUtil::copyInto($Node* src, $Node* dest$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Node, dest, dest$renamed);
	$var($Document, factory, $nc(dest)->getOwnerDocument());
	bool domimpl = $instanceOf($DocumentImpl, factory);
	$var($Node, start, src);
	$var($Node, parent, src);
	$var($Node, place, src);
	while (place != nullptr) {
		$var($Node, node, nullptr);
		int32_t type = place->getNodeType();
		switch (type) {
		case $Node::CDATA_SECTION_NODE:
			{
				{
					$assign(node, $nc(factory)->createCDATASection($(place->getNodeValue())));
					break;
				}
			}
		case $Node::COMMENT_NODE:
			{
				{
					$assign(node, $nc(factory)->createComment($(place->getNodeValue())));
					break;
				}
			}
		case $Node::ELEMENT_NODE:
			{
				{
					$var($Element, element, $nc(factory)->createElement($(place->getNodeName())));
					$assign(node, element);
					$var($NamedNodeMap, attrs, place->getAttributes());
					int32_t attrCount = $nc(attrs)->getLength();
					for (int32_t i = 0; i < attrCount; ++i) {
						$var($Attr, attr, $cast($Attr, attrs->item(i)));
						$var($String, attrName, $nc(attr)->getNodeName());
						$var($String, attrValue, attr->getNodeValue());
						$nc(element)->setAttribute(attrName, attrValue);
						if (domimpl && !attr->getSpecified()) {
							$nc(($cast($AttrImpl, $(element->getAttributeNode(attrName)))))->setSpecified(false);
						}
					}
					break;
				}
			}
		case $Node::ENTITY_REFERENCE_NODE:
			{
				{
					$assign(node, $nc(factory)->createEntityReference($(place->getNodeName())));
					break;
				}
			}
		case $Node::PROCESSING_INSTRUCTION_NODE:
			{
				{
					$var($String, var$0, place->getNodeName());
					$assign(node, $nc(factory)->createProcessingInstruction(var$0, $(place->getNodeValue())));
					break;
				}
			}
		case $Node::TEXT_NODE:
			{
				{
					$assign(node, $nc(factory)->createTextNode($(place->getNodeValue())));
					break;
				}
			}
		default:
			{
				{
					$throwNew($IllegalArgumentException, $$str({"can\'t copy node type, "_s, $$str(type), " ("_s, $(place->getNodeName()), $$str(u')')}));
				}
			}
		}
		dest->appendChild(node);
		if (place->hasChildNodes()) {
			$assign(parent, place);
			$assign(place, place->getFirstChild());
			$assign(dest, node);
		} else {
			$assign(place, place->getNextSibling());
			while (place == nullptr && parent != start) {
				$assign(place, $nc(parent)->getNextSibling());
				$assign(parent, parent->getParentNode());
				$assign(dest, $nc(dest)->getParentNode());
			}
		}
	}
}

$Element* DOMUtil::getFirstChildElement($Node* parent) {
	$var($Node, child, $nc(parent)->getFirstChild());
	while (child != nullptr) {
		if (child->getNodeType() == $Node::ELEMENT_NODE) {
			return $cast($Element, child);
		}
		$assign(child, child->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getFirstVisibleChildElement($Node* parent) {
	$var($Node, child, $nc(parent)->getFirstChild());
	while (child != nullptr) {
		bool var$0 = child->getNodeType() == $Node::ELEMENT_NODE;
		if (var$0 && !isHidden(child)) {
			return $cast($Element, child);
		}
		$assign(child, child->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getFirstVisibleChildElement($Node* parent, $Map* hiddenNodes) {
	$var($Node, child, $nc(parent)->getFirstChild());
	while (child != nullptr) {
		bool var$0 = child->getNodeType() == $Node::ELEMENT_NODE;
		if (var$0 && !isHidden(child, hiddenNodes)) {
			return $cast($Element, child);
		}
		$assign(child, child->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getLastChildElement($Node* parent) {
	$var($Node, child, $nc(parent)->getLastChild());
	while (child != nullptr) {
		if (child->getNodeType() == $Node::ELEMENT_NODE) {
			return $cast($Element, child);
		}
		$assign(child, child->getPreviousSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getLastVisibleChildElement($Node* parent) {
	$var($Node, child, $nc(parent)->getLastChild());
	while (child != nullptr) {
		bool var$0 = child->getNodeType() == $Node::ELEMENT_NODE;
		if (var$0 && !isHidden(child)) {
			return $cast($Element, child);
		}
		$assign(child, child->getPreviousSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getLastVisibleChildElement($Node* parent, $Map* hiddenNodes) {
	$var($Node, child, $nc(parent)->getLastChild());
	while (child != nullptr) {
		bool var$0 = child->getNodeType() == $Node::ELEMENT_NODE;
		if (var$0 && !isHidden(child, hiddenNodes)) {
			return $cast($Element, child);
		}
		$assign(child, child->getPreviousSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getNextSiblingElement($Node* node) {
	$var($Node, sibling, $nc(node)->getNextSibling());
	while (sibling != nullptr) {
		if (sibling->getNodeType() == $Node::ELEMENT_NODE) {
			return $cast($Element, sibling);
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getNextVisibleSiblingElement($Node* node) {
	$var($Node, sibling, $nc(node)->getNextSibling());
	while (sibling != nullptr) {
		bool var$0 = sibling->getNodeType() == $Node::ELEMENT_NODE;
		if (var$0 && !isHidden(sibling)) {
			return $cast($Element, sibling);
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getNextVisibleSiblingElement($Node* node, $Map* hiddenNodes) {
	$var($Node, sibling, $nc(node)->getNextSibling());
	while (sibling != nullptr) {
		bool var$0 = sibling->getNodeType() == $Node::ELEMENT_NODE;
		if (var$0 && !isHidden(sibling, hiddenNodes)) {
			return $cast($Element, sibling);
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return nullptr;
}

void DOMUtil::setHidden($Node* node) {
	if ($instanceOf($NodeImpl, node)) {
		$nc(($cast($NodeImpl, node)))->setReadOnly(true, false);
	} else if ($instanceOf($1NodeImpl, node)) {
		$nc(($cast($1NodeImpl, node)))->setReadOnly(true, false);
	}
}

void DOMUtil::setHidden($Node* node, $Map* hiddenNodes) {
	if ($instanceOf($NodeImpl, node)) {
		$nc(($cast($NodeImpl, node)))->setReadOnly(true, false);
	} else {
		$nc(hiddenNodes)->put(node, ""_s);
	}
}

void DOMUtil::setVisible($Node* node) {
	if ($instanceOf($NodeImpl, node)) {
		$nc(($cast($NodeImpl, node)))->setReadOnly(false, false);
	} else if ($instanceOf($1NodeImpl, node)) {
		$nc(($cast($1NodeImpl, node)))->setReadOnly(false, false);
	}
}

void DOMUtil::setVisible($Node* node, $Map* hiddenNodes) {
	if ($instanceOf($NodeImpl, node)) {
		$nc(($cast($NodeImpl, node)))->setReadOnly(false, false);
	} else {
		$nc(hiddenNodes)->remove(node);
	}
}

bool DOMUtil::isHidden($Node* node) {
	if ($instanceOf($NodeImpl, node)) {
		return $nc(($cast($NodeImpl, node)))->getReadOnly();
	} else if ($instanceOf($1NodeImpl, node)) {
		return $nc(($cast($1NodeImpl, node)))->getReadOnly();
	}
	return false;
}

bool DOMUtil::isHidden($Node* node, $Map* hiddenNodes) {
	if ($instanceOf($NodeImpl, node)) {
		return $nc(($cast($NodeImpl, node)))->getReadOnly();
	} else {
		return $nc(hiddenNodes)->containsKey(node);
	}
}

$Element* DOMUtil::getFirstChildElement($Node* parent, $String* elemName) {
	$useLocalCurrentObjectStackCache();
	$var($Node, child, $nc(parent)->getFirstChild());
	while (child != nullptr) {
		if (child->getNodeType() == $Node::ELEMENT_NODE) {
			if ($nc($(child->getNodeName()))->equals(elemName)) {
				return $cast($Element, child);
			}
		}
		$assign(child, child->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getLastChildElement($Node* parent, $String* elemName) {
	$useLocalCurrentObjectStackCache();
	$var($Node, child, $nc(parent)->getLastChild());
	while (child != nullptr) {
		if (child->getNodeType() == $Node::ELEMENT_NODE) {
			if ($nc($(child->getNodeName()))->equals(elemName)) {
				return $cast($Element, child);
			}
		}
		$assign(child, child->getPreviousSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getNextSiblingElement($Node* node, $String* elemName) {
	$useLocalCurrentObjectStackCache();
	$var($Node, sibling, $nc(node)->getNextSibling());
	while (sibling != nullptr) {
		if (sibling->getNodeType() == $Node::ELEMENT_NODE) {
			if ($nc($(sibling->getNodeName()))->equals(elemName)) {
				return $cast($Element, sibling);
			}
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getFirstChildElementNS($Node* parent, $String* uri, $String* localpart) {
	$useLocalCurrentObjectStackCache();
	$var($Node, child, $nc(parent)->getFirstChild());
	while (child != nullptr) {
		if (child->getNodeType() == $Node::ELEMENT_NODE) {
			$var($String, childURI, child->getNamespaceURI());
			bool var$0 = childURI != nullptr && childURI->equals(uri);
			if (var$0 && $nc($(child->getLocalName()))->equals(localpart)) {
				return $cast($Element, child);
			}
		}
		$assign(child, child->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getLastChildElementNS($Node* parent, $String* uri, $String* localpart) {
	$useLocalCurrentObjectStackCache();
	$var($Node, child, $nc(parent)->getLastChild());
	while (child != nullptr) {
		if (child->getNodeType() == $Node::ELEMENT_NODE) {
			$var($String, childURI, child->getNamespaceURI());
			bool var$0 = childURI != nullptr && childURI->equals(uri);
			if (var$0 && $nc($(child->getLocalName()))->equals(localpart)) {
				return $cast($Element, child);
			}
		}
		$assign(child, child->getPreviousSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getNextSiblingElementNS($Node* node, $String* uri, $String* localpart) {
	$useLocalCurrentObjectStackCache();
	$var($Node, sibling, $nc(node)->getNextSibling());
	while (sibling != nullptr) {
		if (sibling->getNodeType() == $Node::ELEMENT_NODE) {
			$var($String, siblingURI, sibling->getNamespaceURI());
			bool var$0 = siblingURI != nullptr && siblingURI->equals(uri);
			if (var$0 && $nc($(sibling->getLocalName()))->equals(localpart)) {
				return $cast($Element, sibling);
			}
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getFirstChildElement($Node* parent, $StringArray* elemNames) {
	$useLocalCurrentObjectStackCache();
	$var($Node, child, $nc(parent)->getFirstChild());
	while (child != nullptr) {
		if (child->getNodeType() == $Node::ELEMENT_NODE) {
			for (int32_t i = 0; i < $nc(elemNames)->length; ++i) {
				if ($nc($(child->getNodeName()))->equals(elemNames->get(i))) {
					return $cast($Element, child);
				}
			}
		}
		$assign(child, child->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getLastChildElement($Node* parent, $StringArray* elemNames) {
	$useLocalCurrentObjectStackCache();
	$var($Node, child, $nc(parent)->getLastChild());
	while (child != nullptr) {
		if (child->getNodeType() == $Node::ELEMENT_NODE) {
			for (int32_t i = 0; i < $nc(elemNames)->length; ++i) {
				if ($nc($(child->getNodeName()))->equals(elemNames->get(i))) {
					return $cast($Element, child);
				}
			}
		}
		$assign(child, child->getPreviousSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getNextSiblingElement($Node* node, $StringArray* elemNames) {
	$useLocalCurrentObjectStackCache();
	$var($Node, sibling, $nc(node)->getNextSibling());
	while (sibling != nullptr) {
		if (sibling->getNodeType() == $Node::ELEMENT_NODE) {
			for (int32_t i = 0; i < $nc(elemNames)->length; ++i) {
				if ($nc($(sibling->getNodeName()))->equals(elemNames->get(i))) {
					return $cast($Element, sibling);
				}
			}
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getFirstChildElementNS($Node* parent, $StringArray2* elemNames) {
	$useLocalCurrentObjectStackCache();
	$var($Node, child, $nc(parent)->getFirstChild());
	while (child != nullptr) {
		if (child->getNodeType() == $Node::ELEMENT_NODE) {
			for (int32_t i = 0; i < $nc(elemNames)->length; ++i) {
				$var($String, uri, child->getNamespaceURI());
				bool var$0 = uri != nullptr && uri->equals($nc(elemNames->get(i))->get(0));
				if (var$0 && $nc($(child->getLocalName()))->equals($nc(elemNames->get(i))->get(1))) {
					return $cast($Element, child);
				}
			}
		}
		$assign(child, child->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getLastChildElementNS($Node* parent, $StringArray2* elemNames) {
	$useLocalCurrentObjectStackCache();
	$var($Node, child, $nc(parent)->getLastChild());
	while (child != nullptr) {
		if (child->getNodeType() == $Node::ELEMENT_NODE) {
			for (int32_t i = 0; i < $nc(elemNames)->length; ++i) {
				$var($String, uri, child->getNamespaceURI());
				bool var$0 = uri != nullptr && uri->equals($nc(elemNames->get(i))->get(0));
				if (var$0 && $nc($(child->getLocalName()))->equals($nc(elemNames->get(i))->get(1))) {
					return $cast($Element, child);
				}
			}
		}
		$assign(child, child->getPreviousSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getNextSiblingElementNS($Node* node, $StringArray2* elemNames) {
	$useLocalCurrentObjectStackCache();
	$var($Node, sibling, $nc(node)->getNextSibling());
	while (sibling != nullptr) {
		if (sibling->getNodeType() == $Node::ELEMENT_NODE) {
			for (int32_t i = 0; i < $nc(elemNames)->length; ++i) {
				$var($String, uri, sibling->getNamespaceURI());
				bool var$0 = uri != nullptr && uri->equals($nc(elemNames->get(i))->get(0));
				if (var$0 && $nc($(sibling->getLocalName()))->equals($nc(elemNames->get(i))->get(1))) {
					return $cast($Element, sibling);
				}
			}
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getFirstChildElement($Node* parent, $String* elemName, $String* attrName, $String* attrValue) {
	$useLocalCurrentObjectStackCache();
	$var($Node, child, $nc(parent)->getFirstChild());
	while (child != nullptr) {
		if (child->getNodeType() == $Node::ELEMENT_NODE) {
			$var($Element, element, $cast($Element, child));
			bool var$0 = $nc($(element->getNodeName()))->equals(elemName);
			if (var$0 && $nc($(element->getAttribute(attrName)))->equals(attrValue)) {
				return element;
			}
		}
		$assign(child, child->getNextSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getLastChildElement($Node* parent, $String* elemName, $String* attrName, $String* attrValue) {
	$useLocalCurrentObjectStackCache();
	$var($Node, child, $nc(parent)->getLastChild());
	while (child != nullptr) {
		if (child->getNodeType() == $Node::ELEMENT_NODE) {
			$var($Element, element, $cast($Element, child));
			bool var$0 = $nc($(element->getNodeName()))->equals(elemName);
			if (var$0 && $nc($(element->getAttribute(attrName)))->equals(attrValue)) {
				return element;
			}
		}
		$assign(child, child->getPreviousSibling());
	}
	return nullptr;
}

$Element* DOMUtil::getNextSiblingElement($Node* node, $String* elemName, $String* attrName, $String* attrValue) {
	$useLocalCurrentObjectStackCache();
	$var($Node, sibling, $nc(node)->getNextSibling());
	while (sibling != nullptr) {
		if (sibling->getNodeType() == $Node::ELEMENT_NODE) {
			$var($Element, element, $cast($Element, sibling));
			bool var$0 = $nc($(element->getNodeName()))->equals(elemName);
			if (var$0 && $nc($(element->getAttribute(attrName)))->equals(attrValue)) {
				return element;
			}
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return nullptr;
}

$String* DOMUtil::getChildText($Node* node) {
	$useLocalCurrentObjectStackCache();
	if (node == nullptr) {
		return nullptr;
	}
	$var($StringBuffer, str, $new($StringBuffer));
	$var($Node, child, $nc(node)->getFirstChild());
	while (child != nullptr) {
		int16_t type = child->getNodeType();
		if (type == $Node::TEXT_NODE) {
			str->append($(child->getNodeValue()));
		} else if (type == $Node::CDATA_SECTION_NODE) {
			str->append($(getChildText(child)));
		}
		$assign(child, child->getNextSibling());
	}
	return str->toString();
}

$String* DOMUtil::getName($Node* node) {
	return $nc(node)->getNodeName();
}

$String* DOMUtil::getLocalName($Node* node) {
	$var($String, name, $nc(node)->getLocalName());
	return (name != nullptr) ? name : node->getNodeName();
}

$Element* DOMUtil::getParent($Element* elem) {
	$var($Node, parent, $nc(elem)->getParentNode());
	if ($instanceOf($Element, parent)) {
		return $cast($Element, parent);
	}
	return nullptr;
}

$Document* DOMUtil::getDocument($Node* node) {
	return $nc(node)->getOwnerDocument();
}

$Element* DOMUtil::getRoot($Document* doc) {
	return $nc(doc)->getDocumentElement();
}

$Attr* DOMUtil::getAttr($Element* elem, $String* name) {
	return $nc(elem)->getAttributeNode(name);
}

$Attr* DOMUtil::getAttrNS($Element* elem, $String* nsUri, $String* localName) {
	return $nc(elem)->getAttributeNodeNS(nsUri, localName);
}

$AttrArray* DOMUtil::getAttrs($Element* elem) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrMap, $nc(elem)->getAttributes());
	$var($AttrArray, attrArray, $new($AttrArray, $nc(attrMap)->getLength()));
	for (int32_t i = 0; i < attrMap->getLength(); ++i) {
		attrArray->set(i, $cast($Attr, $(attrMap->item(i))));
	}
	return attrArray;
}

$String* DOMUtil::getValue($Attr* attribute) {
	return $nc(attribute)->getValue();
}

$String* DOMUtil::getAttrValue($Element* elem, $String* name) {
	return $nc(elem)->getAttribute(name);
}

$String* DOMUtil::getAttrValueNS($Element* elem, $String* nsUri, $String* localName) {
	return $nc(elem)->getAttributeNS(nsUri, localName);
}

$String* DOMUtil::getPrefix($Node* node) {
	return $nc(node)->getPrefix();
}

$String* DOMUtil::getNamespaceURI($Node* node) {
	return $nc(node)->getNamespaceURI();
}

$String* DOMUtil::getAnnotation($Node* node) {
	if ($instanceOf($ElementImpl, node)) {
		return $nc(($cast($ElementImpl, node)))->getAnnotation();
	}
	return nullptr;
}

$String* DOMUtil::getSyntheticAnnotation($Node* node) {
	if ($instanceOf($ElementImpl, node)) {
		return $nc(($cast($ElementImpl, node)))->getSyntheticAnnotation();
	}
	return nullptr;
}

$DOMException* DOMUtil::createDOMException(int16_t code, $Throwable* cause) {
	$useLocalCurrentObjectStackCache();
	$var($DOMException, de, $new($DOMException, code, cause != nullptr ? $($nc(cause)->getMessage()) : ($String*)nullptr));
	if (cause != nullptr) {
		de->initCause(cause);
	}
	return de;
}

$LSException* DOMUtil::createLSException(int16_t code, $Throwable* cause) {
	$useLocalCurrentObjectStackCache();
	$var($LSException, lse, $new($LSException, code, cause != nullptr ? $($nc(cause)->getMessage()) : ($String*)nullptr));
	if (cause != nullptr) {
		lse->initCause(cause);
	}
	return lse;
}

DOMUtil::DOMUtil() {
}

$Class* DOMUtil::load$($String* name, bool initialize) {
	$loadClass(DOMUtil, name, initialize, &_DOMUtil_ClassInfo_, allocate$DOMUtil);
	return class$;
}

$Class* DOMUtil::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com