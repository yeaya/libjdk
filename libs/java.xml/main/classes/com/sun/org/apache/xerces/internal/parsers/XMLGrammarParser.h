#ifndef _com_sun_org_apache_xerces_internal_parsers_XMLGrammarParser_h_
#define _com_sun_org_apache_xerces_internal_parsers_XMLGrammarParser_h_
//$ class com.sun.org.apache.xerces.internal.parsers.XMLGrammarParser
//$ extends com.sun.org.apache.xerces.internal.parsers.XMLParser

#include <com/sun/org/apache/xerces/internal/parsers/XMLParser.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class DTDDVFactory;
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
						namespace parsers {

class XMLGrammarParser : public ::com::sun::org::apache::xerces::internal::parsers::XMLParser {
	$class(XMLGrammarParser, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::parsers::XMLParser)
public:
	XMLGrammarParser();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory* fDatatypeValidatorFactory = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_parsers_XMLGrammarParser_h_