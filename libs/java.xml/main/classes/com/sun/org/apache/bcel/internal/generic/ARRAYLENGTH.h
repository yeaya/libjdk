#ifndef _com_sun_org_apache_bcel_internal_generic_ARRAYLENGTH_h_
#define _com_sun_org_apache_bcel_internal_generic_ARRAYLENGTH_h_
//$ class com.sun.org.apache.bcel.internal.generic.ARRAYLENGTH
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction
//$ implements com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackProducer,com.sun.org.apache.bcel.internal.generic.StackConsumer

#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <java/lang/Array.h>

#pragma push_macro("ARRAYLENGTH")
#undef ARRAYLENGTH

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
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

class ARRAYLENGTH : public ::com::sun::org::apache::bcel::internal::generic::Instruction, public ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, public ::com::sun::org::apache::bcel::internal::generic::StackProducer, public ::com::sun::org::apache::bcel::internal::generic::StackConsumer {
	$class(ARRAYLENGTH, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction, ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, ::com::sun::org::apache::bcel::internal::generic::StackProducer, ::com::sun::org::apache::bcel::internal::generic::StackConsumer)
public:
	ARRAYLENGTH();
	virtual $Object* clone() override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual $ClassArray* getExceptions() override;
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

#pragma pop_macro("ARRAYLENGTH")

#endif // _com_sun_org_apache_bcel_internal_generic_ARRAYLENGTH_h_