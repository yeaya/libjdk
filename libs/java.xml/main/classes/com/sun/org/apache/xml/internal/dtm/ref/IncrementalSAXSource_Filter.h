#ifndef _com_sun_org_apache_xml_internal_dtm_ref_IncrementalSAXSource_Filter_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_IncrementalSAXSource_Filter_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Filter
//$ extends com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource
//$ implements org.xml.sax.ContentHandler,org.xml.sax.DTDHandler,org.xml.sax.ext.LexicalHandler,org.xml.sax.ErrorHandler,java.lang.Runnable

#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource.h>
#include <java/lang/Array.h>
#include <java/lang/Runnable.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>

#pragma push_macro("DEBUG")
#undef DEBUG

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								class CoroutineManager;
							}
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class InputSource;
			class Locator;
			class SAXParseException;
			class XMLReader;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class IncrementalSAXSource_Filter : public ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource, public ::org::xml::sax::ContentHandler, public ::org::xml::sax::DTDHandler, public ::org::xml::sax::ext::LexicalHandler, public ::org::xml::sax::ErrorHandler, public ::java::lang::Runnable {
	$class(IncrementalSAXSource_Filter, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource, ::org::xml::sax::ContentHandler, ::org::xml::sax::DTDHandler, ::org::xml::sax::ext::LexicalHandler, ::org::xml::sax::ErrorHandler, ::java::lang::Runnable)
public:
	IncrementalSAXSource_Filter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::CoroutineManager* co, int32_t controllerCoroutineID);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	void co_entry_pause();
	void co_yield$(bool moreRemains);
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	void count_and_yield(bool moreExpected);
	static ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource* createIncrementalSAXSource(::com::sun::org::apache::xml::internal::dtm::ref::CoroutineManager* co, int32_t controllerCoroutineID);
	virtual $Object* deliverMoreNodes(bool parsemore) override;
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endDocument() override;
	virtual void endElement($String* namespaceURI, $String* localName, $String* qName) override;
	virtual void endEntity($String* name) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual void error(::org::xml::sax::SAXParseException* exception) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* exception) override;
	int32_t getControllerCoroutineID();
	::com::sun::org::apache::xml::internal::dtm::ref::CoroutineManager* getCoroutineManager();
	int32_t getSourceCoroutineID();
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	void init(::com::sun::org::apache::xml::internal::dtm::ref::CoroutineManager* co, int32_t controllerCoroutineID, int32_t sourceCoroutineID);
	virtual void notationDecl($String* a, $String* b, $String* c) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void run() override;
	virtual void setContentHandler(::org::xml::sax::ContentHandler* handler) override;
	virtual void setDTDHandler(::org::xml::sax::DTDHandler* handler) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	void setErrHandler(::org::xml::sax::ErrorHandler* handler);
	virtual void setLexicalHandler(::org::xml::sax::ext::LexicalHandler* handler) override;
	void setReturnFrequency(int32_t events);
	void setXMLReader(::org::xml::sax::XMLReader* eventsource);
	virtual void skippedEntity($String* name) override;
	virtual void startCDATA() override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startDocument() override;
	virtual void startElement($String* namespaceURI, $String* localName, $String* qName, ::org::xml::sax::Attributes* atts) override;
	virtual void startEntity($String* name) override;
	virtual void startParse(::org::xml::sax::InputSource* source) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* a, $String* b, $String* c, $String* d) override;
	virtual void warning(::org::xml::sax::SAXParseException* exception) override;
	bool DEBUG = false;
	::com::sun::org::apache::xml::internal::dtm::ref::CoroutineManager* fCoroutineManager = nullptr;
	int32_t fControllerCoroutineID = 0;
	int32_t fSourceCoroutineID = 0;
	::org::xml::sax::ContentHandler* clientContentHandler = nullptr;
	::org::xml::sax::ext::LexicalHandler* clientLexicalHandler = nullptr;
	::org::xml::sax::DTDHandler* clientDTDHandler = nullptr;
	::org::xml::sax::ErrorHandler* clientErrorHandler = nullptr;
	int32_t eventcounter = 0;
	int32_t frequency = 0;
	bool fNoMoreEvents = false;
	::org::xml::sax::XMLReader* fXMLReader = nullptr;
	::org::xml::sax::InputSource* fXMLReaderInputSource = nullptr;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_IncrementalSAXSource_Filter_h_