#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Closure_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Closure_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.compiler.Closure
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
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

class Closure : public ::java::lang::Object {
	$interface(Closure, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addVariable(::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase* variableRef) {}
	virtual $String* getInnerClassName() {return nullptr;}
	virtual ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure* getParentClosure() {return nullptr;}
	virtual bool inInnerClass() {return false;}
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Closure_h_