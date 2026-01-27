#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_XML11DTDValidator_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_XML11DTDValidator_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.XML11DTDValidator
//$ extends com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDValidator

#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator.h>

#pragma push_macro("DTD_VALIDATOR_PROPERTY")
#undef DTD_VALIDATOR_PROPERTY

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLComponentManager;
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
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

class XML11DTDValidator : public ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator {
	$class(XML11DTDValidator, 0, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator)
public:
	XML11DTDValidator();
	void init$();
	virtual void init() override;
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* manager) override;
	static $String* DTD_VALIDATOR_PROPERTY;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DTD_VALIDATOR_PROPERTY")

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_XML11DTDValidator_h_