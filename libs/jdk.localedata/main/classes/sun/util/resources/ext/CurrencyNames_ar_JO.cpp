#include <sun/util/resources/ext/CurrencyNames_ar_JO.h>

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

$MethodInfo _CurrencyNames_ar_JO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_JO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_JO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_JO_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_JO",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_JO_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_JO($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_JO));
}

void CurrencyNames_ar_JO::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_JO::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("JOD"_s),
		$of(u"د.أ.\u200f"_s)
	})});
}

CurrencyNames_ar_JO::CurrencyNames_ar_JO() {
}

$Class* CurrencyNames_ar_JO::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_JO, name, initialize, &_CurrencyNames_ar_JO_ClassInfo_, allocate$CurrencyNames_ar_JO);
	return class$;
}

$Class* CurrencyNames_ar_JO::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun