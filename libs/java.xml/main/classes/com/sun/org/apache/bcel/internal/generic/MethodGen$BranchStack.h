#ifndef _com_sun_org_apache_bcel_internal_generic_MethodGen$BranchStack_h_
#define _com_sun_org_apache_bcel_internal_generic_MethodGen$BranchStack_h_
//$ class com.sun.org.apache.bcel.internal.generic.MethodGen$BranchStack
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
							class MethodGen$BranchTarget;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Stack;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class MethodGen$BranchStack : public ::java::lang::Object {
	$class(MethodGen$BranchStack, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MethodGen$BranchStack();
	void init$();
	::com::sun::org::apache::bcel::internal::generic::MethodGen$BranchTarget* pop();
	void push(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target, int32_t stackDepth);
	::com::sun::org::apache::bcel::internal::generic::MethodGen$BranchTarget* visit(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target, int32_t stackDepth);
	bool visited(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	::java::util::Stack* branchTargets = nullptr;
	::java::util::Map* visitedTargets = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_MethodGen$BranchStack_h_