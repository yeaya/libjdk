#ifndef _sun_util_resources_ext_LocaleNames_es_h_
#define _sun_util_resources_ext_LocaleNames_es_h_
//$ class sun.util.resources.ext.LocaleNames_es
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class LocaleNames_es : public ::sun::util::resources::LocaleNamesBundle {
	$class(LocaleNames_es, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	LocaleNames_es();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_LocaleNames_es_h_