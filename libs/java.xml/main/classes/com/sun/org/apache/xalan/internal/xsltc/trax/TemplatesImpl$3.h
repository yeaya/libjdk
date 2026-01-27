#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl$3_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl$3_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {
								class TemplatesImpl;
							}
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

class TemplatesImpl$3 : public ::java::security::PrivilegedAction {
	$class(TemplatesImpl$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	TemplatesImpl$3();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl* this$0);
	virtual $Object* run() override;
	::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl* this$0 = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl$3_h_