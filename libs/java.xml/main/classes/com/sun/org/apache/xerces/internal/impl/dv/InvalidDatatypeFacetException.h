#ifndef _com_sun_org_apache_xerces_internal_impl_dv_InvalidDatatypeFacetException_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_InvalidDatatypeFacetException_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeFacetException
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

class InvalidDatatypeFacetException : public ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeException {
	$class(InvalidDatatypeFacetException, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeException)
public:
	InvalidDatatypeFacetException();
	void init$($String* key, $ObjectArray* args);
	static const int64_t serialVersionUID = (int64_t)0xC70B6DA39E9BC122;
	InvalidDatatypeFacetException(const InvalidDatatypeFacetException& e);
	virtual void throw$() override;
	inline InvalidDatatypeFacetException* operator ->() {
		return (InvalidDatatypeFacetException*)throwing$;
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

#endif // _com_sun_org_apache_xerces_internal_impl_dv_InvalidDatatypeFacetException_h_