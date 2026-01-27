#ifndef _sun_util_resources_cldr_ext_CurrencyNames_smn_h_
#define _sun_util_resources_cldr_ext_CurrencyNames_smn_h_
//$ class sun.util.resources.cldr.ext.CurrencyNames_smn
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

class CurrencyNames_smn : public ::sun::util::resources::OpenListResourceBundle {
	$class(CurrencyNames_smn, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	CurrencyNames_smn();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // ext
			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_ext_CurrencyNames_smn_h_