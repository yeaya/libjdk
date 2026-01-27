#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_VariableRef_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_VariableRef_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.VariableRef
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.VariableRefBase

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Variable;
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

class VariableRef : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase {
	$class(VariableRef, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase)
public:
	VariableRef();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable* variable);
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_VariableRef_h_