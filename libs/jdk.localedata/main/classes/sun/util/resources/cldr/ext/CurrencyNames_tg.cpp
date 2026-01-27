#include <sun/util/resources/cldr/ext/CurrencyNames_tg.h>

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

$MethodInfo _CurrencyNames_tg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_tg, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_tg, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_tg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_tg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_tg_MethodInfo_
};

$Object* allocate$CurrencyNames_tg($Class* clazz) {
	return $of($alloc(CurrencyNames_tg));
}

void CurrencyNames_tg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_tg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("TJS"_s),
			$of(u"сом."_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Реали бразилиягӣ"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Иенаи хитоӣ"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Евро"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Фунт стерлинги британӣ"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Рупияи ҳиндустонӣ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Иенаи японӣ"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Рубли русӣ"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"Сомонӣ"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Доллари ИМА"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Асъори номаълум"_s)
		})
	}));
	return data;
}

CurrencyNames_tg::CurrencyNames_tg() {
}

$Class* CurrencyNames_tg::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_tg, name, initialize, &_CurrencyNames_tg_ClassInfo_, allocate$CurrencyNames_tg);
	return class$;
}

$Class* CurrencyNames_tg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun