#ifndef _sun_util_resources_cldr_ext_CurrencyNames_vi_h_
#define _sun_util_resources_cldr_ext_CurrencyNames_vi_h_
//$ class sun.util.resources.cldr.ext.CurrencyNames_vi
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

class CurrencyNames_vi : public ::sun::util::resources::OpenListResourceBundle {
	$class(CurrencyNames_vi, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	CurrencyNames_vi();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_ext_CurrencyNames_vi_h_