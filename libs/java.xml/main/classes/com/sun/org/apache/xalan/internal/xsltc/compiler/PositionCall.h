#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_PositionCall_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_PositionCall_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.PositionCall
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
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

class PositionCall : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall {
	$class(PositionCall, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall)
public:
	PositionCall();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* fname);
	virtual bool hasPositionCall() override;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_PositionCall_h_