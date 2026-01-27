#ifndef _com_sun_org_apache_xerces_internal_impl_xs_models_XSAllCM_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_models_XSAllCM_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.models.XSAllCM
//$ extends com.sun.org.apache.xerces.internal.impl.xs.models.XSCMValidator

#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator.h>
#include <java/lang/Array.h>

#pragma push_macro("STATE_CHILD")
#undef STATE_CHILD
#pragma push_macro("STATE_START")
#undef STATE_START
#pragma push_macro("STATE_VALID")
#undef STATE_VALID

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class SubstitutionGroupHandler;
								class XSElementDecl;
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

class XSAllCM : public ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator {
	$class(XSAllCM, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator)
public:
	XSAllCM();
	void init$(bool hasOptionalContent, int32_t size);
	virtual void addElement(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* element, bool isOptional);
	virtual ::java::util::List* checkMinMaxBounds() override;
	virtual bool checkUniqueParticleAttribution(::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* subGroupHandler) override;
	virtual bool endContentModel($ints* currentState) override;
	virtual $Object* findMatchingDecl(::com::sun::org::apache::xerces::internal::xni::QName* elementName, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* subGroupHandler);
	virtual $String* getTermName(int32_t termId) override;
	virtual bool isCompactedForUPA() override;
	virtual $ints* occurenceInfo($ints* state) override;
	virtual $Object* oneTransition(::com::sun::org::apache::xerces::internal::xni::QName* elementName, $ints* currentState, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* subGroupHandler) override;
	virtual $ints* startContentModel() override;
	virtual ::java::util::List* whatCanGoHere($ints* state) override;
	static const int16_t STATE_START = 0;
	static const int16_t STATE_VALID = 1;
	static const int16_t STATE_CHILD = 1;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>* fAllElements = nullptr;
	$booleans* fIsOptionalElement = nullptr;
	bool fHasOptionalContent = false;
	int32_t fNumElements = 0;
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

#pragma pop_macro("STATE_CHILD")
#pragma pop_macro("STATE_START")
#pragma pop_macro("STATE_VALID")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_models_XSAllCM_h_