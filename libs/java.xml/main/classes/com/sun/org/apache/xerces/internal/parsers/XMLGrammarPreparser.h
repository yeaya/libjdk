#ifndef _com_sun_org_apache_xerces_internal_parsers_XMLGrammarPreparser_h_
#define _com_sun_org_apache_xerces_internal_parsers_XMLGrammarPreparser_h_
//$ class com.sun.org.apache.xerces.internal.parsers.XMLGrammarPreparser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CONTINUE_AFTER_FATAL_ERROR")
#undef CONTINUE_AFTER_FATAL_ERROR
#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("ERROR_HANDLER")
#undef ERROR_HANDLER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("GRAMMAR_POOL")
#undef GRAMMAR_POOL
#pragma push_macro("KNOWN_LOADERS")
#undef KNOWN_LOADERS
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
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
								class XMLGrammarLoader;
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
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

class XMLGrammarPreparser : public ::java::lang::Object {
	$class(XMLGrammarPreparser, 0, ::java::lang::Object)
public:
	XMLGrammarPreparser();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* getEntityResolver();
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* getErrorHandler();
	virtual bool getFeature($String* type, $String* featureId);
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* getGrammarPool();
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarLoader* getLoader($String* type);
	virtual ::java::util::Locale* getLocale();
	virtual $Object* getProperty($String* type, $String* propertyId);
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* preparseGrammar($String* type, ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* is);
	virtual bool registerPreparser($String* grammarType, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarLoader* loader);
	virtual void setEntityResolver(::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* entityResolver);
	virtual void setErrorHandler(::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* errorHandler);
	virtual void setFeature($String* featureId, bool value);
	virtual void setGrammarPool(::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	virtual void setLocale(::java::util::Locale* locale);
	virtual void setProperty($String* propId, Object$* value);
	static $String* CONTINUE_AFTER_FATAL_ERROR;
	static $String* SYMBOL_TABLE;
	static $String* ERROR_REPORTER;
	static $String* ERROR_HANDLER;
	static $String* ENTITY_RESOLVER;
	static $String* GRAMMAR_POOL;
	static ::java::util::Map* KNOWN_LOADERS;
	static $StringArray* RECOGNIZED_PROPERTIES;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* fEntityResolver = nullptr;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fGrammarPool = nullptr;
	::java::util::Locale* fLocale = nullptr;
	::java::util::Map* fLoaders = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CONTINUE_AFTER_FATAL_ERROR")
#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("ERROR_HANDLER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("GRAMMAR_POOL")
#pragma pop_macro("KNOWN_LOADERS")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("SYMBOL_TABLE")

#endif // _com_sun_org_apache_xerces_internal_parsers_XMLGrammarPreparser_h_