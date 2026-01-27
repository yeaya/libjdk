#ifndef _com_sun_org_apache_bcel_internal_generic_DCMPL_h_
#define _com_sun_org_apache_bcel_internal_generic_DCMPL_h_
//$ class com.sun.org.apache.bcel.internal.generic.DCMPL
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction
//$ implements com.sun.org.apache.bcel.internal.generic.TypedInstruction,com.sun.org.apache.bcel.internal.generic.StackProducer,com.sun.org.apache.bcel.internal.generic.StackConsumer

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>

#pragma push_macro("DCMPL")
#undef DCMPL

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

class DCMPL : public ::com::sun::org::apache::bcel::internal::generic::Instruction, public ::com::sun::org::apache::bcel::internal::generic::TypedInstruction, public ::com::sun::org::apache::bcel::internal::generic::StackProducer, public ::com::sun::org::apache::bcel::internal::generic::StackConsumer {
	$class(DCMPL, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction, ::com::sun::org::apache::bcel::internal::generic::TypedInstruction, ::com::sun::org::apache::bcel::internal::generic::StackProducer, ::com::sun::org::apache::bcel::internal::generic::StackConsumer)
public:
	DCMPL();
	virtual $Object* clone() override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
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

#pragma pop_macro("DCMPL")

#endif // _com_sun_org_apache_bcel_internal_generic_DCMPL_h_