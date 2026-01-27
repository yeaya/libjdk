#ifndef _org_xml_sax_ext_Attributes2Impl_h_
#define _org_xml_sax_ext_Attributes2Impl_h_
//$ class org.xml.sax.ext.Attributes2Impl
//$ extends org.xml.sax.helpers.AttributesImpl
//$ implements org.xml.sax.ext.Attributes2

#include <java/lang/Array.h>
#include <org/xml/sax/ext/Attributes2.h>
#include <org/xml/sax/helpers/AttributesImpl.h>

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
			namespace ext {

class $import Attributes2Impl : public ::org::xml::sax::helpers::AttributesImpl, public ::org::xml::sax::ext::Attributes2 {
	$class(Attributes2Impl, $NO_CLASS_INIT, ::org::xml::sax::helpers::AttributesImpl, ::org::xml::sax::ext::Attributes2)
public:
	Attributes2Impl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
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
	virtual int32_t hashCode() override;
	void init$();
	void init$(::org::xml::sax::Attributes* atts);
	virtual void addAttribute($String* uri, $String* localName, $String* qName, $String* type, $String* value) override;
	virtual bool isDeclared(int32_t index) override;
	virtual bool isDeclared($String* uri, $String* localName) override;
	virtual bool isDeclared($String* qName) override;
	virtual bool isSpecified(int32_t index) override;
	virtual bool isSpecified($String* uri, $String* localName) override;
	virtual bool isSpecified($String* qName) override;
	virtual void removeAttribute(int32_t index) override;
	virtual void setAttributes(::org::xml::sax::Attributes* atts) override;
	virtual void setDeclared(int32_t index, bool value);
	virtual void setSpecified(int32_t index, bool value);
	virtual $String* toString() override;
	$booleans* declared = nullptr;
	$booleans* specified = nullptr;
};

			} // ext
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_ext_Attributes2Impl_h_