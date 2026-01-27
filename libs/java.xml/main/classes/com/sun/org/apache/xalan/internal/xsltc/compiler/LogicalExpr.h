#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_LogicalExpr_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_LogicalExpr_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.LogicalExpr
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Expression

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <java/lang/Array.h>

#pragma push_macro("AND")
#undef AND
#pragma push_macro("OR")
#undef OR

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

class LogicalExpr : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression {
	$class(LogicalExpr, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression)
public:
	LogicalExpr();
	void init$(int32_t op, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* left, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* right);
	virtual $Object* evaluateAtCompileTime() override;
	int32_t getOp();
	virtual bool hasLastCall() override;
	virtual bool hasPositionCall() override;
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual void translateDesynthesized(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	static const int32_t OR = 0;
	static const int32_t AND = 1;
	int32_t _op = 0;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _left = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _right = nullptr;
	static $StringArray* Ops;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("AND")
#pragma pop_macro("OR")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_LogicalExpr_h_