#ifndef _sun_util_resources_ext_CalendarData_th_h_
#define _sun_util_resources_ext_CalendarData_th_h_
//$ class sun.util.resources.ext.CalendarData_th
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CalendarData_th : public ::sun::util::resources::LocaleNamesBundle {
	$class(CalendarData_th, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CalendarData_th();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CalendarData_th_h_