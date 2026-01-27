#ifndef _com_sun_org_apache_xerces_internal_xpointer_ElementSchemePointer$Scanner_h_
#define _com_sun_org_apache_xerces_internal_xpointer_ElementSchemePointer$Scanner_h_
//$ class com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$Scanner
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHARTYPE_DIGIT")
#undef CHARTYPE_DIGIT
#pragma push_macro("CHARTYPE_INVALID")
#undef CHARTYPE_INVALID
#pragma push_macro("CHARTYPE_LETTER")
#undef CHARTYPE_LETTER
#pragma push_macro("CHARTYPE_MINUS")
#undef CHARTYPE_MINUS
#pragma push_macro("CHARTYPE_NONASCII")
#undef CHARTYPE_NONASCII
#pragma push_macro("CHARTYPE_OTHER")
#undef CHARTYPE_OTHER
#pragma push_macro("CHARTYPE_PERIOD")
#undef CHARTYPE_PERIOD
#pragma push_macro("CHARTYPE_SLASH")
#undef CHARTYPE_SLASH
#pragma push_macro("CHARTYPE_UNDERSCORE")
#undef CHARTYPE_UNDERSCORE

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
							class ElementSchemePointer$Tokens;
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

class ElementSchemePointer$Scanner : public ::java::lang::Object {
	$class(ElementSchemePointer$Scanner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ElementSchemePointer$Scanner();
	void init$(::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer* this$0, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	virtual void addToken(::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer$Tokens* tokens, int32_t token);
	bool scanExpr(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer$Tokens* tokens, $String* data, int32_t currentOffset, int32_t endOffset);
	int32_t scanNCName($String* data, int32_t endOffset, int32_t currentOffset);
	::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer* this$0 = nullptr;
	static const int8_t CHARTYPE_INVALID = 0;
	static const int8_t CHARTYPE_OTHER = 1;
	static const int8_t CHARTYPE_MINUS = 2;
	static const int8_t CHARTYPE_PERIOD = 3;
	static const int8_t CHARTYPE_SLASH = 4;
	static const int8_t CHARTYPE_DIGIT = 5;
	static const int8_t CHARTYPE_LETTER = 6;
	static const int8_t CHARTYPE_UNDERSCORE = 7;
	static const int8_t CHARTYPE_NONASCII = 8;
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

#pragma pop_macro("CHARTYPE_DIGIT")
#pragma pop_macro("CHARTYPE_INVALID")
#pragma pop_macro("CHARTYPE_LETTER")
#pragma pop_macro("CHARTYPE_MINUS")
#pragma pop_macro("CHARTYPE_NONASCII")
#pragma pop_macro("CHARTYPE_OTHER")
#pragma pop_macro("CHARTYPE_PERIOD")
#pragma pop_macro("CHARTYPE_SLASH")
#pragma pop_macro("CHARTYPE_UNDERSCORE")

#endif // _com_sun_org_apache_xerces_internal_xpointer_ElementSchemePointer$Scanner_h_