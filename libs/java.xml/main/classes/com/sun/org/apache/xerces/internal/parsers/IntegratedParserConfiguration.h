#ifndef _com_sun_org_apache_xerces_internal_parsers_IntegratedParserConfiguration_h_
#define _com_sun_org_apache_xerces_internal_parsers_IntegratedParserConfiguration_h_
//$ class com.sun.org.apache.xerces.internal.parsers.IntegratedParserConfiguration
//$ extends com.sun.org.apache.xerces.internal.parsers.StandardParserConfiguration

#include <com/sun/org/apache/xerces/internal/parsers/StandardParserConfiguration.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class XMLDocumentScannerImpl;
							class XMLNSDocumentScannerImpl;
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
								class XMLDTDValidator;
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
								class XMLComponentManager;
								class XMLDocumentScanner;
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
						namespace parsers {

class IntegratedParserConfiguration : public ::com::sun::org::apache::xerces::internal::parsers::StandardParserConfiguration {
	$class(IntegratedParserConfiguration, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::parsers::StandardParserConfiguration)
public:
	IntegratedParserConfiguration();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* parentSettings);
	virtual void configurePipeline() override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator* createDTDValidator() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentScanner* createDocumentScanner() override;
	::com::sun::org::apache::xerces::internal::impl::XMLNSDocumentScannerImpl* fNamespaceScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentScannerImpl* fNonNSScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator* fNonNSDTDValidator = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_parsers_IntegratedParserConfiguration_h_