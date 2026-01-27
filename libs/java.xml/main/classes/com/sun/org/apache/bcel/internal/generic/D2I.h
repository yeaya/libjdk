#ifndef _com_sun_org_apache_bcel_internal_generic_D2I_h_
#define _com_sun_org_apache_bcel_internal_generic_D2I_h_
//$ class com.sun.org.apache.bcel.internal.generic.D2I
//$ extends com.sun.org.apache.bcel.internal.generic.ConversionInstruction

#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>

#pragma push_macro("D2I")
#undef D2I

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

class D2I : public ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction {
	$class(D2I, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction)
public:
	D2I();
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

#pragma pop_macro("D2I")

#endif // _com_sun_org_apache_bcel_internal_generic_D2I_h_