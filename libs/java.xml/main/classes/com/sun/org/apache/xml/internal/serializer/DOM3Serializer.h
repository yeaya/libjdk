#ifndef _com_sun_org_apache_xml_internal_serializer_DOM3Serializer_h_
#define _com_sun_org_apache_xml_internal_serializer_DOM3Serializer_h_
//$ interface com.sun.org.apache.xml.internal.serializer.DOM3Serializer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class DOMErrorHandler;
			class Node;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSSerializerFilter;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class DOM3Serializer : public ::java::lang::Object {
	$interface(DOM3Serializer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::DOMErrorHandler* getErrorHandler() {return nullptr;}
	virtual ::org::w3c::dom::ls::LSSerializerFilter* getNodeFilter() {return nullptr;}
	virtual void serializeDOM3(::org::w3c::dom::Node* node) {}
	virtual void setErrorHandler(::org::w3c::dom::DOMErrorHandler* handler) {}
	virtual void setNewLine($String* newLine) {}
	virtual void setNodeFilter(::org::w3c::dom::ls::LSSerializerFilter* filter) {}
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_DOM3Serializer_h_