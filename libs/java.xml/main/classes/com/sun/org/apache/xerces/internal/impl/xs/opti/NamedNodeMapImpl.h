#ifndef _com_sun_org_apache_xerces_internal_impl_xs_opti_NamedNodeMapImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_opti_NamedNodeMapImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.opti.NamedNodeMapImpl
//$ extends org.w3c.dom.NamedNodeMap

#include <java/lang/Array.h>
#include <org/w3c/dom/NamedNodeMap.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
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
						namespace impl {
							namespace xs {
								namespace opti {

class NamedNodeMapImpl : public ::org::w3c::dom::NamedNodeMap {
	$class(NamedNodeMapImpl, $NO_CLASS_INIT, ::org::w3c::dom::NamedNodeMap)
public:
	NamedNodeMapImpl();
	void init$($Array<::org::w3c::dom::Attr>* attrs);
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* getNamedItem($String* name) override;
	virtual ::org::w3c::dom::Node* getNamedItemNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	virtual ::org::w3c::dom::Node* removeNamedItem($String* name) override;
	virtual ::org::w3c::dom::Node* removeNamedItemNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Node* setNamedItem(::org::w3c::dom::Node* arg) override;
	virtual ::org::w3c::dom::Node* setNamedItemNS(::org::w3c::dom::Node* arg) override;
	$Array<::org::w3c::dom::Attr>* attrs = nullptr;
};

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_opti_NamedNodeMapImpl_h_