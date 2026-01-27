#ifndef _sun_util_resources_cldr_ext_TimeZoneNames_hsb_h_
#define _sun_util_resources_cldr_ext_TimeZoneNames_hsb_h_
//$ class sun.util.resources.cldr.ext.TimeZoneNames_hsb
//$ extends sun.util.resources.TimeZoneNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

class TimeZoneNames_hsb : public ::sun::util::resources::TimeZoneNamesBundle {
	$class(TimeZoneNames_hsb, $NO_CLASS_INIT, ::sun::util::resources::TimeZoneNamesBundle)
public:
	TimeZoneNames_hsb();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_ext_TimeZoneNames_hsb_h_