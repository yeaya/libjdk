#ifndef _com_sun_org_apache_bcel_internal_generic_ReturnaddressType_h_
#define _com_sun_org_apache_bcel_internal_generic_ReturnaddressType_h_
//$ class com.sun.org.apache.bcel.internal.generic.ReturnaddressType
//$ extends com.sun.org.apache.bcel.internal.generic.Type

#include <com/sun/org/apache/bcel/internal/generic/Type.h>

#pragma push_macro("NO_TARGET")
#undef NO_TARGET

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
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

class ReturnaddressType : public ::com::sun::org::apache::bcel::internal::generic::Type {
	$class(ReturnaddressType, 0, ::com::sun::org::apache::bcel::internal::generic::Type)
public:
	ReturnaddressType();
	void init$();
	void init$(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* returnTarget);
	virtual bool equals(Object$* rat) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getTarget();
	virtual int32_t hashCode() override;
	static ::com::sun::org::apache::bcel::internal::generic::ReturnaddressType* NO_TARGET;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* returnTarget = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NO_TARGET")

#endif // _com_sun_org_apache_bcel_internal_generic_ReturnaddressType_h_