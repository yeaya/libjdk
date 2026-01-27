#ifndef _com_sun_org_apache_xerces_internal_parsers_SAXParser_h_
#define _com_sun_org_apache_xerces_internal_parsers_SAXParser_h_
//$ class com.sun.org.apache.xerces.internal.parsers.SAXParser
//$ extends com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser

#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser.h>
#include <java/lang/Array.h>

#pragma push_macro("NOTIFY_BUILTIN_REFS")
#undef NOTIFY_BUILTIN_REFS
#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("REPORT_WHITESPACE")
#undef REPORT_WHITESPACE
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("XMLGRAMMAR_POOL")
#undef XMLGRAMMAR_POOL

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
						namespace xni {
							namespace parser {
								class XMLParserConfiguration;
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

class SAXParser : public ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser {
	$class(SAXParser, 0, ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser)
public:
	SAXParser();
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* config);
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	using ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser::parse;
	virtual void setProperty($String* name, Object$* value) override;
	static $String* NOTIFY_BUILTIN_REFS;
	static $String* REPORT_WHITESPACE;
	static $StringArray* RECOGNIZED_FEATURES;
	static $String* SYMBOL_TABLE;
	static $String* XMLGRAMMAR_POOL;
	static $StringArray* RECOGNIZED_PROPERTIES;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NOTIFY_BUILTIN_REFS")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("REPORT_WHITESPACE")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("XMLGRAMMAR_POOL")

#endif // _com_sun_org_apache_xerces_internal_parsers_SAXParser_h_