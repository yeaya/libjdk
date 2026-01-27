#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_InternalError_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_InternalError_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.InternalError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

class InternalError : public ::java::lang::Error {
	$class(InternalError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	InternalError();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xA3254DF0BDD69EDE;
	InternalError(const InternalError& e);
	virtual void throw$() override;
	inline InternalError* operator ->() {
		return (InternalError*)throwing$;
	}
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_InternalError_h_