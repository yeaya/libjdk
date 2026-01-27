#ifndef _sun_util_resources_cldr_ext_LocaleNames_sw_h_
#define _sun_util_resources_cldr_ext_LocaleNames_sw_h_
//$ class sun.util.resources.cldr.ext.LocaleNames_sw
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

class LocaleNames_sw : public ::sun::util::resources::OpenListResourceBundle {
	$class(LocaleNames_sw, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	LocaleNames_sw();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_ext_LocaleNames_sw_h_