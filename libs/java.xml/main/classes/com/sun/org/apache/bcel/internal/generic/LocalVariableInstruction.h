#ifndef _com_sun_org_apache_bcel_internal_generic_LocalVariableInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_LocalVariableInstruction_h_
//$ class com.sun.org.apache.bcel.internal.generic.LocalVariableInstruction
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

class LocalVariableInstruction : public ::com::sun::org::apache::bcel::internal::generic::Instruction, public ::com::sun::org::apache::bcel::internal::generic::TypedInstruction, public ::com::sun::org::apache::bcel::internal::generic::IndexedInstruction {
	$class(LocalVariableInstruction, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction, ::com::sun::org::apache::bcel::internal::generic::TypedInstruction, ::com::sun::org::apache::bcel::internal::generic::IndexedInstruction)
public:
	LocalVariableInstruction();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int16_t canon_tag, int16_t c_tag);
	void init$();
	void init$(int16_t opcode, int16_t cTag, int32_t n);
	virtual void dump(::java::io::DataOutputStream* out) override;
	virtual int16_t getCanonicalTag();
	virtual int32_t getIndex() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp) override;
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide) override;
	virtual void setIndex(int32_t n) override;
	void setIndexOnly(int32_t n);
	using ::com::sun::org::apache::bcel::internal::generic::Instruction::toString;
	virtual $String* toString() override;
	virtual $String* toString(bool verbose) override;
	bool wide();
	int32_t n = 0;
	int16_t cTag = 0;
	int16_t canonTag = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_LocalVariableInstruction_h_