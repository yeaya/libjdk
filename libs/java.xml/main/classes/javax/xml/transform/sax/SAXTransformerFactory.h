#ifndef _javax_xml_transform_sax_SAXTransformerFactory_h_
#define _javax_xml_transform_sax_SAXTransformerFactory_h_
//$ class javax.xml.transform.sax.SAXTransformerFactory
//$ extends javax.xml.transform.TransformerFactory

#include <javax/xml/transform/TransformerFactory.h>

#pragma push_macro("FEATURE")
#undef FEATURE
#pragma push_macro("FEATURE_XMLFILTER")
#undef FEATURE_XMLFILTER

namespace javax {
	namespace xml {
		namespace transform {
			class Source;
			class Templates;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {
				class TemplatesHandler;
				class TransformerHandler;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class XMLFilter;
		}
	}
}

namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {

class $export SAXTransformerFactory : public ::javax::xml::transform::TransformerFactory {
	$class(SAXTransformerFactory, 0, ::javax::xml::transform::TransformerFactory)
public:
	SAXTransformerFactory();
	void init$();
	virtual ::javax::xml::transform::sax::TemplatesHandler* newTemplatesHandler() {return nullptr;}
	virtual ::javax::xml::transform::sax::TransformerHandler* newTransformerHandler(::javax::xml::transform::Source* src) {return nullptr;}
	virtual ::javax::xml::transform::sax::TransformerHandler* newTransformerHandler(::javax::xml::transform::Templates* templates) {return nullptr;}
	virtual ::javax::xml::transform::sax::TransformerHandler* newTransformerHandler() {return nullptr;}
	virtual ::org::xml::sax::XMLFilter* newXMLFilter(::javax::xml::transform::Source* src) {return nullptr;}
	virtual ::org::xml::sax::XMLFilter* newXMLFilter(::javax::xml::transform::Templates* templates) {return nullptr;}
	static $String* FEATURE;
	static $String* FEATURE_XMLFILTER;
};

			} // sax
		} // transform
	} // xml
} // javax

#pragma pop_macro("FEATURE")
#pragma pop_macro("FEATURE_XMLFILTER")

#endif // _javax_xml_transform_sax_SAXTransformerFactory_h_