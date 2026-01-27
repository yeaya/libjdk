#include <sun/util/resources/ext/CurrencyNames_ar_DZ.h>

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

$MethodInfo _CurrencyNames_ar_DZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_DZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_DZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_DZ_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_DZ",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_DZ_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_DZ($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_DZ));
}

void CurrencyNames_ar_DZ::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_DZ::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("DZD"_s),
		$of(u"د.ج.\u200f"_s)
	})});
}

CurrencyNames_ar_DZ::CurrencyNames_ar_DZ() {
}

$Class* CurrencyNames_ar_DZ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_DZ, name, initialize, &_CurrencyNames_ar_DZ_ClassInfo_, allocate$CurrencyNames_ar_DZ);
	return class$;
}

$Class* CurrencyNames_ar_DZ::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun