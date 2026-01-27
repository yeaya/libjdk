#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_FlowList_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_FlowList_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.FlowList
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
							class InstructionList;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class FlowList : public ::java::lang::Object {
	$class(FlowList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FlowList();
	void init$();
	void init$(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* bh);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* list);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* add(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* bh);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* append(::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* right);
	void backPatch(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* target);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* copyAndRedirect(::com::sun::org::apache::bcel::internal::generic::InstructionList* oldList, ::com::sun::org::apache::bcel::internal::generic::InstructionList* newList);
	::java::util::List* _elements = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_FlowList_h_