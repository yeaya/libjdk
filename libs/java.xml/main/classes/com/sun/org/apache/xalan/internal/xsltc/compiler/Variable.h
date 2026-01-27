#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Variable_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Variable_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Variable
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.VariableBase

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>

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

class Variable : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase {
	$class(Variable, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase)
public:
	Variable();
	void init$();
	int32_t getIndex();
	void initialize(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual void parseContents(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Variable_h_