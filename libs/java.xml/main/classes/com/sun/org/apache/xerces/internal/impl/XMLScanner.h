#ifndef _com_sun_org_apache_xerces_internal_impl_XMLScanner_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLScanner_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLScanner
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLComponent

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG_ATTR_NORMALIZATION")
#undef DEBUG_ATTR_NORMALIZATION
#pragma push_macro("ENTITY_MANAGER")
#undef ENTITY_MANAGER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("NOTIFY_CHAR_REFS")
#undef NOTIFY_CHAR_REFS
#pragma push_macro("PARSER_SETTINGS")
#undef PARSER_SETTINGS
#pragma push_macro("SECURITY_MANAGER")
#undef SECURITY_MANAGER
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("VALIDATION")
#undef VALIDATION

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class PropertyManager;
							class XMLEntityManager;
							class XMLEntityScanner;
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
							class XMLResourceIdentifierImpl;
							class XMLStringBuffer;
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
						namespace utils {
							class XMLLimitAnalyzer;
							class XMLSecurityManager;
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
							class XMLAttributes;
							class XMLResourceIdentifier;
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
		namespace xml {
			namespace internal {
				namespace stream {
					class XMLEntityStorage;
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
namespace javax {
	namespace xml {
		namespace stream {
			namespace events {
				class XMLEvent;
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

class XMLScanner : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent {
	$class(XMLScanner, 0, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent)
public:
	XMLScanner();
	void init$();
	virtual void checkEntityLimit(bool isPEDecl, $String* entityName, ::com::sun::org::apache::xerces::internal::xni::XMLString* buffer);
	virtual void checkEntityLimit(bool isPEDecl, $String* entityName, int32_t len);
	virtual void endEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	virtual bool getFeature($String* featureId);
	virtual ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* getStringBuffer();
	void init();
	virtual bool isInvalid(int32_t value);
	virtual bool isInvalidLiteral(int32_t value);
	virtual bool isValidNCName(int32_t value);
	virtual bool isValidNameChar(int32_t value);
	virtual bool isValidNameStartChar(int32_t value);
	virtual bool isValidNameStartHighSurrogate(int32_t value);
	virtual void normalizeWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* value);
	virtual void reportFatalError($String* msgId, $ObjectArray* args);
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	virtual void reset();
	virtual void reset(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager);
	virtual bool resolveCharacter($String* entityName, ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* stringBuffer);
	virtual void scanAttributeValue(::com::sun::org::apache::xerces::internal::xni::XMLString* value, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedValue, $String* atName, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, int32_t attrIndex, bool checkEntities, $String* eleName, bool isNSURI);
	virtual int32_t scanCharReferenceValue(::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* buf, ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* buf2);
	virtual void scanComment(::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* text);
	virtual void scanExternalID($StringArray* identifiers, bool optionalSystemId);
	virtual void scanPI(::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* data);
	virtual void scanPIData($String* target, ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* data);
	virtual $String* scanPseudoAttribute(bool scanningTextDecl, ::com::sun::org::apache::xerces::internal::xni::XMLString* value);
	$String* scanPseudoAttributeName();
	virtual bool scanPubidLiteral(::com::sun::org::apache::xerces::internal::xni::XMLString* literal);
	virtual bool scanSurrogates(::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* buf);
	virtual void scanXMLDeclOrTextDecl(bool scanningTextDecl, $StringArray* pseudoAttributeValues);
	virtual void setFeature($String* featureId, bool value) override;
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual void setPropertyManager(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager);
	virtual void startEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	virtual bool versionSupported($String* version);
	static $String* NAMESPACES;
	static $String* VALIDATION;
	static $String* NOTIFY_CHAR_REFS;
	static $String* PARSER_SETTINGS;
	static $String* SYMBOL_TABLE;
	static $String* ERROR_REPORTER;
	static $String* ENTITY_MANAGER;
	static $String* SECURITY_MANAGER;
	static const bool DEBUG_ATTR_NORMALIZATION = false;
	bool fNeedNonNormalizedValue = false;
	::java::util::ArrayList* attributeValueCache = nullptr;
	::java::util::ArrayList* stringBufferCache = nullptr;
	int32_t fStringBufferIndex = 0;
	bool fAttributeCacheInitDone = false;
	int32_t fAttributeCacheUsedCount = 0;
	bool fValidation = false;
	bool fNamespaces = false;
	bool fNotifyCharRefs = false;
	bool fParserSettings = false;
	::com::sun::org::apache::xerces::internal::impl::PropertyManager* fPropertyManager = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* fEntityManager = nullptr;
	::com::sun::xml::internal::stream::XMLEntityStorage* fEntityStore = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager* fSecurityManager = nullptr;
	::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer* fLimitAnalyzer = nullptr;
	::javax::xml::stream::events::XMLEvent* fEvent = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityScanner* fEntityScanner = nullptr;
	int32_t fEntityDepth = 0;
	$String* fCharRefLiteral = nullptr;
	bool fScanningAttribute = false;
	bool fReportEntity = false;
	static $String* fVersionSymbol;
	static $String* fEncodingSymbol;
	static $String* fStandaloneSymbol;
	static $String* fAmpSymbol;
	static $String* fLtSymbol;
	static $String* fGtSymbol;
	static $String* fQuotSymbol;
	static $String* fAposSymbol;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fString = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fStringBuffer = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fStringBuffer2 = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fStringBuffer3 = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl* fResourceIdentifier = nullptr;
	int32_t initialCacheCount = 0;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG_ATTR_NORMALIZATION")
#pragma pop_macro("ENTITY_MANAGER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("NOTIFY_CHAR_REFS")
#pragma pop_macro("PARSER_SETTINGS")
#pragma pop_macro("SECURITY_MANAGER")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("VALIDATION")

#endif // _com_sun_org_apache_xerces_internal_impl_XMLScanner_h_