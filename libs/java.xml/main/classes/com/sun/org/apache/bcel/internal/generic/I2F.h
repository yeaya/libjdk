#ifndef _com_sun_org_apache_bcel_internal_generic_I2F_h_
#define _com_sun_org_apache_bcel_internal_generic_I2F_h_
//$ class com.sun.org.apache.bcel.internal.generic.I2F
//$ extends com.sun.org.apache.bcel.internal.generic.ConversionInstruction

#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>

#pragma push_macro("I2F")
#undef I2F

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

class I2F : public ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction {
	$class(I2F, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction)
public:
	I2F();
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

#pragma pop_macro("I2F")

#endif // _com_sun_org_apache_bcel_internal_generic_I2F_h_