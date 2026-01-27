#ifndef _com_sun_org_apache_xerces_internal_xs_datatypes_XSFloat_h_
#define _com_sun_org_apache_xerces_internal_xs_datatypes_XSFloat_h_
//$ interface com.sun.org.apache.xerces.internal.xs.datatypes.XSFloat
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							namespace datatypes {

class XSFloat : public ::java::lang::Object {
	$interface(XSFloat, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual float getValue() {return 0.0;}
};

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_datatypes_XSFloat_h_