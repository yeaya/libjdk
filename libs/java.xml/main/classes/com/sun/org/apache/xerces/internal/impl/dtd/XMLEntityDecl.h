#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_XMLEntityDecl_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_XMLEntityDecl_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.XMLEntityDecl
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

class XMLEntityDecl : public ::java::lang::Object {
	$class(XMLEntityDecl, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLEntityDecl();
	void init$();
	virtual void clear();
	virtual void setValues($String* name, $String* publicId, $String* systemId, $String* baseSystemId, $String* notation, bool isPE, bool inExternal);
	virtual void setValues($String* name, $String* publicId, $String* systemId, $String* baseSystemId, $String* notation, $String* value, bool isPE, bool inExternal);
	$String* name = nullptr;
	$String* publicId = nullptr;
	$String* systemId = nullptr;
	$String* baseSystemId = nullptr;
	$String* notation = nullptr;
	bool isPE = false;
	bool inExternal = false;
	$String* value = nullptr;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_XMLEntityDecl_h_