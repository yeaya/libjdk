#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_StAXEvent2SAX_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_StAXEvent2SAX_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.StAXEvent2SAX
//$ extends org.xml.sax.XMLReader
//$ implements org.xml.sax.Locator

#include <org/xml/sax/Locator.h>
#include <org/xml/sax/XMLReader.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class SAXImpl;
							}
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			class XMLEventReader;
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			namespace events {
				class Characters;
				class EndElement;
				class ProcessingInstruction;
				class StartElement;
				class XMLEvent;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class ContentHandler;
			class DTDHandler;
			class EntityResolver;
			class ErrorHandler;
			class InputSource;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class LexicalHandler;
			}
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

class StAXEvent2SAX : public ::org::xml::sax::XMLReader, public ::org::xml::sax::Locator {
	$class(StAXEvent2SAX, $NO_CLASS_INIT, ::org::xml::sax::XMLReader, ::org::xml::sax::Locator)
public:
	StAXEvent2SAX();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::xml::stream::XMLEventReader* staxCore);
	void bridge();
	::org::xml::sax::Attributes* getAttributes(::javax::xml::stream::events::StartElement* event);
	virtual int32_t getColumnNumber() override;
	virtual ::org::xml::sax::ContentHandler* getContentHandler() override;
	virtual ::org::xml::sax::DTDHandler* getDTDHandler() override;
	virtual ::org::xml::sax::EntityResolver* getEntityResolver() override;
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() override;
	virtual bool getFeature($String* name) override;
	virtual int32_t getLineNumber() override;
	virtual $Object* getProperty($String* name) override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	void handleAttribute();
	void handleCDATA();
	void handleCharacters(::javax::xml::stream::events::Characters* event);
	void handleComment();
	void handleDTD();
	void handleEndDocument();
	void handleEndElement(::javax::xml::stream::events::EndElement* event);
	void handleEntityDecl();
	void handleEntityReference();
	void handleNamespace();
	void handleNotationDecl();
	void handlePI(::javax::xml::stream::events::ProcessingInstruction* event);
	void handleSpace();
	void handleStartDocument(::javax::xml::stream::events::XMLEvent* event);
	void handleStartElement(::javax::xml::stream::events::StartElement* event);
	virtual void parse(::org::xml::sax::InputSource* unused) override;
	virtual void parse();
	virtual void parse($String* sysId) override;
	virtual void setContentHandler(::org::xml::sax::ContentHandler* handler) override;
	virtual void setDTDHandler(::org::xml::sax::DTDHandler* handler) override;
	virtual void setEntityResolver(::org::xml::sax::EntityResolver* resolver) override;
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* handler) override;
	virtual void setFeature($String* name, bool value) override;
	virtual void setProperty($String* name, Object$* value) override;
	virtual $String* toString() override;
	::javax::xml::stream::XMLEventReader* staxEventReader = nullptr;
	::org::xml::sax::ContentHandler* _sax = nullptr;
	::org::xml::sax::ext::LexicalHandler* _lex = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* _saxImpl = nullptr;
	$String* version = nullptr;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_StAXEvent2SAX_h_