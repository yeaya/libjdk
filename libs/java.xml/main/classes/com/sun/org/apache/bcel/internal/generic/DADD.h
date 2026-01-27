#ifndef _com_sun_org_apache_bcel_internal_generic_DADD_h_
#define _com_sun_org_apache_bcel_internal_generic_DADD_h_
//$ class com.sun.org.apache.bcel.internal.generic.DADD
//$ extends com.sun.org.apache.bcel.internal.generic.ArithmeticInstruction

#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>

#pragma push_macro("DADD")
#undef DADD

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

class DADD : public ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction {
	$class(DADD, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction)
public:
	DADD();
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

#pragma pop_macro("DADD")

#endif // _com_sun_org_apache_bcel_internal_generic_DADD_h_