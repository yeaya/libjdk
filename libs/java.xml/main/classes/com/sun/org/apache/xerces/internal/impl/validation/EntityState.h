#ifndef _com_sun_org_apache_xerces_internal_impl_validation_EntityState_h_
#define _com_sun_org_apache_xerces_internal_impl_validation_EntityState_h_
//$ interface com.sun.org.apache.xerces.internal.impl.validation.EntityState
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

class EntityState : public ::java::lang::Object {
	$interface(EntityState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool isEntityDeclared($String* name) {return false;}
	virtual bool isEntityUnparsed($String* name) {return false;}
};

							} // validation
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_validation_EntityState_h_