#ifndef _sun_util_resources_ext_CalendarData_hi_h_
#define _sun_util_resources_ext_CalendarData_hi_h_
//$ class sun.util.resources.ext.CalendarData_hi
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CalendarData_hi : public ::sun::util::resources::LocaleNamesBundle {
	$class(CalendarData_hi, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CalendarData_hi();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CalendarData_hi_h_