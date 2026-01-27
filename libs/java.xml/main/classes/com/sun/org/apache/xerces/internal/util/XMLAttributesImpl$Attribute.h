#ifndef _com_sun_org_apache_xerces_internal_util_XMLAttributesImpl$Attribute_h_
#define _com_sun_org_apache_xerces_internal_util_XMLAttributesImpl$Attribute_h_
//$ class com.sun.org.apache.xerces.internal.util.XMLAttributesImpl$Attribute
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
						namespace util {

class XMLAttributesImpl$Attribute : public ::java::lang::Object {
	$class(XMLAttributesImpl$Attribute, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLAttributesImpl$Attribute();
	void init$();
	::com::sun::org::apache::xerces::internal::xni::QName* name = nullptr;
	$String* type = nullptr;
	$String* value = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* xmlValue = nullptr;
	$String* nonNormalizedValue = nullptr;
	bool specified = false;
	::com::sun::org::apache::xerces::internal::xni::Augmentations* augs = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl$Attribute* next = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_XMLAttributesImpl$Attribute_h_