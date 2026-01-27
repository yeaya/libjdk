#ifndef _com_sun_org_apache_xerces_internal_dom_ParentNode$1_h_
#define _com_sun_org_apache_xerces_internal_dom_ParentNode$1_h_
//$ class com.sun.org.apache.xerces.internal.dom.ParentNode$1
//$ extends org.w3c.dom.NodeList

#include <org/w3c/dom/NodeList.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class ParentNode;
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

class ParentNode$1 : public ::org::w3c::dom::NodeList {
	$class(ParentNode$1, $NO_CLASS_INIT, ::org::w3c::dom::NodeList)
public:
	ParentNode$1();
	void init$(::com::sun::org::apache::xerces::internal::dom::ParentNode* this$0);
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	::com::sun::org::apache::xerces::internal::dom::ParentNode* this$0 = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_ParentNode$1_h_