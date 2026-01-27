#include <sun/util/resources/ext/CurrencyNames_ar_BH.h>

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

$MethodInfo _CurrencyNames_ar_BH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_BH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_BH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_BH_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_BH",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_BH_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_BH($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_BH));
}

void CurrencyNames_ar_BH::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_BH::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("BHD"_s),
		$of(u"د.ب.\u200f"_s)
	})});
}

CurrencyNames_ar_BH::CurrencyNames_ar_BH() {
}

$Class* CurrencyNames_ar_BH::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_BH, name, initialize, &_CurrencyNames_ar_BH_ClassInfo_, allocate$CurrencyNames_ar_BH);
	return class$;
}

$Class* CurrencyNames_ar_BH::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun