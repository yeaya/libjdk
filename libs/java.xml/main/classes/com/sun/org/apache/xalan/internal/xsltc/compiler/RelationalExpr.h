#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_RelationalExpr_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_RelationalExpr_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.RelationalExpr
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

class RelationalExpr : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression {
	$class(RelationalExpr, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression)
public:
	RelationalExpr();
	void init$(int32_t op, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* left, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* right);
	virtual bool hasLastCall() override;
	bool hasNodeArgs();
	bool hasNodeSetArgs();
	virtual bool hasPositionCall() override;
	bool hasReferenceArgs();
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual void translateDesynthesized(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	int32_t _op = 0;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _left = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _right = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_RelationalExpr_h_