#include <sun/util/resources/cldr/ext/CurrencyNames_wo.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _CurrencyNames_wo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_wo, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_wo, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_wo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_wo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_wo_MethodInfo_
};

$Object* allocate$CurrencyNames_wo($Class* clazz) {
	return $of($alloc(CurrencyNames_wo));
}

void CurrencyNames_wo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_wo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Real bu Bresil"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan bu Siin"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Pound bu Grànd Brëtaañ"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupee bu End"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yen bu Sapoŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Ruble bi Rsis"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dolaaru US"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Franc CFA bu Afrik Sowwu-jant"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Xaalis buñ Xamul"_s)
		})
	}));
	return data;
}

CurrencyNames_wo::CurrencyNames_wo() {
}

$Class* CurrencyNames_wo::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_wo, name, initialize, &_CurrencyNames_wo_ClassInfo_, allocate$CurrencyNames_wo);
	return class$;
}

$Class* CurrencyNames_wo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun