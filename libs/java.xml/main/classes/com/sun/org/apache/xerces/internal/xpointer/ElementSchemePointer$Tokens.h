#ifndef _com_sun_org_apache_xerces_internal_xpointer_ElementSchemePointer$Tokens_h_
#define _com_sun_org_apache_xerces_internal_xpointer_ElementSchemePointer$Tokens_h_
//$ class com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$Tokens
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INITIAL_TOKEN_COUNT")
#undef INITIAL_TOKEN_COUNT
#pragma push_macro("XPTRTOKEN_ELEM_CHILD")
#undef XPTRTOKEN_ELEM_CHILD
#pragma push_macro("XPTRTOKEN_ELEM_NCNAME")
#undef XPTRTOKEN_ELEM_NCNAME

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
							class ElementSchemePointer;
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

class ElementSchemePointer$Tokens : public ::java::lang::Object {
	$class(ElementSchemePointer$Tokens, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ElementSchemePointer$Tokens();
	void init$(::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer* this$0, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void addToken($String* tokenStr);
	void addToken(int32_t token);
	int32_t getTokenCount();
	$String* getTokenString(int32_t token);
	bool hasMore();
	int32_t nextToken();
	$String* nextTokenAsString();
	int32_t peekToken();
	void rewind();
	::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer* this$0 = nullptr;
	static const int32_t XPTRTOKEN_ELEM_NCNAME = 0;
	static const int32_t XPTRTOKEN_ELEM_CHILD = 1;
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
#pragma pop_macro("XPTRTOKEN_ELEM_CHILD")
#pragma pop_macro("XPTRTOKEN_ELEM_NCNAME")

#endif // _com_sun_org_apache_xerces_internal_xpointer_ElementSchemePointer$Tokens_h_