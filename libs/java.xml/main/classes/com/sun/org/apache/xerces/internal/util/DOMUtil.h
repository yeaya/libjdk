#ifndef _com_sun_org_apache_xerces_internal_util_DOMUtil_h_
#define _com_sun_org_apache_xerces_internal_util_DOMUtil_h_
//$ class com.sun.org.apache.xerces.internal.util.DOMUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class DOMException;
			class Document;
			class Element;
			class Node;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSException;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class DOMUtil : public ::java::lang::Object {
	$class(DOMUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DOMUtil();
	void init$();
	static void copyInto(::org::w3c::dom::Node* src, ::org::w3c::dom::Node* dest);
	static ::org::w3c::dom::DOMException* createDOMException(int16_t code, $Throwable* cause);
	static ::org::w3c::dom::ls::LSException* createLSException(int16_t code, $Throwable* cause);
	static $String* getAnnotation(::org::w3c::dom::Node* node);
	static ::org::w3c::dom::Attr* getAttr(::org::w3c::dom::Element* elem, $String* name);
	static ::org::w3c::dom::Attr* getAttrNS(::org::w3c::dom::Element* elem, $String* nsUri, $String* localName);
	static $String* getAttrValue(::org::w3c::dom::Element* elem, $String* name);
	static $String* getAttrValueNS(::org::w3c::dom::Element* elem, $String* nsUri, $String* localName);
	static $Array<::org::w3c::dom::Attr>* getAttrs(::org::w3c::dom::Element* elem);
	static $String* getChildText(::org::w3c::dom::Node* node);
	static ::org::w3c::dom::Document* getDocument(::org::w3c::dom::Node* node);
	static ::org::w3c::dom::Element* getFirstChildElement(::org::w3c::dom::Node* parent);
	static ::org::w3c::dom::Element* getFirstChildElement(::org::w3c::dom::Node* parent, $String* elemName);
	static ::org::w3c::dom::Element* getFirstChildElement(::org::w3c::dom::Node* parent, $StringArray* elemNames);
	static ::org::w3c::dom::Element* getFirstChildElement(::org::w3c::dom::Node* parent, $String* elemName, $String* attrName, $String* attrValue);
	static ::org::w3c::dom::Element* getFirstChildElementNS(::org::w3c::dom::Node* parent, $String* uri, $String* localpart);
	static ::org::w3c::dom::Element* getFirstChildElementNS(::org::w3c::dom::Node* parent, $Array<::java::lang::String, 2>* elemNames);
	static ::org::w3c::dom::Element* getFirstVisibleChildElement(::org::w3c::dom::Node* parent);
	static ::org::w3c::dom::Element* getFirstVisibleChildElement(::org::w3c::dom::Node* parent, ::java::util::Map* hiddenNodes);
	static ::org::w3c::dom::Element* getLastChildElement(::org::w3c::dom::Node* parent);
	static ::org::w3c::dom::Element* getLastChildElement(::org::w3c::dom::Node* parent, $String* elemName);
	static ::org::w3c::dom::Element* getLastChildElement(::org::w3c::dom::Node* parent, $StringArray* elemNames);
	static ::org::w3c::dom::Element* getLastChildElement(::org::w3c::dom::Node* parent, $String* elemName, $String* attrName, $String* attrValue);
	static ::org::w3c::dom::Element* getLastChildElementNS(::org::w3c::dom::Node* parent, $String* uri, $String* localpart);
	static ::org::w3c::dom::Element* getLastChildElementNS(::org::w3c::dom::Node* parent, $Array<::java::lang::String, 2>* elemNames);
	static ::org::w3c::dom::Element* getLastVisibleChildElement(::org::w3c::dom::Node* parent);
	static ::org::w3c::dom::Element* getLastVisibleChildElement(::org::w3c::dom::Node* parent, ::java::util::Map* hiddenNodes);
	static $String* getLocalName(::org::w3c::dom::Node* node);
	static $String* getName(::org::w3c::dom::Node* node);
	static $String* getNamespaceURI(::org::w3c::dom::Node* node);
	static ::org::w3c::dom::Element* getNextSiblingElement(::org::w3c::dom::Node* node);
	static ::org::w3c::dom::Element* getNextSiblingElement(::org::w3c::dom::Node* node, $String* elemName);
	static ::org::w3c::dom::Element* getNextSiblingElement(::org::w3c::dom::Node* node, $StringArray* elemNames);
	static ::org::w3c::dom::Element* getNextSiblingElement(::org::w3c::dom::Node* node, $String* elemName, $String* attrName, $String* attrValue);
	static ::org::w3c::dom::Element* getNextSiblingElementNS(::org::w3c::dom::Node* node, $String* uri, $String* localpart);
	static ::org::w3c::dom::Element* getNextSiblingElementNS(::org::w3c::dom::Node* node, $Array<::java::lang::String, 2>* elemNames);
	static ::org::w3c::dom::Element* getNextVisibleSiblingElement(::org::w3c::dom::Node* node);
	static ::org::w3c::dom::Element* getNextVisibleSiblingElement(::org::w3c::dom::Node* node, ::java::util::Map* hiddenNodes);
	static ::org::w3c::dom::Element* getParent(::org::w3c::dom::Element* elem);
	static $String* getPrefix(::org::w3c::dom::Node* node);
	static ::org::w3c::dom::Element* getRoot(::org::w3c::dom::Document* doc);
	static $String* getSyntheticAnnotation(::org::w3c::dom::Node* node);
	static $String* getValue(::org::w3c::dom::Attr* attribute);
	static bool isHidden(::org::w3c::dom::Node* node);
	static bool isHidden(::org::w3c::dom::Node* node, ::java::util::Map* hiddenNodes);
	static void setHidden(::org::w3c::dom::Node* node);
	static void setHidden(::org::w3c::dom::Node* node, ::java::util::Map* hiddenNodes);
	static void setVisible(::org::w3c::dom::Node* node);
	static void setVisible(::org::w3c::dom::Node* node, ::java::util::Map* hiddenNodes);
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_DOMUtil_h_