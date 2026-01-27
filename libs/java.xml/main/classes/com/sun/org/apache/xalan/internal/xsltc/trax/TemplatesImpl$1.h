#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl$1_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl$1_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$1
//$ extends java.lang.module.ModuleReference

#include <java/lang/module/ModuleReference.h>

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
namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
			class ModuleReader;
		}
	}
}
namespace java {
	namespace net {
		class URI;
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

class TemplatesImpl$1 : public ::java::lang::module::ModuleReference {
	$class(TemplatesImpl$1, $NO_CLASS_INIT, ::java::lang::module::ModuleReference)
public:
	TemplatesImpl$1();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl* this$0, ::java::lang::module::ModuleDescriptor* arg0, ::java::net::URI* arg1);
	virtual ::java::lang::module::ModuleReader* open() override;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl$1_h_