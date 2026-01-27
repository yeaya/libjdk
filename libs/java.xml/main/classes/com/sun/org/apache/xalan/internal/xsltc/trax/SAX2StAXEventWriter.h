#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2StAXEventWriter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2StAXEventWriter_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXEventWriter
//$ extends com.sun.org.apache.xalan.internal.xsltc.trax.SAX2StAXBaseWriter

#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2StAXBaseWriter.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Collection;
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			class XMLEventFactory;
			class XMLEventWriter;
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			namespace events {
				class Namespace;
			}
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

class SAX2StAXEventWriter : public ::com::sun::org::apache::xalan::internal::xsltc::trax::SAX2StAXBaseWriter {
	$class(SAX2StAXEventWriter, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::trax::SAX2StAXBaseWriter)
public:
	SAX2StAXEventWriter();
	void init$();
	void init$(::javax::xml::stream::XMLEventWriter* writer);
	void init$(::javax::xml::stream::XMLEventWriter* writer, ::javax::xml::stream::XMLEventFactory* factory);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	virtual ::javax::xml::stream::events::Namespace* createNamespace($String* prefix, $String* uri);
	virtual void createStartEvents(::org::xml::sax::Attributes* attributes, $Array<::java::util::Collection>* events);
	virtual void endCDATA() override;
	virtual void endDocument() override;
	virtual void endElement($String* uri, $String* localName, $String* qName) override;
	virtual ::javax::xml::stream::XMLEventFactory* getEventFactory();
	virtual ::javax::xml::stream::XMLEventWriter* getEventWriter();
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void setEventFactory(::javax::xml::stream::XMLEventFactory* factory);
	virtual void setEventWriter(::javax::xml::stream::XMLEventWriter* writer);
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localName, $String* qName, ::org::xml::sax::Attributes* attributes) override;
	virtual void writeStartDocument() override;
	::javax::xml::stream::XMLEventWriter* writer = nullptr;
	::javax::xml::stream::XMLEventFactory* eventFactory = nullptr;
	::java::util::List* namespaceStack = nullptr;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_SAX2StAXEventWriter_h_