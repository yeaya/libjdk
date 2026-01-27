#ifndef _sun_util_resources_cldr_ext_TimeZoneNames_en_LR_h_
#define _sun_util_resources_cldr_ext_TimeZoneNames_en_LR_h_
//$ class sun.util.resources.cldr.ext.TimeZoneNames_en_LR
//$ extends sun.util.resources.TimeZoneNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

class TimeZoneNames_en_LR : public ::sun::util::resources::TimeZoneNamesBundle {
	$class(TimeZoneNames_en_LR, $NO_CLASS_INIT, ::sun::util::resources::TimeZoneNamesBundle)
public:
	TimeZoneNames_en_LR();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_ext_TimeZoneNames_en_LR_h_