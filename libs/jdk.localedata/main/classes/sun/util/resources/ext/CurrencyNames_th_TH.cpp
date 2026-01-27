#include <sun/util/resources/ext/CurrencyNames_th_TH.h>

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

$MethodInfo _CurrencyNames_th_TH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_th_TH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_th_TH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_th_TH_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_th_TH",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_th_TH_MethodInfo_
};

$Object* allocate$CurrencyNames_th_TH($Class* clazz) {
	return $of($alloc(CurrencyNames_th_TH));
}

void CurrencyNames_th_TH::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_th_TH::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("THB"_s),
		$of(u"฿"_s)
	})});
}

CurrencyNames_th_TH::CurrencyNames_th_TH() {
}

$Class* CurrencyNames_th_TH::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_th_TH, name, initialize, &_CurrencyNames_th_TH_ClassInfo_, allocate$CurrencyNames_th_TH);
	return class$;
}

$Class* CurrencyNames_th_TH::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun