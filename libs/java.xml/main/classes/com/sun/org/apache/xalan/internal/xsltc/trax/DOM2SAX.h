#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_DOM2SAX_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_DOM2SAX_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.DOM2SAX
//$ extends org.xml.sax.XMLReader
//$ implements org.xml.sax.Locator

#include <org/xml/sax/Locator.h>
#include <org/xml/sax/XMLReader.h>

#pragma push_macro("DOM2SAX")
#undef DOM2SAX
#pragma push_macro("EMPTYSTRING")
#undef EMPTYSTRING
#pragma push_macro("XMLNS_PREFIX")
#undef XMLNS_PREFIX

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
namespace java {
	namespace util {
		class Map;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
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

class DOM2SAX : public ::org::xml::sax::XMLReader, public ::org::xml::sax::Locator {
	$class(DOM2SAX, 0, ::org::xml::sax::XMLReader, ::org::xml::sax::Locator)
public:
	DOM2SAX();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Node* root);
	void endPrefixMapping($String* prefix);
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
	virtual void parse(::org::xml::sax::InputSource* unused) override;
	virtual void parse();
	void parse(::org::w3c::dom::Node* node);
	virtual void parse($String* sysId) override;
	virtual void setContentHandler(::org::xml::sax::ContentHandler* handler) override;
	virtual void setDTDHandler(::org::xml::sax::DTDHandler* handler) override;
	virtual void setEntityResolver(::org::xml::sax::EntityResolver* resolver) override;
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* handler) override;
	virtual void setFeature($String* name, bool value) override;
	virtual void setProperty($String* name, Object$* value) override;
	bool startPrefixMapping($String* prefix, $String* uri);
	virtual $String* toString() override;
	static $String* EMPTYSTRING;
	static $String* XMLNS_PREFIX;
	::org::w3c::dom::Node* _dom = nullptr;
	::org::xml::sax::ContentHandler* _sax = nullptr;
	::org::xml::sax::ext::LexicalHandler* _lex = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* _saxImpl = nullptr;
	::java::util::Map* _nsPrefixes = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DOM2SAX")
#pragma pop_macro("EMPTYSTRING")
#pragma pop_macro("XMLNS_PREFIX")

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_DOM2SAX_h_