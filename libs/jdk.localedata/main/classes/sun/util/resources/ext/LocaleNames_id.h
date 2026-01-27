#ifndef _sun_util_resources_ext_LocaleNames_id_h_
#define _sun_util_resources_ext_LocaleNames_id_h_
//$ class sun.util.resources.ext.LocaleNames_id
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class LocaleNames_id : public ::sun::util::resources::LocaleNamesBundle {
	$class(LocaleNames_id, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	LocaleNames_id();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_LocaleNames_id_h_