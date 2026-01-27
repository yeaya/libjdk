#ifndef _com_sun_org_apache_xerces_internal_impl_validation_ValidationManager_h_
#define _com_sun_org_apache_xerces_internal_impl_validation_ValidationManager_h_
//$ class com.sun.org.apache.xerces.internal.impl.validation.ValidationManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace validation {
								class EntityState;
								class ValidationState;
							}
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
							namespace validation {

class ValidationManager : public ::java::lang::Object {
	$class(ValidationManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ValidationManager();
	void init$();
	void addValidationState(::com::sun::org::apache::xerces::internal::impl::validation::ValidationState* vs);
	bool isCachedDTD();
	bool isGrammarFound();
	void reset();
	void setCachedDTD(bool cachedDTD);
	void setEntityState(::com::sun::org::apache::xerces::internal::impl::validation::EntityState* state);
	void setGrammarFound(bool grammar);
	::java::util::List* fVSs = nullptr;
	bool fGrammarFound = false;
	bool fCachedDTD = false;
};

							} // validation
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_validation_ValidationManager_h_