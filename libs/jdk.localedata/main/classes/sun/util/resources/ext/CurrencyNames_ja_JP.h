#ifndef _sun_util_resources_ext_CurrencyNames_ja_JP_h_
#define _sun_util_resources_ext_CurrencyNames_ja_JP_h_
//$ class sun.util.resources.ext.CurrencyNames_ja_JP
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CurrencyNames_ja_JP : public ::sun::util::resources::LocaleNamesBundle {
	$class(CurrencyNames_ja_JP, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CurrencyNames_ja_JP();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CurrencyNames_ja_JP_h_