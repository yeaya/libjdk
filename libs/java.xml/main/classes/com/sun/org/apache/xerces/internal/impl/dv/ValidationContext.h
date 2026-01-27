#ifndef _com_sun_org_apache_xerces_internal_impl_dv_ValidationContext_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_ValidationContext_h_
//$ interface com.sun.org.apache.xerces.internal.impl.dv.ValidationContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

class ValidationContext : public ::java::lang::Object {
	$interface(ValidationContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addId($String* name) {}
	virtual void addIdRef($String* name) {}
	virtual ::java::util::Locale* getLocale() {return nullptr;}
	virtual $String* getSymbol($String* symbol) {return nullptr;}
	virtual $String* getURI($String* prefix) {return nullptr;}
	virtual bool isEntityDeclared($String* name) {return false;}
	virtual bool isEntityUnparsed($String* name) {return false;}
	virtual bool isIdDeclared($String* name) {return false;}
	virtual bool needExtraChecking() {return false;}
	virtual bool needFacetChecking() {return false;}
	virtual bool needToNormalize() {return false;}
	virtual bool useNamespaces() {return false;}
};

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dv_ValidationContext_h_