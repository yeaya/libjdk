#ifndef _sun_util_resources_cldr_ext_LocaleNames_asa_h_
#define _sun_util_resources_cldr_ext_LocaleNames_asa_h_
//$ class sun.util.resources.cldr.ext.LocaleNames_asa
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

class LocaleNames_asa : public ::sun::util::resources::OpenListResourceBundle {
	$class(LocaleNames_asa, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	LocaleNames_asa();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_ext_LocaleNames_asa_h_