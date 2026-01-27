#ifndef _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$2_h_
#define _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$2_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$2
//$ extends org.w3c.dom.ls.LSResourceResolver

#include <org/w3c/dom/ls/LSResourceResolver.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							class JAXPValidatorComponent;
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
						namespace jaxp {

class JAXPValidatorComponent$2 : public ::org::w3c::dom::ls::LSResourceResolver {
	$class(JAXPValidatorComponent$2, $NO_CLASS_INIT, ::org::w3c::dom::ls::LSResourceResolver)
public:
	JAXPValidatorComponent$2();
	void init$(::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent* this$0);
	virtual ::org::w3c::dom::ls::LSInput* resolveResource($String* type, $String* ns, $String* publicId, $String* systemId, $String* baseUri) override;
	::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent* this$0 = nullptr;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$2_h_