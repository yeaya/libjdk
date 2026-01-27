#ifndef _com_sun_org_apache_xerces_internal_xpointer_XPointerHandler$1_h_
#define _com_sun_org_apache_xerces_internal_xpointer_XPointerHandler$1_h_
//$ class com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$1
//$ extends com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$Scanner

#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler$Scanner.h>

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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xpointer {

class XPointerHandler$1 : public ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler$Scanner {
	$class(XPointerHandler$1, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler$Scanner)
public:
	XPointerHandler$1();
	void init$(::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler* this$0, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	virtual void addToken(::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler$Tokens* tokens, int32_t token) override;
	::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler* this$0 = nullptr;
};

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xpointer_XPointerHandler$1_h_