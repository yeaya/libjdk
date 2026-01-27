#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSDDescription_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSDDescription_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSDDescription
//$ extends com.sun.org.apache.xerces.internal.util.XMLResourceIdentifierImpl
//$ implements com.sun.org.apache.xerces.internal.xni.grammars.XMLSchemaDescription

#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLSchemaDescription.h>
#include <java/lang/Array.h>

#pragma push_macro("CONTEXT_ATTRIBUTE")
#undef CONTEXT_ATTRIBUTE
#pragma push_macro("CONTEXT_ELEMENT")
#undef CONTEXT_ELEMENT
#pragma push_macro("CONTEXT_IMPORT")
#undef CONTEXT_IMPORT
#pragma push_macro("CONTEXT_INCLUDE")
#undef CONTEXT_INCLUDE
#pragma push_macro("CONTEXT_INITIALIZE")
#undef CONTEXT_INITIALIZE
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
						namespace impl {
							namespace xs {

class XSDDescription : public ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl, public ::com::sun::org::apache::xerces::internal::xni::grammars::XMLSchemaDescription {
	$class(XSDDescription, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLSchemaDescription)
public:
	XSDDescription();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual $String* getBaseSystemId() override;
	virtual $String* getExpandedSystemId() override;
	virtual $String* getLiteralSystemId() override;
	virtual $String* getNamespace() override;
	virtual $String* getPublicId() override;
	void init$();
	virtual bool equals(Object$* descObj) override;
	virtual bool fromInstance();
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* getAttributes() override;
	virtual int16_t getContextType() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* getEnclosingElementName() override;
	virtual $String* getGrammarType() override;
	virtual $StringArray* getLocationHints() override;
	virtual $String* getTargetNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* getTriggeringComponent() override;
	virtual int32_t hashCode() override;
	virtual bool isExternal();
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription* makeClone();
	virtual void reset();
	virtual void setAttributes(::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual void setBaseSystemId($String* baseSystemId) override;
	virtual void setContextType(int16_t contextType);
	virtual void setEnclosingElementName(::com::sun::org::apache::xerces::internal::xni::QName* enclosedElementName);
	virtual void setExpandedSystemId($String* expandedSystemId) override;
	virtual void setLiteralSystemId($String* literalSystemId) override;
	virtual void setLocationHints($StringArray* locationHints);
	virtual void setNamespace($String* namespace$) override;
	virtual void setPublicId($String* publicId) override;
	virtual void setTargetNamespace($String* targetNamespace);
	virtual void setTriggeringComponent(::com::sun::org::apache::xerces::internal::xni::QName* triggeringComponent);
	virtual $String* toString() override;
	static const int16_t CONTEXT_INITIALIZE = (-1);
	static const int16_t CONTEXT_INCLUDE = 0;
	static const int16_t CONTEXT_REDEFINE = 1;
	static const int16_t CONTEXT_IMPORT = 2;
	static const int16_t CONTEXT_PREPARSE = 3;
	static const int16_t CONTEXT_INSTANCE = 4;
	static const int16_t CONTEXT_ELEMENT = 5;
	static const int16_t CONTEXT_ATTRIBUTE = 6;
	static const int16_t CONTEXT_XSITYPE = 7;
	int16_t fContextType = 0;
	$StringArray* fLocationHints = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fTriggeringComponent = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fEnclosedElementName = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLAttributes* fAttributes = nullptr;
};

							} // xs
						} // impl
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
#pragma pop_macro("CONTEXT_INITIALIZE")
#pragma pop_macro("CONTEXT_INSTANCE")
#pragma pop_macro("CONTEXT_PREPARSE")
#pragma pop_macro("CONTEXT_REDEFINE")
#pragma pop_macro("CONTEXT_XSITYPE")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSDDescription_h_