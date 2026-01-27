#ifndef _com_sun_org_apache_bcel_internal_generic_DUP2_h_
#define _com_sun_org_apache_bcel_internal_generic_DUP2_h_
//$ class com.sun.org.apache.bcel.internal.generic.DUP2
//$ extends com.sun.org.apache.bcel.internal.generic.StackInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.PushInstruction

#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>

#pragma push_macro("DUP2")
#undef DUP2

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

class DUP2 : public ::com::sun::org::apache::bcel::internal::generic::StackInstruction, public ::com::sun::org::apache::bcel::internal::generic::PushInstruction {
	$class(DUP2, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::StackInstruction, ::com::sun::org::apache::bcel::internal::generic::PushInstruction)
public:
	DUP2();
	virtual $Object* clone() override;
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

#pragma pop_macro("DUP2")

#endif // _com_sun_org_apache_bcel_internal_generic_DUP2_h_