#ifndef _com_sun_org_apache_xerces_internal_util_AttributesProxy_h_
#define _com_sun_org_apache_xerces_internal_util_AttributesProxy_h_
//$ class com.sun.org.apache.xerces.internal.util.AttributesProxy
//$ extends org.xml.sax.AttributeList
//$ implements org.xml.sax.ext.Attributes2

#include <org/xml/sax/AttributeList.h>
#include <org/xml/sax/ext/Attributes2.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
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
						namespace util {

class AttributesProxy : public ::org::xml::sax::AttributeList, public ::org::xml::sax::ext::Attributes2 {
	$class(AttributesProxy, $NO_CLASS_INIT, ::org::xml::sax::AttributeList, ::org::xml::sax::ext::Attributes2)
public:
	AttributesProxy();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	::com::sun::org::apache::xerces::internal::xni::XMLAttributes* getAttributes();
	virtual int32_t getIndex($String* qName) override;
	virtual int32_t getIndex($String* uri, $String* localPart) override;
	virtual int32_t getLength() override;
	virtual $String* getLocalName(int32_t index) override;
	virtual $String* getName(int32_t i) override;
	virtual $String* getQName(int32_t index) override;
	virtual $String* getType(int32_t i) override;
	virtual $String* getType($String* name) override;
	virtual $String* getType($String* uri, $String* localName) override;
	virtual $String* getURI(int32_t index) override;
	virtual $String* getValue(int32_t i) override;
	virtual $String* getValue($String* name) override;
	virtual $String* getValue($String* uri, $String* localName) override;
	virtual bool isDeclared(int32_t index) override;
	virtual bool isDeclared($String* qName) override;
	virtual bool isDeclared($String* uri, $String* localName) override;
	virtual bool isSpecified(int32_t index) override;
	virtual bool isSpecified($String* qName) override;
	virtual bool isSpecified($String* uri, $String* localName) override;
	void setAttributes(::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual $String* toString() override;
	::com::sun::org::apache::xerces::internal::xni::XMLAttributes* fAttributes = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_AttributesProxy_h_