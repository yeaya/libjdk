#ifndef _sun_util_resources_ext_CalendarData_sl_h_
#define _sun_util_resources_ext_CalendarData_sl_h_
//$ class sun.util.resources.ext.CalendarData_sl
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CalendarData_sl : public ::sun::util::resources::LocaleNamesBundle {
	$class(CalendarData_sl, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CalendarData_sl();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CalendarData_sl_h_