#ifndef _sun_util_resources_ext_CurrencyNames_ko_KR_h_
#define _sun_util_resources_ext_CurrencyNames_ko_KR_h_
//$ class sun.util.resources.ext.CurrencyNames_ko_KR
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CurrencyNames_ko_KR : public ::sun::util::resources::LocaleNamesBundle {
	$class(CurrencyNames_ko_KR, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CurrencyNames_ko_KR();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CurrencyNames_ko_KR_h_