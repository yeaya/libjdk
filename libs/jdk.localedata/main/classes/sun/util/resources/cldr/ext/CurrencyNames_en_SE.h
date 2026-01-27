#ifndef _sun_util_resources_cldr_ext_CurrencyNames_en_SE_h_
#define _sun_util_resources_cldr_ext_CurrencyNames_en_SE_h_
//$ class sun.util.resources.cldr.ext.CurrencyNames_en_SE
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

class CurrencyNames_en_SE : public ::sun::util::resources::OpenListResourceBundle {
	$class(CurrencyNames_en_SE, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	CurrencyNames_en_SE();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_ext_CurrencyNames_en_SE_h_