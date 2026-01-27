#ifndef _com_sun_org_apache_bcel_internal_generic_IfInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_IfInstruction_h_
//$ class com.sun.org.apache.bcel.internal.generic.IfInstruction
//$ extends com.sun.org.apache.bcel.internal.generic.BranchInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.StackConsumer

#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
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

class IfInstruction : public ::com::sun::org::apache::bcel::internal::generic::BranchInstruction, public ::com::sun::org::apache::bcel::internal::generic::StackConsumer {
	$class(IfInstruction, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::BranchInstruction, ::com::sun::org::apache::bcel::internal::generic::StackConsumer)
public:
	IfInstruction();
	virtual $Object* clone() override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int16_t opcode, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	virtual ::com::sun::org::apache::bcel::internal::generic::IfInstruction* negate() {return nullptr;}
	using ::com::sun::org::apache::bcel::internal::generic::BranchInstruction::toString;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_IfInstruction_h_