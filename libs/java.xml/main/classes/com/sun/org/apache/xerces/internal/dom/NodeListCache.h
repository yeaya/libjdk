#ifndef _com_sun_org_apache_xerces_internal_dom_NodeListCache_h_
#define _com_sun_org_apache_xerces_internal_dom_NodeListCache_h_
//$ class com.sun.org.apache.xerces.internal.dom.NodeListCache
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class ChildNode;
							class ParentNode;
						}
					}
				}
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
						namespace dom {

class NodeListCache : public ::java::io::Serializable {
	$class(NodeListCache, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	NodeListCache();
	void init$(::com::sun::org::apache::xerces::internal::dom::ParentNode* owner);
	static const int64_t serialVersionUID = (int64_t)0x91FBC224FE0ED1A6;
	int32_t fLength = 0;
	int32_t fChildIndex = 0;
	::com::sun::org::apache::xerces::internal::dom::ChildNode* fChild = nullptr;
	::com::sun::org::apache::xerces::internal::dom::ParentNode* fOwner = nullptr;
	::com::sun::org::apache::xerces::internal::dom::NodeListCache* next = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_NodeListCache_h_