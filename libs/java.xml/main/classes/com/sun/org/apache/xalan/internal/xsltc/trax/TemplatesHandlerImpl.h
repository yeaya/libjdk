#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesHandlerImpl_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesHandlerImpl_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesHandlerImpl
//$ extends javax.xml.transform.sax.TemplatesHandler
//$ implements com.sun.org.apache.xalan.internal.xsltc.compiler.SourceLoader

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SourceLoader.h>
#include <java/lang/Array.h>
#include <javax/xml/transform/sax/TemplatesHandler.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class Parser;
								class XSLTC;
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
								class TemplatesImpl;
								class TransformerFactoryImpl;
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
		namespace catalog {
			class CatalogFeatures;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Templates;
			class URIResolver;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class InputSource;
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

class TemplatesHandlerImpl : public ::javax::xml::transform::sax::TemplatesHandler, public ::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader {
	$class(TemplatesHandlerImpl, $NO_CLASS_INIT, ::javax::xml::transform::sax::TemplatesHandler, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader)
public:
	TemplatesHandlerImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t indentNumber, ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl* tfactory, bool hasUserErrListener);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void endDocument() override;
	virtual void endElement($String* uri, $String* localname, $String* qname) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual $String* getSystemId() override;
	virtual ::javax::xml::transform::Templates* getTemplates() override;
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual ::org::xml::sax::InputSource* loadSource($String* href, $String* context, ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC* xsltc) override;
	virtual void processingInstruction($String* name, $String* value) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setSystemId($String* id) override;
	virtual void setURIResolver(::javax::xml::transform::URIResolver* resolver);
	virtual void skippedEntity($String* name) override;
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localname, $String* qname, ::org::xml::sax::Attributes* attributes) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual $String* toString() override;
	$String* _systemId = nullptr;
	int32_t _indentNumber = 0;
	::javax::xml::transform::URIResolver* _uriResolver = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl* _tfactory = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser* _parser = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl* _templates = nullptr;
	::javax::xml::catalog::CatalogFeatures* _catalogFeatures = nullptr;
	bool _useCatalog = false;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesHandlerImpl_h_