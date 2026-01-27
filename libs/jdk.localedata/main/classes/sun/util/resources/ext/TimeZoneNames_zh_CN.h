#ifndef _sun_util_resources_ext_TimeZoneNames_zh_CN_h_
#define _sun_util_resources_ext_TimeZoneNames_zh_CN_h_
//$ class sun.util.resources.ext.TimeZoneNames_zh_CN
//$ extends sun.util.resources.TimeZoneNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class TimeZoneNames_zh_CN : public ::sun::util::resources::TimeZoneNamesBundle {
	$class(TimeZoneNames_zh_CN, $NO_CLASS_INIT, ::sun::util::resources::TimeZoneNamesBundle)
public:
	TimeZoneNames_zh_CN();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_TimeZoneNames_zh_CN_h_