#ifndef _com_sun_org_apache_xerces_internal_impl_XML11NamespaceBinder_h_
#define _com_sun_org_apache_xerces_internal_impl_XML11NamespaceBinder_h_
//$ class com.sun.org.apache.xerces.internal.impl.XML11NamespaceBinder
//$ extends com.sun.org.apache.xerces.internal.impl.XMLNamespaceBinder

#include <com/sun/org/apache/xerces/internal/impl/XMLNamespaceBinder.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

class XML11NamespaceBinder : public ::com::sun::org::apache::xerces::internal::impl::XMLNamespaceBinder {
	$class(XML11NamespaceBinder, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::XMLNamespaceBinder)
public:
	XML11NamespaceBinder();
	void init$();
	virtual bool prefixBoundToNullURI($String* uri, $String* localpart) override;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XML11NamespaceBinder_h_