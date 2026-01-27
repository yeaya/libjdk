#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_XPath_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_XPath_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.XPath
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEBUG_ALL")
#undef DEBUG_ALL
#pragma push_macro("DEBUG_XPATH_PARSE")
#undef DEBUG_XPATH_PARSE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								class XPath$LocationPath;
								class XPath$NodeTest;
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
						namespace xni {
							class NamespaceContext;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
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

class $import XPath : public ::java::lang::Object {
	$class(XPath, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XPath();
	void init$($String* xpath, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* context);
	::com::sun::org::apache::xerces::internal::impl::xpath::XPath$LocationPath* buildLocationPath(::java::util::ArrayList* stepsVector);
	static void check(bool b);
	virtual ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$LocationPath* getLocationPath();
	virtual $Array<::com::sun::org::apache::xerces::internal::impl::xpath::XPath$LocationPath>* getLocationPaths();
	static $String* lambda$toString$0(::com::sun::org::apache::xerces::internal::impl::xpath::XPath$LocationPath* aPath);
	static void main($StringArray* argv);
	$Array<::com::sun::org::apache::xerces::internal::impl::xpath::XPath$LocationPath>* parseExpression(::com::sun::org::apache::xerces::internal::xni::NamespaceContext* context);
	::com::sun::org::apache::xerces::internal::impl::xpath::XPath$NodeTest* parseNodeTest(int32_t typeToken, ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Tokens* xtokens, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* context);
	virtual $String* toString() override;
	static const bool DEBUG_ALL = false;
	static const bool DEBUG_XPATH_PARSE = false;
	$String* fExpression = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xpath::XPath$LocationPath>* fLocationPaths = nullptr;
};

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG_ALL")
#pragma pop_macro("DEBUG_XPATH_PARSE")

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_XPath_h_