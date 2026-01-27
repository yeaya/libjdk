#ifndef _com_sun_org_apache_xml_internal_utils_AttList_h_
#define _com_sun_org_apache_xml_internal_utils_AttList_h_
//$ class com.sun.org.apache.xml.internal.utils.AttList
//$ extends org.xml.sax.Attributes

#include <org/xml/sax/Attributes.h>

namespace org {
	namespace w3c {
		namespace dom {
			class NamedNodeMap;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import AttList : public ::org::xml::sax::Attributes {
	$class(AttList, $NO_CLASS_INIT, ::org::xml::sax::Attributes)
public:
	AttList();
	void init$(::org::w3c::dom::NamedNodeMap* attrs);
	virtual int32_t getIndex($String* uri, $String* localPart) override;
	virtual int32_t getIndex($String* qName) override;
	virtual int32_t getLength() override;
	virtual $String* getLocalName(int32_t index) override;
	virtual $String* getQName(int32_t i) override;
	virtual $String* getType(int32_t i) override;
	virtual $String* getType($String* name) override;
	virtual $String* getType($String* uri, $String* localName) override;
	virtual $String* getURI(int32_t index) override;
	virtual $String* getValue(int32_t i) override;
	virtual $String* getValue($String* name) override;
	virtual $String* getValue($String* uri, $String* localName) override;
	::org::w3c::dom::NamedNodeMap* m_attrs = nullptr;
	int32_t m_lastIndex = 0;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_AttList_h_