#ifndef _com_sun_org_apache_xerces_internal_dom_DocumentImpl$EnclosingAttr_h_
#define _com_sun_org_apache_xerces_internal_dom_DocumentImpl$EnclosingAttr_h_
//$ class com.sun.org.apache.xerces.internal.dom.DocumentImpl$EnclosingAttr
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class AttrImpl;
							class DocumentImpl;
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

class DocumentImpl$EnclosingAttr : public ::java::io::Serializable {
	$class(DocumentImpl$EnclosingAttr, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	DocumentImpl$EnclosingAttr();
	void init$(::com::sun::org::apache::xerces::internal::dom::DocumentImpl* this$0);
	::com::sun::org::apache::xerces::internal::dom::DocumentImpl* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x4847E90A0943BDF0;
	::com::sun::org::apache::xerces::internal::dom::AttrImpl* node = nullptr;
	$String* oldvalue = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DocumentImpl$EnclosingAttr_h_