#ifndef _javax_xml_transform_sax_SAXSource_h_
#define _javax_xml_transform_sax_SAXSource_h_
//$ class javax.xml.transform.sax.SAXSource
//$ extends javax.xml.transform.Source

#include <javax/xml/transform/Source.h>

#pragma push_macro("FEATURE")
#undef FEATURE

namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
			class XMLReader;
		}
	}
}

namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {

class $export SAXSource : public ::javax::xml::transform::Source {
	$class(SAXSource, 0, ::javax::xml::transform::Source)
public:
	SAXSource();
	void init$();
	void init$(::org::xml::sax::XMLReader* reader, ::org::xml::sax::InputSource* inputSource);
	void init$(::org::xml::sax::InputSource* inputSource);
	virtual ::org::xml::sax::InputSource* getInputSource();
	virtual $String* getSystemId() override;
	virtual ::org::xml::sax::XMLReader* getXMLReader();
	virtual bool isEmpty() override;
	virtual void setInputSource(::org::xml::sax::InputSource* inputSource);
	virtual void setSystemId($String* systemId) override;
	virtual void setXMLReader(::org::xml::sax::XMLReader* reader);
	static ::org::xml::sax::InputSource* sourceToInputSource(::javax::xml::transform::Source* source);
	static $String* FEATURE;
	::org::xml::sax::XMLReader* reader = nullptr;
	::org::xml::sax::InputSource* inputSource = nullptr;
};

			} // sax
		} // transform
	} // xml
} // javax

#pragma pop_macro("FEATURE")

#endif // _javax_xml_transform_sax_SAXSource_h_