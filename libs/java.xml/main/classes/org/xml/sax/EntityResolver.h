#ifndef _org_xml_sax_EntityResolver_h_
#define _org_xml_sax_EntityResolver_h_
//$ interface org.xml.sax.EntityResolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {

class $export EntityResolver : public ::java::lang::Object {
	$interface(EntityResolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::xml::sax::InputSource* resolveEntity($String* publicId, $String* systemId) {return nullptr;}
};

		} // sax
	} // xml
} // org

#endif // _org_xml_sax_EntityResolver_h_