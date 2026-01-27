#ifndef _com_sun_org_apache_bcel_internal_generic_BREAKPOINT_h_
#define _com_sun_org_apache_bcel_internal_generic_BREAKPOINT_h_
//$ class com.sun.org.apache.bcel.internal.generic.BREAKPOINT
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>

#pragma push_macro("BREAKPOINT")
#undef BREAKPOINT

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

class BREAKPOINT : public ::com::sun::org::apache::bcel::internal::generic::Instruction {
	$class(BREAKPOINT, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction)
public:
	BREAKPOINT();
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

#pragma pop_macro("BREAKPOINT")

#endif // _com_sun_org_apache_bcel_internal_generic_BREAKPOINT_h_