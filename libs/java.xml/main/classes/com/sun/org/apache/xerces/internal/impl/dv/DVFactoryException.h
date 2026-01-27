#ifndef _com_sun_org_apache_xerces_internal_impl_dv_DVFactoryException_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_DVFactoryException_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.DVFactoryException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

class DVFactoryException : public ::java::lang::RuntimeException {
	$class(DVFactoryException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	DVFactoryException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xCC1CEB7627291454;
	DVFactoryException(const DVFactoryException& e);
	virtual void throw$() override;
	inline DVFactoryException* operator ->() {
		return (DVFactoryException*)throwing$;
	}
};

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dv_DVFactoryException_h_