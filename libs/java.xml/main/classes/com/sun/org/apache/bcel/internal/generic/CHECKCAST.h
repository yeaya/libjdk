#ifndef _com_sun_org_apache_bcel_internal_generic_CHECKCAST_h_
#define _com_sun_org_apache_bcel_internal_generic_CHECKCAST_h_
//$ class com.sun.org.apache.bcel.internal.generic.CHECKCAST
//$ extends com.sun.org.apache.bcel.internal.generic.CPInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.LoadClass,com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackProducer,com.sun.org.apache.bcel.internal.generic.StackConsumer

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadClass.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <java/lang/Array.h>

#pragma push_macro("CHECKCAST")
#undef CHECKCAST

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class ObjectType;
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

class CHECKCAST : public ::com::sun::org::apache::bcel::internal::generic::CPInstruction, public ::com::sun::org::apache::bcel::internal::generic::LoadClass, public ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, public ::com::sun::org::apache::bcel::internal::generic::StackProducer, public ::com::sun::org::apache::bcel::internal::generic::StackConsumer {
	$class(CHECKCAST, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::CPInstruction, ::com::sun::org::apache::bcel::internal::generic::LoadClass, ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, ::com::sun::org::apache::bcel::internal::generic::StackProducer, ::com::sun::org::apache::bcel::internal::generic::StackConsumer)
public:
	CHECKCAST();
	virtual $Object* clone() override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t index);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual $ClassArray* getExceptions() override;
	virtual ::com::sun::org::apache::bcel::internal::generic::ObjectType* getLoadClassType(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	using ::com::sun::org::apache::bcel::internal::generic::CPInstruction::toString;
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

#pragma pop_macro("CHECKCAST")

#endif // _com_sun_org_apache_bcel_internal_generic_CHECKCAST_h_