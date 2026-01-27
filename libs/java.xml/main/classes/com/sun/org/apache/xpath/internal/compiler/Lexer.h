#ifndef _com_sun_org_apache_xpath_internal_compiler_Lexer_h_
#define _com_sun_org_apache_xpath_internal_compiler_Lexer_h_
//$ class com.sun.org.apache.xpath.internal.compiler.Lexer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TARGETEXTRA")
#undef TARGETEXTRA

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class PrefixResolver;
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
				namespace xpath {
					namespace internal {
						namespace compiler {
							class Compiler;
							class XPathParser;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

class Lexer : public ::java::lang::Object {
	$class(Lexer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Lexer();
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* resolver, ::com::sun::org::apache::xpath::internal::compiler::XPathParser* xpathProcessor);
	void addToTokenQueue($String* s);
	int32_t getKeywordToken($String* key);
	int32_t getTokenQueuePosFromMap(int32_t i);
	int32_t mapNSTokens($String* pat, int32_t startSubstring, int32_t posOfNSSep, int32_t posOfScan);
	bool mapPatternElemPos(int32_t nesting, bool isStart, bool isAttrName);
	void recordTokenString(::java::util::List* targetStrings);
	void resetTokenMark(int32_t mark);
	virtual void tokenize($String* pat);
	virtual void tokenize($String* pat, ::java::util::List* targetStrings);
	::com::sun::org::apache::xpath::internal::compiler::Compiler* m_compiler = nullptr;
	::com::sun::org::apache::xml::internal::utils::PrefixResolver* m_namespaceContext = nullptr;
	::com::sun::org::apache::xpath::internal::compiler::XPathParser* m_processor = nullptr;
	static const int32_t TARGETEXTRA = 10000;
	$ints* m_patternMap = nullptr;
	int32_t m_patternMapSize = 0;
};

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("TARGETEXTRA")

#endif // _com_sun_org_apache_xpath_internal_compiler_Lexer_h_