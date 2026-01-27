#ifndef _com_sun_org_apache_bcel_internal_generic_LXOR_h_
#define _com_sun_org_apache_bcel_internal_generic_LXOR_h_
//$ class com.sun.org.apache.bcel.internal.generic.LXOR
//$ extends com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction

#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>

#pragma push_macro("LXOR")
#undef LXOR

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

class LXOR : public ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction {
	$class(LXOR, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction)
public:
	LXOR();
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

#pragma pop_macro("LXOR")

#endif // _com_sun_org_apache_bcel_internal_generic_LXOR_h_