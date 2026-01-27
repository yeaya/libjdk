#ifndef _com_sun_org_apache_bcel_internal_generic_BranchHandle_h_
#define _com_sun_org_apache_bcel_internal_generic_BranchHandle_h_
//$ class com.sun.org.apache.bcel.internal.generic.BranchHandle
//$ extends com.sun.org.apache.bcel.internal.generic.InstructionHandle

#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class BranchInstruction;
							class Instruction;
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

class BranchHandle : public ::com::sun::org::apache::bcel::internal::generic::InstructionHandle {
	$class(BranchHandle, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle)
public:
	BranchHandle();
	void init$(::com::sun::org::apache::bcel::internal::generic::BranchInstruction* i);
	static ::com::sun::org::apache::bcel::internal::generic::BranchHandle* getBranchHandle(::com::sun::org::apache::bcel::internal::generic::BranchInstruction* i);
	virtual int32_t getPosition() override;
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* getTarget();
	virtual void setInstruction(::com::sun::org::apache::bcel::internal::generic::Instruction* i) override;
	virtual void setPosition(int32_t pos) override;
	void setTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih);
	virtual int32_t updatePosition(int32_t offset, int32_t max_offset) override;
	void updateTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* old_ih, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* new_ih);
	::com::sun::org::apache::bcel::internal::generic::BranchInstruction* bi = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_BranchHandle_h_