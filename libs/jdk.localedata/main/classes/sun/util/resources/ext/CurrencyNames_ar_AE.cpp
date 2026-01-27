#include <sun/util/resources/ext/CurrencyNames_ar_AE.h>

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

$MethodInfo _CurrencyNames_ar_AE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_AE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_AE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_AE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_AE",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_AE_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_AE($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_AE));
}

void CurrencyNames_ar_AE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_AE::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("AED"_s),
		$of(u"د.إ.\u200f"_s)
	})});
}

CurrencyNames_ar_AE::CurrencyNames_ar_AE() {
}

$Class* CurrencyNames_ar_AE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_AE, name, initialize, &_CurrencyNames_ar_AE_ClassInfo_, allocate$CurrencyNames_ar_AE);
	return class$;
}

$Class* CurrencyNames_ar_AE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun