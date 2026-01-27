#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_CastExpr_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_CastExpr_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.CastExpr
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
									class MultiHashtable;
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

class CastExpr : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression {
	$class(CastExpr, 0, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression)
public:
	CastExpr();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* left, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* type);
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* getExpr();
	virtual bool hasLastCall() override;
	virtual bool hasPositionCall() override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual void translateDesynthesized(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _left = nullptr;
	static ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MultiHashtable* InternalTypeMap;
	bool _typeTest = false;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_CastExpr_h_