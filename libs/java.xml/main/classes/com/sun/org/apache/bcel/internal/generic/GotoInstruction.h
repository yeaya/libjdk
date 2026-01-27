#ifndef _com_sun_org_apache_bcel_internal_generic_GotoInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_GotoInstruction_h_
//$ class com.sun.org.apache.bcel.internal.generic.GotoInstruction
//$ extends com.sun.org.apache.bcel.internal.generic.BranchInstruction
//$ implements com.sun.org.apache.bcel.internal.generic.UnconditionalBranch

#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/UnconditionalBranch.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
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

class GotoInstruction : public ::com::sun::org::apache::bcel::internal::generic::BranchInstruction, public ::com::sun::org::apache::bcel::internal::generic::UnconditionalBranch {
	$class(GotoInstruction, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::BranchInstruction, ::com::sun::org::apache::bcel::internal::generic::UnconditionalBranch)
public:
	GotoInstruction();
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int16_t opcode, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	void init$();
	using ::com::sun::org::apache::bcel::internal::generic::BranchInstruction::toString;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_GotoInstruction_h_