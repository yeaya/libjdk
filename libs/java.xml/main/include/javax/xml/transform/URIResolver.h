#ifndef _javax_xml_transform_URIResolver_h_
#define _javax_xml_transform_URIResolver_h_
//$ interface javax.xml.transform.URIResolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace transform {
			class Source;
		}
	}
}

namespace javax {
	namespace xml {
		namespace transform {

class $import URIResolver : public ::java::lang::Object {
	$interface(URIResolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::xml::transform::Source* resolve($String* href, $String* base) {return nullptr;}
};

		} // transform
	} // xml
} // javax

#endif // _javax_xml_transform_URIResolver_h_