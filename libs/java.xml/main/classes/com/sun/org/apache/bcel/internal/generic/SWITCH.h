#ifndef _com_sun_org_apache_bcel_internal_generic_SWITCH_h_
#define _com_sun_org_apache_bcel_internal_generic_SWITCH_h_
//$ class com.sun.org.apache.bcel.internal.generic.SWITCH
//$ extends com.sun.org.apache.bcel.internal.generic.CompoundInstruction

#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <java/lang/Array.h>

#pragma push_macro("SWITCH")
#undef SWITCH

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Instruction;
							class InstructionHandle;
							class InstructionList;
							class Select;
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

class SWITCH : public ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction {
	$class(SWITCH, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction)
public:
	SWITCH();
	void init$($ints* match, $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* targets, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target, int32_t max_gap);
	void init$($ints* match, $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* targets, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	void fillup(int32_t max_gap, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	::com::sun::org::apache::bcel::internal::generic::Instruction* getInstruction();
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionList* getInstructionList() override;
	bool matchIsOrdered(int32_t max_gap);
	void sort(int32_t l, int32_t r);
	$ints* match = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>* targets = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Select* instruction = nullptr;
	int32_t matchLength = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("SWITCH")

#endif // _com_sun_org_apache_bcel_internal_generic_SWITCH_h_