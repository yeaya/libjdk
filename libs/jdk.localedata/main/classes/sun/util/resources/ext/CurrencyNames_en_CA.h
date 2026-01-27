#ifndef _sun_util_resources_ext_CurrencyNames_en_CA_h_
#define _sun_util_resources_ext_CurrencyNames_en_CA_h_
//$ class sun.util.resources.ext.CurrencyNames_en_CA
//$ extends sun.util.resources.LocaleNamesBundle

#include <java/lang/Array.h>
#include <sun/util/resources/LocaleNamesBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CurrencyNames_en_CA : public ::sun::util::resources::LocaleNamesBundle {
	$class(CurrencyNames_en_CA, $NO_CLASS_INIT, ::sun::util::resources::LocaleNamesBundle)
public:
	CurrencyNames_en_CA();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CurrencyNames_en_CA_h_