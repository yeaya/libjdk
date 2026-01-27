#ifndef _com_sun_org_apache_bcel_internal_generic_JsrInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_JsrInstruction_h_
//$ class com.sun.org.apache.bcel.internal.generic.JsrInstruction
//$ extends com.sun.org.apache.bcel.internal.generic.BranchInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.UnconditionalBranch,com.sun.org.apache.bcel.internal.generic.TypedInstruction,com.sun.org.apache.bcel.internal.generic.StackProducer

#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/UnconditionalBranch.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class InstructionHandle;
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

class JsrInstruction : public ::com::sun::org::apache::bcel::internal::generic::BranchInstruction, public ::com::sun::org::apache::bcel::internal::generic::UnconditionalBranch, public ::com::sun::org::apache::bcel::internal::generic::TypedInstruction, public ::com::sun::org::apache::bcel::internal::generic::StackProducer {
	$class(JsrInstruction, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::BranchInstruction, ::com::sun::org::apache::bcel::internal::generic::UnconditionalBranch, ::com::sun::org::apache::bcel::internal::generic::TypedInstruction, ::com::sun::org::apache::bcel::internal::generic::StackProducer)
public:
	JsrInstruction();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int16_t opcode, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	void init$();
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* physicalSuccessor();
	using ::com::sun::org::apache::bcel::internal::generic::BranchInstruction::toString;
	virtual int32_t produceStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_JsrInstruction_h_