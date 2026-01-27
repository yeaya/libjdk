#ifndef _com_sun_org_apache_xerces_internal_impl_validation_ConfigurableValidationState_h_
#define _com_sun_org_apache_xerces_internal_impl_validation_ConfigurableValidationState_h_
//$ class com.sun.org.apache.xerces.internal.impl.validation.ConfigurableValidationState
//$ extends com.sun.org.apache.xerces.internal.impl.validation.ValidationState

#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace validation {

class ConfigurableValidationState : public ::com::sun::org::apache::xerces::internal::impl::validation::ValidationState {
	$class(ConfigurableValidationState, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::validation::ValidationState)
public:
	ConfigurableValidationState();
	void init$();
	virtual void addId($String* name) override;
	virtual void addIdRef($String* name) override;
	virtual ::java::util::Iterator* checkIDRefID() override;
	virtual bool isEntityDeclared($String* name) override;
	virtual bool isEntityUnparsed($String* name) override;
	virtual bool isIdDeclared($String* name) override;
	void setIdIdrefChecking(bool setting);
	void setUnparsedEntityChecking(bool setting);
	bool fIdIdrefChecking = false;
	bool fUnparsedEntityChecking = false;
};

							} // validation
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_validation_ConfigurableValidationState_h_