#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_SourceLoader_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_SourceLoader_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.compiler.SourceLoader
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
								class XSLTC;
							}
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
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

class SourceLoader : public ::java::lang::Object {
	$interface(SourceLoader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::xml::sax::InputSource* loadSource($String* href, $String* context, ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC* xsltc) {return nullptr;}
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_SourceLoader_h_