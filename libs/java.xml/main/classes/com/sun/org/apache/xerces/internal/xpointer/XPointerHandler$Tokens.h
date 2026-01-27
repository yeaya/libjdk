#ifndef _com_sun_org_apache_xerces_internal_xpointer_XPointerHandler$Tokens_h_
#define _com_sun_org_apache_xerces_internal_xpointer_XPointerHandler$Tokens_h_
//$ class com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$Tokens
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INITIAL_TOKEN_COUNT")
#undef INITIAL_TOKEN_COUNT
#pragma push_macro("XPTRTOKEN_CLOSE_PAREN")
#undef XPTRTOKEN_CLOSE_PAREN
#pragma push_macro("XPTRTOKEN_OPEN_PAREN")
#undef XPTRTOKEN_OPEN_PAREN
#pragma push_macro("XPTRTOKEN_SCHEMEDATA")
#undef XPTRTOKEN_SCHEMEDATA
#pragma push_macro("XPTRTOKEN_SCHEMENAME")
#undef XPTRTOKEN_SCHEMENAME
#pragma push_macro("XPTRTOKEN_SHORTHAND")
#undef XPTRTOKEN_SHORTHAND

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
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xpointer {

class XPointerHandler$Tokens : public ::java::lang::Object {
	$class(XPointerHandler$Tokens, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XPointerHandler$Tokens();
	void init$(::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler* this$0, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void addToken($String* tokenStr);
	void addToken(int32_t token);
	$String* getTokenString(int32_t token);
	bool hasMore();
	int32_t nextToken();
	$String* nextTokenAsString();
	int32_t peekToken();
	void rewind();
	::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler* this$0 = nullptr;
	static const int32_t XPTRTOKEN_OPEN_PAREN = 0;
	static const int32_t XPTRTOKEN_CLOSE_PAREN = 1;
	static const int32_t XPTRTOKEN_SHORTHAND = 2;
	static const int32_t XPTRTOKEN_SCHEMENAME = 3;
	static const int32_t XPTRTOKEN_SCHEMEDATA = 4;
	$StringArray* fgTokenNames = nullptr;
	static const int32_t INITIAL_TOKEN_COUNT = 256; // 1 << 8
	$ints* fTokens = nullptr;
	int32_t fTokenCount = 0;
	int32_t fCurrentTokenIndex = 0;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::java::util::HashMap* fTokenNames = nullptr;
};

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INITIAL_TOKEN_COUNT")
#pragma pop_macro("XPTRTOKEN_CLOSE_PAREN")
#pragma pop_macro("XPTRTOKEN_OPEN_PAREN")
#pragma pop_macro("XPTRTOKEN_SCHEMEDATA")
#pragma pop_macro("XPTRTOKEN_SCHEMENAME")
#pragma pop_macro("XPTRTOKEN_SHORTHAND")

#endif // _com_sun_org_apache_xerces_internal_xpointer_XPointerHandler$Tokens_h_