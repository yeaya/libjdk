#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_TopLevelElement_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_TopLevelElement_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.SyntaxTreeNode

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
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

class TopLevelElement : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode {
	$class(TopLevelElement, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode)
public:
	TopLevelElement();
	void init$();
	virtual void addDependency(::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement* other);
	virtual ::com::sun::org::apache::bcel::internal::generic::InstructionList* compile(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual void display(int32_t indent) override;
	virtual ::java::util::List* getDependencies();
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	::java::util::List* _dependencies = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_TopLevelElement_h_