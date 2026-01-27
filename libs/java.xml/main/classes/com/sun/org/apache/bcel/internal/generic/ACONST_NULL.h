#ifndef _com_sun_org_apache_bcel_internal_generic_ACONST_NULL_h_
#define _com_sun_org_apache_bcel_internal_generic_ACONST_NULL_h_
//$ class com.sun.org.apache.bcel.internal.generic.ACONST_NULL
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction
//$ implements com.sun.org.apache.bcel.internal.generic.PushInstruction,com.sun.org.apache.bcel.internal.generic.TypedInstruction

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>

#pragma push_macro("ACONST_NULL")
#undef ACONST_NULL

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
						namespace generic {

class ACONST_NULL : public ::com::sun::org::apache::bcel::internal::generic::Instruction, public ::com::sun::org::apache::bcel::internal::generic::PushInstruction, public ::com::sun::org::apache::bcel::internal::generic::TypedInstruction {
	$class(ACONST_NULL, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction, ::com::sun::org::apache::bcel::internal::generic::PushInstruction, ::com::sun::org::apache::bcel::internal::generic::TypedInstruction)
public:
	ACONST_NULL();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp) override;
	using ::com::sun::org::apache::bcel::internal::generic::Instruction::toString;
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

#pragma pop_macro("ACONST_NULL")

#endif // _com_sun_org_apache_bcel_internal_generic_ACONST_NULL_h_