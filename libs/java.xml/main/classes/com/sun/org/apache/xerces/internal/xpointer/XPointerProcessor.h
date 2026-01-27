#ifndef _com_sun_org_apache_xerces_internal_xpointer_XPointerProcessor_h_
#define _com_sun_org_apache_xerces_internal_xpointer_XPointerProcessor_h_
//$ interface com.sun.org.apache.xerces.internal.xpointer.XPointerProcessor
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

class XPointerProcessor : public ::java::lang::Object {
	$interface(XPointerProcessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool isFragmentResolved() {return false;}
	virtual bool isXPointerResolved() {return false;}
	virtual void parseXPointer($String* xpointer) {}
	virtual bool resolveXPointer(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs, int32_t event) {return false;}
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

#endif // _com_sun_org_apache_xerces_internal_xpointer_XPointerProcessor_h_