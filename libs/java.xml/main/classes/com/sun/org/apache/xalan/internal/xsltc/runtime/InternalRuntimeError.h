#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_InternalRuntimeError_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_InternalRuntimeError_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.InternalRuntimeError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

class InternalRuntimeError : public ::java::lang::Error {
	$class(InternalRuntimeError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	InternalRuntimeError();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x26E57E08C17DED0B;
	InternalRuntimeError(const InternalRuntimeError& e);
	virtual void throw$() override;
	inline InternalRuntimeError* operator ->() {
		return (InternalRuntimeError*)throwing$;
	}
};

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_InternalRuntimeError_h_