#ifndef _sun_util_resources_ext_CurrencyNames_pl_PL_h_
#define _sun_util_resources_ext_CurrencyNames_pl_PL_h_
//$ class sun.util.resources.ext.CurrencyNames_pl_PL
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CurrencyNames_pl_PL : public ::sun::util::resources::LocaleNamesBundle {
	$class(CurrencyNames_pl_PL, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CurrencyNames_pl_PL();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CurrencyNames_pl_PL_h_