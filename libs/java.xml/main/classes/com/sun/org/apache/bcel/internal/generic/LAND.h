#ifndef _com_sun_org_apache_bcel_internal_generic_LAND_h_
#define _com_sun_org_apache_bcel_internal_generic_LAND_h_
//$ class com.sun.org.apache.bcel.internal.generic.LAND
//$ extends com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction

#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>

#pragma push_macro("LAND")
#undef LAND

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Visitor;
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

class LAND : public ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction {
	$class(LAND, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction)
public:
	LAND();
	void init$();
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LAND")

#endif // _com_sun_org_apache_bcel_internal_generic_LAND_h_