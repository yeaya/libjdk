#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_DOM2TO_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_DOM2TO_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.DOM2TO
//$ extends org.xml.sax.XMLReader
//$ implements org.xml.sax.ext.Locator2

#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/ext/Locator2.h>

#pragma push_macro("DOM2TO")
#undef DOM2TO
#pragma push_macro("EMPTYSTRING")
#undef EMPTYSTRING
#pragma push_macro("XMLNS_PREFIX")
#undef XMLNS_PREFIX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class SerializationHandler;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Node;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
			class DTDHandler;
			class EntityResolver;
			class ErrorHandler;
			class InputSource;
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

class DOM2TO : public ::org::xml::sax::XMLReader, public ::org::xml::sax::ext::Locator2 {
	$class(DOM2TO, 0, ::org::xml::sax::XMLReader, ::org::xml::sax::ext::Locator2)
public:
	DOM2TO();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Node* root, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	virtual int32_t getColumnNumber() override;
	virtual ::org::xml::sax::ContentHandler* getContentHandler() override;
	virtual ::org::xml::sax::DTDHandler* getDTDHandler() override;
	virtual $String* getEncoding() override;
	virtual ::org::xml::sax::EntityResolver* getEntityResolver() override;
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() override;
	virtual bool getFeature($String* name) override;
	virtual int32_t getLineNumber() override;
	$String* getNodeTypeFromCode(int16_t code);
	virtual $Object* getProperty($String* name) override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual $String* getXMLVersion() override;
	virtual void parse(::org::xml::sax::InputSource* unused) override;
	virtual void parse();
	void parse(::org::w3c::dom::Node* node);
	virtual void parse($String* sysId) override;
	virtual void setContentHandler(::org::xml::sax::ContentHandler* handler) override;
	virtual void setDTDHandler(::org::xml::sax::DTDHandler* handler) override;
	void setDocumentInfo(::org::w3c::dom::Document* document);
	void setEncoding($String* encoding);
	virtual void setEntityResolver(::org::xml::sax::EntityResolver* resolver) override;
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* handler) override;
	virtual void setFeature($String* name, bool value) override;
	virtual void setProperty($String* name, Object$* value) override;
	void setXMLVersion($String* version);
	virtual $String* toString() override;
	static $String* EMPTYSTRING;
	static $String* XMLNS_PREFIX;
	::org::w3c::dom::Node* _dom = nullptr;
	::com::sun::org::apache::xml::internal::serializer::SerializationHandler* _handler = nullptr;
	$String* xmlVersion = nullptr;
	$String* xmlEncoding = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DOM2TO")
#pragma pop_macro("EMPTYSTRING")
#pragma pop_macro("XMLNS_PREFIX")

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_DOM2TO_h_