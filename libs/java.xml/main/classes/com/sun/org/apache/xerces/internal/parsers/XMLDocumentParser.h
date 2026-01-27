#ifndef _com_sun_org_apache_xerces_internal_parsers_XMLDocumentParser_h_
#define _com_sun_org_apache_xerces_internal_parsers_XMLDocumentParser_h_
//$ class com.sun.org.apache.xerces.internal.parsers.XMLDocumentParser
//$ extends com.sun.org.apache.xerces.internal.parsers.AbstractXMLDocumentParser

#include <com/sun/org/apache/xerces/internal/parsers/AbstractXMLDocumentParser.h>

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

class XMLDocumentParser : public ::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser {
	$class(XMLDocumentParser, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser)
public:
	XMLDocumentParser();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* config);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_parsers_XMLDocumentParser_h_