#ifndef _com_sun_org_apache_xerces_internal_impl_xs_SchemaNamespaceSupport_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_SchemaNamespaceSupport_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.SchemaNamespaceSupport
//$ extends com.sun.org.apache.xerces.internal.util.NamespaceSupport

#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

class SchemaNamespaceSupport : public ::com::sun::org::apache::xerces::internal::util::NamespaceSupport {
	$class(SchemaNamespaceSupport, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::NamespaceSupport)
public:
	SchemaNamespaceSupport();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::SchemaNamespaceSupport* nSupport);
	virtual $StringArray* getEffectiveLocalContext();
	virtual void makeGlobal();
	virtual void setEffectiveContext($StringArray* namespaceDecls);
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_SchemaNamespaceSupport_h_