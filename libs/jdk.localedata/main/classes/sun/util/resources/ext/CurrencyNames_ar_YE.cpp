#include <sun/util/resources/ext/CurrencyNames_ar_YE.h>

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

$MethodInfo _CurrencyNames_ar_YE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_YE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_YE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_YE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_YE",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_YE_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_YE($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_YE));
}

void CurrencyNames_ar_YE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_YE::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("YER"_s),
		$of(u"ر.ي.\u200f"_s)
	})});
}

CurrencyNames_ar_YE::CurrencyNames_ar_YE() {
}

$Class* CurrencyNames_ar_YE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_YE, name, initialize, &_CurrencyNames_ar_YE_ClassInfo_, allocate$CurrencyNames_ar_YE);
	return class$;
}

$Class* CurrencyNames_ar_YE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun