#ifndef _com_sun_org_apache_bcel_internal_generic_InstructionTargeter_h_
#define _com_sun_org_apache_bcel_internal_generic_InstructionTargeter_h_
//$ interface com.sun.org.apache.bcel.internal.generic.InstructionTargeter
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class InstructionTargeter : public ::java::lang::Object {
	$interface(InstructionTargeter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool containsTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih) {return false;}
	virtual void updateTarget(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* old_ih, ::com::sun::org::apache::bcel::internal::generic::InstructionHandle* new_ih) {}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_InstructionTargeter_h_