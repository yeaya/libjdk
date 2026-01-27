#ifndef _com_sun_org_apache_xerces_internal_dom_ParentNode$UserDataRecord_h_
#define _com_sun_org_apache_xerces_internal_dom_ParentNode$UserDataRecord_h_
//$ class com.sun.org.apache.xerces.internal.dom.ParentNode$UserDataRecord
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

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
			class UserDataHandler;
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

class ParentNode$UserDataRecord : public ::java::io::Serializable {
	$class(ParentNode$UserDataRecord, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	ParentNode$UserDataRecord();
	void init$(::com::sun::org::apache::xerces::internal::dom::ParentNode* this$0, Object$* data, ::org::w3c::dom::UserDataHandler* handler);
	::com::sun::org::apache::xerces::internal::dom::ParentNode* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x2D37313931353437;
	$Object* fData = nullptr;
	::org::w3c::dom::UserDataHandler* fHandler = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_ParentNode$UserDataRecord_h_