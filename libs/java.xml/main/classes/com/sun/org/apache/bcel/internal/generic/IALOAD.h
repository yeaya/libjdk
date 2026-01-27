#ifndef _com_sun_org_apache_bcel_internal_generic_IALOAD_h_
#define _com_sun_org_apache_bcel_internal_generic_IALOAD_h_
//$ class com.sun.org.apache.bcel.internal.generic.IALOAD
//$ extends com.sun.org.apache.bcel.internal.generic.ArrayInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.StackProducer

#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>

#pragma push_macro("IALOAD")
#undef IALOAD

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

class IALOAD : public ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction, public ::com::sun::org::apache::bcel::internal::generic::StackProducer {
	$class(IALOAD, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction, ::com::sun::org::apache::bcel::internal::generic::StackProducer)
public:
	IALOAD();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	using ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction::toString;
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

#pragma pop_macro("IALOAD")

#endif // _com_sun_org_apache_bcel_internal_generic_IALOAD_h_