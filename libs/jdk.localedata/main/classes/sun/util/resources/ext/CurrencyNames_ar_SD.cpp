#include <sun/util/resources/ext/CurrencyNames_ar_SD.h>

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

$MethodInfo _CurrencyNames_ar_SD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_SD, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_SD, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_SD_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_SD",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_SD_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_SD($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_SD));
}

void CurrencyNames_ar_SD::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_SD::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("SDD"_s),
			$of(u"د.س.\u200f"_s)
		}),
		$$new($ObjectArray, {
			$of("SDG"_s),
			$of(u"ج.س.\u200f"_s)
		})
	});
}

CurrencyNames_ar_SD::CurrencyNames_ar_SD() {
}

$Class* CurrencyNames_ar_SD::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_SD, name, initialize, &_CurrencyNames_ar_SD_ClassInfo_, allocate$CurrencyNames_ar_SD);
	return class$;
}

$Class* CurrencyNames_ar_SD::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun