#ifndef _com_sun_org_apache_xml_internal_utils_SAXSourceLocator_h_
#define _com_sun_org_apache_xml_internal_utils_SAXSourceLocator_h_
//$ class com.sun.org.apache.xml.internal.utils.SAXSourceLocator
//$ extends org.xml.sax.helpers.LocatorImpl
//$ implements javax.xml.transform.SourceLocator,java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/xml/transform/SourceLocator.h>
#include <org/xml/sax/helpers/LocatorImpl.h>

namespace org {
	namespace xml {
		namespace sax {
			class Locator;
			class SAXParseException;
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

class $import SAXSourceLocator : public ::org::xml::sax::helpers::LocatorImpl, public ::javax::xml::transform::SourceLocator, public ::java::io::Serializable {
	$class(SAXSourceLocator, $NO_CLASS_INIT, ::org::xml::sax::helpers::LocatorImpl, ::javax::xml::transform::SourceLocator, ::java::io::Serializable)
public:
	SAXSourceLocator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::org::xml::sax::Locator* locator);
	void init$(::javax::xml::transform::SourceLocator* locator);
	void init$(::org::xml::sax::SAXParseException* spe);
	virtual int32_t getColumnNumber() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x2C2799F6A21A0750;
	::org::xml::sax::Locator* m_locator = nullptr;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_SAXSourceLocator_h_