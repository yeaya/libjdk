#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_ParameterRef_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_ParameterRef_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.ParameterRef
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
								class Param;
								class QName;
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

class ParameterRef : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase {
	$class(ParameterRef, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase)
public:
	ParameterRef();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::Param* param);
	virtual $String* toString() override;
	virtual void translate(::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator* classGen, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator* methodGen) override;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* _name = nullptr;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_ParameterRef_h_