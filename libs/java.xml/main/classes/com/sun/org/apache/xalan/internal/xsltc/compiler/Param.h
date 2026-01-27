#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Param_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Param_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Param
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.VariableBase

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>

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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Parser;
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

class Param : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase {
	$class(Param, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase)
public:
	Param();
	void init$();
	virtual void display(int32_t indent) override;
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	::com::sun::org::apache::bcel::internal::generic::Instruction* setLoadInstruction(::com::sun::org::apache::bcel::internal::generic::Instruction* instruction);
	::com::sun::org::apache::bcel::internal::generic::Instruction* setStoreInstruction(::com::sun::org::apache::bcel::internal::generic::Instruction* instruction);
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	bool _isInSimpleNamedTemplate = false;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Param_h_