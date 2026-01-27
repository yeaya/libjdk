#ifndef _org_xml_sax_helpers_LocatorImpl_h_
#define _org_xml_sax_helpers_LocatorImpl_h_
//$ class org.xml.sax.helpers.LocatorImpl
//$ extends org.xml.sax.Locator

#include <org/xml/sax/Locator.h>

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class $export LocatorImpl : public ::org::xml::sax::Locator {
	$class(LocatorImpl, $NO_CLASS_INIT, ::org::xml::sax::Locator)
public:
	LocatorImpl();
	void init$();
	void init$(::org::xml::sax::Locator* locator);
	virtual int32_t getColumnNumber() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual void setColumnNumber(int32_t columnNumber);
	virtual void setLineNumber(int32_t lineNumber);
	virtual void setPublicId($String* publicId);
	virtual void setSystemId($String* systemId);
	$String* publicId = nullptr;
	$String* systemId = nullptr;
	int32_t lineNumber = 0;
	int32_t columnNumber = 0;
};

			} // helpers
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_helpers_LocatorImpl_h_