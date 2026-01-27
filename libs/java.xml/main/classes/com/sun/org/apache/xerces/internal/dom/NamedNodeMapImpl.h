#ifndef _com_sun_org_apache_xerces_internal_dom_NamedNodeMapImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_NamedNodeMapImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.NamedNodeMapImpl
//$ extends org.w3c.dom.NamedNodeMap
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <org/w3c/dom/NamedNodeMap.h>

#pragma push_macro("CHANGED")
#undef CHANGED
#pragma push_macro("HASDEFAULTS")
#undef HASDEFAULTS
#pragma push_macro("READONLY")
#undef READONLY

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class CoreDocumentImpl;
							class NodeImpl;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class NamedNodeMapImpl : public ::org::w3c::dom::NamedNodeMap, public ::java::io::Serializable {
	$class(NamedNodeMapImpl, $NO_CLASS_INIT, ::org::w3c::dom::NamedNodeMap, ::java::io::Serializable)
public:
	NamedNodeMapImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::dom::NodeImpl* ownerNode);
	virtual int32_t addItem(::org::w3c::dom::Node* arg);
	bool changed();
	void changed(bool value);
	virtual void cloneContent(::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl* srcmap);
	virtual ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl* cloneMap(::com::sun::org::apache::xerces::internal::dom::NodeImpl* ownerNode);
	virtual ::java::util::List* cloneMap(::java::util::List* list);
	virtual int32_t findNamePoint($String* name, int32_t start);
	virtual int32_t findNamePoint($String* namespaceURI, $String* name);
	virtual $Object* getItem(int32_t index);
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* getNamedItem($String* name) override;
	virtual int32_t getNamedItemIndex($String* namespaceURI, $String* localName);
	virtual ::org::w3c::dom::Node* getNamedItemNS($String* namespaceURI, $String* localName) override;
	virtual bool getReadOnly();
	bool hasDefaults();
	void hasDefaults(bool value);
	bool isReadOnly();
	void isReadOnly(bool value);
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	virtual bool precedes(::org::w3c::dom::Node* a, ::org::w3c::dom::Node* b);
	void readObject(::java::io::ObjectInputStream* in);
	virtual void removeAll();
	virtual void removeItem(int32_t index);
	virtual ::org::w3c::dom::Node* removeNamedItem($String* name) override;
	virtual ::org::w3c::dom::Node* removeNamedItemNS($String* namespaceURI, $String* name) override;
	virtual ::org::w3c::dom::Node* setNamedItem(::org::w3c::dom::Node* arg) override;
	virtual ::org::w3c::dom::Node* setNamedItemNS(::org::w3c::dom::Node* arg) override;
	virtual void setOwnerDocument(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* doc);
	virtual void setReadOnly(bool readOnly, bool deep);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x9E4F96494982097C;
	int16_t flags = 0;
	static const int16_t READONLY = 1; // 1 << 0
	static const int16_t CHANGED = 2; // 1 << 1
	static const int16_t HASDEFAULTS = 4; // 1 << 2
	::java::util::List* nodes = nullptr;
	::com::sun::org::apache::xerces::internal::dom::NodeImpl* ownerNode = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CHANGED")
#pragma pop_macro("HASDEFAULTS")
#pragma pop_macro("READONLY")

#endif // _com_sun_org_apache_xerces_internal_dom_NamedNodeMapImpl_h_