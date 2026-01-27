#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Instruction_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Instruction_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.SyntaxTreeNode

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class SymbolTable;
							}
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {
									class ClassGenerator;
									class MethodGenerator;
									class Type;
								}
							}
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class Instruction : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode {
	$class(Instruction, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode)
public:
	Instruction();
	void init$();
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Instruction_h_