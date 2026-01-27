#ifndef _com_sun_org_apache_bcel_internal_generic_L2D_h_
#define _com_sun_org_apache_bcel_internal_generic_L2D_h_
//$ class com.sun.org.apache.bcel.internal.generic.L2D
//$ extends com.sun.org.apache.bcel.internal.generic.ConversionInstruction

#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>

#pragma push_macro("L2D")
#undef L2D

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

class L2D : public ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction {
	$class(L2D, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction)
public:
	L2D();
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

#pragma pop_macro("L2D")

#endif // _com_sun_org_apache_bcel_internal_generic_L2D_h_