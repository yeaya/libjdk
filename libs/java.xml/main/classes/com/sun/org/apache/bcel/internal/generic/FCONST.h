#ifndef _com_sun_org_apache_bcel_internal_generic_FCONST_h_
#define _com_sun_org_apache_bcel_internal_generic_FCONST_h_
//$ class com.sun.org.apache.bcel.internal.generic.FCONST
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction
//$ implements com.sun.org.apache.bcel.internal.generic.ConstantPushInstruction

#include <com/sun/org/apache/bcel/internal/generic/ConstantPushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>

#pragma push_macro("FCONST")
#undef FCONST

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

class FCONST : public ::com::sun::org::apache::bcel::internal::generic::Instruction, public ::com::sun::org::apache::bcel::internal::generic::ConstantPushInstruction {
	$class(FCONST, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction, ::com::sun::org::apache::bcel::internal::generic::ConstantPushInstruction)
public:
	FCONST();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(float f);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp) override;
	virtual ::java::lang::Number* getValue() override;
	using ::com::sun::org::apache::bcel::internal::generic::Instruction::toString;
	virtual int32_t produceStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual $String* toString() override;
	float value = 0.0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("FCONST")

#endif // _com_sun_org_apache_bcel_internal_generic_FCONST_h_