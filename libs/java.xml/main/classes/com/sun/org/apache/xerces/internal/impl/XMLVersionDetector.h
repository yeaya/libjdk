#ifndef _com_sun_org_apache_xerces_internal_impl_XMLVersionDetector_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLVersionDetector_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLVersionDetector
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ENTITY_MANAGER")
#undef ENTITY_MANAGER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("XML11_VERSION")
#undef XML11_VERSION

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLEntityHandler;
							class XMLEntityManager;
							class XMLErrorReporter;
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
							class XMLString;
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
							namespace parser {
								class XMLComponentManager;
								class XMLInputSource;
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
						namespace impl {

class XMLVersionDetector : public ::java::lang::Object {
	$class(XMLVersionDetector, 0, ::java::lang::Object)
public:
	XMLVersionDetector();
	void init$();
	virtual int16_t determineDocVersion(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource);
	void fixupCurrentEntity(::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* manager, $chars* scannedChars, int32_t length);
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager);
	virtual void startDocumentParsing(::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler* scanner, int16_t version);
	static $chars* XML11_VERSION;
	static $String* SYMBOL_TABLE;
	static $String* ERROR_REPORTER;
	static $String* ENTITY_MANAGER;
	static $String* fVersionSymbol;
	static $String* fXMLSymbol;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* fEntityManager = nullptr;
	$String* fEncoding = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fVersionNum = nullptr;
	$chars* fExpectedVersionString = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ENTITY_MANAGER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("XML11_VERSION")

#endif // _com_sun_org_apache_xerces_internal_impl_XMLVersionDetector_h_