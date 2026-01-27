#ifndef _com_sun_org_apache_xerces_internal_impl_dv_DatatypeException_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_DatatypeException_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.DatatypeException
//$ extends java.lang.Exception

#include <java/lang/Array.h>
#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

class DatatypeException : public ::java::lang::Exception {
	$class(DatatypeException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	DatatypeException();
	void init$($String* key, $ObjectArray* args);
	virtual $ObjectArray* getArgs();
	virtual $String* getKey();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0x1AEF209F3DE7D52A;
	$String* key = nullptr;
	$ObjectArray* args = nullptr;
	DatatypeException(const DatatypeException& e);
	virtual void throw$() override;
	inline DatatypeException* operator ->() {
		return (DatatypeException*)throwing$;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_DatatypeException_h_