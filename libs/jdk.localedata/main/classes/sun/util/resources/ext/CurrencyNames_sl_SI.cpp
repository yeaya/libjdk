#include <sun/util/resources/ext/CurrencyNames_sl_SI.h>

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

$MethodInfo _CurrencyNames_sl_SI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sl_SI, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sl_SI, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sl_SI_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_sl_SI",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sl_SI_MethodInfo_
};

$Object* allocate$CurrencyNames_sl_SI($Class* clazz) {
	return $of($alloc(CurrencyNames_sl_SI));
}

void CurrencyNames_sl_SI::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_sl_SI::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("SIT"_s),
			$of("tol"_s)
		})
	});
}

CurrencyNames_sl_SI::CurrencyNames_sl_SI() {
}

$Class* CurrencyNames_sl_SI::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sl_SI, name, initialize, &_CurrencyNames_sl_SI_ClassInfo_, allocate$CurrencyNames_sl_SI);
	return class$;
}

$Class* CurrencyNames_sl_SI::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun