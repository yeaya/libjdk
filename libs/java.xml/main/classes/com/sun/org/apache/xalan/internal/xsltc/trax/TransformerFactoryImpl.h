#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerFactoryImpl_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerFactoryImpl_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl
//$ extends javax.xml.transform.sax.SAXTransformerFactory
//$ implements com.sun.org.apache.xalan.internal.xsltc.compiler.SourceLoader

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SourceLoader.h>
#include <java/lang/Array.h>
#include <javax/xml/transform/sax/SAXTransformerFactory.h>

#pragma push_macro("AUTO_TRANSLET")
#undef AUTO_TRANSLET
#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("DEFAULT_TRANSLATE_PACKAGE")
#undef DEFAULT_TRANSLATE_PACKAGE
#pragma push_macro("DEFAULT_TRANSLET_NAME")
#undef DEFAULT_TRANSLET_NAME
#pragma push_macro("DESTINATION_DIRECTORY")
#undef DESTINATION_DIRECTORY
#pragma push_macro("ENABLE_INLINING")
#undef ENABLE_INLINING
#pragma push_macro("GENERATE_TRANSLET")
#undef GENERATE_TRANSLET
#pragma push_macro("INDENT_NUMBER")
#undef INDENT_NUMBER
#pragma push_macro("JAR_NAME")
#undef JAR_NAME
#pragma push_macro("PACKAGE_NAME")
#undef PACKAGE_NAME
#pragma push_macro("TRANSLET_NAME")
#undef TRANSLET_NAME
#pragma push_macro("USE_CLASSPATH")
#undef USE_CLASSPATH

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {
							class XMLSecurityManager;
							class XMLSecurityPropertyManager;
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
							namespace compiler {
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
							namespace dom {
								class XSLTCDTMManager;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class CatalogFeatures;
			class CatalogFeatures$Builder;
			class CatalogResolver;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class ErrorListener;
			class Source;
			class Templates;
			class Transformer;
			class URIResolver;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {
				class TemplatesHandler;
				class TransformerHandler;
			}
		}
	}
}
namespace jdk {
	namespace xml {
		namespace internal {
			class JdkProperty;
			class JdkXmlFeatures;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
			class XMLFilter;
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

class TransformerFactoryImpl : public ::javax::xml::transform::sax::SAXTransformerFactory, public ::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader {
	$class(TransformerFactoryImpl, 0, ::javax::xml::transform::sax::SAXTransformerFactory, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader)
public:
	TransformerFactoryImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	::javax::xml::catalog::CatalogFeatures* buildCatalogFeatures();
	::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager* createNewDTMManagerInstance();
	virtual ::javax::xml::transform::Source* getAssociatedStylesheet(::javax::xml::transform::Source* source, $String* media, $String* title, $String* charset) override;
	virtual $Object* getAttribute($String* name) override;
	$Array<int8_t, 2>* getBytecodesFromClasses(::javax::xml::transform::Source* source, $String* fullClassName);
	$Array<int8_t, 2>* getBytecodesFromJar(::javax::xml::transform::Source* source, $String* fullClassName);
	virtual ::javax::xml::transform::ErrorListener* getErrorListener() override;
	virtual ::java::util::Map* getExternalExtensionsMap();
	virtual bool getFeature($String* name) override;
	virtual ::jdk::xml::internal::JdkXmlFeatures* getJdkXmlFeatures();
	virtual $String* getPackageName();
	$String* getStylesheetFileName(::javax::xml::transform::Source* source);
	$String* getTransletBaseName(::javax::xml::transform::Source* source);
	virtual ::javax::xml::transform::URIResolver* getURIResolver() override;
	virtual ::org::xml::sax::InputSource* loadSource($String* href, $String* context, ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC* xsltc) override;
	virtual ::javax::xml::transform::Templates* newTemplates(::javax::xml::transform::Source* source) override;
	virtual ::javax::xml::transform::sax::TemplatesHandler* newTemplatesHandler() override;
	virtual ::javax::xml::transform::Transformer* newTransformer() override;
	virtual ::javax::xml::transform::Transformer* newTransformer(::javax::xml::transform::Source* source) override;
	virtual ::javax::xml::transform::sax::TransformerHandler* newTransformerHandler() override;
	virtual ::javax::xml::transform::sax::TransformerHandler* newTransformerHandler(::javax::xml::transform::Source* src) override;
	virtual ::javax::xml::transform::sax::TransformerHandler* newTransformerHandler(::javax::xml::transform::Templates* templates) override;
	virtual ::org::xml::sax::XMLFilter* newXMLFilter(::javax::xml::transform::Source* src) override;
	virtual ::org::xml::sax::XMLFilter* newXMLFilter(::javax::xml::transform::Templates* templates) override;
	virtual bool overrideDefaultParser();
	void passErrorsToListener(::java::util::List* messages);
	void passWarningsToListener(::java::util::List* messages);
	void readFromInputStream($bytes* bytes, ::java::io::InputStream* input, int32_t size);
	void resetTransientAttributes();
	virtual void setAttribute($String* name, Object$* value) override;
	virtual void setErrorListener(::javax::xml::transform::ErrorListener* listener) override;
	virtual void setFeature($String* name, bool value) override;
	virtual void setURIResolver(::javax::xml::transform::URIResolver* resolver) override;
	virtual $String* toString() override;
	static $String* TRANSLET_NAME;
	static $String* DESTINATION_DIRECTORY;
	static $String* PACKAGE_NAME;
	static $String* JAR_NAME;
	static $String* GENERATE_TRANSLET;
	static $String* AUTO_TRANSLET;
	static $String* USE_CLASSPATH;
	static $String* DEBUG;
	static $String* ENABLE_INLINING;
	static $String* INDENT_NUMBER;
	::javax::xml::transform::ErrorListener* _defaultListener = nullptr;
	::javax::xml::transform::ErrorListener* _errorListener = nullptr;
	bool _hasUserErrListener = false;
	::javax::xml::transform::URIResolver* _uriResolver = nullptr;
	static $String* DEFAULT_TRANSLET_NAME;
	$String* _transletName = nullptr;
	$String* _destinationDirectory = nullptr;
	static $String* DEFAULT_TRANSLATE_PACKAGE;
	$String* _packageName = nullptr;
	$String* _jarFileName = nullptr;
	::java::util::Map* _piParams = nullptr;
	bool _debug = false;
	bool _enableInlining = false;
	bool _generateTranslet = false;
	bool _autoTranslet = false;
	bool _useClasspath = false;
	int32_t _indentNumber = 0;
	bool _isNotSecureProcessing = false;
	bool _isSecureMode = false;
	bool _overrideDefaultParser = false;
	$String* _accessExternalStylesheet = nullptr;
	$String* _accessExternalDTD = nullptr;
	::com::sun::org::apache::xalan::internal::utils::XMLSecurityPropertyManager* _xmlSecurityPropertyMgr = nullptr;
	::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager* _xmlSecurityManager = nullptr;
	::jdk::xml::internal::JdkXmlFeatures* _xmlFeatures = nullptr;
	::jdk::xml::internal::JdkProperty* _extensionClassLoader = nullptr;
	::java::util::Map* _xsltcExtensionFunctions = nullptr;
	::javax::xml::catalog::CatalogResolver* _catalogUriResolver = nullptr;
	::javax::xml::catalog::CatalogFeatures* _catalogFeatures = nullptr;
	::javax::xml::catalog::CatalogFeatures$Builder* cfBuilder = nullptr;
	$String* _catalogFiles = nullptr;
	$String* _catalogDefer = nullptr;
	$String* _catalogPrefer = nullptr;
	$String* _catalogResolve = nullptr;
	int32_t _cdataChunkSize = 0;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("AUTO_TRANSLET")
#pragma pop_macro("DEBUG")
#pragma pop_macro("DEFAULT_TRANSLATE_PACKAGE")
#pragma pop_macro("DEFAULT_TRANSLET_NAME")
#pragma pop_macro("DESTINATION_DIRECTORY")
#pragma pop_macro("ENABLE_INLINING")
#pragma pop_macro("GENERATE_TRANSLET")
#pragma pop_macro("INDENT_NUMBER")
#pragma pop_macro("JAR_NAME")
#pragma pop_macro("PACKAGE_NAME")
#pragma pop_macro("TRANSLET_NAME")
#pragma pop_macro("USE_CLASSPATH")

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerFactoryImpl_h_