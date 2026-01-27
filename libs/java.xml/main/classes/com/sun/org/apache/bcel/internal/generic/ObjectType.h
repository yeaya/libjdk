#ifndef _com_sun_org_apache_bcel_internal_generic_ObjectType_h_
#define _com_sun_org_apache_bcel_internal_generic_ObjectType_h_
//$ class com.sun.org.apache.bcel.internal.generic.ObjectType
//$ extends com.sun.org.apache.bcel.internal.generic.ReferenceType

#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class ObjectType : public ::com::sun::org::apache::bcel::internal::generic::ReferenceType {
	$class(ObjectType, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ReferenceType)
public:
	ObjectType();
	void init$($String* className);
	virtual bool accessibleTo(::com::sun::org::apache::bcel::internal::generic::ObjectType* accessor);
	virtual bool equals(Object$* type) override;
	virtual $String* getClassName();
	static ::com::sun::org::apache::bcel::internal::generic::ObjectType* getInstance($String* className);
	virtual int32_t hashCode() override;
	virtual bool referencesClass();
	virtual bool referencesClassExact();
	virtual bool referencesInterface();
	virtual bool referencesInterfaceExact();
	virtual bool subclassOf(::com::sun::org::apache::bcel::internal::generic::ObjectType* superclass);
	$String* className = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_ObjectType_h_