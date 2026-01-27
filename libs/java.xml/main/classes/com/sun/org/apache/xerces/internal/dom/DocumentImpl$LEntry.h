#ifndef _com_sun_org_apache_xerces_internal_dom_DocumentImpl$LEntry_h_
#define _com_sun_org_apache_xerces_internal_dom_DocumentImpl$LEntry_h_
//$ class com.sun.org.apache.xerces.internal.dom.DocumentImpl$LEntry
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class DocumentImpl;
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
			namespace events {
				class EventListener;
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

class DocumentImpl$LEntry : public ::java::io::Serializable {
	$class(DocumentImpl$LEntry, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	DocumentImpl$LEntry();
	void init$(::com::sun::org::apache::xerces::internal::dom::DocumentImpl* this$0, $String* type, ::org::w3c::dom::events::EventListener* listener, bool useCapture);
	::com::sun::org::apache::xerces::internal::dom::DocumentImpl* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x8B0E2519EC706001;
	$String* type = nullptr;
	::org::w3c::dom::events::EventListener* listener = nullptr;
	bool useCapture = false;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DocumentImpl$LEntry_h_