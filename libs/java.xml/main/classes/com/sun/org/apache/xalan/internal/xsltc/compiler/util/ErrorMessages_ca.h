#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_ErrorMessages_ca_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_ErrorMessages_ca_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_ca
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

class ErrorMessages_ca : public ::java::util::ListResourceBundle {
	$class(ErrorMessages_ca, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	ErrorMessages_ca();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_ErrorMessages_ca_h_