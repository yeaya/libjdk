#include <sun/util/resources/ext/CurrencyNames_it_CH.h>

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

$MethodInfo _CurrencyNames_it_CH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_it_CH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_it_CH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_it_CH_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_it_CH",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_it_CH_MethodInfo_
};

$Object* allocate$CurrencyNames_it_CH($Class* clazz) {
	return $of($alloc(CurrencyNames_it_CH));
}

void CurrencyNames_it_CH::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_it_CH::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("CHF"_s),
		$of("SFr."_s)
	})});
}

CurrencyNames_it_CH::CurrencyNames_it_CH() {
}

$Class* CurrencyNames_it_CH::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_it_CH, name, initialize, &_CurrencyNames_it_CH_ClassInfo_, allocate$CurrencyNames_it_CH);
	return class$;
}

$Class* CurrencyNames_it_CH::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun