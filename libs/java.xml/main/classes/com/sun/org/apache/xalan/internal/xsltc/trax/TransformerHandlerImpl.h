#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerHandlerImpl_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerHandlerImpl_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.TransformerHandlerImpl
//$ extends javax.xml.transform.sax.TransformerHandler
//$ implements org.xml.sax.ext.DeclHandler

#include <java/lang/Array.h>
#include <javax/xml/transform/sax/TransformerHandler.h>
#include <org/xml/sax/ext/DeclHandler.h>

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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {
								class AbstractTranslet;
							}
						}
					}
				}
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
								class TransformerImpl;
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
		namespace transform {
			class Result;
			class Transformer;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class ContentHandler;
			class DTDHandler;
			class Locator;
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

class TransformerHandlerImpl : public ::javax::xml::transform::sax::TransformerHandler, public ::org::xml::sax::ext::DeclHandler {
	$class(TransformerHandlerImpl, $NO_CLASS_INIT, ::javax::xml::transform::sax::TransformerHandler, ::org::xml::sax::ext::DeclHandler)
public:
	TransformerHandlerImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerImpl* transformer);
	virtual void attributeDecl($String* eName, $String* aName, $String* type, $String* valueDefault, $String* value) override;
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	virtual void elementDecl($String* name, $String* model) override;
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endDocument() override;
	virtual void endElement($String* namespaceURI, $String* localName, $String* qname) override;
	virtual void endEntity($String* name) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual void externalEntityDecl($String* name, $String* publicId, $String* systemId) override;
	virtual $String* getSystemId() override;
	virtual ::javax::xml::transform::Transformer* getTransformer() override;
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual void internalEntityDecl($String* name, $String* value) override;
	virtual void notationDecl($String* name, $String* publicId, $String* systemId) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void reset();
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setResult(::javax::xml::transform::Result* result) override;
	virtual void setSystemId($String* id) override;
	virtual void skippedEntity($String* name) override;
	virtual void startCDATA() override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localName, $String* qname, ::org::xml::sax::Attributes* attributes) override;
	virtual void startEntity($String* name) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) override;
	::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerImpl* _transformer = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* _translet = nullptr;
	$String* _systemId = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl* _dom = nullptr;
	::org::xml::sax::ContentHandler* _handler = nullptr;
	::org::xml::sax::ext::LexicalHandler* _lexHandler = nullptr;
	::org::xml::sax::DTDHandler* _dtdHandler = nullptr;
	::org::xml::sax::ext::DeclHandler* _declHandler = nullptr;
	::javax::xml::transform::Result* _result = nullptr;
	::org::xml::sax::Locator* _locator = nullptr;
	bool _done = false;
	bool _isIdentity = false;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerHandlerImpl_h_