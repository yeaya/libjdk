#ifndef _com_sun_org_apache_xml_internal_utils_PrefixResolver_h_
#define _com_sun_org_apache_xml_internal_utils_PrefixResolver_h_
//$ interface com.sun.org.apache.xml.internal.utils.PrefixResolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import PrefixResolver : public ::java::lang::Object {
	$interface(PrefixResolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getBaseIdentifier() {return nullptr;}
	virtual $String* getNamespaceForPrefix($String* prefix) {return nullptr;}
	virtual $String* getNamespaceForPrefix($String* prefix, ::org::w3c::dom::Node* context) {return nullptr;}
	virtual bool handlesNullPrefixes() {return false;}
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_PrefixResolver_h_