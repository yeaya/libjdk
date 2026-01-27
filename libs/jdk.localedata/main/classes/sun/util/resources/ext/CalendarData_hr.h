#ifndef _sun_util_resources_ext_CalendarData_hr_h_
#define _sun_util_resources_ext_CalendarData_hr_h_
//$ class sun.util.resources.ext.CalendarData_hr
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CalendarData_hr : public ::sun::util::resources::LocaleNamesBundle {
	$class(CalendarData_hr, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CalendarData_hr();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CalendarData_hr_h_