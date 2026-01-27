#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_XML11DTDProcessor_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_XML11DTDProcessor_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.XML11DTDProcessor
//$ extends com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDLoader

#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLDTDScannerImpl;
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
							namespace grammars {
								class XMLGrammarPool;
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
						namespace xni {
							namespace parser {
								class XMLEntityResolver;
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
							namespace dtd {

class XML11DTDProcessor : public ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader {
	$class(XML11DTDProcessor, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader)
public:
	XML11DTDProcessor();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter, ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* entityResolver);
	virtual ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl* createDTDScanner(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter, ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* entityManager) override;
	virtual int16_t getScannerVersion() override;
	virtual bool isValidName($String* name) override;
	virtual bool isValidNmtoken($String* nmtoken) override;
	using ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader::reset;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_XML11DTDProcessor_h_