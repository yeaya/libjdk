#ifndef _com_sun_org_apache_bcel_internal_generic_SASTORE_h_
#define _com_sun_org_apache_bcel_internal_generic_SASTORE_h_
//$ class com.sun.org.apache.bcel.internal.generic.SASTORE
//$ extends com.sun.org.apache.bcel.internal.generic.ArrayInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.StackConsumer

#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>

#pragma push_macro("SASTORE")
#undef SASTORE

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

class SASTORE : public ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction, public ::com::sun::org::apache::bcel::internal::generic::StackConsumer {
	$class(SASTORE, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction, ::com::sun::org::apache::bcel::internal::generic::StackConsumer)
public:
	SASTORE();
	virtual $Object* clone() override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	using ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction::toString;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("SASTORE")

#endif // _com_sun_org_apache_bcel_internal_generic_SASTORE_h_