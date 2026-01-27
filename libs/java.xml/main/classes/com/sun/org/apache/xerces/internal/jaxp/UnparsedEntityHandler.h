#ifndef _com_sun_org_apache_xerces_internal_jaxp_UnparsedEntityHandler_h_
#define _com_sun_org_apache_xerces_internal_jaxp_UnparsedEntityHandler_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.UnparsedEntityHandler
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLDTDFilter
//$ implements com.sun.org.apache.xerces.internal.impl.validation.EntityState

#include <com/sun/org/apache/xerces/internal/impl/validation/EntityState.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDFilter.h>
#include <java/lang/Array.h>

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
						namespace xni {
							class Augmentations;
							class XMLDTDHandler;
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
								class XMLDTDSource;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

class UnparsedEntityHandler : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter, public ::com::sun::org::apache::xerces::internal::impl::validation::EntityState {
	$class(UnparsedEntityHandler, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter, ::com::sun::org::apache::xerces::internal::impl::validation::EntityState)
public:
	UnparsedEntityHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* manager);
	virtual void attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, ::com::sun::org::apache::xerces::internal::xni::XMLString* defaultValue, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedDefaultValue, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void elementDecl($String* name, $String* contentModel, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void endAttlist(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void endConditional(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void endDTD(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void endExternalSubset(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void endParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void externalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* getDTDHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* getDTDSource() override;
	virtual void ignoredCharacters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void internalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedText, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual bool isEntityDeclared($String* name) override;
	virtual bool isEntityUnparsed($String* name) override;
	virtual void notationDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	void reset();
	virtual void setDTDHandler(::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* handler) override;
	virtual void setDTDSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* source) override;
	virtual void startAttlist($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void startConditional(int16_t type, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void startDTD(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void startExternalSubset(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void startParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void textDecl($String* version, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* notation, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* fDTDSource = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler* fDTDHandler = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fValidationManager = nullptr;
	::java::util::Map* fUnparsedEntities = nullptr;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_UnparsedEntityHandler_h_