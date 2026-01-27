#ifndef _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMValidator_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMValidator_h_
//$ interface com.sun.org.apache.xerces.internal.impl.xs.models.XSCMValidator
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FIRST_ERROR")
#undef FIRST_ERROR
#pragma push_macro("SUBSEQUENT_ERROR")
#undef SUBSEQUENT_ERROR

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

class XSCMValidator : public ::java::lang::Object {
	$interface(XSCMValidator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::List* checkMinMaxBounds() {return nullptr;}
	virtual bool checkUniqueParticleAttribution(::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* subGroupHandler) {return false;}
	virtual bool endContentModel($ints* state) {return false;}
	virtual $String* getTermName(int32_t termId) {return nullptr;}
	virtual bool isCompactedForUPA() {return false;}
	virtual $ints* occurenceInfo($ints* state) {return nullptr;}
	virtual $Object* oneTransition(::com::sun::org::apache::xerces::internal::xni::QName* elementName, $ints* state, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* subGroupHandler) {return nullptr;}
	virtual $ints* startContentModel() {return nullptr;}
	virtual ::java::util::List* whatCanGoHere($ints* state) {return nullptr;}
	static const int16_t FIRST_ERROR = (-1);
	static const int16_t SUBSEQUENT_ERROR = (-2);
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

#pragma pop_macro("FIRST_ERROR")
#pragma pop_macro("SUBSEQUENT_ERROR")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_models_XSCMValidator_h_