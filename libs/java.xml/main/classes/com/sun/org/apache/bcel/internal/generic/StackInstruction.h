#ifndef _com_sun_org_apache_bcel_internal_generic_StackInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_StackInstruction_h_
//$ class com.sun.org.apache.bcel.internal.generic.StackInstruction
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class Type;
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

class StackInstruction : public ::com::sun::org::apache::bcel::internal::generic::Instruction {
	$class(StackInstruction, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction)
public:
	StackInstruction();
	void init$();
	void init$(int16_t opcode);
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_StackInstruction_h_