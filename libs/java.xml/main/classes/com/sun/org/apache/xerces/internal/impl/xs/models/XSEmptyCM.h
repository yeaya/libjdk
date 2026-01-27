#ifndef _com_sun_org_apache_xerces_internal_impl_xs_models_XSEmptyCM_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_models_XSEmptyCM_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.models.XSEmptyCM
//$ extends com.sun.org.apache.xerces.internal.impl.xs.models.XSCMValidator

#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY")
#undef EMPTY
#pragma push_macro("STATE_START")
#undef STATE_START

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class SubstitutionGroupHandler;
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
						namespace xni {
							class QName;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace models {

class XSEmptyCM : public ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator {
	$class(XSEmptyCM, 0, ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator)
public:
	XSEmptyCM();
	void init$();
	virtual ::java::util::List* checkMinMaxBounds() override;
	virtual bool checkUniqueParticleAttribution(::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* subGroupHandler) override;
	virtual bool endContentModel($ints* currentState) override;
	virtual $String* getTermName(int32_t termId) override;
	virtual bool isCompactedForUPA() override;
	virtual $ints* occurenceInfo($ints* state) override;
	virtual $Object* oneTransition(::com::sun::org::apache::xerces::internal::xni::QName* elementName, $ints* currentState, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* subGroupHandler) override;
	virtual $ints* startContentModel() override;
	virtual ::java::util::List* whatCanGoHere($ints* state) override;
	static const int16_t STATE_START = 0;
	static ::java::util::List* EMPTY;
};

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTY")
#pragma pop_macro("STATE_START")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_models_XSEmptyCM_h_