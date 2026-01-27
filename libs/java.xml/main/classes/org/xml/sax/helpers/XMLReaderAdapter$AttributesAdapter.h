#ifndef _org_xml_sax_helpers_XMLReaderAdapter$AttributesAdapter_h_
#define _org_xml_sax_helpers_XMLReaderAdapter$AttributesAdapter_h_
//$ class org.xml.sax.helpers.XMLReaderAdapter$AttributesAdapter
//$ extends org.xml.sax.AttributeList

#include <org/xml/sax/AttributeList.h>

namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class XMLReaderAdapter;
			}
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class $export XMLReaderAdapter$AttributesAdapter : public ::org::xml::sax::AttributeList {
	$class(XMLReaderAdapter$AttributesAdapter, $NO_CLASS_INIT, ::org::xml::sax::AttributeList)
public:
	XMLReaderAdapter$AttributesAdapter();
	void init$(::org::xml::sax::helpers::XMLReaderAdapter* this$0);
	virtual int32_t getLength() override;
	virtual $String* getName(int32_t i) override;
	virtual $String* getType(int32_t i) override;
	virtual $String* getType($String* qName) override;
	virtual $String* getValue(int32_t i) override;
	virtual $String* getValue($String* qName) override;
	void setAttributes(::org::xml::sax::Attributes* attributes);
	::org::xml::sax::helpers::XMLReaderAdapter* this$0 = nullptr;
	::org::xml::sax::Attributes* attributes = nullptr;
};

			} // helpers
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_helpers_XMLReaderAdapter$AttributesAdapter_h_