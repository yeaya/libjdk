#ifndef _com_sun_org_apache_xerces_internal_util_XMLAttributesImpl_h_
#define _com_sun_org_apache_xerces_internal_util_XMLAttributesImpl_h_
//$ class com.sun.org.apache.xerces.internal.util.XMLAttributesImpl
//$ extends com.sun.org.apache.xerces.internal.xni.XMLAttributes
//$ implements com.sun.xml.internal.stream.XMLBufferListener

#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/xml/internal/stream/XMLBufferListener.h>
#include <java/lang/Array.h>

#pragma push_macro("MAX_HASH_COLLISIONS")
#undef MAX_HASH_COLLISIONS
#pragma push_macro("MULTIPLIERS_MASK")
#undef MULTIPLIERS_MASK
#pragma push_macro("MULTIPLIERS_SIZE")
#undef MULTIPLIERS_SIZE
#pragma push_macro("SIZE_LIMIT")
#undef SIZE_LIMIT
#pragma push_macro("TABLE_SIZE")
#undef TABLE_SIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class XMLAttributesImpl$Attribute;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class XMLAttributesImpl : public ::com::sun::org::apache::xerces::internal::xni::XMLAttributes, public ::com::sun::xml::internal::stream::XMLBufferListener {
	$class(XMLAttributesImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes, ::com::sun::xml::internal::stream::XMLBufferListener)
public:
	XMLAttributesImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t tableSize);
	virtual int32_t addAttribute(::com::sun::org::apache::xerces::internal::xni::QName* name, $String* type, $String* value) override;
	virtual int32_t addAttribute(::com::sun::org::apache::xerces::internal::xni::QName* name, $String* type, $String* value, ::com::sun::org::apache::xerces::internal::xni::XMLString* valueCache);
	virtual void addAttributeNS(::com::sun::org::apache::xerces::internal::xni::QName* name, $String* type, $String* value);
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* checkDuplicatesNS();
	::com::sun::org::apache::xerces::internal::xni::QName* checkManyDuplicatesNS();
	virtual void cleanTableView();
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* getAugmentations($String* uri, $String* localName) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* getAugmentations($String* qName) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::Augmentations* getAugmentations(int32_t attributeIndex) override;
	virtual int32_t getIndex($String* qName) override;
	virtual int32_t getIndex($String* uri, $String* localPart) override;
	virtual int32_t getIndexByLocalName($String* localPart);
	virtual int32_t getIndexFast($String* qName);
	virtual int32_t getIndexFast($String* uri, $String* localPart);
	virtual int32_t getLength() override;
	virtual $String* getLocalName(int32_t index) override;
	virtual void getName(int32_t attrIndex, ::com::sun::org::apache::xerces::internal::xni::QName* attrName) override;
	virtual $String* getName(int32_t index);
	virtual $String* getNonNormalizedValue(int32_t attrIndex) override;
	virtual $String* getPrefix(int32_t index) override;
	virtual $String* getQName(int32_t index) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::QName* getQualifiedName(int32_t index) override;
	$String* getReportableType($String* type);
	virtual int32_t getTableViewBucket($String* qname);
	virtual int32_t getTableViewBucket($String* localpart, $String* uri);
	virtual $String* getType(int32_t index) override;
	virtual $String* getType($String* qname) override;
	virtual $String* getType($String* uri, $String* localName) override;
	virtual $String* getURI(int32_t index) override;
	virtual $String* getValue(int32_t index) override;
	virtual $String* getValue($String* qname) override;
	virtual $String* getValue($String* uri, $String* localName) override;
	void growTableView();
	int32_t hash($String* localpart);
	int32_t hash($String* localpart, $String* uri);
	int32_t hash0($String* symbol);
	virtual bool isSpecified(int32_t attrIndex) override;
	virtual void prepareAndPopulateTableView();
	void prepareAndPopulateTableView(int32_t count);
	void prepareAndPopulateTableViewNS(int32_t count);
	virtual void prepareTableView();
	void rebalanceTableView(int32_t count);
	void rebalanceTableViewNS(int32_t count);
	virtual void refresh() override;
	virtual void refresh(int32_t pos) override;
	virtual void removeAllAttributes() override;
	virtual void removeAttributeAt(int32_t attrIndex) override;
	virtual void setAugmentations(int32_t attrIndex, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void setName(int32_t attrIndex, ::com::sun::org::apache::xerces::internal::xni::QName* attrName) override;
	virtual void setNamespaces(bool namespaces);
	virtual void setNonNormalizedValue(int32_t attrIndex, $String* attrValue) override;
	virtual void setSpecified(int32_t attrIndex, bool specified) override;
	virtual void setType(int32_t attrIndex, $String* attrType) override;
	virtual void setURI(int32_t attrIndex, $String* uri);
	virtual void setValue(int32_t attrIndex, $String* attrValue) override;
	virtual void setValue(int32_t attrIndex, $String* attrValue, ::com::sun::org::apache::xerces::internal::xni::XMLString* value) override;
	virtual $String* toString() override;
	static const int32_t TABLE_SIZE = 101;
	static const int32_t MAX_HASH_COLLISIONS = 40;
	static const int32_t MULTIPLIERS_SIZE = 32; // 1 << 5
	static const int32_t MULTIPLIERS_MASK = 31; // MULTIPLIERS_SIZE - 1
	static const int32_t SIZE_LIMIT = 20;
	bool fNamespaces = false;
	int32_t fLargeCount = 0;
	int32_t fLength = 0;
	$Array<::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl$Attribute>* fAttributes = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl$Attribute>* fAttributeTableView = nullptr;
	$ints* fAttributeTableViewChainState = nullptr;
	int32_t fTableViewBuckets = 0;
	bool fIsTableViewConsistent = false;
	$ints* fHashMultipliers = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("MAX_HASH_COLLISIONS")
#pragma pop_macro("MULTIPLIERS_MASK")
#pragma pop_macro("MULTIPLIERS_SIZE")
#pragma pop_macro("SIZE_LIMIT")
#pragma pop_macro("TABLE_SIZE")

#endif // _com_sun_org_apache_xerces_internal_util_XMLAttributesImpl_h_