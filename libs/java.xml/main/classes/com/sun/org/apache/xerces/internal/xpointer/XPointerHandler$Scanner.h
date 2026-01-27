#ifndef _com_sun_org_apache_xerces_internal_xpointer_XPointerHandler$Scanner_h_
#define _com_sun_org_apache_xerces_internal_xpointer_XPointerHandler$Scanner_h_
//$ class com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$Scanner
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHARTYPE_CARRET")
#undef CHARTYPE_CARRET
#pragma push_macro("CHARTYPE_CLOSE_PAREN")
#undef CHARTYPE_CLOSE_PAREN
#pragma push_macro("CHARTYPE_COLON")
#undef CHARTYPE_COLON
#pragma push_macro("CHARTYPE_DIGIT")
#undef CHARTYPE_DIGIT
#pragma push_macro("CHARTYPE_EQUAL")
#undef CHARTYPE_EQUAL
#pragma push_macro("CHARTYPE_INVALID")
#undef CHARTYPE_INVALID
#pragma push_macro("CHARTYPE_LETTER")
#undef CHARTYPE_LETTER
#pragma push_macro("CHARTYPE_MINUS")
#undef CHARTYPE_MINUS
#pragma push_macro("CHARTYPE_NONASCII")
#undef CHARTYPE_NONASCII
#pragma push_macro("CHARTYPE_OPEN_PAREN")
#undef CHARTYPE_OPEN_PAREN
#pragma push_macro("CHARTYPE_OTHER")
#undef CHARTYPE_OTHER
#pragma push_macro("CHARTYPE_PERIOD")
#undef CHARTYPE_PERIOD
#pragma push_macro("CHARTYPE_SLASH")
#undef CHARTYPE_SLASH
#pragma push_macro("CHARTYPE_UNDERSCORE")
#undef CHARTYPE_UNDERSCORE
#pragma push_macro("CHARTYPE_WHITESPACE")
#undef CHARTYPE_WHITESPACE

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
						namespace xpointer {
							class XPointerHandler;
							class XPointerHandler$Tokens;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xpointer {

class XPointerHandler$Scanner : public ::java::lang::Object {
	$class(XPointerHandler$Scanner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XPointerHandler$Scanner();
	void init$(::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler* this$0, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	virtual void addToken(::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler$Tokens* tokens, int32_t token);
	int32_t scanData($String* data, ::java::lang::StringBuffer* schemeData, int32_t endOffset, int32_t currentOffset);
	bool scanExpr(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler$Tokens* tokens, $String* data, int32_t currentOffset, int32_t endOffset);
	int32_t scanNCName($String* data, int32_t endOffset, int32_t currentOffset);
	::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler* this$0 = nullptr;
	static const int8_t CHARTYPE_INVALID = 0;
	static const int8_t CHARTYPE_OTHER = 1;
	static const int8_t CHARTYPE_WHITESPACE = 2;
	static const int8_t CHARTYPE_CARRET = 3;
	static const int8_t CHARTYPE_OPEN_PAREN = 4;
	static const int8_t CHARTYPE_CLOSE_PAREN = 5;
	static const int8_t CHARTYPE_MINUS = 6;
	static const int8_t CHARTYPE_PERIOD = 7;
	static const int8_t CHARTYPE_SLASH = 8;
	static const int8_t CHARTYPE_DIGIT = 9;
	static const int8_t CHARTYPE_COLON = 10;
	static const int8_t CHARTYPE_EQUAL = 11;
	static const int8_t CHARTYPE_LETTER = 12;
	static const int8_t CHARTYPE_UNDERSCORE = 13;
	static const int8_t CHARTYPE_NONASCII = 14;
	$bytes* fASCIICharMap = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
};

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CHARTYPE_CARRET")
#pragma pop_macro("CHARTYPE_CLOSE_PAREN")
#pragma pop_macro("CHARTYPE_COLON")
#pragma pop_macro("CHARTYPE_DIGIT")
#pragma pop_macro("CHARTYPE_EQUAL")
#pragma pop_macro("CHARTYPE_INVALID")
#pragma pop_macro("CHARTYPE_LETTER")
#pragma pop_macro("CHARTYPE_MINUS")
#pragma pop_macro("CHARTYPE_NONASCII")
#pragma pop_macro("CHARTYPE_OPEN_PAREN")
#pragma pop_macro("CHARTYPE_OTHER")
#pragma pop_macro("CHARTYPE_PERIOD")
#pragma pop_macro("CHARTYPE_SLASH")
#pragma pop_macro("CHARTYPE_UNDERSCORE")
#pragma pop_macro("CHARTYPE_WHITESPACE")

#endif // _com_sun_org_apache_xerces_internal_xpointer_XPointerHandler$Scanner_h_