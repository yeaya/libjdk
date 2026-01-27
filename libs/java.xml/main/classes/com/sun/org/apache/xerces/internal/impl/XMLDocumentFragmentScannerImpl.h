#ifndef _com_sun_org_apache_xerces_internal_impl_XMLDocumentFragmentScannerImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLDocumentFragmentScannerImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl
//$ extends com.sun.org.apache.xerces.internal.impl.XMLScanner
//$ implements com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentScanner,com.sun.org.apache.xerces.internal.impl.XMLEntityHandler,com.sun.xml.internal.stream.XMLBufferListener

#include <com/sun/org/apache/xerces/internal/impl/XMLEntityHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner.h>
#include <com/sun/xml/internal/stream/XMLBufferListener.h>
#include <java/lang/Array.h>

#pragma push_macro("CDATA")
#undef CDATA
#pragma push_macro("CREATE_ENTITY_REF_NODES")
#undef CREATE_ENTITY_REF_NODES
#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("DEBUG_DISPATCHER")
#undef DEBUG_DISPATCHER
#pragma push_macro("DEBUG_SCANNER_STATE")
#undef DEBUG_SCANNER_STATE
#pragma push_macro("DEBUG_SKIP_ALGORITHM")
#undef DEBUG_SKIP_ALGORITHM
#pragma push_macro("DEBUG_START_END_ELEMENT")
#undef DEBUG_START_END_ELEMENT
#pragma push_macro("ELEMENT_ARRAY_LENGTH")
#undef ELEMENT_ARRAY_LENGTH
#pragma push_macro("ENTITY_RESOLVER")
#undef ENTITY_RESOLVER
#pragma push_macro("EXTERNAL_ACCESS_DEFAULT")
#undef EXTERNAL_ACCESS_DEFAULT
#pragma push_macro("FEATURE_DEFAULTS")
#undef FEATURE_DEFAULTS
#pragma push_macro("MAX_DEPTH_LIMIT")
#undef MAX_DEPTH_LIMIT
#pragma push_macro("MAX_POINTER_AT_A_DEPTH")
#undef MAX_POINTER_AT_A_DEPTH
#pragma push_macro("NOTIFY_BUILTIN_REFS")
#undef NOTIFY_BUILTIN_REFS
#pragma push_macro("PROPERTY_DEFAULTS")
#undef PROPERTY_DEFAULTS
#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("SCANNER_STATE_ATTRIBUTE")
#undef SCANNER_STATE_ATTRIBUTE
#pragma push_macro("SCANNER_STATE_ATTRIBUTE_VALUE")
#undef SCANNER_STATE_ATTRIBUTE_VALUE
#pragma push_macro("SCANNER_STATE_BUILT_IN_REFS")
#undef SCANNER_STATE_BUILT_IN_REFS
#pragma push_macro("SCANNER_STATE_CDATA")
#undef SCANNER_STATE_CDATA
#pragma push_macro("SCANNER_STATE_CHARACTER_DATA")
#undef SCANNER_STATE_CHARACTER_DATA
#pragma push_macro("SCANNER_STATE_CHAR_REFERENCE")
#undef SCANNER_STATE_CHAR_REFERENCE
#pragma push_macro("SCANNER_STATE_COMMENT")
#undef SCANNER_STATE_COMMENT
#pragma push_macro("SCANNER_STATE_CONTENT")
#undef SCANNER_STATE_CONTENT
#pragma push_macro("SCANNER_STATE_DOCTYPE")
#undef SCANNER_STATE_DOCTYPE
#pragma push_macro("SCANNER_STATE_END_ELEMENT_TAG")
#undef SCANNER_STATE_END_ELEMENT_TAG
#pragma push_macro("SCANNER_STATE_END_OF_INPUT")
#undef SCANNER_STATE_END_OF_INPUT
#pragma push_macro("SCANNER_STATE_PI")
#undef SCANNER_STATE_PI
#pragma push_macro("SCANNER_STATE_REFERENCE")
#undef SCANNER_STATE_REFERENCE
#pragma push_macro("SCANNER_STATE_ROOT_ELEMENT")
#undef SCANNER_STATE_ROOT_ELEMENT
#pragma push_macro("SCANNER_STATE_START_ELEMENT_TAG")
#undef SCANNER_STATE_START_ELEMENT_TAG
#pragma push_macro("SCANNER_STATE_START_OF_MARKUP")
#undef SCANNER_STATE_START_OF_MARKUP
#pragma push_macro("SCANNER_STATE_TERMINATED")
#undef SCANNER_STATE_TERMINATED
#pragma push_macro("SCANNER_STATE_TEXT_DECL")
#undef SCANNER_STATE_TEXT_DECL
#pragma push_macro("SCANNER_STATE_XML_DECL")
#undef SCANNER_STATE_XML_DECL
#pragma push_macro("STANDARD_URI_CONFORMANT")
#undef STANDARD_URI_CONFORMANT
#pragma push_macro("XMLDECL")
#undef XMLDECL
#pragma push_macro("XML_SECURITY_PROPERTY_MANAGER")
#undef XML_SECURITY_PROPERTY_MANAGER

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class ExternalSubsetResolver;
							class PropertyManager;
							class XMLDocumentFragmentScannerImpl$Driver;
							class XMLDocumentFragmentScannerImpl$ElementStack;
							class XMLDocumentFragmentScannerImpl$ElementStack2;
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
							class XMLAttributesIteratorImpl;
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
						namespace xni {
							class Augmentations;
							class QName;
							class XMLAttributes;
							class XMLDocumentHandler;
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
					class XMLEntityStorage;
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
						class DTDGrammarUtil;
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

class XMLDocumentFragmentScannerImpl : public ::com::sun::org::apache::xerces::internal::impl::XMLScanner, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentScanner, public ::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler, public ::com::sun::xml::internal::stream::XMLBufferListener {
	$class(XMLDocumentFragmentScannerImpl, 0, ::com::sun::org::apache::xerces::internal::impl::XMLScanner, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentScanner, ::com::sun::org::apache::xerces::internal::impl::XMLEntityHandler, ::com::sun::xml::internal::stream::XMLBufferListener)
public:
	XMLDocumentFragmentScannerImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addElement($String* rawname);
	void bufferContent();
	virtual bool canStore(int16_t depth, int16_t column);
	virtual $String* checkAccess($String* systemId, $String* allowedProtocols);
	virtual void checkDepth($String* elementName);
	virtual ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver* createContentDriver();
	virtual void endEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual ::com::sun::org::apache::xerces::internal::util::XMLAttributesIteratorImpl* getAttributeIterator();
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLString* getCharacterData();
	virtual $String* getComment();
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getDocumentHandler() override;
	virtual $String* getDriverName(::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver* driver);
	virtual int16_t getElementPointer(int16_t depth, int16_t column);
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* getElementQName();
	virtual $String* getEntityName();
	virtual ::java::lang::Boolean* getFeatureDefault($String* featureId) override;
	virtual ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* getPIData();
	virtual $String* getPITarget();
	virtual $Object* getPropertyDefault($String* propertyId) override;
	virtual $StringArray* getRecognizedFeatures() override;
	virtual $StringArray* getRecognizedProperties() override;
	virtual $String* getScannerStateName(int32_t state);
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLString* getString();
	void handleCharacter(char16_t c, $String* entity, ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* content);
	virtual bool hasAttributes();
	virtual bool isStandAlone();
	virtual int32_t next() override;
	static void pr($String* str);
	virtual void refresh() override;
	virtual void refresh(int32_t refreshPosition) override;
	using ::com::sun::org::apache::xerces::internal::impl::XMLScanner::reset;
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	virtual void reset(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager) override;
	virtual void resetCommon();
	virtual void resetPointer(int16_t depth, int16_t column);
	virtual void scanAttribute(::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual bool scanCDATASection(::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* contentBuffer, bool complete);
	virtual void scanCharReference();
	using ::com::sun::org::apache::xerces::internal::impl::XMLScanner::scanComment;
	virtual void scanComment();
	virtual int32_t scanContent(::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* content);
	virtual bool scanDocument(bool complete) override;
	virtual int32_t scanEndElement();
	virtual void scanEntityReference(::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* content);
	virtual void scanPIData($String* target, ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* data) override;
	virtual bool scanStartElement();
	using ::com::sun::org::apache::xerces::internal::impl::XMLScanner::scanXMLDeclOrTextDecl;
	virtual void scanXMLDeclOrTextDecl(bool scanningTextDecl);
	virtual bool seekCloseOfStartTag();
	virtual void setDocumentHandler(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* documentHandler) override;
	void setDriver(::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver* driver);
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setInputSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource) override;
	virtual void setProperty($String* propertyId, Object$* value) override;
	void setScannerState(int32_t state);
	virtual bool skipElement();
	virtual bool skipElement(int16_t column);
	virtual bool skipFromTheBuffer($String* rawname);
	virtual bool skipQElement($String* rawname);
	virtual bool standaloneSet();
	virtual void startEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual int16_t storePointerForADepth(int16_t elementPointer);
	virtual $String* toString() override;
	int32_t fElementAttributeLimit = 0;
	int32_t fXMLNameLimit = 0;
	::com::sun::org::apache::xerces::internal::impl::ExternalSubsetResolver* fExternalSubsetResolver = nullptr;
	static const int32_t SCANNER_STATE_START_OF_MARKUP = 21;
	static const int32_t SCANNER_STATE_CONTENT = 22;
	static const int32_t SCANNER_STATE_PI = 23;
	static const int32_t SCANNER_STATE_DOCTYPE = 24;
	static const int32_t SCANNER_STATE_XML_DECL = 25;
	static const int32_t SCANNER_STATE_ROOT_ELEMENT = 26;
	static const int32_t SCANNER_STATE_COMMENT = 27;
	static const int32_t SCANNER_STATE_REFERENCE = 28;
	static const int32_t SCANNER_STATE_ATTRIBUTE = 29;
	static const int32_t SCANNER_STATE_ATTRIBUTE_VALUE = 30;
	static const int32_t SCANNER_STATE_END_OF_INPUT = 33;
	static const int32_t SCANNER_STATE_TERMINATED = 34;
	static const int32_t SCANNER_STATE_CDATA = 35;
	static const int32_t SCANNER_STATE_TEXT_DECL = 36;
	static const int32_t SCANNER_STATE_CHARACTER_DATA = 37;
	static const int32_t SCANNER_STATE_START_ELEMENT_TAG = 38;
	static const int32_t SCANNER_STATE_END_ELEMENT_TAG = 39;
	static const int32_t SCANNER_STATE_CHAR_REFERENCE = 40;
	static const int32_t SCANNER_STATE_BUILT_IN_REFS = 41;
	static $String* NOTIFY_BUILTIN_REFS;
	static $String* ENTITY_RESOLVER;
	static $String* STANDARD_URI_CONFORMANT;
	static $String* CREATE_ENTITY_REF_NODES;
	static $String* XML_SECURITY_PROPERTY_MANAGER;
	static $String* EXTERNAL_ACCESS_DEFAULT;
	static $StringArray* RECOGNIZED_FEATURES;
	static $Array<::java::lang::Boolean>* FEATURE_DEFAULTS;
	static $StringArray* RECOGNIZED_PROPERTIES;
	static $ObjectArray* PROPERTY_DEFAULTS;
	static $chars* CDATA;
	static $chars* XMLDECL;
	static const bool DEBUG_SCANNER_STATE = false;
	static const bool DEBUG_DISPATCHER = false;
	static const bool DEBUG_START_END_ELEMENT = false;
	static const bool DEBUG = false;
	::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* fDocumentHandler = nullptr;
	int32_t fScannerLastState = 0;
	::com::sun::xml::internal::stream::XMLEntityStorage* fEntityStore = nullptr;
	$ints* fEntityStack = nullptr;
	int32_t fMarkupDepth = 0;
	bool fEmptyElement = false;
	bool fReadingAttributes = false;
	int32_t fScannerState = 0;
	bool fInScanContent = false;
	bool fLastSectionWasCData = false;
	bool fCDataStart = false;
	bool fInCData = false;
	bool fCDataEnd = false;
	bool fLastSectionWasEntityReference = false;
	bool fLastSectionWasCharacterData = false;
	bool fHasExternalDTD = false;
	bool fStandaloneSet = false;
	bool fStandalone = false;
	$String* fVersion = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fCurrentElement = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$ElementStack* fElementStack = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$ElementStack2* fElementStack2 = nullptr;
	$String* fPITarget = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fPIData = nullptr;
	bool fNotifyBuiltInRefs = false;
	bool fSupportDTD = false;
	bool fReplaceEntityReferences = false;
	bool fSupportExternalEntities = false;
	bool fReportCdataEvent = false;
	bool fIsCoalesce = false;
	$String* fDeclaredEncoding = nullptr;
	bool fDisallowDoctype = false;
	bool fCreateEntityRefNodes = false;
	int32_t fChunkSize = 0;
	$String* fAccessExternalDTD = nullptr;
	bool fStrictURI = false;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver* fDriver = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver* fContentDriver = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fElementQName = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fAttributeQName = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLAttributesIteratorImpl* fAttributes = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fTempString = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fTempString2 = nullptr;
	$StringArray* fStrings = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fStringBuffer = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fStringBuffer2 = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fContentBuffer = nullptr;
	$chars* fSingleChar = nullptr;
	$String* fCurrentEntityName = nullptr;
	bool fScanToEnd = false;
	::com::sun::xml::internal::stream::dtd::DTDGrammarUtil* dtdGrammarUtil = nullptr;
	bool fAddDefaultAttr = false;
	bool foundBuiltInRefs = false;
	bool builtInRefCharacterHandled = false;
	static const int16_t MAX_DEPTH_LIMIT = 5;
	static const int16_t ELEMENT_ARRAY_LENGTH = 200;
	static const int16_t MAX_POINTER_AT_A_DEPTH = 4;
	static const bool DEBUG_SKIP_ALGORITHM = false;
	$StringArray* fElementArray = nullptr;
	int16_t fLastPointerLocation = 0;
	int16_t fElementPointer = 0;
	$Array<int16_t, 2>* fPointerInfo = nullptr;
	$String* fElementRawname = nullptr;
	bool fShouldSkip = false;
	bool fAdd = false;
	bool fSkip = false;
	::com::sun::org::apache::xerces::internal::xni::Augmentations* fTempAugmentations = nullptr;
	bool fUsebuffer = false;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CDATA")
#pragma pop_macro("CREATE_ENTITY_REF_NODES")
#pragma pop_macro("DEBUG")
#pragma pop_macro("DEBUG_DISPATCHER")
#pragma pop_macro("DEBUG_SCANNER_STATE")
#pragma pop_macro("DEBUG_SKIP_ALGORITHM")
#pragma pop_macro("DEBUG_START_END_ELEMENT")
#pragma pop_macro("ELEMENT_ARRAY_LENGTH")
#pragma pop_macro("ENTITY_RESOLVER")
#pragma pop_macro("EXTERNAL_ACCESS_DEFAULT")
#pragma pop_macro("FEATURE_DEFAULTS")
#pragma pop_macro("MAX_DEPTH_LIMIT")
#pragma pop_macro("MAX_POINTER_AT_A_DEPTH")
#pragma pop_macro("NOTIFY_BUILTIN_REFS")
#pragma pop_macro("PROPERTY_DEFAULTS")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("SCANNER_STATE_ATTRIBUTE")
#pragma pop_macro("SCANNER_STATE_ATTRIBUTE_VALUE")
#pragma pop_macro("SCANNER_STATE_BUILT_IN_REFS")
#pragma pop_macro("SCANNER_STATE_CDATA")
#pragma pop_macro("SCANNER_STATE_CHARACTER_DATA")
#pragma pop_macro("SCANNER_STATE_CHAR_REFERENCE")
#pragma pop_macro("SCANNER_STATE_COMMENT")
#pragma pop_macro("SCANNER_STATE_CONTENT")
#pragma pop_macro("SCANNER_STATE_DOCTYPE")
#pragma pop_macro("SCANNER_STATE_END_ELEMENT_TAG")
#pragma pop_macro("SCANNER_STATE_END_OF_INPUT")
#pragma pop_macro("SCANNER_STATE_PI")
#pragma pop_macro("SCANNER_STATE_REFERENCE")
#pragma pop_macro("SCANNER_STATE_ROOT_ELEMENT")
#pragma pop_macro("SCANNER_STATE_START_ELEMENT_TAG")
#pragma pop_macro("SCANNER_STATE_START_OF_MARKUP")
#pragma pop_macro("SCANNER_STATE_TERMINATED")
#pragma pop_macro("SCANNER_STATE_TEXT_DECL")
#pragma pop_macro("SCANNER_STATE_XML_DECL")
#pragma pop_macro("STANDARD_URI_CONFORMANT")
#pragma pop_macro("XMLDECL")
#pragma pop_macro("XML_SECURITY_PROPERTY_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_impl_XMLDocumentFragmentScannerImpl_h_