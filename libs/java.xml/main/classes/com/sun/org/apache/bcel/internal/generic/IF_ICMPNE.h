#ifndef _com_sun_org_apache_bcel_internal_generic_IF_ICMPNE_h_
#define _com_sun_org_apache_bcel_internal_generic_IF_ICMPNE_h_
//$ class com.sun.org.apache.bcel.internal.generic.IF_ICMPNE
//$ extends com.sun.org.apache.bcel.internal.generic.IfInstruction

#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>

#pragma push_macro("IF_ICMPNE")
#undef IF_ICMPNE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
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

class IF_ICMPNE : public ::com::sun::org::apache::bcel::internal::generic::IfInstruction {
	$class(IF_ICMPNE, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::IfInstruction)
public:
	IF_ICMPNE();
	void init$();
	void init$(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::IfInstruction* negate() override;
	using ::com::sun::org::apache::bcel::internal::generic::IfInstruction::toString;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("IF_ICMPNE")

#endif // _com_sun_org_apache_bcel_internal_generic_IF_ICMPNE_h_