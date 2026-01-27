#ifndef _com_sun_org_apache_xerces_internal_xpointer_XPointerPart_h_
#define _com_sun_org_apache_xerces_internal_xpointer_XPointerPart_h_
//$ interface com.sun.org.apache.xerces.internal.xpointer.XPointerPart
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EVENT_ELEMENT_EMPTY")
#undef EVENT_ELEMENT_EMPTY
#pragma push_macro("EVENT_ELEMENT_END")
#undef EVENT_ELEMENT_END
#pragma push_macro("EVENT_ELEMENT_START")
#undef EVENT_ELEMENT_START

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
						namespace xpointer {

class XPointerPart : public ::java::lang::Object {
	$interface(XPointerPart, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getSchemeData() {return nullptr;}
	virtual $String* getSchemeName() {return nullptr;}
	virtual bool isChildFragmentResolved() {return false;}
	virtual bool isFragmentResolved() {return false;}
	virtual void parseXPointer($String* part) {}
	virtual bool resolveXPointer(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs, int32_t event) {return false;}
	virtual void setSchemeData($String* schemeData) {}
	virtual void setSchemeName($String* schemeName) {}
	static const int32_t EVENT_ELEMENT_START = 0;
	static const int32_t EVENT_ELEMENT_END = 1;
	static const int32_t EVENT_ELEMENT_EMPTY = 2;
};

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EVENT_ELEMENT_EMPTY")
#pragma pop_macro("EVENT_ELEMENT_END")
#pragma pop_macro("EVENT_ELEMENT_START")

#endif // _com_sun_org_apache_xerces_internal_xpointer_XPointerPart_h_