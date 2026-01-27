#ifndef _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent_h_
#define _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent
//$ extends com.sun.org.apache.xerces.internal.jaxp.TeeXMLDocumentFilterImpl
//$ implements com.sun.org.apache.xerces.internal.xni.parser.XMLComponent

#include <com/sun/org/apache/xerces/internal/jaxp/TeeXMLDocumentFilterImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <java/lang/Array.h>

#pragma push_macro("ENTITY_MANAGER")
#undef ENTITY_MANAGER
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
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
						namespace jaxp {
							class JAXPValidatorComponent$SAX2XNI;
							class JAXPValidatorComponent$XNI2SAX;
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
								class XMLEntityResolver;
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
namespace javax {
	namespace xml {
		namespace validation {
			class TypeInfoProvider;
			class ValidatorHandler;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

class JAXPValidatorComponent : public ::com::sun::org::apache::xerces::internal::jaxp::TeeXMLDocumentFilterImpl, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent {
	$class(JAXPValidatorComponent, 0, ::com::sun::org::apache::xerces::internal::jaxp::TeeXMLDocumentFilterImpl, ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent)
public:
	JAXPValidatorComponent();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::xml::validation::ValidatorHandler* validatorHandler);
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual ::java::lang::Boolean* getFeatureDefault($String* featureId) override;
	virtual $Object* getPropertyDefault($String* propertyId) override;
	virtual $StringArray* getRecognizedFeatures() override;
	virtual $StringArray* getRecognizedProperties() override;
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager) override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	$String* symbolize($String* s);
	virtual $String* toString() override;
	void updateAttributes(::org::xml::sax::Attributes* atts);
	static $String* ENTITY_MANAGER;
	static $String* ERROR_REPORTER;
	static $String* SYMBOL_TABLE;
	::javax::xml::validation::ValidatorHandler* validator = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent$XNI2SAX* xni2sax = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent$SAX2XNI* sax2xni = nullptr;
	::javax::xml::validation::TypeInfoProvider* typeInfoProvider = nullptr;
	::com::sun::org::apache::xerces::internal::xni::Augmentations* fCurrentAug = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLAttributes* fCurrentAttributes = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver* fEntityResolver = nullptr;
	static ::javax::xml::validation::TypeInfoProvider* noInfoProvider;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ENTITY_MANAGER")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("SYMBOL_TABLE")

#endif // _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent_h_