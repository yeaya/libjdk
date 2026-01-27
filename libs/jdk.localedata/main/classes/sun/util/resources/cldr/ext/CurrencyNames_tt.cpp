#include <sun/util/resources/cldr/ext/CurrencyNames_tt.h>

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

$MethodInfo _CurrencyNames_tt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_tt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_tt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_tt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_tt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_tt_MethodInfo_
};

$Object* allocate$CurrencyNames_tt($Class* clazz) {
	return $of($alloc(CurrencyNames_tt));
}

void CurrencyNames_tt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_tt::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of(u"₽"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Бразилия реалы"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"кытай юане"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"евро"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"фунт стерлинг"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Индия рупиясе"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"япон иенасы"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Россия сумы"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"АКШ доллары"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"билгесез валюта"_s)
		})
	}));
	return data;
}

CurrencyNames_tt::CurrencyNames_tt() {
}

$Class* CurrencyNames_tt::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_tt, name, initialize, &_CurrencyNames_tt_ClassInfo_, allocate$CurrencyNames_tt);
	return class$;
}

$Class* CurrencyNames_tt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun