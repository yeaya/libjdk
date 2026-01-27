#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_UnionPathExpr_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_UnionPathExpr_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.UnionPathExpr
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Expression

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <java/lang/Array.h>

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

class UnionPathExpr : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression {
	$class(UnionPathExpr, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression)
public:
	UnionPathExpr();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* pathExpr, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* rest);
	void flatten(::java::util::List* components);
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _pathExpr = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _rest = nullptr;
	bool _reverse = false;
	$Array<::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression>* _components = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_UnionPathExpr_h_