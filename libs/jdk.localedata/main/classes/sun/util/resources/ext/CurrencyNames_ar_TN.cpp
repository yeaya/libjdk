#include <sun/util/resources/ext/CurrencyNames_ar_TN.h>

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

$MethodInfo _CurrencyNames_ar_TN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_TN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_TN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_TN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_TN",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_TN_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_TN($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_TN));
}

void CurrencyNames_ar_TN::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_TN::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("TND"_s),
		$of(u"د.ت.\u200f"_s)
	})});
}

CurrencyNames_ar_TN::CurrencyNames_ar_TN() {
}

$Class* CurrencyNames_ar_TN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_TN, name, initialize, &_CurrencyNames_ar_TN_ClassInfo_, allocate$CurrencyNames_ar_TN);
	return class$;
}

$Class* CurrencyNames_ar_TN::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun