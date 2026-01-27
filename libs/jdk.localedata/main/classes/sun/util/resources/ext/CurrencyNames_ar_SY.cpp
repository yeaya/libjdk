#include <sun/util/resources/ext/CurrencyNames_ar_SY.h>

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

$MethodInfo _CurrencyNames_ar_SY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_SY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_SY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_SY_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_SY",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_SY_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_SY($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_SY));
}

void CurrencyNames_ar_SY::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_SY::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("SYP"_s),
		$of(u"ل.س.\u200f"_s)
	})});
}

CurrencyNames_ar_SY::CurrencyNames_ar_SY() {
}

$Class* CurrencyNames_ar_SY::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_SY, name, initialize, &_CurrencyNames_ar_SY_ClassInfo_, allocate$CurrencyNames_ar_SY);
	return class$;
}

$Class* CurrencyNames_ar_SY::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun