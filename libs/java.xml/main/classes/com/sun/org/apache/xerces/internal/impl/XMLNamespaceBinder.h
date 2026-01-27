#ifndef _com_sun_org_apache_xerces_internal_impl_XMLNamespaceBinder_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLNamespaceBinder_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLNamespaceBinder
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLComponent
//$ implements com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentFilter.h>
#include <java/lang/Array.h>

#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("FEATURE_DEFAULTS")
#undef FEATURE_DEFAULTS
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("PROPERTY_DEFAULTS")
#undef PROPERTY_DEFAULTS
#pragma push_macro("RECOGNIZED_FEATURES")
#undef RECOGNIZED_FEATURES
#pragma push_macro("RECOGNIZED_PROPERTIES")
#undef RECOGNIZED_PROPERTIES
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
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
							class Augmentations;
							class NamespaceContext;
							class QName;
							class XMLAttributes;
							class XMLDocumentHandler;
							class XMLLocator;
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
								class XMLDocumentSource;
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

class XMLNamespaceBinder : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter {
	$class(XMLNamespaceBinder, 0, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter)
public:
	XMLNamespaceBinder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void doctypeDecl($String* rootElement, $String* publicId, $String* systemId, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDocument(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getDocumentHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* getDocumentSource() override;
	virtual ::java::lang::Boolean* getFeatureDefault($String* featureId) override;
	virtual bool getOnlyPassPrefixMappingEvents();
	virtual $Object* getPropertyDefault($String* propertyId) override;
	virtual $StringArray* getRecognizedFeatures() override;
	virtual $StringArray* getRecognizedProperties() override;
	virtual void handleEndElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs, bool isEmpty);
	virtual void handleStartElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs, bool isEmpty);
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual bool prefixBoundToNullURI($String* uri, $String* localpart);
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	virtual void setDocumentHandler(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* documentHandler) override;
	virtual void setDocumentSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* source) override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setOnlyPassPrefixMappingEvents(bool onlyPassPrefixMappingEvents);
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual void startCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDocument(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void textDecl($String* version, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual $String* toString() override;
	virtual void xmlDecl($String* version, $String* encoding, $String* standalone, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static $String* NAMESPACES;
	static $String* SYMBOL_TABLE;
	static $String* ERROR_REPORTER;
	static $StringArray* RECOGNIZED_FEATURES;
	static $Array<::java::lang::Boolean>* FEATURE_DEFAULTS;
	static $StringArray* RECOGNIZED_PROPERTIES;
	static $ObjectArray* PROPERTY_DEFAULTS;
	bool fNamespaces = false;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* fDocumentHandler = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* fDocumentSource = nullptr;
	bool fOnlyPassPrefixMappingEvents = false;
	::com::sun::org::apache::xerces::internal::xni::NamespaceContext* fNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fAttributeQName = nullptr;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("FEATURE_DEFAULTS")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("PROPERTY_DEFAULTS")
#pragma pop_macro("RECOGNIZED_FEATURES")
#pragma pop_macro("RECOGNIZED_PROPERTIES")
#pragma pop_macro("SYMBOL_TABLE")

#endif // _com_sun_org_apache_xerces_internal_impl_XMLNamespaceBinder_h_