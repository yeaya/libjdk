#ifndef _javax_xml_transform_stax_StAXSource_h_
#define _javax_xml_transform_stax_StAXSource_h_
//$ class javax.xml.transform.stax.StAXSource
//$ extends javax.xml.transform.Source

#include <javax/xml/transform/Source.h>

#pragma push_macro("FEATURE")
#undef FEATURE

namespace javax {
	namespace xml {
		namespace stream {
			class XMLEventReader;
			class XMLStreamReader;
		}
	}
}

namespace javax {
	namespace xml {
		namespace transform {
			namespace stax {

class $export StAXSource : public ::javax::xml::transform::Source {
	$class(StAXSource, 0, ::javax::xml::transform::Source)
public:
	StAXSource();
	void init$(::javax::xml::stream::XMLEventReader* xmlEventReader);
	void init$(::javax::xml::stream::XMLStreamReader* xmlStreamReader);
	virtual $String* getSystemId() override;
	virtual ::javax::xml::stream::XMLEventReader* getXMLEventReader();
	virtual ::javax::xml::stream::XMLStreamReader* getXMLStreamReader();
	virtual bool isEmpty() override;
	virtual void setSystemId($String* systemId) override;
	static $String* FEATURE;
	::javax::xml::stream::XMLEventReader* xmlEventReader = nullptr;
	::javax::xml::stream::XMLStreamReader* xmlStreamReader = nullptr;
	$String* systemId = nullptr;
};

			} // stax
		} // transform
	} // xml
} // javax

#pragma pop_macro("FEATURE")

#endif // _javax_xml_transform_stax_StAXSource_h_