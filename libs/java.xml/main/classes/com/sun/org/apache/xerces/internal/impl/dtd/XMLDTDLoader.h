#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDLoader_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDLoader_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDLoader
//$ extends com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDProcessor
//$ implements com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarLoader

#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDProcessor.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarLoader.h>
#include <java/lang/Array.h>

#pragma push_macro("BALANCE_SYNTAX_TREES")
#undef BALANCE_SYNTAX_TREES
#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("ERROR_HANDLER")
#undef ERROR_HANDLER
#pragma push_macro("LOADER_RECOGNIZED_FEATURES")
#undef LOADER_RECOGNIZED_FEATURES
#pragma push_macro("LOADER_RECOGNIZED_PROPERTIES")
#undef LOADER_RECOGNIZED_PROPERTIES
#pragma push_macro("LOCALE")
#undef LOCALE
#pragma push_macro("STANDARD_URI_CONFORMANT_FEATURE")
#undef STANDARD_URI_CONFORMANT_FEATURE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLDTDScannerImpl;
							class XMLEntityManager;
							class XMLErrorReporter;
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
						namespace impl {
							namespace dtd {
								class XMLDTDValidator;
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
							class SymbolTable;
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
								class Grammar;
								class XMLGrammarPool;
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
						namespace xni {
							namespace parser {
								class XMLEntityResolver;
								class XMLErrorHandler;
								class XMLInputSource;
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
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

class XMLDTDLoader : public ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDProcessor, public ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarLoader {
	$class(XMLDTDLoader, 0, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDProcessor, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarLoader)
public:
	XMLDTDLoader();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter, ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* entityResolver);
	virtual ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl* createDTDScanner(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter, ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* entityManager);
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* getEntityResolver() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* getErrorHandler() override;
	virtual bool getFeature($String* featureId) override;
	virtual ::java::util::Locale* getLocale() override;
	virtual $Object* getProperty($String* propertyId) override;
	virtual $StringArray* getRecognizedFeatures() override;
	virtual $StringArray* getRecognizedProperties() override;
	virtual int16_t getScannerVersion();
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* loadGrammar(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* source) override;
	virtual void loadGrammarWithContext(::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator* validator, $String* rootName, $String* publicId, $String* systemId, $String* baseSystemId, $String* internalSubset);
	using ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDProcessor::reset;
	virtual void reset() override;
	virtual void setEntityResolver(::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* entityResolver) override;
	virtual void setErrorHandler(::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* errorHandler) override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setLocale(::java::util::Locale* locale) override;
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual $String* toString() override;
	static $String* STANDARD_URI_CONFORMANT_FEATURE;
	static $String* BALANCE_SYNTAX_TREES;
	static $StringArray* LOADER_RECOGNIZED_FEATURES;
	static $String* ERROR_HANDLER;
	static $String* ENTITY_RESOLVER;
	static $String* LOCALE;
	static $StringArray* LOADER_RECOGNIZED_PROPERTIES;
	bool fStrictURI = false;
	bool fBalanceSyntaxTrees = false;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* fEntityResolver = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl* fDTDScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* fEntityManager = nullptr;
	::java::util::Locale* fLocale = nullptr;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BALANCE_SYNTAX_TREES")
#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("ERROR_HANDLER")
#pragma pop_macro("LOADER_RECOGNIZED_FEATURES")
#pragma pop_macro("LOADER_RECOGNIZED_PROPERTIES")
#pragma pop_macro("LOCALE")
#pragma pop_macro("STANDARD_URI_CONFORMANT_FEATURE")

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDLoader_h_