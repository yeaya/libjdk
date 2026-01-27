#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_VariableRefBase_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_VariableRefBase_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.VariableRefBase
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Expression

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Closure;
								class SymbolTable;
								class VariableBase;
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

class VariableRefBase : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression {
	$class(VariableRefBase, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression)
public:
	VariableRefBase();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase* variable);
	void init$();
	virtual void addParentDependency();
	virtual bool equals(Object$* obj) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase* getVariable();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase* _variable = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure* _closure = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_VariableRefBase_h_