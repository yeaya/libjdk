#ifndef _org_xml_sax_helpers_ParserAdapter$AttributeListAdapter_h_
#define _org_xml_sax_helpers_ParserAdapter$AttributeListAdapter_h_
//$ class org.xml.sax.helpers.ParserAdapter$AttributeListAdapter
//$ extends org.xml.sax.Attributes

#include <org/xml/sax/Attributes.h>

namespace org {
	namespace xml {
		namespace sax {
			class AttributeList;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class ParserAdapter;
			}
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class $import ParserAdapter$AttributeListAdapter : public ::org::xml::sax::Attributes {
	$class(ParserAdapter$AttributeListAdapter, $NO_CLASS_INIT, ::org::xml::sax::Attributes)
public:
	ParserAdapter$AttributeListAdapter();
	void init$(::org::xml::sax::helpers::ParserAdapter* this$0);
	virtual int32_t getIndex($String* uri, $String* localName) override;
	virtual int32_t getIndex($String* qName) override;
	virtual int32_t getLength() override;
	virtual $String* getLocalName(int32_t i) override;
	virtual $String* getQName(int32_t i) override;
	virtual $String* getType(int32_t i) override;
	virtual $String* getType($String* uri, $String* localName) override;
	virtual $String* getType($String* qName) override;
	virtual $String* getURI(int32_t i) override;
	virtual $String* getValue(int32_t i) override;
	virtual $String* getValue($String* uri, $String* localName) override;
	virtual $String* getValue($String* qName) override;
	void setAttributeList(::org::xml::sax::AttributeList* qAtts);
	::org::xml::sax::helpers::ParserAdapter* this$0 = nullptr;
	::org::xml::sax::AttributeList* qAtts = nullptr;
};

			} // helpers
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_helpers_ParserAdapter$AttributeListAdapter_h_