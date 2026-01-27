#ifndef _com_sun_org_apache_bcel_internal_generic_BIPUSH_h_
#define _com_sun_org_apache_bcel_internal_generic_BIPUSH_h_
//$ class com.sun.org.apache.bcel.internal.generic.BIPUSH
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction
//$ implements com.sun.org.apache.bcel.internal.generic.ConstantPushInstruction

#include <com/sun/org/apache/bcel/internal/generic/ConstantPushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>

#pragma push_macro("BIPUSH")
#undef BIPUSH

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class Type;
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
namespace java {
	namespace lang {
		class Number;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class BIPUSH : public ::com::sun::org::apache::bcel::internal::generic::Instruction, public ::com::sun::org::apache::bcel::internal::generic::ConstantPushInstruction {
	$class(BIPUSH, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction, ::com::sun::org::apache::bcel::internal::generic::ConstantPushInstruction)
public:
	BIPUSH();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int8_t b);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual void dump(::java::io::DataOutputStream* out) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp) override;
	virtual ::java::lang::Number* getValue() override;
	virtual void initFromFile(::com::sun::org::apache::bcel::internal::util::ByteSequence* bytes, bool wide) override;
	using ::com::sun::org::apache::bcel::internal::generic::Instruction::toString;
	virtual int32_t produceStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual $String* toString() override;
	virtual $String* toString(bool verbose) override;
	int8_t b = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BIPUSH")

#endif // _com_sun_org_apache_bcel_internal_generic_BIPUSH_h_