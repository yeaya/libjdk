#include <sun/util/resources/cldr/ext/CurrencyNames_uz_Cyrl.h>

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

$MethodInfo _CurrencyNames_uz_Cyrl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_uz_Cyrl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_uz_Cyrl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_uz_Cyrl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_uz_Cyrl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_uz_Cyrl_MethodInfo_
};

$Object* allocate$CurrencyNames_uz_Cyrl($Class* clazz) {
	return $of($alloc(CurrencyNames_uz_Cyrl));
}

void CurrencyNames_uz_Cyrl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_uz_Cyrl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("RON"_s),
			$of("RON"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of(u"฿"_s)
		}),
		$$new($ObjectArray, {
			$of("UZS"_s),
			$of(u"сўм"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Голланд Антил гульдени"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"Аргентина песоси"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"Аруба флорини"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"Барбадос доллари"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Бермуда доллари"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"Боливия болвиани"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Бразил реали"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Багама доллари"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Белиз доллари"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Канада доллари"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"Чили песоси"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Хитой юани"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Колумбия песоси"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Коста-Рика колони"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Куба Айирбошлаш песоси"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"Куба песоси"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"Доминикан песоси"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Жазоир динори"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Миср фунти"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Евро"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Фолькленд ороли фунти"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Инглиз фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"Гватемала кветзали"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Гаяна доллари"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Гондурас лемпираси"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"Гаити гурдаси"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Ҳинд рупияси"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Ямайка доллари"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Япон йенаси"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Кайман ороли Доллари"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Ливия динори"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Марокаш дирҳами"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"Мексика песоси"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Никарагуа кордобаси"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"Панама бальбоаси"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"Перу сол"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"Парагвай гуарани"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Рус рубли"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"Суринам доллари"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Тринидад ва Тобаго доллари"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"АҚШ доллари"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"Уругвай песоси"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"Ўзбекистон сўм"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Венесуэла боливари (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Венесуэла боливари"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"Шарқий Кариб доллари"_s)
		})
	}));
	return data;
}

CurrencyNames_uz_Cyrl::CurrencyNames_uz_Cyrl() {
}

$Class* CurrencyNames_uz_Cyrl::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_uz_Cyrl, name, initialize, &_CurrencyNames_uz_Cyrl_ClassInfo_, allocate$CurrencyNames_uz_Cyrl);
	return class$;
}

$Class* CurrencyNames_uz_Cyrl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun