#ifndef _com_sun_org_apache_bcel_internal_generic_NOP_h_
#define _com_sun_org_apache_bcel_internal_generic_NOP_h_
//$ class com.sun.org.apache.bcel.internal.generic.NOP
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>

#pragma push_macro("NOP")
#undef NOP

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

class NOP : public ::com::sun::org::apache::bcel::internal::generic::Instruction {
	$class(NOP, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction)
public:
	NOP();
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

#pragma pop_macro("NOP")

#endif // _com_sun_org_apache_bcel_internal_generic_NOP_h_