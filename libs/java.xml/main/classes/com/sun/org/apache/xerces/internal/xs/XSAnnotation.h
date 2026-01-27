#ifndef _com_sun_org_apache_xerces_internal_xs_XSAnnotation_h_
#define _com_sun_org_apache_xerces_internal_xs_XSAnnotation_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSAnnotation
//$ extends com.sun.org.apache.xerces.internal.xs.XSObject

#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>

#pragma push_macro("SAX_CONTENTHANDLER")
#undef SAX_CONTENTHANDLER
#pragma push_macro("W3C_DOM_DOCUMENT")
#undef W3C_DOM_DOCUMENT
#pragma push_macro("W3C_DOM_ELEMENT")
#undef W3C_DOM_ELEMENT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

class XSAnnotation : public ::com::sun::org::apache::xerces::internal::xs::XSObject {
	$interface(XSAnnotation, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSObject)
public:
	virtual $String* getAnnotationString() {return nullptr;}
	virtual bool writeAnnotation(Object$* target, int16_t targetType) {return false;}
	static const int16_t W3C_DOM_ELEMENT = 1;
	static const int16_t SAX_CONTENTHANDLER = 2;
	static const int16_t W3C_DOM_DOCUMENT = 3;
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("SAX_CONTENTHANDLER")
#pragma pop_macro("W3C_DOM_DOCUMENT")
#pragma pop_macro("W3C_DOM_ELEMENT")

#endif // _com_sun_org_apache_xerces_internal_xs_XSAnnotation_h_