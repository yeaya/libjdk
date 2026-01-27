#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Expression_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Expression_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Expression
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.SyntaxTreeNode

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class InstructionHandle;
							class InstructionList;
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

class Expression : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode {
	$class(Expression, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode)
public:
	Expression();
	void init$();
	virtual void backPatchFalseList(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih);
	virtual void backPatchTrueList(::com::sun::org::apache::bcel::internal::generic::InstructionHandle* ih);
	::com::sun::org::apache::bcel::internal::generic::InstructionList* compile(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual void desynthesize(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual $Object* evaluateAtCompileTime();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* getFalseList();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* getTrueList();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* getType();
	virtual bool hasLastCall();
	virtual bool hasPositionCall();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType* lookupPrimop(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable, $String* op, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType* ctype);
	virtual void startIterator(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual void synthesize(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual void translateDesynthesized(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* _type = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* _trueList = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList* _falseList = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Expression_h_