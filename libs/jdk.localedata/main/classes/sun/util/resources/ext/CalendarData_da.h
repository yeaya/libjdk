#ifndef _sun_util_resources_ext_CalendarData_da_h_
#define _sun_util_resources_ext_CalendarData_da_h_
//$ class sun.util.resources.ext.CalendarData_da
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CalendarData_da : public ::sun::util::resources::LocaleNamesBundle {
	$class(CalendarData_da, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CalendarData_da();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CalendarData_da_h_