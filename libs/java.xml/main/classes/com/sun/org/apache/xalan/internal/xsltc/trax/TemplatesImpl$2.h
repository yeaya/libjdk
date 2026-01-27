#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl$2_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl$2_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$2
//$ extends java.lang.module.ModuleFinder

#include <java/lang/module/ModuleFinder.h>

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
			class ModuleReference;
		}
	}
}
namespace java {
	namespace util {
		class Optional;
		class Set;
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

class TemplatesImpl$2 : public ::java::lang::module::ModuleFinder {
	$class(TemplatesImpl$2, $NO_CLASS_INIT, ::java::lang::module::ModuleFinder)
public:
	TemplatesImpl$2();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl* this$0, $String* val$mn, ::java::lang::module::ModuleReference* val$mref);
	virtual ::java::util::Optional* find($String* name) override;
	virtual ::java::util::Set* findAll() override;
	::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl* this$0 = nullptr;
	::java::lang::module::ModuleReference* val$mref = nullptr;
	$String* val$mn = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl$2_h_