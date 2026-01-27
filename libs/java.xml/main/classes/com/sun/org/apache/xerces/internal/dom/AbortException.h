#ifndef _com_sun_org_apache_xerces_internal_dom_AbortException_h_
#define _com_sun_org_apache_xerces_internal_dom_AbortException_h_
//$ class com.sun.org.apache.xerces.internal.dom.AbortException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class AbortException : public ::java::lang::RuntimeException {
	$class(AbortException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	AbortException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x24328D025C1C2F01;
	AbortException(const AbortException& e);
	virtual void throw$() override;
	inline AbortException* operator ->() {
		return (AbortException*)throwing$;
	}
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_AbortException_h_