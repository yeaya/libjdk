#ifndef _sun_util_resources_ext_CalendarData_mk_h_
#define _sun_util_resources_ext_CalendarData_mk_h_
//$ class sun.util.resources.ext.CalendarData_mk
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CalendarData_mk : public ::sun::util::resources::LocaleNamesBundle {
	$class(CalendarData_mk, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CalendarData_mk();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CalendarData_mk_h_