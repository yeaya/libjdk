#ifndef _com_sun_org_apache_xerces_internal_parsers_XPointerParserConfiguration_h_
#define _com_sun_org_apache_xerces_internal_parsers_XPointerParserConfiguration_h_
//$ class com.sun.org.apache.xerces.internal.parsers.XPointerParserConfiguration
//$ extends com.sun.org.apache.xerces.internal.parsers.XML11Configuration

#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>

#pragma push_macro("ALLOW_UE_AND_NOTATION_EVENTS")
#undef ALLOW_UE_AND_NOTATION_EVENTS
#pragma push_macro("NAMESPACE_CONTEXT")
#undef NAMESPACE_CONTEXT
#pragma push_macro("XINCLUDE_FIXUP_BASE_URIS")
#undef XINCLUDE_FIXUP_BASE_URIS
#pragma push_macro("XINCLUDE_FIXUP_LANGUAGE")
#undef XINCLUDE_FIXUP_LANGUAGE
#pragma push_macro("XINCLUDE_HANDLER")
#undef XINCLUDE_HANDLER
#pragma push_macro("XPOINTER_HANDLER")
#undef XPOINTER_HANDLER

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
						namespace xinclude {
							class XIncludeHandler;
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
						namespace xpointer {
							class XPointerHandler;
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

class XPointerParserConfiguration : public ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration {
	$class(XPointerParserConfiguration, 0, ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration)
public:
	XPointerParserConfiguration();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* parentSettings);
	virtual void configurePipeline() override;
	virtual void configureXML11Pipeline() override;
	virtual void setProperty($String* propertyId, Object$* value) override;
	::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler* fXPointerHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler* fXIncludeHandler = nullptr;
	static $String* ALLOW_UE_AND_NOTATION_EVENTS;
	static $String* XINCLUDE_FIXUP_BASE_URIS;
	static $String* XINCLUDE_FIXUP_LANGUAGE;
	static $String* XPOINTER_HANDLER;
	static $String* XINCLUDE_HANDLER;
	static $String* NAMESPACE_CONTEXT;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALLOW_UE_AND_NOTATION_EVENTS")
#pragma pop_macro("NAMESPACE_CONTEXT")
#pragma pop_macro("XINCLUDE_FIXUP_BASE_URIS")
#pragma pop_macro("XINCLUDE_FIXUP_LANGUAGE")
#pragma pop_macro("XINCLUDE_HANDLER")
#pragma pop_macro("XPOINTER_HANDLER")

#endif // _com_sun_org_apache_xerces_internal_parsers_XPointerParserConfiguration_h_