#ifndef _com_sun_org_apache_xerces_internal_impl_XMLDocumentScannerImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLDocumentScannerImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLDocumentScannerImpl
//$ extends com.sun.org.apache.xerces.internal.impl.XMLDocumentFragmentScannerImpl

#include <com/sun/org/apache/xerces/internal/impl/XMLDocumentFragmentScannerImpl.h>
#include <java/lang/Array.h>

#pragma push_macro("COMMENTSTRING")
#undef COMMENTSTRING
#pragma push_macro("DISALLOW_DOCTYPE_DECL_FEATURE")
#undef DISALLOW_DOCTYPE_DECL_FEATURE
#pragma push_macro("DOCTYPE")
#undef DOCTYPE
#pragma push_macro("DOCUMENT_SCANNER")
#undef DOCUMENT_SCANNER
#pragma push_macro("DTD_SCANNER")
#undef DTD_SCANNER
#pragma push_macro("FEATURE_DEFAULTS")
#undef FEATURE_DEFAULTS
#pragma push_macro("LOAD_EXTERNAL_DTD")
#undef LOAD_EXTERNAL_DTD
#pragma push_macro("NAMESPACE_CONTEXT")
#undef NAMESPACE_CONTEXT
#pragma push_macro("PROPERTY_DEFAULTS")
#undef PROPERTY_DEFAULTS
#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("SCANNER_STATE_DTD_EXTERNAL")
#undef SCANNER_STATE_DTD_EXTERNAL
#pragma push_macro("SCANNER_STATE_DTD_EXTERNAL_DECLS")
#undef SCANNER_STATE_DTD_EXTERNAL_DECLS
#pragma push_macro("SCANNER_STATE_DTD_INTERNAL_DECLS")
#undef SCANNER_STATE_DTD_INTERNAL_DECLS
#pragma push_macro("SCANNER_STATE_NO_SUCH_ELEMENT_EXCEPTION")
#undef SCANNER_STATE_NO_SUCH_ELEMENT_EXCEPTION
#pragma push_macro("SCANNER_STATE_PROLOG")
#undef SCANNER_STATE_PROLOG
#pragma push_macro("SCANNER_STATE_TRAILING_MISC")
#undef SCANNER_STATE_TRAILING_MISC
#pragma push_macro("SCANNER_STATE_XML_DECL")
#undef SCANNER_STATE_XML_DECL
#pragma push_macro("VALIDATION_MANAGER")
#undef VALIDATION_MANAGER

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class PropertyManager;
							class XMLDocumentFragmentScannerImpl$Driver;
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
								class XMLDTDDescription;
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
							namespace validation {
								class ValidationManager;
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
							class NamespaceContext;
							class XMLResourceIdentifier;
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
								class XMLDTDScanner;
								class XMLInputSource;
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

class XMLDocumentScannerImpl : public ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl {
	$class(XMLDocumentScannerImpl, 0, ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl)
public:
	XMLDocumentScannerImpl();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver* createContentDriver() override;
	virtual void endEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual $String* getCharacterEncodingScheme();
	virtual ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* getDTDDecl();
	virtual ::java::lang::Boolean* getFeatureDefault($String* featureId) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* getNamespaceContext();
	virtual $Object* getPropertyDefault($String* propertyId) override;
	virtual $StringArray* getRecognizedFeatures() override;
	virtual $StringArray* getRecognizedProperties() override;
	virtual $String* getScannerStateName(int32_t state) override;
	virtual int32_t getScannetState();
	virtual int32_t next() override;
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl::refresh;
	virtual void refresh(int32_t refreshPosition) override;
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl::reset;
	virtual void reset(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager) override;
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl::scanComment;
	virtual bool scanDoctypeDecl(bool supportDTD);
	using ::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl::scanXMLDeclOrTextDecl;
	virtual void setEndDTDScanState();
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setInputSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource) override;
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual void startEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static const int32_t SCANNER_STATE_XML_DECL = 42;
	static const int32_t SCANNER_STATE_PROLOG = 43;
	static const int32_t SCANNER_STATE_TRAILING_MISC = 44;
	static const int32_t SCANNER_STATE_DTD_INTERNAL_DECLS = 45;
	static const int32_t SCANNER_STATE_DTD_EXTERNAL = 46;
	static const int32_t SCANNER_STATE_DTD_EXTERNAL_DECLS = 47;
	static const int32_t SCANNER_STATE_NO_SUCH_ELEMENT_EXCEPTION = 48;
	static $String* DOCUMENT_SCANNER;
	static $String* LOAD_EXTERNAL_DTD;
	static $String* DISALLOW_DOCTYPE_DECL_FEATURE;
	static $String* DTD_SCANNER;
	static $String* VALIDATION_MANAGER;
	static $String* NAMESPACE_CONTEXT;
	static $StringArray* RECOGNIZED_FEATURES;
	static $Array<::java::lang::Boolean>* FEATURE_DEFAULTS;
	static $StringArray* RECOGNIZED_PROPERTIES;
	static $ObjectArray* PROPERTY_DEFAULTS;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner* fDTDScanner = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fValidationManager = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fDTDDecl = nullptr;
	bool fReadingDTD = false;
	bool fAddedListener = false;
	$String* fDoctypeName = nullptr;
	$String* fDoctypePublicId = nullptr;
	$String* fDoctypeSystemId = nullptr;
	::com::sun::org::apache::xerces::internal::xni::NamespaceContext* fNamespaceContext = nullptr;
	bool fLoadExternalDTD = false;
	bool fSeenDoctypeDecl = false;
	bool fScanEndElement = false;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver* fXMLDeclDriver = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver* fPrologDriver = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver* fDTDDriver = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLDocumentFragmentScannerImpl$Driver* fTrailingMiscDriver = nullptr;
	int32_t fStartPos = 0;
	int32_t fEndPos = 0;
	bool fSeenInternalSubset = false;
	$StringArray* fStrings = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* fExternalSubsetSource = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDDescription* fDTDDescription = nullptr;
	static $chars* DOCTYPE;
	static $chars* COMMENTSTRING;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("COMMENTSTRING")
#pragma pop_macro("DISALLOW_DOCTYPE_DECL_FEATURE")
#pragma pop_macro("DOCTYPE")
#pragma pop_macro("DOCUMENT_SCANNER")
#pragma pop_macro("DTD_SCANNER")
#pragma pop_macro("FEATURE_DEFAULTS")
#pragma pop_macro("LOAD_EXTERNAL_DTD")
#pragma pop_macro("NAMESPACE_CONTEXT")
#pragma pop_macro("PROPERTY_DEFAULTS")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("SCANNER_STATE_DTD_EXTERNAL")
#pragma pop_macro("SCANNER_STATE_DTD_EXTERNAL_DECLS")
#pragma pop_macro("SCANNER_STATE_DTD_INTERNAL_DECLS")
#pragma pop_macro("SCANNER_STATE_NO_SUCH_ELEMENT_EXCEPTION")
#pragma pop_macro("SCANNER_STATE_PROLOG")
#pragma pop_macro("SCANNER_STATE_TRAILING_MISC")
#pragma pop_macro("SCANNER_STATE_XML_DECL")
#pragma pop_macro("VALIDATION_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_impl_XMLDocumentScannerImpl_h_