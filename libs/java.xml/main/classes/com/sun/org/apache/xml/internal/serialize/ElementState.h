#ifndef _com_sun_org_apache_xml_internal_serialize_ElementState_h_
#define _com_sun_org_apache_xml_internal_serialize_ElementState_h_
//$ class com.sun.org.apache.xml.internal.serialize.ElementState
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class ElementState : public ::java::lang::Object {
	$class(ElementState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ElementState();
	void init$();
	$String* rawName = nullptr;
	$String* localName = nullptr;
	$String* namespaceURI = nullptr;
	bool preserveSpace = false;
	bool empty = false;
	bool afterElement = false;
	bool afterComment = false;
	bool doCData = false;
	bool unescaped = false;
	bool inCData = false;
	::java::util::Map* prefixes = nullptr;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_ElementState_h_