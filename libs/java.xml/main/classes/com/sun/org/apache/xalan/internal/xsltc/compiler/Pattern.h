#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Pattern_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Pattern_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Pattern
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Expression

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
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
								class FlowList;
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
									class MethodType;
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

class Pattern : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression {
	$class(Pattern, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression)
public:
	Pattern();
	void init$();
	virtual void backPatchFalseList(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih) override;
	virtual void backPatchTrueList(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih) override;
	virtual void desynthesize(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual $Object* evaluateAtCompileTime() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* getFalseList() override;
	virtual double getPriority() {return 0.0;}
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* getTrueList() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* getType() override;
	virtual bool hasLastCall() override;
	virtual bool hasPositionCall() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType* lookupPrimop(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable, $String* op, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType* ctype) override;
	virtual void startIterator(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual void synthesize(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual void translateDesynthesized(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Pattern_h_