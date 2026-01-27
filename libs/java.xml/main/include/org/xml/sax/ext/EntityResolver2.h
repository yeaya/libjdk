#ifndef _org_xml_sax_ext_EntityResolver2_h_
#define _org_xml_sax_ext_EntityResolver2_h_
//$ interface org.xml.sax.ext.EntityResolver2
//$ extends org.xml.sax.EntityResolver

#include <org/xml/sax/EntityResolver.h>

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
			namespace ext {

class $import EntityResolver2 : public ::org::xml::sax::EntityResolver {
	$interface(EntityResolver2, $NO_CLASS_INIT, ::org::xml::sax::EntityResolver)
public:
	virtual ::org::xml::sax::InputSource* getExternalSubset($String* name, $String* baseURI) {return nullptr;}
	using ::org::xml::sax::EntityResolver::resolveEntity;
	virtual ::org::xml::sax::InputSource* resolveEntity($String* name, $String* publicId, $String* baseURI, $String* systemId) {return nullptr;}
};

			} // ext
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_ext_EntityResolver2_h_