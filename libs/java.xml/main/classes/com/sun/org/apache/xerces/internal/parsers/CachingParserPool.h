#ifndef _com_sun_org_apache_xerces_internal_parsers_CachingParserPool_h_
#define _com_sun_org_apache_xerces_internal_parsers_CachingParserPool_h_
//$ class com.sun.org.apache.xerces.internal.parsers.CachingParserPool
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_SHADOW_GRAMMAR_POOL")
#undef DEFAULT_SHADOW_GRAMMAR_POOL
#pragma push_macro("DEFAULT_SHADOW_SYMBOL_TABLE")
#undef DEFAULT_SHADOW_SYMBOL_TABLE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {
							class DOMParser;
							class SAXParser;
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
						namespace parsers {

class CachingParserPool : public ::java::lang::Object {
	$class(CachingParserPool, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CachingParserPool();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	virtual ::com::sun::org::apache::xerces::internal::parsers::DOMParser* createDOMParser();
	virtual ::com::sun::org::apache::xerces::internal::parsers::SAXParser* createSAXParser();
	virtual ::com::sun::org::apache::xerces::internal::util::SymbolTable* getSymbolTable();
	virtual ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* getXMLGrammarPool();
	virtual void setShadowSymbolTable(bool shadow);
	static const bool DEFAULT_SHADOW_SYMBOL_TABLE = false;
	static const bool DEFAULT_SHADOW_GRAMMAR_POOL = false;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSynchronizedSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* fSynchronizedGrammarPool = nullptr;
	bool fShadowSymbolTable = false;
	bool fShadowGrammarPool = false;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEFAULT_SHADOW_GRAMMAR_POOL")
#pragma pop_macro("DEFAULT_SHADOW_SYMBOL_TABLE")

#endif // _com_sun_org_apache_xerces_internal_parsers_CachingParserPool_h_