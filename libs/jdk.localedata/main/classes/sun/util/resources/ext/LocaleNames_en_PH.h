#ifndef _sun_util_resources_ext_LocaleNames_en_PH_h_
#define _sun_util_resources_ext_LocaleNames_en_PH_h_
//$ class sun.util.resources.ext.LocaleNames_en_PH
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class LocaleNames_en_PH : public ::sun::util::resources::LocaleNamesBundle {
	$class(LocaleNames_en_PH, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	LocaleNames_en_PH();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_LocaleNames_en_PH_h_