#ifndef _com_sun_org_apache_xml_internal_utils_NodeConsumer_h_
#define _com_sun_org_apache_xml_internal_utils_NodeConsumer_h_
//$ interface com.sun.org.apache.xml.internal.utils.NodeConsumer
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

class $import NodeConsumer : public ::java::lang::Object {
	$interface(NodeConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void setOriginatingNode(::org::w3c::dom::Node* n) {}
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_NodeConsumer_h_