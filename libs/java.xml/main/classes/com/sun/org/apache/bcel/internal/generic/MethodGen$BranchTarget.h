#ifndef _com_sun_org_apache_bcel_internal_generic_MethodGen$BranchTarget_h_
#define _com_sun_org_apache_bcel_internal_generic_MethodGen$BranchTarget_h_
//$ class com.sun.org.apache.bcel.internal.generic.MethodGen$BranchTarget
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

class MethodGen$BranchTarget : public ::java::lang::Object {
	$class(MethodGen$BranchTarget, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MethodGen$BranchTarget();
	void init$(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target, int32_t stackDepth);
	::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target = nullptr;
	int32_t stackDepth = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_MethodGen$BranchTarget_h_