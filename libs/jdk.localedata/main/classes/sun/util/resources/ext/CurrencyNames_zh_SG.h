#ifndef _sun_util_resources_ext_CurrencyNames_zh_SG_h_
#define _sun_util_resources_ext_CurrencyNames_zh_SG_h_
//$ class sun.util.resources.ext.CurrencyNames_zh_SG
//$ extends sun.util.resources.OpenListResourceBundle

#include <java/lang/Array.h>
#include <sun/util/resources/OpenListResourceBundle.h>

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

class CurrencyNames_zh_SG : public ::sun::util::resources::OpenListResourceBundle {
	$class(CurrencyNames_zh_SG, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	CurrencyNames_zh_SG();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

			} // ext
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_ext_CurrencyNames_zh_SG_h_