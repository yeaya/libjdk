#ifndef _com_sun_org_apache_bcel_internal_generic_Instruction_h_
#define _com_sun_org_apache_bcel_internal_generic_Instruction_h_
//$ class com.sun.org.apache.bcel.internal.generic.Instruction
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantPool;
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
							class ConstantPoolGen;
							class InstructionComparator;
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

class Instruction : public ::java::lang::Cloneable {
	$class(Instruction, 0, ::java::lang::Cloneable)
public:
	Instruction();
	void init$();
	void init$(int16_t opcode, int16_t length);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) {}
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual ::com::sun::org::apache::bcel::internal::generic::Instruction* copy();
	virtual void dispose();
	virtual void dump(::java::io::DataOutputStream* out);
	virtual bool equals(Object$* that) override;
	static ::com::sun::org::apache::bcel::internal::generic::InstructionComparator* getComparator();
	virtual int32_t getLength();
	virtual $String* getName();
	virtual int16_t getOpcode();
	virtual int32_t hashCode() override;
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide);
	static bool isValidByte(int32_t value);
	static bool isValidShort(int32_t value);
	virtual int32_t produceStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	static ::com::sun::org::apache::bcel::internal::generic::Instruction* readInstruction(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes);
	static void setComparator(::com::sun::org::apache::bcel::internal::generic::InstructionComparator* c);
	void setLength(int32_t length);
	virtual void setOpcode(int16_t opcode);
	virtual $String* toString(bool verbose);
	virtual $String* toString() override;
	virtual $String* toString(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp);
	int16_t length = 0;
	int16_t opcode = 0;
	static ::com::sun::org::apache::bcel::internal::generic::InstructionComparator* cmp;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_Instruction_h_