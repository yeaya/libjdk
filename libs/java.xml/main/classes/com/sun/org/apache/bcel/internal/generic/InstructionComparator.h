#ifndef _com_sun_org_apache_bcel_internal_generic_InstructionComparator_h_
#define _com_sun_org_apache_bcel_internal_generic_InstructionComparator_h_
//$ interface com.sun.org.apache.bcel.internal.generic.InstructionComparator
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
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

class InstructionComparator : public ::java::lang::Object {
	$interface(InstructionComparator, 0, ::java::lang::Object)
public:
	using ::java::lang::Object::equals;
	virtual bool equals(::com::sun::org::apache::bcel::internal::generic::Instruction* i1, ::com::sun::org::apache::bcel::internal::generic::Instruction* i2) {return false;}
	static bool lambda$static$0(::com::sun::org::apache::bcel::internal::generic::Instruction* i1, ::com::sun::org::apache::bcel::internal::generic::Instruction* i2);
	static ::com::sun::org::apache::bcel::internal::generic::InstructionComparator* DEFAULT;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEFAULT")

#endif // _com_sun_org_apache_bcel_internal_generic_InstructionComparator_h_