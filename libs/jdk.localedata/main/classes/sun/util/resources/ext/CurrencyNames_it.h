#ifndef _sun_util_resources_ext_CurrencyNames_it_h_
#define _sun_util_resources_ext_CurrencyNames_it_h_
//$ class sun.util.resources.ext.CurrencyNames_it
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CurrencyNames_it : public ::sun::util::resources::LocaleNamesBundle {
	$class(CurrencyNames_it, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CurrencyNames_it();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CurrencyNames_it_h_