#ifndef _com_sun_org_apache_bcel_internal_generic_POP2_h_
#define _com_sun_org_apache_bcel_internal_generic_POP2_h_
//$ class com.sun.org.apache.bcel.internal.generic.POP2
//$ extends com.sun.org.apache.bcel.internal.generic.StackInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.PopInstruction

#include <com/sun/org/apache/bcel/internal/generic/PopInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>

#pragma push_macro("POP2")
#undef POP2

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

class POP2 : public ::com::sun::org::apache::bcel::internal::generic::StackInstruction, public ::com::sun::org::apache::bcel::internal::generic::PopInstruction {
	$class(POP2, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::StackInstruction, ::com::sun::org::apache::bcel::internal::generic::PopInstruction)
public:
	POP2();
	virtual $Object* clone() override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	using ::com::sun::org::apache::bcel::internal::generic::StackInstruction::toString;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("POP2")

#endif // _com_sun_org_apache_bcel_internal_generic_POP2_h_