#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2StAXBaseWriter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2StAXBaseWriter_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter
//$ extends org.xml.sax.helpers.DefaultHandler
//$ implements org.xml.sax.ext.LexicalHandler

#include <java/lang/Array.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/helpers/DefaultHandler.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			class Location;
			class XMLReporter;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class Locator;
			class SAXException;
			class SAXParseException;
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

class SAX2StAXBaseWriter : public ::org::xml::sax::helpers::DefaultHandler, public ::org::xml::sax::ext::LexicalHandler {
	$class(SAX2StAXBaseWriter, $NO_CLASS_INIT, ::org::xml::sax::helpers::DefaultHandler, ::org::xml::sax::ext::LexicalHandler)
public:
	SAX2StAXBaseWriter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::xml::stream::XMLReporter* reporter);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endDocument() override;
	virtual void endElement($String* uri, $String* localName, $String* qName) override;
	virtual void endEntity($String* name) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual void error(::org::xml::sax::SAXParseException* e) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* e) override;
	virtual ::javax::xml::stream::Location* getCurrentLocation();
	static void parseQName($String* qName, $StringArray* results);
	virtual void reportException($String* type, ::org::xml::sax::SAXException* e);
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setEncoding($String* encoding);
	virtual void setXMLReporter(::javax::xml::stream::XMLReporter* reporter);
	virtual void setXmlVersion($String* version);
	virtual void startCDATA() override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localName, $String* qName, ::org::xml::sax::Attributes* attributes) override;
	virtual void startEntity($String* name) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual $String* toString() override;
	void updateVersionAndEncoding();
	virtual void warning(::org::xml::sax::SAXParseException* e) override;
	virtual void writeStartDocument();
	bool isCDATA = false;
	::java::lang::StringBuffer* CDATABuffer = nullptr;
	::java::util::List* namespaces = nullptr;
	::org::xml::sax::Locator* docLocator = nullptr;
	::javax::xml::stream::XMLReporter* reporter = nullptr;
	$String* xmlVersion = nullptr;
	$String* encoding = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2StAXBaseWriter_h_