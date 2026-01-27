#ifndef _org_xml_sax_helpers_AttributesImpl_h_
#define _org_xml_sax_helpers_AttributesImpl_h_
//$ class org.xml.sax.helpers.AttributesImpl
//$ extends org.xml.sax.Attributes

#include <java/lang/Array.h>
#include <org/xml/sax/Attributes.h>

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class $import AttributesImpl : public ::org::xml::sax::Attributes {
	$class(AttributesImpl, $NO_CLASS_INIT, ::org::xml::sax::Attributes)
public:
	AttributesImpl();
	void init$();
	void init$(::org::xml::sax::Attributes* atts);
	virtual void addAttribute($String* uri, $String* localName, $String* qName, $String* type, $String* value);
	void badIndex(int32_t index);
	virtual void clear();
	void ensureCapacity(int32_t n);
	virtual int32_t getIndex($String* uri, $String* localName) override;
	virtual int32_t getIndex($String* qName) override;
	virtual int32_t getLength() override;
	virtual $String* getLocalName(int32_t index) override;
	virtual $String* getQName(int32_t index) override;
	virtual $String* getType(int32_t index) override;
	virtual $String* getType($String* uri, $String* localName) override;
	virtual $String* getType($String* qName) override;
	virtual $String* getURI(int32_t index) override;
	virtual $String* getValue(int32_t index) override;
	virtual $String* getValue($String* uri, $String* localName) override;
	virtual $String* getValue($String* qName) override;
	virtual void removeAttribute(int32_t index);
	virtual void setAttribute(int32_t index, $String* uri, $String* localName, $String* qName, $String* type, $String* value);
	virtual void setAttributes(::org::xml::sax::Attributes* atts);
	virtual void setLocalName(int32_t index, $String* localName);
	virtual void setQName(int32_t index, $String* qName);
	virtual void setType(int32_t index, $String* type);
	virtual void setURI(int32_t index, $String* uri);
	virtual void setValue(int32_t index, $String* value);
	int32_t length = 0;
	$StringArray* data = nullptr;
};

			} // helpers
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_helpers_AttributesImpl_h_