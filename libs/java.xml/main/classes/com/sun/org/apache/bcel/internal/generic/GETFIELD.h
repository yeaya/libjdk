#ifndef _com_sun_org_apache_bcel_internal_generic_GETFIELD_h_
#define _com_sun_org_apache_bcel_internal_generic_GETFIELD_h_
//$ class com.sun.org.apache.bcel.internal.generic.GETFIELD
//$ extends com.sun.org.apache.bcel.internal.generic.FieldInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackConsumer,com.sun.org.apache.bcel.internal.generic.StackProducer

#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <java/lang/Array.h>

#pragma push_macro("GETFIELD")
#undef GETFIELD

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
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

class GETFIELD : public ::com::sun::org::apache::bcel::internal::generic::FieldInstruction, public ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, public ::com::sun::org::apache::bcel::internal::generic::StackConsumer, public ::com::sun::org::apache::bcel::internal::generic::StackProducer {
	$class(GETFIELD, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::FieldInstruction, ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, ::com::sun::org::apache::bcel::internal::generic::StackConsumer, ::com::sun::org::apache::bcel::internal::generic::StackProducer)
public:
	GETFIELD();
	using ::com::sun::org::apache::bcel::internal::generic::FieldInstruction::getName;
	virtual $Object* clone() override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t index);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual $ClassArray* getExceptions() override;
	virtual int32_t produceStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	using ::com::sun::org::apache::bcel::internal::generic::FieldInstruction::toString;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("GETFIELD")

#endif // _com_sun_org_apache_bcel_internal_generic_GETFIELD_h_