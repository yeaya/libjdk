#ifndef _com_sun_org_apache_xerces_internal_xni_XMLAttributes_h_
#define _com_sun_org_apache_xerces_internal_xni_XMLAttributes_h_
//$ interface com.sun.org.apache.xerces.internal.xni.XMLAttributes
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

class XMLAttributes : public ::java::lang::Object {
	$interface(XMLAttributes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t addAttribute(::com::sun::org::apache::xerces::internal::xni::QName* attrName, $String* attrType, $String* attrValue) {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* getAugmentations(int32_t attributeIndex) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* getAugmentations($String* uri, $String* localPart) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* getAugmentations($String* qName) {return nullptr;}
	virtual int32_t getIndex($String* qName) {return 0;}
	virtual int32_t getIndex($String* uri, $String* localPart) {return 0;}
	virtual int32_t getLength() {return 0;}
	virtual $String* getLocalName(int32_t index) {return nullptr;}
	virtual void getName(int32_t attrIndex, ::com::sun::org::apache::xerces::internal::xni::QName* attrName) {}
	virtual $String* getNonNormalizedValue(int32_t attrIndex) {return nullptr;}
	virtual $String* getPrefix(int32_t index) {return nullptr;}
	virtual $String* getQName(int32_t index) {return nullptr;}
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* getQualifiedName(int32_t index) {return nullptr;}
	virtual $String* getType(int32_t index) {return nullptr;}
	virtual $String* getType($String* qName) {return nullptr;}
	virtual $String* getType($String* uri, $String* localName) {return nullptr;}
	virtual $String* getURI(int32_t index) {return nullptr;}
	virtual $String* getValue(int32_t index) {return nullptr;}
	virtual $String* getValue($String* qName) {return nullptr;}
	virtual $String* getValue($String* uri, $String* localName) {return nullptr;}
	virtual bool isSpecified(int32_t attrIndex) {return false;}
	virtual void removeAllAttributes() {}
	virtual void removeAttributeAt(int32_t attrIndex) {}
	virtual void setAugmentations(int32_t attrIndex, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) {}
	virtual void setName(int32_t attrIndex, ::com::sun::org::apache::xerces::internal::xni::QName* attrName) {}
	virtual void setNonNormalizedValue(int32_t attrIndex, $String* attrValue) {}
	virtual void setSpecified(int32_t attrIndex, bool specified) {}
	virtual void setType(int32_t attrIndex, $String* attrType) {}
	virtual void setValue(int32_t attrIndex, $String* attrValue) {}
	virtual void setValue(int32_t attrIndex, $String* attrValue, ::com::sun::org::apache::xerces::internal::xni::XMLString* value) {}
};

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_XMLAttributes_h_