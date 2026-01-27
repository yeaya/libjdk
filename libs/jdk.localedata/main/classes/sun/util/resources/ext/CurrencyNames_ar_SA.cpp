#include <sun/util/resources/ext/CurrencyNames_ar_SA.h>

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

$MethodInfo _CurrencyNames_ar_SA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_SA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_SA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_SA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_SA",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_SA_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_SA($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_SA));
}

void CurrencyNames_ar_SA::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_SA::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("SAR"_s),
		$of(u"ر.س.\u200f"_s)
	})});
}

CurrencyNames_ar_SA::CurrencyNames_ar_SA() {
}

$Class* CurrencyNames_ar_SA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_SA, name, initialize, &_CurrencyNames_ar_SA_ClassInfo_, allocate$CurrencyNames_ar_SA);
	return class$;
}

$Class* CurrencyNames_ar_SA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun