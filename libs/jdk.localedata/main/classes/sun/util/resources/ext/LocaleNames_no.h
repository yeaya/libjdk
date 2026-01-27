#ifndef _sun_util_resources_ext_LocaleNames_no_h_
#define _sun_util_resources_ext_LocaleNames_no_h_
//$ class sun.util.resources.ext.LocaleNames_no
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class LocaleNames_no : public ::sun::util::resources::LocaleNamesBundle {
	$class(LocaleNames_no, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	LocaleNames_no();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_LocaleNames_no_h_