#ifndef _com_sun_org_apache_xerces_internal_impl_XMLDTDScannerImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLDTDScannerImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLDTDScannerImpl
//$ extends com.sun.org.apache.xerces.internal.impl.XMLScanner
//$ implements com.sun.org.apache.xerces.internal.xni.parser.XMLDTDScanner,com.sun.org.apache.xerces.internal.impl.XMLEntityHandler

#include <com/sun/org/apache/xerces/internal/impl/XMLEntityHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDScanner.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG_SCANNER_STATE")
#undef DEBUG_SCANNER_STATE
#pragma push_macro("FEATURE_DEFAULTS")
#undef FEATURE_DEFAULTS
#pragma push_macro("PROPERTY_DEFAULTS")
#undef PROPERTY_DEFAULTS
#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("SCANNER_STATE_END_OF_INPUT")
#undef SCANNER_STATE_END_OF_INPUT
#pragma push_macro("SCANNER_STATE_MARKUP_DECL")
#undef SCANNER_STATE_MARKUP_DECL
#pragma push_macro("SCANNER_STATE_TEXT_DECL")
#undef SCANNER_STATE_TEXT_DECL

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class PropertyManager;
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
							class XMLAttributesImpl;
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
							class XMLDTDContentModelHandler;
							class XMLDTDHandler;
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
		namespace xml {
			namespace internal {
				namespace stream {
					namespace dtd {
						namespace nonvalidating {
							class DTDGrammar;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

class XMLDTDScannerImpl : public ::com::sun::org::apache::xerces::internal::impl::XMLScanner, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner, public ::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler {
	$class(XMLDTDScannerImpl, 0, ::com::sun::org::apache::xerces::internal::impl::XMLScanner, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner, ::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler)
public:
	XMLDTDScannerImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter, ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* entityManager);
	virtual void endEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void ensureEnumerationSize(int32_t size);
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* getDTDContentModelHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* getDTDHandler() override;
	virtual ::java::lang::Boolean* getFeatureDefault($String* featureId) override;
	virtual ::com::sun::xml::internal::stream::dtd::nonvalidating::DTDGrammar* getGrammar();
	virtual $Object* getPropertyDefault($String* propertyId) override;
	virtual $StringArray* getRecognizedFeatures() override;
	virtual $StringArray* getRecognizedProperties() override;
	static $String* getScannerStateName(int32_t state);
	void init();
	bool peekReportEntity();
	int32_t popContentStack();
	int32_t popPEStack();
	void pushContentStack(int32_t c);
	void pushPEStack(int32_t depth, bool report);
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	virtual void reset() override;
	virtual void reset(::com::sun::org::apache::xerces::internal::impl::PropertyManager* props) override;
	$String* scanAttDefaultDecl($String* elName, $String* atName, $String* type, ::com::sun::org::apache::xerces::internal::xni::XMLString* defaultVal, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedDefaultVal);
	$String* scanAttType($String* elName, $String* atName);
	void scanAttlistDecl();
	void scanChildren($String* elName);
	using ::com::sun::org::apache::xerces::internal::impl::XMLScanner::scanComment;
	void scanComment();
	void scanConditionalSect(int32_t currPEDepth);
	virtual bool scanDTDExternalSubset(bool complete) override;
	virtual bool scanDTDInternalSubset(bool complete, bool standalone, bool hasExternalSubset) override;
	bool scanDecls(bool complete);
	void scanElementDecl();
	void scanEntityDecl();
	void scanEntityValue($String* entityName, bool isPEDecl, ::com::sun::org::apache::xerces::internal::xni::XMLString* value, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedValue);
	void scanMixed($String* elName);
	void scanNotationDecl();
	using ::com::sun::org::apache::xerces::internal::impl::XMLScanner::scanPIData;
	void scanPIData($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data);
	bool scanTextDecl();
	bool scanningInternalSubset();
	virtual void setDTDContentModelHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* dtdContentModelHandler) override;
	virtual void setDTDHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* dtdHandler) override;
	virtual void setInputSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource) override;
	virtual void setLimitAnalyzer(::com::sun::org::apache::xerces::internal::utils::XMLLimitAnalyzer* limitAnalyzer) override;
	void setScannerState(int32_t state);
	virtual bool skipDTD(bool supportDTD) override;
	bool skipSeparator(bool spaceRequired, bool lookForPERefs);
	virtual void startEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startPE($String* name, bool literal);
	virtual $String* toString() override;
	static const int32_t SCANNER_STATE_END_OF_INPUT = 0;
	static const int32_t SCANNER_STATE_TEXT_DECL = 1;
	static const int32_t SCANNER_STATE_MARKUP_DECL = 2;
	static $StringArray* RECOGNIZED_FEATURES;
	static $Array<::java::lang::Boolean>* FEATURE_DEFAULTS;
	static $StringArray* RECOGNIZED_PROPERTIES;
	static $ObjectArray* PROPERTY_DEFAULTS;
	static const bool DEBUG_SCANNER_STATE = false;
	::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* fDTDHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler* fDTDContentModelHandler = nullptr;
	int32_t fScannerState = 0;
	bool fStandalone = false;
	bool fSeenExternalDTD = false;
	bool fSeenExternalPE = false;
	bool fStartDTDCalled = false;
	::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl* fAttributes = nullptr;
	$ints* fContentStack = nullptr;
	int32_t fContentDepth = 0;
	$ints* fPEStack = nullptr;
	$booleans* fPEReport = nullptr;
	int32_t fPEDepth = 0;
	int32_t fMarkUpDepth = 0;
	int32_t fExtEntityDepth = 0;
	int32_t fIncludeSectDepth = 0;
	$StringArray* fStrings = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fString = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fStringBuffer = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fStringBuffer2 = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fLiteral = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fLiteral2 = nullptr;
	$StringArray* fEnumeration = nullptr;
	int32_t fEnumerationCount = 0;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fIgnoreConditionalBuffer = nullptr;
	::com::sun::xml::internal::stream::dtd::nonvalidating::DTDGrammar* nvGrammarInfo = nullptr;
	bool nonValidatingMode = false;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG_SCANNER_STATE")
#pragma pop_macro("FEATURE_DEFAULTS")
#pragma pop_macro("PROPERTY_DEFAULTS")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("SCANNER_STATE_END_OF_INPUT")
#pragma pop_macro("SCANNER_STATE_MARKUP_DECL")
#pragma pop_macro("SCANNER_STATE_TEXT_DECL")

#endif // _com_sun_org_apache_xerces_internal_impl_XMLDTDScannerImpl_h_