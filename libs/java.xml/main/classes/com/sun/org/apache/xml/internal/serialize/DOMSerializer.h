#ifndef _com_sun_org_apache_xml_internal_serialize_DOMSerializer_h_
#define _com_sun_org_apache_xml_internal_serialize_DOMSerializer_h_
//$ interface com.sun.org.apache.xml.internal.serialize.DOMSerializer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class DocumentFragment;
			class Element;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class DOMSerializer : public ::java::lang::Object {
	$interface(DOMSerializer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void serialize(::org::w3c::dom::Element* elem) {}
	virtual void serialize(::org::w3c::dom::Document* doc) {}
	virtual void serialize(::org::w3c::dom::DocumentFragment* frag) {}
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_DOMSerializer_h_