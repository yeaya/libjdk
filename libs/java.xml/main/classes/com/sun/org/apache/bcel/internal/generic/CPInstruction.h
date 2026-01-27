#ifndef _com_sun_org_apache_bcel_internal_generic_CPInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_CPInstruction_h_
//$ class com.sun.org.apache.bcel.internal.generic.CPInstruction
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction
//$ implements com.sun.org.apache.bcel.internal.generic.TypedInstruction,com.sun.org.apache.bcel.internal.generic.IndexedInstruction

#include <com/sun/org/apache/bcel/internal/generic/IndexedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>

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

class CPInstruction : public ::com::sun::org::apache::bcel::internal::generic::Instruction, public ::com::sun::org::apache::bcel::internal::generic::TypedInstruction, public ::com::sun::org::apache::bcel::internal::generic::IndexedInstruction {
	$class(CPInstruction, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction, ::com::sun::org::apache::bcel::internal::generic::TypedInstruction, ::com::sun::org::apache::bcel::internal::generic::IndexedInstruction)
public:
	CPInstruction();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int16_t opcode, int32_t index);
	virtual void dump(::java::io::DataOutputStream* out) override;
	virtual int32_t getIndex() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide) override;
	virtual void setIndex(int32_t index) override;
	virtual $String* toString() override;
	virtual $String* toString(bool verbose) override;
	virtual $String* toString(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp) override;
	int32_t index = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_CPInstruction_h_