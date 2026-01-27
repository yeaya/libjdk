#ifndef _com_sun_org_apache_xerces_internal_xpointer_ElementSchemePointer$1_h_
#define _com_sun_org_apache_xerces_internal_xpointer_ElementSchemePointer$1_h_
//$ class com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$1
//$ extends com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$Scanner

#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer$Scanner.h>

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

class ElementSchemePointer$1 : public ::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer$Scanner {
	$class(ElementSchemePointer$1, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer$Scanner)
public:
	ElementSchemePointer$1();
	void init$(::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer* this$0, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	virtual void addToken(::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer$Tokens* tokens, int32_t token) override;
	::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer* this$0 = nullptr;
};

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xpointer_ElementSchemePointer$1_h_