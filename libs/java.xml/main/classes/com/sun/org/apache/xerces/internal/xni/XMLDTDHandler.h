#ifndef _com_sun_org_apache_xerces_internal_xni_XMLDTDHandler_h_
#define _com_sun_org_apache_xerces_internal_xni_XMLDTDHandler_h_
//$ interface com.sun.org.apache.xerces.internal.xni.XMLDTDHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CONDITIONAL_IGNORE")
#undef CONDITIONAL_IGNORE
#pragma push_macro("CONDITIONAL_INCLUDE")
#undef CONDITIONAL_INCLUDE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class Augmentations;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

class XMLDTDHandler : public ::java::lang::Object {
	$interface(XMLDTDHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, ::com::sun::org::apache::xerces::internal::xni::XMLString* defaultValue, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedDefaultValue, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void elementDecl($String* name, $String* contentModel, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void endAttlist(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void endConditional(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void endDTD(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void endExternalSubset(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void endParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void externalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* getDTDSource() {return nullptr;}
	virtual void ignoredCharacters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void internalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedText, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void notationDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void setDTDSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource* source) {}
	virtual void startAttlist($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void startConditional(int16_t type, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void startDTD(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void startExternalSubset(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void startParameterEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void textDecl($String* version, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	virtual void unparsedEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* notation, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) {}
	static const int16_t CONDITIONAL_INCLUDE = 0;
	static const int16_t CONDITIONAL_IGNORE = 1;
};

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CONDITIONAL_IGNORE")
#pragma pop_macro("CONDITIONAL_INCLUDE")

#endif // _com_sun_org_apache_xerces_internal_xni_XMLDTDHandler_h_