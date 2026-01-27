#ifndef _com_sun_org_apache_bcel_internal_generic_ReferenceType_h_
#define _com_sun_org_apache_bcel_internal_generic_ReferenceType_h_
//$ class com.sun.org.apache.bcel.internal.generic.ReferenceType
//$ extends com.sun.org.apache.bcel.internal.generic.Type

#include <com/sun/org/apache/bcel/internal/generic/Type.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class ReferenceType : public ::com::sun::org::apache::bcel::internal::generic::Type {
	$class(ReferenceType, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Type)
public:
	ReferenceType();
	void init$(int8_t t, $String* s);
	void init$();
	virtual ::com::sun::org::apache::bcel::internal::generic::ReferenceType* firstCommonSuperclass(::com::sun::org::apache::bcel::internal::generic::ReferenceType* t);
	virtual ::com::sun::org::apache::bcel::internal::generic::ReferenceType* getFirstCommonSuperclass(::com::sun::org::apache::bcel::internal::generic::ReferenceType* t);
	virtual bool isAssignmentCompatibleWith(::com::sun::org::apache::bcel::internal::generic::Type* t);
	virtual bool isCastableTo(::com::sun::org::apache::bcel::internal::generic::Type* t);
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_ReferenceType_h_