#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_XMLSchemaFactory_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_XMLSchemaFactory_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory
//$ extends javax.xml.validation.SchemaFactory

#include <java/lang/Array.h>
#include <javax/xml/validation/SchemaFactory.h>

#pragma push_macro("JAXP_SOURCE_FEATURE_PREFIX")
#undef JAXP_SOURCE_FEATURE_PREFIX
#pragma push_macro("SCHEMA_FULL_CHECKING")
#undef SCHEMA_FULL_CHECKING
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("USE_GRAMMAR_POOL_ONLY")
#undef USE_GRAMMAR_POOL_ONLY
#pragma push_macro("XMLGRAMMAR_POOL")
#undef XMLGRAMMAR_POOL
#pragma push_macro("XML_SECURITY_PROPERTY_MANAGER")
#undef XML_SECURITY_PROPERTY_MANAGER

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class XMLSchemaLoader;
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
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {
								class AbstractXMLSchema;
								class XMLSchemaFactory$XMLGrammarPoolWrapper;
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
				namespace xerces {
					namespace internal {
						namespace util {
							class DOMEntityResolverWrapper;
							class ErrorHandlerWrapper;
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
				namespace xerces {
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
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {
								class XMLGrammarPool;
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
			class Source;
		}
	}
}
namespace javax {
	namespace xml {
		namespace validation {
			class Schema;
		}
	}
}
namespace jdk {
	namespace xml {
		namespace internal {
			class JdkXmlFeatures;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSResourceResolver;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ErrorHandler;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

class XMLSchemaFactory : public ::javax::xml::validation::SchemaFactory {
	$class(XMLSchemaFactory, 0, ::javax::xml::validation::SchemaFactory)
public:
	XMLSchemaFactory();
	void init$();
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() override;
	virtual bool getFeature($String* name) override;
	virtual $Object* getProperty($String* name) override;
	virtual ::org::w3c::dom::ls::LSResourceResolver* getResourceResolver() override;
	virtual bool isSchemaLanguageSupported($String* schemaLanguage) override;
	using ::javax::xml::validation::SchemaFactory::newSchema;
	virtual ::javax::xml::validation::Schema* newSchema($Array<::javax::xml::transform::Source>* schemas) override;
	virtual ::javax::xml::validation::Schema* newSchema() override;
	::javax::xml::validation::Schema* newSchema(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* pool);
	void propagateFeatures(::com::sun::org::apache::xerces::internal::jaxp::validation::AbstractXMLSchema* schema);
	void propagateProperties(::com::sun::org::apache::xerces::internal::jaxp::validation::AbstractXMLSchema* schema);
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* errorHandler) override;
	virtual void setFeature($String* name, bool value) override;
	virtual void setProperty($String* name, Object$* object) override;
	virtual void setResourceResolver(::org::w3c::dom::ls::LSResourceResolver* resourceResolver) override;
	static $String* JAXP_SOURCE_FEATURE_PREFIX;
	static $String* SCHEMA_FULL_CHECKING;
	static $String* USE_GRAMMAR_POOL_ONLY;
	static $String* XMLGRAMMAR_POOL;
	static $String* SECURITY_MANAGER;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaLoader* fXMLSchemaLoader = nullptr;
	::org::xml::sax::ErrorHandler* fErrorHandler = nullptr;
	::org::w3c::dom::ls::LSResourceResolver* fLSResourceResolver = nullptr;
	::com::sun::org::apache::xerces::internal::util::DOMEntityResolverWrapper* fDOMEntityResolverWrapper = nullptr;
	::com::sun::org::apache::xerces::internal::util::ErrorHandlerWrapper* fErrorHandlerWrapper = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* fSecurityManager = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager* fSecurityPropertyMgr = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaFactory$XMLGrammarPoolWrapper* fXMLGrammarPoolWrapper = nullptr;
	bool fUseGrammarPoolOnly = false;
	::jdk::xml::internal::JdkXmlFeatures* fXmlFeatures = nullptr;
	bool fOverrideDefaultParser = false;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("JAXP_SOURCE_FEATURE_PREFIX")
#pragma pop_macro("SCHEMA_FULL_CHECKING")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("USE_GRAMMAR_POOL_ONLY")
#pragma pop_macro("XMLGRAMMAR_POOL")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_XMLSchemaFactory_h_