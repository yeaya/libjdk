#ifndef _com_sun_org_apache_xml_internal_serializer_dom3_NamespaceSupport_h_
#define _com_sun_org_apache_xml_internal_serializer_dom3_NamespaceSupport_h_
//$ class com.sun.org.apache.xml.internal.serializer.dom3.NamespaceSupport
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PREFIX_XML")
#undef PREFIX_XML
#pragma push_macro("PREFIX_XMLNS")
#undef PREFIX_XMLNS
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
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {

class NamespaceSupport : public ::java::lang::Object {
	$class(NamespaceSupport, 0, ::java::lang::Object)
public:
	NamespaceSupport();
	void init$();
	virtual bool declarePrefix($String* prefix, $String* uri);
	virtual ::java::util::Enumeration* getAllPrefixes();
	virtual $String* getDeclaredPrefixAt(int32_t index);
	virtual int32_t getDeclaredPrefixCount();
	virtual $String* getPrefix($String* uri);
	virtual $String* getURI($String* prefix);
	virtual void popContext();
	virtual void pushContext();
	virtual void reset();
	static $String* PREFIX_XML;
	static $String* PREFIX_XMLNS;
	static $String* XML_URI;
	static $String* XMLNS_URI;
	$StringArray* fNamespace = nullptr;
	int32_t fNamespaceSize = 0;
	$ints* fContext = nullptr;
	int32_t fCurrentContext = 0;
	$StringArray* fPrefixes = nullptr;
};

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("PREFIX_XML")
#pragma pop_macro("PREFIX_XMLNS")
#pragma pop_macro("XMLNS_URI")
#pragma pop_macro("XML_URI")

#endif // _com_sun_org_apache_xml_internal_serializer_dom3_NamespaceSupport_h_