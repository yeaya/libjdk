#ifndef _com_sun_org_apache_bcel_internal_generic_BasicType_h_
#define _com_sun_org_apache_bcel_internal_generic_BasicType_h_
//$ class com.sun.org.apache.bcel.internal.generic.BasicType
//$ extends com.sun.org.apache.bcel.internal.generic.Type

#include <com/sun/org/apache/bcel/internal/generic/Type.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class BasicType : public ::com::sun::org::apache::bcel::internal::generic::Type {
	$class(BasicType, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Type)
public:
	BasicType();
	using ::com::sun::org::apache::bcel::internal::generic::Type::getType;
	void init$(int8_t type);
	virtual bool equals(Object$* _type) override;
	static ::com::sun::org::apache::bcel::internal::generic::BasicType* getType(int8_t type);
	virtual int32_t hashCode() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_BasicType_h_