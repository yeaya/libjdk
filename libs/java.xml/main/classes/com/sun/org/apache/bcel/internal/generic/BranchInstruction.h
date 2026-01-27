#ifndef _com_sun_org_apache_bcel_internal_generic_BranchInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_BranchInstruction_h_
//$ class com.sun.org.apache.bcel.internal.generic.BranchInstruction
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction
//$ implements com.sun.org.apache.bcel.internal.generic.InstructionTargeter

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionTargeter.h>

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
						namespace util {
							class ByteSequence;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class DataOutputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class BranchInstruction : public ::com::sun::org::apache::bcel::internal::generic::Instruction, public ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter {
	$class(BranchInstruction, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction, ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter)
public:
	BranchInstruction();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int16_t opcode, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	virtual bool containsTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih) override;
	virtual void dispose() override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	int32_t getIndex();
	virtual int32_t getPosition();
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getTarget();
	virtual int32_t getTargetOffset(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* _target);
	virtual int32_t getTargetOffset();
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide) override;
	static void notifyTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* old_ih, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* new_ih, ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter* t);
	virtual void setIndex(int32_t index);
	virtual void setOpcode(int16_t opcode) override;
	virtual void setPosition(int32_t position);
	virtual void setTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	using ::com::sun::org::apache::bcel::internal::generic::Instruction::toString;
	virtual $String* toString() override;
	virtual $String* toString(bool verbose) override;
	virtual int32_t updatePosition(int32_t offset, int32_t max_offset);
	virtual void updateTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* old_ih, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* new_ih) override;
	int32_t index = 0;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target = nullptr;
	int32_t position = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_BranchInstruction_h_