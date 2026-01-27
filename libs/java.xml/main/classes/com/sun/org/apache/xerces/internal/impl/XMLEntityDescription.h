#ifndef _com_sun_org_apache_xerces_internal_impl_XMLEntityDescription_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLEntityDescription_h_
//$ interface com.sun.org.apache.xerces.internal.impl.XMLEntityDescription
//$ extends com.sun.org.apache.xerces.internal.xni.XMLResourceIdentifier

#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

class XMLEntityDescription : public ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier {
	$interface(XMLEntityDescription, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier)
public:
	virtual $String* getEntityName() {return nullptr;}
	virtual void setEntityName($String* name) {}
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLEntityDescription_h_