#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_Util_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_Util_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.Util
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
namespace javax {
	namespace xml {
		namespace transform {
			class Source;
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
							namespace trax {

class Util : public ::java::lang::Object {
	$class(Util, 0, ::java::lang::Object)
public:
	Util();
	void init$();
	static $String* baseName($String* name);
	static ::org::xml::sax::InputSource* getInputSource(::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC* xsltc, ::javax::xml::transform::Source* source);
	static $String* noExtName($String* name);
	static $String* toJavaName($String* name);
	static $String* property;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_Util_h_