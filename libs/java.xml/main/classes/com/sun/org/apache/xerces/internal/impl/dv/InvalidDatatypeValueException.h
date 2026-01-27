#ifndef _com_sun_org_apache_xerces_internal_impl_dv_InvalidDatatypeValueException_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_InvalidDatatypeValueException_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException
//$ extends com.sun.org.apache.xerces.internal.impl.dv.DatatypeException

#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeException.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

class InvalidDatatypeValueException : public ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeException {
	$class(InvalidDatatypeValueException, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeException)
public:
	InvalidDatatypeValueException();
	void init$($String* key, $ObjectArray* args);
	static const int64_t serialVersionUID = (int64_t)0xB357BC41D855A623;
	InvalidDatatypeValueException(const InvalidDatatypeValueException& e);
	virtual void throw$() override;
	inline InvalidDatatypeValueException* operator ->() {
		return (InvalidDatatypeValueException*)throwing$;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_InvalidDatatypeValueException_h_