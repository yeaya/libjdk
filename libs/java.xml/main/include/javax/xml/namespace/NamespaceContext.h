#ifndef _javax_xml_namespace$_NamespaceContext_h_
#define _javax_xml_namespace$_NamespaceContext_h_
//$ interface javax.xml.namespace.NamespaceContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace javax {
	namespace xml {
		namespace namespace$ {

class $import NamespaceContext : public ::java::lang::Object {
	$interface(NamespaceContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getNamespaceURI($String* prefix) {return nullptr;}
	virtual $String* getPrefix($String* namespaceURI) {return nullptr;}
	virtual ::java::util::Iterator* getPrefixes($String* namespaceURI) {return nullptr;}
};

		} // namespace$
	} // xml
} // javax

#endif // _javax_xml_namespace$_NamespaceContext_h_