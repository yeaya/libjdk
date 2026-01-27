#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_XPath$Scanner_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_XPath$Scanner_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.XPath$Scanner
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHARTYPE_ATSIGN")
#undef CHARTYPE_ATSIGN
#pragma push_macro("CHARTYPE_CLOSE_BRACKET")
#undef CHARTYPE_CLOSE_BRACKET
#pragma push_macro("CHARTYPE_CLOSE_PAREN")
#undef CHARTYPE_CLOSE_PAREN
#pragma push_macro("CHARTYPE_COLON")
#undef CHARTYPE_COLON
#pragma push_macro("CHARTYPE_COMMA")
#undef CHARTYPE_COMMA
#pragma push_macro("CHARTYPE_DIGIT")
#undef CHARTYPE_DIGIT
#pragma push_macro("CHARTYPE_DOLLAR")
#undef CHARTYPE_DOLLAR
#pragma push_macro("CHARTYPE_EQUAL")
#undef CHARTYPE_EQUAL
#pragma push_macro("CHARTYPE_EXCLAMATION")
#undef CHARTYPE_EXCLAMATION
#pragma push_macro("CHARTYPE_GREATER")
#undef CHARTYPE_GREATER
#pragma push_macro("CHARTYPE_INVALID")
#undef CHARTYPE_INVALID
#pragma push_macro("CHARTYPE_LESS")
#undef CHARTYPE_LESS
#pragma push_macro("CHARTYPE_LETTER")
#undef CHARTYPE_LETTER
#pragma push_macro("CHARTYPE_MINUS")
#undef CHARTYPE_MINUS
#pragma push_macro("CHARTYPE_NONASCII")
#undef CHARTYPE_NONASCII
#pragma push_macro("CHARTYPE_OPEN_BRACKET")
#undef CHARTYPE_OPEN_BRACKET
#pragma push_macro("CHARTYPE_OPEN_PAREN")
#undef CHARTYPE_OPEN_PAREN
#pragma push_macro("CHARTYPE_OTHER")
#undef CHARTYPE_OTHER
#pragma push_macro("CHARTYPE_PERIOD")
#undef CHARTYPE_PERIOD
#pragma push_macro("CHARTYPE_PLUS")
#undef CHARTYPE_PLUS
#pragma push_macro("CHARTYPE_QUOTE")
#undef CHARTYPE_QUOTE
#pragma push_macro("CHARTYPE_SLASH")
#undef CHARTYPE_SLASH
#pragma push_macro("CHARTYPE_STAR")
#undef CHARTYPE_STAR
#pragma push_macro("CHARTYPE_UNDERSCORE")
#undef CHARTYPE_UNDERSCORE
#pragma push_macro("CHARTYPE_UNION")
#undef CHARTYPE_UNION
#pragma push_macro("CHARTYPE_WHITESPACE")
#undef CHARTYPE_WHITESPACE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								class XPath$Tokens;
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
						namespace impl {
							namespace xpath {

class XPath$Scanner : public ::java::lang::Object {
	$class(XPath$Scanner, 0, ::java::lang::Object)
public:
	XPath$Scanner();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	virtual void addToken(::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Tokens* tokens, int32_t token);
	virtual bool scanExpr(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Tokens* tokens, $String* data, int32_t currentOffset, int32_t endOffset);
	virtual int32_t scanNCName($String* data, int32_t endOffset, int32_t currentOffset);
	int32_t scanNumber(::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Tokens* tokens, $String* data, int32_t endOffset, int32_t currentOffset);
	static const int8_t CHARTYPE_INVALID = 0;
	static const int8_t CHARTYPE_OTHER = 1;
	static const int8_t CHARTYPE_WHITESPACE = 2;
	static const int8_t CHARTYPE_EXCLAMATION = 3;
	static const int8_t CHARTYPE_QUOTE = 4;
	static const int8_t CHARTYPE_DOLLAR = 5;
	static const int8_t CHARTYPE_OPEN_PAREN = 6;
	static const int8_t CHARTYPE_CLOSE_PAREN = 7;
	static const int8_t CHARTYPE_STAR = 8;
	static const int8_t CHARTYPE_PLUS = 9;
	static const int8_t CHARTYPE_COMMA = 10;
	static const int8_t CHARTYPE_MINUS = 11;
	static const int8_t CHARTYPE_PERIOD = 12;
	static const int8_t CHARTYPE_SLASH = 13;
	static const int8_t CHARTYPE_DIGIT = 14;
	static const int8_t CHARTYPE_COLON = 15;
	static const int8_t CHARTYPE_LESS = 16;
	static const int8_t CHARTYPE_EQUAL = 17;
	static const int8_t CHARTYPE_GREATER = 18;
	static const int8_t CHARTYPE_ATSIGN = 19;
	static const int8_t CHARTYPE_LETTER = 20;
	static const int8_t CHARTYPE_OPEN_BRACKET = 21;
	static const int8_t CHARTYPE_CLOSE_BRACKET = 22;
	static const int8_t CHARTYPE_UNDERSCORE = 23;
	static const int8_t CHARTYPE_UNION = 24;
	static const int8_t CHARTYPE_NONASCII = 25;
	static $bytes* fASCIICharMap;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	static $String* fAndSymbol;
	static $String* fOrSymbol;
	static $String* fModSymbol;
	static $String* fDivSymbol;
	static $String* fCommentSymbol;
	static $String* fTextSymbol;
	static $String* fPISymbol;
	static $String* fNodeSymbol;
	static $String* fAncestorSymbol;
	static $String* fAncestorOrSelfSymbol;
	static $String* fAttributeSymbol;
	static $String* fChildSymbol;
	static $String* fDescendantSymbol;
	static $String* fDescendantOrSelfSymbol;
	static $String* fFollowingSymbol;
	static $String* fFollowingSiblingSymbol;
	static $String* fNamespaceSymbol;
	static $String* fParentSymbol;
	static $String* fPrecedingSymbol;
	static $String* fPrecedingSiblingSymbol;
	static $String* fSelfSymbol;
};

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CHARTYPE_ATSIGN")
#pragma pop_macro("CHARTYPE_CLOSE_BRACKET")
#pragma pop_macro("CHARTYPE_CLOSE_PAREN")
#pragma pop_macro("CHARTYPE_COLON")
#pragma pop_macro("CHARTYPE_COMMA")
#pragma pop_macro("CHARTYPE_DIGIT")
#pragma pop_macro("CHARTYPE_DOLLAR")
#pragma pop_macro("CHARTYPE_EQUAL")
#pragma pop_macro("CHARTYPE_EXCLAMATION")
#pragma pop_macro("CHARTYPE_GREATER")
#pragma pop_macro("CHARTYPE_INVALID")
#pragma pop_macro("CHARTYPE_LESS")
#pragma pop_macro("CHARTYPE_LETTER")
#pragma pop_macro("CHARTYPE_MINUS")
#pragma pop_macro("CHARTYPE_NONASCII")
#pragma pop_macro("CHARTYPE_OPEN_BRACKET")
#pragma pop_macro("CHARTYPE_OPEN_PAREN")
#pragma pop_macro("CHARTYPE_OTHER")
#pragma pop_macro("CHARTYPE_PERIOD")
#pragma pop_macro("CHARTYPE_PLUS")
#pragma pop_macro("CHARTYPE_QUOTE")
#pragma pop_macro("CHARTYPE_SLASH")
#pragma pop_macro("CHARTYPE_STAR")
#pragma pop_macro("CHARTYPE_UNDERSCORE")
#pragma pop_macro("CHARTYPE_UNION")
#pragma pop_macro("CHARTYPE_WHITESPACE")

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_XPath$Scanner_h_