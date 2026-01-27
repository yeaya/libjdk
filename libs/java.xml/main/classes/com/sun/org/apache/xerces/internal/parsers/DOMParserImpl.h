#ifndef _com_sun_org_apache_xerces_internal_parsers_DOMParserImpl_h_
#define _com_sun_org_apache_xerces_internal_parsers_DOMParserImpl_h_
//$ class com.sun.org.apache.xerces.internal.parsers.DOMParserImpl
//$ extends com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser
//$ implements org.w3c.dom.ls.LSParser,org.w3c.dom.DOMConfiguration

#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/ls/LSParser.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("DISALLOW_DOCTYPE_DECL_FEATURE")
#undef DISALLOW_DOCTYPE_DECL_FEATURE
#pragma push_macro("DYNAMIC_VALIDATION")
#undef DYNAMIC_VALIDATION
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("NAMESPACE_GROWTH")
#undef NAMESPACE_GROWTH
#pragma push_macro("NORMALIZE_DATA")
#undef NORMALIZE_DATA
#pragma push_macro("PSVI_AUGMENT")
#undef PSVI_AUGMENT
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("TOLERATE_DUPLICATES")
#undef TOLERATE_DUPLICATES
#pragma push_macro("VALIDATION_FEATURE")
#undef VALIDATION_FEATURE
#pragma push_macro("XMLSCHEMA")
#undef XMLSCHEMA
#pragma push_macro("XMLSCHEMA_FULL_CHECKING")
#undef XMLSCHEMA_FULL_CHECKING

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {
							class DOMParserImpl$AbortHandler;
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
							class Augmentations;
							class QName;
							class XMLAttributes;
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
								class XMLInputSource;
								class XMLParserConfiguration;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMException;
			class DOMStringList;
			class Document;
			class Node;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSInput;
				class LSParserFilter;
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

class DOMParserImpl : public ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser, public ::org::w3c::dom::ls::LSParser, public ::org::w3c::dom::DOMConfiguration {
	$class(DOMParserImpl, 0, ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser, ::org::w3c::dom::ls::LSParser, ::org::w3c::dom::DOMConfiguration)
public:
	DOMParserImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* config, $String* schemaType);
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* config);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool* grammarPool);
	virtual void abort() override;
	virtual bool canSetParameter($String* name, Object$* value) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* dom2xmlInputSource(::org::w3c::dom::ls::LSInput* is);
	virtual bool getAsync() override;
	virtual bool getBusy() override;
	virtual ::org::w3c::dom::DOMConfiguration* getDomConfig() override;
	virtual ::org::w3c::dom::ls::LSParserFilter* getFilter() override;
	virtual $Object* getParameter($String* name) override;
	virtual ::org::w3c::dom::DOMStringList* getParameterNames() override;
	static ::org::w3c::dom::DOMException* newFeatureNotFoundError($String* name);
	static ::org::w3c::dom::DOMException* newTypeMismatchError($String* name);
	using ::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser::parse;
	virtual ::org::w3c::dom::Document* parse(::org::w3c::dom::ls::LSInput* is) override;
	virtual ::org::w3c::dom::Document* parseURI($String* uri) override;
	virtual ::org::w3c::dom::Node* parseWithContext(::org::w3c::dom::ls::LSInput* is, ::org::w3c::dom::Node* cnode, int16_t action) override;
	virtual void reset() override;
	void restoreHandlers();
	virtual void setFilter(::org::w3c::dom::ls::LSParserFilter* filter) override;
	virtual void setParameter($String* name, Object$* value) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual $String* toString() override;
	static $String* NAMESPACES;
	static $String* VALIDATION_FEATURE;
	static $String* XMLSCHEMA;
	static $String* XMLSCHEMA_FULL_CHECKING;
	static $String* DYNAMIC_VALIDATION;
	static $String* NORMALIZE_DATA;
	static $String* DISALLOW_DOCTYPE_DECL_FEATURE;
	static $String* NAMESPACE_GROWTH;
	static $String* TOLERATE_DUPLICATES;
	static $String* SYMBOL_TABLE;
	static $String* PSVI_AUGMENT;
	bool fNamespaceDeclarations = false;
	$String* fSchemaType = nullptr;
	bool fBusy = false;
	bool abortNow = false;
	$Thread* currentThread = nullptr;
	static const bool DEBUG = false;
	$String* fSchemaLocation = nullptr;
	::org::w3c::dom::DOMStringList* fRecognizedParameters = nullptr;
	::com::sun::org::apache::xerces::internal::parsers::DOMParserImpl$AbortHandler* abortHandler = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("DISALLOW_DOCTYPE_DECL_FEATURE")
#pragma pop_macro("DYNAMIC_VALIDATION")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("NAMESPACE_GROWTH")
#pragma pop_macro("NORMALIZE_DATA")
#pragma pop_macro("PSVI_AUGMENT")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("TOLERATE_DUPLICATES")
#pragma pop_macro("VALIDATION_FEATURE")
#pragma pop_macro("XMLSCHEMA")
#pragma pop_macro("XMLSCHEMA_FULL_CHECKING")

#endif // _com_sun_org_apache_xerces_internal_parsers_DOMParserImpl_h_