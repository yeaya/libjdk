#ifndef _sun_util_resources_cldr_ext_TimeZoneNames_yo_h_
#define _sun_util_resources_cldr_ext_TimeZoneNames_yo_h_
//$ class sun.util.resources.cldr.ext.TimeZoneNames_yo
//$ extends sun.util.resources.TimeZoneNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

class TimeZoneNames_yo : public ::sun::util::resources::TimeZoneNamesBundle {
	$class(TimeZoneNames_yo, $NO_CLASS_INIT, ::sun::util::resources::TimeZoneNamesBundle)
public:
	TimeZoneNames_yo();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_ext_TimeZoneNames_yo_h_