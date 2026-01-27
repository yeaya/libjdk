#ifndef _com_sun_org_apache_bcel_internal_generic_CompoundInstruction_h_
#define _com_sun_org_apache_bcel_internal_generic_CompoundInstruction_h_
//$ interface com.sun.org.apache.bcel.internal.generic.CompoundInstruction
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionList;
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

class CompoundInstruction : public ::java::lang::Object {
	$interface(CompoundInstruction, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionList* getInstructionList() {return nullptr;}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_CompoundInstruction_h_