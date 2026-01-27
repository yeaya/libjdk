#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_UnaryOpExpr_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_UnaryOpExpr_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.UnaryOpExpr
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

class UnaryOpExpr : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression {
	$class(UnaryOpExpr, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression)
public:
	UnaryOpExpr();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* left);
	virtual bool hasLastCall() override;
	virtual bool hasPositionCall() override;
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _left = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_UnaryOpExpr_h_