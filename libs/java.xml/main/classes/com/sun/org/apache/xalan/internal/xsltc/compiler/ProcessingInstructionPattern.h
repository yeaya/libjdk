#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_ProcessingInstructionPattern_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_ProcessingInstructionPattern_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.ProcessingInstructionPattern
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.StepPattern

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern.h>

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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class ProcessingInstructionPattern : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern {
	$class(ProcessingInstructionPattern, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern)
public:
	ProcessingInstructionPattern();
	void init$($String* name);
	virtual double getDefaultPriority() override;
	virtual bool isWildcard() override;
	virtual void reduceKernelPattern() override;
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type* typeCheck(::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable* stable) override;
	$String* _name = nullptr;
	bool _typeChecked = false;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_ProcessingInstructionPattern_h_