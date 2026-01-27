#include <sun/util/resources/ext/CurrencyNames_lv_LV.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_lv_LV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_lv_LV, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_lv_LV, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_lv_LV_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_lv_LV",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_lv_LV_MethodInfo_
};

$Object* allocate$CurrencyNames_lv_LV($Class* clazz) {
	return $of($alloc(CurrencyNames_lv_LV));
}

void CurrencyNames_lv_LV::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_lv_LV::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("LVL"_s),
			$of("Ls"_s)
		})
	});
}

CurrencyNames_lv_LV::CurrencyNames_lv_LV() {
}

$Class* CurrencyNames_lv_LV::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_lv_LV, name, initialize, &_CurrencyNames_lv_LV_ClassInfo_, allocate$CurrencyNames_lv_LV);
	return class$;
}

$Class* CurrencyNames_lv_LV::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun