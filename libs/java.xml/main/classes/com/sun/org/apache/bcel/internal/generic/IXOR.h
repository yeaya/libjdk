#ifndef _com_sun_org_apache_bcel_internal_generic_IXOR_h_
#define _com_sun_org_apache_bcel_internal_generic_IXOR_h_
//$ class com.sun.org.apache.bcel.internal.generic.IXOR
//$ extends com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction

#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>

#pragma push_macro("IXOR")
#undef IXOR

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

class IXOR : public ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction {
	$class(IXOR, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction)
public:
	IXOR();
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

#pragma pop_macro("IXOR")

#endif // _com_sun_org_apache_bcel_internal_generic_IXOR_h_