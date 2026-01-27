#ifndef _sun_util_resources_cldr_ext_LocaleNames_bm_h_
#define _sun_util_resources_cldr_ext_LocaleNames_bm_h_
//$ class sun.util.resources.cldr.ext.LocaleNames_bm
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

class LocaleNames_bm : public ::sun::util::resources::OpenListResourceBundle {
	$class(LocaleNames_bm, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	LocaleNames_bm();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_ext_LocaleNames_bm_h_