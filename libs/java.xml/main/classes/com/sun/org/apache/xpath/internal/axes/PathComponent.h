#ifndef _com_sun_org_apache_xpath_internal_axes_PathComponent_h_
#define _com_sun_org_apache_xpath_internal_axes_PathComponent_h_
//$ interface com.sun.org.apache.xpath.internal.axes.PathComponent
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

class $export PathComponent : public ::java::lang::Object {
	$interface(PathComponent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getAnalysisBits() {return 0;}
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_PathComponent_h_