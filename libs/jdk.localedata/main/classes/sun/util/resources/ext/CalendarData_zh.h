#ifndef _sun_util_resources_ext_CalendarData_zh_h_
#define _sun_util_resources_ext_CalendarData_zh_h_
//$ class sun.util.resources.ext.CalendarData_zh
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CalendarData_zh : public ::sun::util::resources::LocaleNamesBundle {
	$class(CalendarData_zh, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CalendarData_zh();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CalendarData_zh_h_