#ifndef _com_sun_org_apache_xerces_internal_parsers_XMLGrammarCachingConfiguration_h_
#define _com_sun_org_apache_xerces_internal_parsers_XMLGrammarCachingConfiguration_h_
//$ class com.sun.org.apache.xerces.internal.parsers.XMLGrammarCachingConfiguration
//$ extends com.sun.org.apache.xerces.internal.parsers.XIncludeAwareParserConfiguration

#include <com/sun/org/apache/xerces/internal/parsers/XIncludeAwareParserConfiguration.h>

#pragma push_macro("BIG_PRIME")
#undef BIG_PRIME
#pragma push_macro("SCHEMA_FULL_CHECKING")
#undef SCHEMA_FULL_CHECKING

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								class DTDGrammar;
								class XMLDTDLoader;
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
						namespace impl {
							namespace xs {
								class SchemaGrammar;
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
						namespace util {
							class SymbolTable;
							class SynchronizedSymbolTable;
							class XMLGrammarPoolImpl;
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
								class XMLComponentManager;
								class XMLInputSource;
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
						namespace parsers {

class XMLGrammarCachingConfiguration : public ::com::sun::org::apache::xerces::internal::parsers::XIncludeAwareParserConfiguration {
	$class(XMLGrammarCachingConfiguration, 0, ::com::sun::org::apache::xerces::internal::parsers::XIncludeAwareParserConfiguration)
public:
	XMLGrammarCachingConfiguration();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* parentSettings);
	virtual void clearGrammarPool();
	virtual void lockGrammarPool();
	virtual ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar* parseDTD(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* is);
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* parseGrammar($String* type, $String* uri);
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar* parseGrammar($String* type, ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* is);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* parseXMLSchema(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* is);
	virtual void unlockGrammarPool();
	static const int32_t BIG_PRIME = 2039;
	static ::com::sun::org::apache::xerces::internal::util::SynchronizedSymbolTable* fStaticSymbolTable;
	static ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl* fStaticGrammarPool;
	static $String* SCHEMA_FULL_CHECKING;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaLoader* fSchemaLoader = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader* fDTDLoader = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BIG_PRIME")
#pragma pop_macro("SCHEMA_FULL_CHECKING")

#endif // _com_sun_org_apache_xerces_internal_parsers_XMLGrammarCachingConfiguration_h_