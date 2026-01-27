#ifndef _com_sun_org_apache_bcel_internal_generic_LSUB_h_
#define _com_sun_org_apache_bcel_internal_generic_LSUB_h_
//$ class com.sun.org.apache.bcel.internal.generic.LSUB
//$ extends com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction

#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>

#pragma push_macro("LSUB")
#undef LSUB

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

class LSUB : public ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction {
	$class(LSUB, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction)
public:
	LSUB();
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

#pragma pop_macro("LSUB")

#endif // _com_sun_org_apache_bcel_internal_generic_LSUB_h_