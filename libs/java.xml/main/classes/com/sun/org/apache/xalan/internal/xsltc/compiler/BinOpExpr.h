#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_BinOpExpr_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_BinOpExpr_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.BinOpExpr
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Expression

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <java/lang/Array.h>

#pragma push_macro("DIV")
#undef DIV
#pragma push_macro("MINUS")
#undef MINUS
#pragma push_macro("MOD")
#undef MOD
#pragma push_macro("PLUS")
#undef PLUS
#pragma push_macro("TIMES")
#undef TIMES

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

class BinOpExpr : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression {
	$class(BinOpExpr, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression)
public:
	BinOpExpr();
	void init$(int32_t op, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* left, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* right);
	virtual bool hasLastCall() override;
	virtual bool hasPositionCall() override;
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	static const int32_t PLUS = 0;
	static const int32_t MINUS = 1;
	static const int32_t TIMES = 2;
	static const int32_t DIV = 3;
	static const int32_t MOD = 4;
	static $StringArray* Ops;
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

#pragma pop_macro("DIV")
#pragma pop_macro("MINUS")
#pragma pop_macro("MOD")
#pragma pop_macro("PLUS")
#pragma pop_macro("TIMES")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_BinOpExpr_h_