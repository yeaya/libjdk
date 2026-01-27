#ifndef _sun_util_resources_ext_LocaleNames_sq_h_
#define _sun_util_resources_ext_LocaleNames_sq_h_
//$ class sun.util.resources.ext.LocaleNames_sq
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class LocaleNames_sq : public ::sun::util::resources::LocaleNamesBundle {
	$class(LocaleNames_sq, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	LocaleNames_sq();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_LocaleNames_sq_h_