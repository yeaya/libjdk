#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_StepPattern_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_StepPattern_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.StepPattern
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.RelativePathPattern

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern.h>

#pragma push_macro("GENERAL_CONTEXT")
#undef GENERAL_CONTEXT
#pragma push_macro("NO_CONTEXT")
#undef NO_CONTEXT
#pragma push_macro("SIMPLE_CONTEXT")
#undef SIMPLE_CONTEXT

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

class StepPattern : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern {
	$class(StepPattern, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern)
public:
	StepPattern();
	void init$(int32_t axis, int32_t nodeType, ::java::util::List* predicates);
	int32_t analyzeCases();
	virtual int32_t getAxis() override;
	virtual double getDefaultPriority() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern* getKernelPattern() override;
	$String* getNextFieldName();
	virtual int32_t getNodeType();
	virtual bool hasPredicates();
	virtual bool isWildcard() override;
	virtual void reduceKernelPattern() override;
	virtual void setParser(::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* parser) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern* setPredicates(::java::util::List* predicates);
	virtual void setPriority(double priority);
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	void translateGeneralContext(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	void translateKernel(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	void translateNoContext(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	void translateSimpleContext(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	static const int32_t NO_CONTEXT = 0;
	static const int32_t SIMPLE_CONTEXT = 1;
	static const int32_t GENERAL_CONTEXT = 2;
	int32_t _axis = 0;
	int32_t _nodeType = 0;
	::java::util::List* _predicates = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Step* _step = nullptr;
	bool _isEpsilon = false;
	int32_t _contextCase = 0;
	double _priority = 0.0;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("GENERAL_CONTEXT")
#pragma pop_macro("NO_CONTEXT")
#pragma pop_macro("SIMPLE_CONTEXT")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_StepPattern_h_