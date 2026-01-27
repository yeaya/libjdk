#ifndef _com_sun_org_apache_xerces_internal_xni_NamespaceContext_h_
#define _com_sun_org_apache_xerces_internal_xni_NamespaceContext_h_
//$ interface com.sun.org.apache.xerces.internal.xni.NamespaceContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("XMLNS_URI")
#undef XMLNS_URI
#pragma push_macro("XML_URI")
#undef XML_URI

namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

class NamespaceContext : public ::java::lang::Object {
	$interface(NamespaceContext, 0, ::java::lang::Object)
public:
	virtual bool declarePrefix($String* prefix, $String* uri) {return false;}
	virtual ::java::util::Enumeration* getAllPrefixes() {return nullptr;}
	virtual $String* getDeclaredPrefixAt(int32_t index) {return nullptr;}
	virtual int32_t getDeclaredPrefixCount() {return 0;}
	virtual $String* getPrefix($String* uri) {return nullptr;}
	virtual $String* getURI($String* prefix) {return nullptr;}
	virtual void popContext() {}
	virtual void pushContext() {}
	virtual void reset() {}
	static $String* XML_URI;
	static $String* XMLNS_URI;
};

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("XMLNS_URI")
#pragma pop_macro("XML_URI")

#endif // _com_sun_org_apache_xerces_internal_xni_NamespaceContext_h_