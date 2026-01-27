#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_ErrorMessages_sk_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_ErrorMessages_sk_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_sk
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
							namespace runtime {

class ErrorMessages_sk : public ::java::util::ListResourceBundle {
	$class(ErrorMessages_sk, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	ErrorMessages_sk();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_ErrorMessages_sk_h_