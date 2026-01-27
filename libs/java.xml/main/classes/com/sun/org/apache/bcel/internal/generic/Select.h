#ifndef _com_sun_org_apache_bcel_internal_generic_Select_h_
#define _com_sun_org_apache_bcel_internal_generic_Select_h_
//$ class com.sun.org.apache.bcel.internal.generic.Select
//$ extends com.sun.org.apache.bcel.internal.generic.BranchInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.VariableLengthInstruction,com.sun.org.apache.bcel.internal.generic.StackConsumer,com.sun.org.apache.bcel.internal.generic.StackProducer

#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/VariableLengthInstruction.h>
#include <java/lang/Array.h>

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

class Select : public ::com::sun::org::apache::bcel::internal::generic::BranchInstruction, public ::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction, public ::com::sun::org::apache::bcel::internal::generic::StackConsumer, public ::com::sun::org::apache::bcel::internal::generic::StackProducer {
	$class(Select, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::BranchInstruction, ::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction, ::com::sun::org::apache::bcel::internal::generic::StackConsumer, ::com::sun::org::apache::bcel::internal::generic::StackProducer)
public:
	Select();
	using ::com::sun::org::apache::bcel::internal::generic::BranchInstruction::getTarget;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int16_t opcode, $ints* match, $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* targets, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* defaultTarget);
	virtual $Object* clone() override;
	virtual bool containsTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih) override;
	virtual void dispose() override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	int32_t getFixed_length();
	virtual $ints* getIndices();
	int32_t getIndices(int32_t index);
	int32_t getMatch(int32_t index);
	int32_t getMatch_length();
	virtual $ints* getMatchs();
	int32_t getPadding();
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getTarget(int32_t index);
	virtual $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* getTargets();
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide) override;
	virtual int32_t produceStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	void setFixed_length(int32_t fixed_length);
	void setIndices($ints* array);
	int32_t setIndices(int32_t i, int32_t value);
	void setMatch(int32_t index, int32_t value);
	int32_t setMatch_length(int32_t match_length);
	void setMatches($ints* array);
	using ::com::sun::org::apache::bcel::internal::generic::BranchInstruction::setTarget;
	virtual void setTarget(int32_t i, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	void setTargets($Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* array);
	using ::com::sun::org::apache::bcel::internal::generic::BranchInstruction::toString;
	virtual $String* toString() override;
	virtual $String* toString(bool verbose) override;
	virtual int32_t updatePosition(int32_t offset, int32_t max_offset) override;
	virtual void updateTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* old_ih, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* new_ih) override;
	$ints* match = nullptr;
	$ints* indices = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* targets = nullptr;
	int32_t fixed_length = 0;
	int32_t match_length = 0;
	int32_t padding = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_Select_h_