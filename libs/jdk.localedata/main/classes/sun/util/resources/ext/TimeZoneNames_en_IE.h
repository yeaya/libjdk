#ifndef _sun_util_resources_ext_TimeZoneNames_en_IE_h_
#define _sun_util_resources_ext_TimeZoneNames_en_IE_h_
//$ class sun.util.resources.ext.TimeZoneNames_en_IE
//$ extends sun.util.resources.TimeZoneNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class TimeZoneNames_en_IE : public ::sun::util::resources::TimeZoneNamesBundle {
	$class(TimeZoneNames_en_IE, $NO_CLASS_INIT, ::sun::util::resources::TimeZoneNamesBundle)
public:
	TimeZoneNames_en_IE();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_TimeZoneNames_en_IE_h_