#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2StAXBaseWriter$SAXLocation_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2StAXBaseWriter$SAXLocation_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter$SAXLocation
//$ extends javax.xml.stream.Location

#include <javax/xml/stream/Location.h>

namespace org {
	namespace xml {
		namespace sax {
			class Locator;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

class SAX2StAXBaseWriter$SAXLocation : public ::javax::xml::stream::Location {
	$class(SAX2StAXBaseWriter$SAXLocation, $NO_CLASS_INIT, ::javax::xml::stream::Location)
public:
	SAX2StAXBaseWriter$SAXLocation();
	void init$(::org::xml::sax::Locator* locator);
	virtual int32_t getCharacterOffset() override;
	virtual int32_t getColumnNumber() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	int32_t lineNumber = 0;
	int32_t columnNumber = 0;
	$String* publicId = nullptr;
	$String* systemId = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2StAXBaseWriter$SAXLocation_h_