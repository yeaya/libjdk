#ifndef _com_sun_org_apache_bcel_internal_generic_LNEG_h_
#define _com_sun_org_apache_bcel_internal_generic_LNEG_h_
//$ class com.sun.org.apache.bcel.internal.generic.LNEG
//$ extends com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction

#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>

#pragma push_macro("LNEG")
#undef LNEG

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

class LNEG : public ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction {
	$class(LNEG, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction)
public:
	LNEG();
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

#pragma pop_macro("LNEG")

#endif // _com_sun_org_apache_bcel_internal_generic_LNEG_h_