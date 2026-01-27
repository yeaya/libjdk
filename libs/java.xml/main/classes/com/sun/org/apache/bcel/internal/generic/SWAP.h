#ifndef _com_sun_org_apache_bcel_internal_generic_SWAP_h_
#define _com_sun_org_apache_bcel_internal_generic_SWAP_h_
//$ class com.sun.org.apache.bcel.internal.generic.SWAP
//$ extends com.sun.org.apache.bcel.internal.generic.StackInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.StackConsumer,com.sun.org.apache.bcel.internal.generic.StackProducer

#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>

#pragma push_macro("SWAP")
#undef SWAP

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

class SWAP : public ::com::sun::org::apache::bcel::internal::generic::StackInstruction, public ::com::sun::org::apache::bcel::internal::generic::StackConsumer, public ::com::sun::org::apache::bcel::internal::generic::StackProducer {
	$class(SWAP, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::StackInstruction, ::com::sun::org::apache::bcel::internal::generic::StackConsumer, ::com::sun::org::apache::bcel::internal::generic::StackProducer)
public:
	SWAP();
	virtual $Object* clone() override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	using ::com::sun::org::apache::bcel::internal::generic::StackInstruction::toString;
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

#pragma pop_macro("SWAP")

#endif // _com_sun_org_apache_bcel_internal_generic_SWAP_h_