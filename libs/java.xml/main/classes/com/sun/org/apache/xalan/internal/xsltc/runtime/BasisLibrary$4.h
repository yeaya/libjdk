#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_BasisLibrary$4_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_BasisLibrary$4_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$4
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

class BasisLibrary$4 : public ::java::lang::ThreadLocal {
	$class(BasisLibrary$4, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	BasisLibrary$4();
	void init$();
	virtual $Object* initialValue() override;
};

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_BasisLibrary$4_h_