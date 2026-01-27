#ifndef _com_sun_org_apache_bcel_internal_generic_InvokeInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_InvokeInstruction_h_
//$ class com.sun.org.apache.bcel.internal.generic.InvokeInstruction
//$ extends com.sun.org.apache.bcel.internal.generic.FieldOrMethod
//$ implements com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackConsumer,com.sun.org.apache.bcel.internal.generic.StackProducer

#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <java/lang/Array.h>

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
						namespace generic {

class InvokeInstruction : public ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod, public ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, public ::com::sun::org::apache::bcel::internal::generic::StackConsumer, public ::com::sun::org::apache::bcel::internal::generic::StackProducer {
	$class(InvokeInstruction, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod, ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, ::com::sun::org::apache::bcel::internal::generic::StackConsumer, ::com::sun::org::apache::bcel::internal::generic::StackProducer)
public:
	InvokeInstruction();
	using ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod::getName;
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int16_t opcode, int32_t index);
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual $Array<::com::sun::org::apache::bcel::internal::generic::Type>* getArgumentTypes(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual $String* getClassName(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual $String* getMethodName(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getReturnType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg);
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual int32_t produceStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	using ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod::toString;
	virtual $String* toString() override;
	virtual $String* toString(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* cp) override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_InvokeInstruction_h_