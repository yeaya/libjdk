#ifndef _com_sun_org_apache_bcel_internal_generic_IFEQ_h_
#define _com_sun_org_apache_bcel_internal_generic_IFEQ_h_
//$ class com.sun.org.apache.bcel.internal.generic.IFEQ
//$ extends com.sun.org.apache.bcel.internal.generic.IfInstruction

#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>

#pragma push_macro("IFEQ")
#undef IFEQ

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

class IFEQ : public ::com::sun::org::apache::bcel::internal::generic::IfInstruction {
	$class(IFEQ, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::IfInstruction)
public:
	IFEQ();
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

#pragma pop_macro("IFEQ")

#endif // _com_sun_org_apache_bcel_internal_generic_IFEQ_h_