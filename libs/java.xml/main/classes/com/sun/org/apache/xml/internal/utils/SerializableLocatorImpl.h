#ifndef _com_sun_org_apache_xml_internal_utils_SerializableLocatorImpl_h_
#define _com_sun_org_apache_xml_internal_utils_SerializableLocatorImpl_h_
//$ class com.sun.org.apache.xml.internal.utils.SerializableLocatorImpl
//$ extends org.xml.sax.Locator
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <org/xml/sax/Locator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $export SerializableLocatorImpl : public ::org::xml::sax::Locator, public ::java::io::Serializable {
	$class(SerializableLocatorImpl, $NO_CLASS_INIT, ::org::xml::sax::Locator, ::java::io::Serializable)
public:
	SerializableLocatorImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
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
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xDB14AB85DCC2B97C;
	$String* publicId = nullptr;
	$String* systemId = nullptr;
	int32_t lineNumber = 0;
	int32_t columnNumber = 0;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_SerializableLocatorImpl_h_