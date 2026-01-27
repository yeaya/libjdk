#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_ArgumentList_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_ArgumentList_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.ArgumentList
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
								class Expression;
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

class ArgumentList : public ::java::lang::Object {
	$class(ArgumentList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ArgumentList();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* arg, ::com::sun::org::apache::xalan::internal::xsltc::compiler::ArgumentList* rest);
	virtual $String* toString() override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression* _arg = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::ArgumentList* _rest = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_ArgumentList_h_