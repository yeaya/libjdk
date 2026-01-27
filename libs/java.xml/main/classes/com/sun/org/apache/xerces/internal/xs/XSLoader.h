#ifndef _com_sun_org_apache_xerces_internal_xs_XSLoader_h_
#define _com_sun_org_apache_xerces_internal_xs_XSLoader_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSLoader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class LSInputList;
							class StringList;
							class XSModel;
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
			class DOMConfiguration;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSInput;
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
						namespace xs {

class XSLoader : public ::java::lang::Object {
	$interface(XSLoader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::DOMConfiguration* getConfig() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* load(::org::w3c::dom::ls::LSInput* is) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* loadInputList(::com::sun::org::apache::xerces::internal::xs::LSInputList* is) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* loadURI($String* uri) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSModel* loadURIList(::com::sun::org::apache::xerces::internal::xs::StringList* uriList) {return nullptr;}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSLoader_h_