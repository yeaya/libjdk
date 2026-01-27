#ifndef _com_sun_org_apache_xerces_internal_dom_ElementDefinitionImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_ElementDefinitionImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.ElementDefinitionImpl
//$ extends com.sun.org.apache.xerces.internal.dom.ParentNode

#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class CoreDocumentImpl;
							class NamedNodeMapImpl;
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
			class NamedNodeMap;
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

class ElementDefinitionImpl : public ::com::sun::org::apache::xerces::internal::dom::ParentNode {
	$class(ElementDefinitionImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::dom::ParentNode)
public:
	ElementDefinitionImpl();
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* name);
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
	static const int64_t serialVersionUID = (int64_t)0x8BC9F6CCCB8BE3C6;
	$String* name = nullptr;
	::com::sun::org::apache::xerces::internal::dom::NamedNodeMapImpl* attributes = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_ElementDefinitionImpl_h_