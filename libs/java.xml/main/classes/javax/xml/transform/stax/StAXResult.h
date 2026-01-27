#ifndef _javax_xml_transform_stax_StAXResult_h_
#define _javax_xml_transform_stax_StAXResult_h_
//$ class javax.xml.transform.stax.StAXResult
//$ extends javax.xml.transform.Result

#include <javax/xml/transform/Result.h>

#pragma push_macro("FEATURE")
#undef FEATURE

namespace javax {
	namespace xml {
		namespace stream {
			class XMLEventWriter;
			class XMLStreamWriter;
		}
	}
}

namespace javax {
	namespace xml {
		namespace transform {
			namespace stax {

class $export StAXResult : public ::javax::xml::transform::Result {
	$class(StAXResult, 0, ::javax::xml::transform::Result)
public:
	StAXResult();
	void init$(::javax::xml::stream::XMLEventWriter* xmlEventWriter);
	void init$(::javax::xml::stream::XMLStreamWriter* xmlStreamWriter);
	virtual $String* getSystemId() override;
	virtual ::javax::xml::stream::XMLEventWriter* getXMLEventWriter();
	virtual ::javax::xml::stream::XMLStreamWriter* getXMLStreamWriter();
	virtual void setSystemId($String* systemId) override;
	static $String* FEATURE;
	::javax::xml::stream::XMLEventWriter* xmlEventWriter = nullptr;
	::javax::xml::stream::XMLStreamWriter* xmlStreamWriter = nullptr;
	$String* systemId = nullptr;
};

			} // stax
		} // transform
	} // xml
} // javax

#pragma pop_macro("FEATURE")

#endif // _javax_xml_transform_stax_StAXResult_h_