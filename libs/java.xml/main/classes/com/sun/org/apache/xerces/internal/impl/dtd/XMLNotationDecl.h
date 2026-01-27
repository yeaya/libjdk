#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_XMLNotationDecl_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_XMLNotationDecl_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.XMLNotationDecl
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

class XMLNotationDecl : public ::java::lang::Object {
	$class(XMLNotationDecl, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLNotationDecl();
	void init$();
	virtual void clear();
	virtual void setValues($String* name, $String* publicId, $String* systemId, $String* baseSystemId);
	$String* name = nullptr;
	$String* publicId = nullptr;
	$String* systemId = nullptr;
	$String* baseSystemId = nullptr;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_XMLNotationDecl_h_