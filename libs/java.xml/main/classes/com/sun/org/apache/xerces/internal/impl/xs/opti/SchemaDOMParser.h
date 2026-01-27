#ifndef _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaDOMParser_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaDOMParser_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOMParser
//$ extends com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultXMLDocumentHandler

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultXMLDocumentHandler.h>

#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("GENERATE_SYNTHETIC_ANNOTATION")
#undef GENERATE_SYNTHETIC_ANNOTATION

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
						namespace impl {
							namespace xs {
								namespace opti {
									class ElementImpl;
									class SchemaDOM;
									class SchemaDOMParser$BooleanStack;
								}
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
							class Augmentations;
							class NamespaceContext;
							class QName;
							class XMLAttributes;
							class XMLLocator;
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
								class XMLEntityResolver;
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
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
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
							namespace xs {
								namespace opti {

class SchemaDOMParser : public ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultXMLDocumentHandler {
	$class(SchemaDOMParser, 0, ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultXMLDocumentHandler)
public:
	SchemaDOMParser();
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* config);
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDocument(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual ::org::w3c::dom::Document* getDocument();
	virtual bool getFeature($String* featureId);
	virtual $Object* getProperty($String* propertyId);
	bool hasNonSchemaAttributes(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void parse(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource);
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void reset();
	virtual void resetNodePool();
	virtual void setEntityResolver(::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* er);
	virtual void setFeature($String* featureId, bool state);
	virtual void setProperty($String* propertyId, Object$* value);
	virtual void startCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDocument(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	static $String* ERROR_REPORTER;
	static $String* GENERATE_SYNTHETIC_ANNOTATION;
	::com::sun::org::apache::xerces::internal::xni::XMLLocator* fLocator = nullptr;
	::com::sun::org::apache::xerces::internal::xni::NamespaceContext* fNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOM* schemaDOM = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration* config = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::opti::ElementImpl* fCurrentAnnotationElement = nullptr;
	int32_t fAnnotationDepth = 0;
	int32_t fInnerAnnotationDepth = 0;
	int32_t fDepth = 0;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	bool fGenerateSyntheticAnnotation = false;
	::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMParser$BooleanStack* fHasNonSchemaAttributes = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMParser$BooleanStack* fSawAnnotation = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLAttributes* fEmptyAttr = nullptr;
};

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("GENERATE_SYNTHETIC_ANNOTATION")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaDOMParser_h_