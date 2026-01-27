#ifndef _org_xml_sax_ext_Locator2Impl_h_
#define _org_xml_sax_ext_Locator2Impl_h_
//$ class org.xml.sax.ext.Locator2Impl
//$ extends org.xml.sax.helpers.LocatorImpl
//$ implements org.xml.sax.ext.Locator2

#include <org/xml/sax/ext/Locator2.h>
#include <org/xml/sax/helpers/LocatorImpl.h>

namespace org {
	namespace xml {
		namespace sax {
			class Locator;
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

class $import Locator2Impl : public ::org::xml::sax::helpers::LocatorImpl, public ::org::xml::sax::ext::Locator2 {
	$class(Locator2Impl, $NO_CLASS_INIT, ::org::xml::sax::helpers::LocatorImpl, ::org::xml::sax::ext::Locator2)
public:
	Locator2Impl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t getColumnNumber() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::org::xml::sax::Locator* locator);
	virtual $String* getEncoding() override;
	virtual $String* getXMLVersion() override;
	virtual void setEncoding($String* encoding);
	virtual void setXMLVersion($String* version);
	virtual $String* toString() override;
	$String* encoding = nullptr;
	$String* version = nullptr;
};

			} // ext
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_ext_Locator2Impl_h_