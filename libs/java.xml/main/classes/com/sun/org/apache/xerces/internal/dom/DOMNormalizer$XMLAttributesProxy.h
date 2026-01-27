#ifndef _com_sun_org_apache_xerces_internal_dom_DOMNormalizer$XMLAttributesProxy_h_
#define _com_sun_org_apache_xerces_internal_dom_DOMNormalizer$XMLAttributesProxy_h_
//$ class com.sun.org.apache.xerces.internal.dom.DOMNormalizer$XMLAttributesProxy
//$ extends com.sun.org.apache.xerces.internal.xni.XMLAttributes

#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class AttributeMap;
							class CoreDocumentImpl;
							class DOMNormalizer;
							class ElementImpl;
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
							class XMLString;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class DOMNormalizer$XMLAttributesProxy : public ::com::sun::org::apache::xerces::internal::xni::XMLAttributes {
	$class(DOMNormalizer$XMLAttributesProxy, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes)
public:
	DOMNormalizer$XMLAttributesProxy();
	void init$(::com::sun::org::apache::xerces::internal::dom::DOMNormalizer* this$0);
	virtual int32_t addAttribute(::com::sun::org::apache::xerces::internal::xni::QName* qname, $String* attrType, $String* attrValue) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* getAugmentations(int32_t attributeIndex) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* getAugmentations($String* uri, $String* localPart) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* getAugmentations($String* qName) override;
	virtual int32_t getIndex($String* qName) override;
	virtual int32_t getIndex($String* uri, $String* localPart) override;
	virtual int32_t getLength() override;
	virtual $String* getLocalName(int32_t index) override;
	virtual void getName(int32_t attrIndex, ::com::sun::org::apache::xerces::internal::xni::QName* attrName) override;
	virtual $String* getNonNormalizedValue(int32_t attrIndex) override;
	virtual $String* getPrefix(int32_t index) override;
	virtual $String* getQName(int32_t index) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* getQualifiedName(int32_t index) override;
	$String* getReportableType($String* type);
	virtual $String* getType(int32_t index) override;
	virtual $String* getType($String* qName) override;
	virtual $String* getType($String* uri, $String* localName) override;
	virtual $String* getURI(int32_t index) override;
	virtual $String* getValue(int32_t index) override;
	virtual $String* getValue($String* qName) override;
	virtual $String* getValue($String* uri, $String* localName) override;
	virtual bool isSpecified(int32_t attrIndex) override;
	virtual void removeAllAttributes() override;
	virtual void removeAttributeAt(int32_t attrIndex) override;
	void setAttributes(::com::sun::org::apache::xerces::internal::dom::AttributeMap* attributes, ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* doc, ::com::sun::org::apache::xerces::internal::dom::ElementImpl* elem);
	virtual void setAugmentations(int32_t attrIndex, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void setName(int32_t attrIndex, ::com::sun::org::apache::xerces::internal::xni::QName* attrName) override;
	virtual void setNonNormalizedValue(int32_t attrIndex, $String* attrValue) override;
	virtual void setSpecified(int32_t attrIndex, bool specified) override;
	virtual void setType(int32_t attrIndex, $String* attrType) override;
	virtual void setValue(int32_t attrIndex, $String* attrValue) override;
	virtual void setValue(int32_t attrIndex, $String* attrValue, ::com::sun::org::apache::xerces::internal::xni::XMLString* value) override;
	::com::sun::org::apache::xerces::internal::dom::DOMNormalizer* this$0 = nullptr;
	::com::sun::org::apache::xerces::internal::dom::AttributeMap* fAttributes = nullptr;
	::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* fDocument = nullptr;
	::com::sun::org::apache::xerces::internal::dom::ElementImpl* fElement = nullptr;
	::java::util::Vector* fDTDTypes = nullptr;
	::java::util::Vector* fAugmentations = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DOMNormalizer$XMLAttributesProxy_h_