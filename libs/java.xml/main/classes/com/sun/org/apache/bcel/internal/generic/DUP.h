#ifndef _com_sun_org_apache_bcel_internal_generic_DUP_h_
#define _com_sun_org_apache_bcel_internal_generic_DUP_h_
//$ class com.sun.org.apache.bcel.internal.generic.DUP
//$ extends com.sun.org.apache.bcel.internal.generic.StackInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.PushInstruction

#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>

#pragma push_macro("DUP")
#undef DUP

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

class DUP : public ::com::sun::org::apache::bcel::internal::generic::StackInstruction, public ::com::sun::org::apache::bcel::internal::generic::PushInstruction {
	$class(DUP, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::StackInstruction, ::com::sun::org::apache::bcel::internal::generic::PushInstruction)
public:
	DUP();
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

#pragma pop_macro("DUP")

#endif // _com_sun_org_apache_bcel_internal_generic_DUP_h_