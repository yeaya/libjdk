#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_NameCall_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_NameCall_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.NameCall
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.NameBase

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NameBase.h>

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

class NameCall : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::NameBase {
	$class(NameCall, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::NameBase)
public:
	NameCall();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* fname);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::compiler::QName* fname, ::java::util::List* arguments);
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_NameCall_h_