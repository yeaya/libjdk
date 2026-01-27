#ifndef _com_sun_org_apache_bcel_internal_generic_ArrayType_h_
#define _com_sun_org_apache_bcel_internal_generic_ArrayType_h_
//$ class com.sun.org.apache.bcel.internal.generic.ArrayType
//$ extends com.sun.org.apache.bcel.internal.generic.ReferenceType

#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Type;
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
				namespace bcel {
					namespace internal {
						namespace generic {

class ArrayType : public ::com::sun::org::apache::bcel::internal::generic::ReferenceType {
	$class(ArrayType, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ReferenceType)
public:
	ArrayType();
	void init$(int8_t type, int32_t dimensions);
	void init$($String* class_name, int32_t dimensions);
	void init$(::com::sun::org::apache::bcel::internal::generic::Type* type, int32_t dimensions);
	virtual bool equals(Object$* _type) override;
	::com::sun::org::apache::bcel::internal::generic::Type* getBasicType();
	int32_t getDimensions();
	::com::sun::org::apache::bcel::internal::generic::Type* getElementType();
	virtual int32_t hashCode() override;
	int32_t dimensions = 0;
	::com::sun::org::apache::bcel::internal::generic::Type* basicType = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_ArrayType_h_