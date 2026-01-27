#ifndef _org_xml_sax_helpers_NamespaceSupport_h_
#define _org_xml_sax_helpers_NamespaceSupport_h_
//$ class org.xml.sax.helpers.NamespaceSupport
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_ENUMERATION")
#undef EMPTY_ENUMERATION
#pragma push_macro("NSDECL")
#undef NSDECL
#pragma push_macro("XMLNS")
#undef XMLNS

namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class NamespaceSupport$Context;
			}
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class $import NamespaceSupport : public ::java::lang::Object {
	$class(NamespaceSupport, 0, ::java::lang::Object)
public:
	NamespaceSupport();
	void init$();
	virtual bool declarePrefix($String* prefix, $String* uri);
	virtual ::java::util::Enumeration* getDeclaredPrefixes();
	virtual $String* getPrefix($String* uri);
	virtual ::java::util::Enumeration* getPrefixes();
	virtual ::java::util::Enumeration* getPrefixes($String* uri);
	virtual $String* getURI($String* prefix);
	virtual bool isNamespaceDeclUris();
	virtual void popContext();
	virtual $StringArray* processName($String* qName, $StringArray* parts, bool isAttribute);
	virtual void pushContext();
	virtual void reset();
	virtual void setNamespaceDeclUris(bool value);
	static $String* XMLNS;
	static $String* NSDECL;
	static ::java::util::Enumeration* EMPTY_ENUMERATION;
	$Array<::org::xml::sax::helpers::NamespaceSupport$Context>* contexts = nullptr;
	::org::xml::sax::helpers::NamespaceSupport$Context* currentContext = nullptr;
	int32_t contextPos = 0;
	bool namespaceDeclUris = false;
};

			} // helpers
		} // sax
	} // xml
} // org

#pragma pop_macro("EMPTY_ENUMERATION")
#pragma pop_macro("NSDECL")
#pragma pop_macro("XMLNS")

#endif // _org_xml_sax_helpers_NamespaceSupport_h_