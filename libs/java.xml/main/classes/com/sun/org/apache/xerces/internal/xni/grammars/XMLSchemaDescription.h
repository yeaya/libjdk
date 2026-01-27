#ifndef _com_sun_org_apache_xerces_internal_xni_grammars_XMLSchemaDescription_h_
#define _com_sun_org_apache_xerces_internal_xni_grammars_XMLSchemaDescription_h_
//$ interface com.sun.org.apache.xerces.internal.xni.grammars.XMLSchemaDescription
//$ extends com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarDescription

#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <java/lang/Array.h>

#pragma push_macro("CONTEXT_ATTRIBUTE")
#undef CONTEXT_ATTRIBUTE
#pragma push_macro("CONTEXT_ELEMENT")
#undef CONTEXT_ELEMENT
#pragma push_macro("CONTEXT_IMPORT")
#undef CONTEXT_IMPORT
#pragma push_macro("CONTEXT_INCLUDE")
#undef CONTEXT_INCLUDE
#pragma push_macro("CONTEXT_INSTANCE")
#undef CONTEXT_INSTANCE
#pragma push_macro("CONTEXT_PREPARSE")
#undef CONTEXT_PREPARSE
#pragma push_macro("CONTEXT_REDEFINE")
#undef CONTEXT_REDEFINE
#pragma push_macro("CONTEXT_XSITYPE")
#undef CONTEXT_XSITYPE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
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

class XMLSchemaDescription : public ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription {
	$interface(XMLSchemaDescription, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription)
public:
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* getAttributes() {return nullptr;}
	virtual int16_t getContextType() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* getEnclosingElementName() {return nullptr;}
	virtual $StringArray* getLocationHints() {return nullptr;}
	virtual $String* getTargetNamespace() {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* getTriggeringComponent() {return nullptr;}
	static const int16_t CONTEXT_INCLUDE = 0;
	static const int16_t CONTEXT_REDEFINE = 1;
	static const int16_t CONTEXT_IMPORT = 2;
	static const int16_t CONTEXT_PREPARSE = 3;
	static const int16_t CONTEXT_INSTANCE = 4;
	static const int16_t CONTEXT_ELEMENT = 5;
	static const int16_t CONTEXT_ATTRIBUTE = 6;
	static const int16_t CONTEXT_XSITYPE = 7;
};

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CONTEXT_ATTRIBUTE")
#pragma pop_macro("CONTEXT_ELEMENT")
#pragma pop_macro("CONTEXT_IMPORT")
#pragma pop_macro("CONTEXT_INCLUDE")
#pragma pop_macro("CONTEXT_INSTANCE")
#pragma pop_macro("CONTEXT_PREPARSE")
#pragma pop_macro("CONTEXT_REDEFINE")
#pragma pop_macro("CONTEXT_XSITYPE")

#endif // _com_sun_org_apache_xerces_internal_xni_grammars_XMLSchemaDescription_h_