#ifndef _com_sun_org_apache_bcel_internal_generic_L2F_h_
#define _com_sun_org_apache_bcel_internal_generic_L2F_h_
//$ class com.sun.org.apache.bcel.internal.generic.L2F
//$ extends com.sun.org.apache.bcel.internal.generic.ConversionInstruction

#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>

#pragma push_macro("L2F")
#undef L2F

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

class L2F : public ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction {
	$class(L2F, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction)
public:
	L2F();
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

#pragma pop_macro("L2F")

#endif // _com_sun_org_apache_bcel_internal_generic_L2F_h_