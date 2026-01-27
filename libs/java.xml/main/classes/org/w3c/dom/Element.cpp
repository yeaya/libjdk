#include <org/w3c/dom/Element.h>

#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/TypeInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $NodeList = ::org::w3c::dom::NodeList;
using $TypeInfo = ::org::w3c::dom::TypeInfo;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _Element_MethodInfo_[] = {
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, getAttribute, $String*, $String*)},
	{"getAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, getAttributeNS, $String*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"getAttributeNode", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, getAttributeNode, $Attr*, $String*)},
	{"getAttributeNodeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, getAttributeNodeNS, $Attr*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"getElementsByTagName", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, getElementsByTagName, $NodeList*, $String*)},
	{"getElementsByTagNameNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, getElementsByTagNameNS, $NodeList*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, getSchemaTypeInfo, $TypeInfo*)},
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, getTagName, $String*)},
	{"hasAttribute", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, hasAttribute, bool, $String*)},
	{"hasAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, hasAttributeNS, bool, $String*, $String*), "org.w3c.dom.DOMException"},
	{"removeAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, removeAttribute, void, $String*), "org.w3c.dom.DOMException"},
	{"removeAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, removeAttributeNS, void, $String*, $String*), "org.w3c.dom.DOMException"},
	{"removeAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, removeAttributeNode, $Attr*, $Attr*), "org.w3c.dom.DOMException"},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, setAttribute, void, $String*, $String*), "org.w3c.dom.DOMException"},
	{"setAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, setAttributeNS, void, $String*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"setAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, setAttributeNode, $Attr*, $Attr*), "org.w3c.dom.DOMException"},
	{"setAttributeNodeNS", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, setAttributeNodeNS, $Attr*, $Attr*), "org.w3c.dom.DOMException"},
	{"setIdAttribute", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, setIdAttribute, void, $String*, bool), "org.w3c.dom.DOMException"},
	{"setIdAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, setIdAttributeNS, void, $String*, $String*, bool), "org.w3c.dom.DOMException"},
	{"setIdAttributeNode", "(Lorg/w3c/dom/Attr;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Element, setIdAttributeNode, void, $Attr*, bool), "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _Element_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.Element",
	nullptr,
	"org.w3c.dom.Node",
	nullptr,
	_Element_MethodInfo_
};

$Object* allocate$Element($Class* clazz) {
	return $of($alloc(Element));
}

$Class* Element::load$($String* name, bool initialize) {
	$loadClass(Element, name, initialize, &_Element_ClassInfo_, allocate$Element);
	return class$;
}

$Class* Element::class$ = nullptr;

		} // dom
	} // w3c
} // org