#ifndef _sun_util_resources_ext_CurrencyNames_zh_HK_h_
#define _sun_util_resources_ext_CurrencyNames_zh_HK_h_
//$ class sun.util.resources.ext.CurrencyNames_zh_HK
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CurrencyNames_zh_HK : public ::sun::util::resources::OpenListResourceBundle {
	$class(CurrencyNames_zh_HK, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	CurrencyNames_zh_HK();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CurrencyNames_zh_HK_h_