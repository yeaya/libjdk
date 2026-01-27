#ifndef _com_sun_org_apache_xerces_internal_dom_AttributeMap_h_
#define _com_sun_org_apache_xerces_internal_dom_AttributeMap_h_
//$ class com.sun.org.apache.xerces.internal.dom.AttributeMap
//$ extends com.sun.org.apache.xerces.internal.dom.NamedNodeMapImpl

#include <com/sun/org/apache/xerces/internal/dom/NamedNodeMapImpl.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class AttrImpl;
							class ElementImpl;
							class NodeImpl;
						}
					}
				}
			}
		}
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

class AttributeMap : public ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl {
	$class(AttributeMap, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl)
public:
	AttributeMap();
	using ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl::cloneMap;
	void init$(::com::sun::org::apache::xerces::internal::dom::ElementImpl* ownerNode, ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl* defaults);
	virtual int32_t addItem(::org::w3c::dom::Node* arg) override;
	virtual void cloneContent(::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl* srcmap) override;
	virtual ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl* cloneMap(::com::sun::org::apache::xerces::internal::dom::NodeImpl* ownerNode) override;
	::org::w3c::dom::Node* internalRemoveNamedItem($String* name, bool raiseEx);
	::org::w3c::dom::Node* internalRemoveNamedItemNS($String* namespaceURI, $String* name, bool raiseEx);
	virtual void moveSpecifiedAttributes(::com::sun::org::apache::xerces::internal::dom::AttributeMap* srcmap);
	virtual void reconcileDefaults(::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl* defaults);
	::org::w3c::dom::Node* remove(::com::sun::org::apache::xerces::internal::dom::AttrImpl* attr, int32_t index, bool addDefault);
	using ::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl::removeItem;
	virtual ::org::w3c::dom::Node* removeItem(::org::w3c::dom::Node* item, bool addDefault);
	virtual ::org::w3c::dom::Node* removeNamedItem($String* name) override;
	virtual ::org::w3c::dom::Node* removeNamedItemNS($String* namespaceURI, $String* name) override;
	virtual ::org::w3c::dom::Node* safeRemoveNamedItem($String* name);
	virtual ::org::w3c::dom::Node* safeRemoveNamedItemNS($String* namespaceURI, $String* name);
	virtual ::org::w3c::dom::Node* setNamedItem(::org::w3c::dom::Node* arg) override;
	virtual ::org::w3c::dom::Node* setNamedItemNS(::org::w3c::dom::Node* arg) override;
	static const int64_t serialVersionUID = (int64_t)0x7B21D4678EC641A7;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_AttributeMap_h_