#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_StAXStream2SAX_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_StAXStream2SAX_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.StAXStream2SAX
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
			class XMLStreamReader;
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

class StAXStream2SAX : public ::org::xml::sax::XMLReader, public ::org::xml::sax::Locator {
	$class(StAXStream2SAX, $NO_CLASS_INIT, ::org::xml::sax::XMLReader, ::org::xml::sax::Locator)
public:
	StAXStream2SAX();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::xml::stream::XMLStreamReader* staxSrc);
	virtual void bridge();
	::org::xml::sax::Attributes* getAttributes();
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
	void handleCharacters();
	void handleComment();
	void handleDTD();
	void handleEndDocument();
	void handleEndElement();
	void handleEntityDecl();
	void handleEntityReference();
	void handleNamespace();
	void handleNotationDecl();
	void handlePI();
	void handleSpace();
	void handleStartDocument();
	void handleStartElement();
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
	::javax::xml::stream::XMLStreamReader* staxStreamReader = nullptr;
	::org::xml::sax::ContentHandler* _sax = nullptr;
	::org::xml::sax::ext::LexicalHandler* _lex = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* _saxImpl = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_StAXStream2SAX_h_