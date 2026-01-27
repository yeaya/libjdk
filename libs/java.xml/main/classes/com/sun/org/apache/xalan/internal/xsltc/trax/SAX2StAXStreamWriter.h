#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2StAXStreamWriter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2StAXStreamWriter_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXStreamWriter
//$ extends com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter

#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2StAXBaseWriter.h>
#include <java/lang/Array.h>

namespace javax {
	namespace xml {
		namespace stream {
			class XMLStreamWriter;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
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

class SAX2StAXStreamWriter : public ::com::sun::org::apache::xalan::internal::xsltc::trax::SAX2StAXBaseWriter {
	$class(SAX2StAXStreamWriter, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::trax::SAX2StAXBaseWriter)
public:
	SAX2StAXStreamWriter();
	void init$();
	void init$(::javax::xml::stream::XMLStreamWriter* writer);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	virtual void endCDATA() override;
	virtual void endDocument() override;
	virtual void endElement($String* uri, $String* localName, $String* qName) override;
	virtual ::javax::xml::stream::XMLStreamWriter* getStreamWriter();
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void setStreamWriter(::javax::xml::stream::XMLStreamWriter* writer);
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localName, $String* qName, ::org::xml::sax::Attributes* attributes) override;
	virtual void writeStartDocument() override;
	::javax::xml::stream::XMLStreamWriter* writer = nullptr;
	bool needToCallStartDocument = false;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2StAXStreamWriter_h_