#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Predicate_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Predicate_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Predicate
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Expression
//$ implements com.sun.org.apache.xalan.internal.xsltc.compiler.Closure

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Closure.h>
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
								class Step;
								class SymbolTable;
								class VariableRefBase;
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

class Predicate : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression, public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure {
	$class(Predicate, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure)
public:
	Predicate();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* exp);
	virtual void addVariable(::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase* variableRef) override;
	void compileFilter(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	void dontOptimize();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* getCompareValue();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* getExpr();
	virtual $String* getInnerClassName() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure* getParentClosure() override;
	int32_t getPosType();
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Step* getStep();
	virtual bool hasLastCall() override;
	virtual bool hasPositionCall() override;
	virtual bool inInnerClass() override;
	bool isBooleanTest();
	bool isNodeValueTest();
	bool isNthDescendant();
	bool isNthPositionFilter();
	bool parentIsPattern();
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	void translateFilter(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _exp = nullptr;
	bool _canOptimize = false;
	bool _nthPositionFilter = false;
	bool _nthDescendant = false;
	int32_t _ptype = 0;
	$String* _className = nullptr;
	::java::util::List* _closureVars = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure* _parentClosure = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _value = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Step* _step = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Predicate_h_