#include <sun/util/resources/cldr/ext/LocaleNames_sr_Cyrl_BA.h>

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

$MethodInfo _LocaleNames_sr_Cyrl_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sr_Cyrl_BA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sr_Cyrl_BA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sr_Cyrl_BA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sr_Cyrl_BA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sr_Cyrl_BA_MethodInfo_
};

$Object* allocate$LocaleNames_sr_Cyrl_BA($Class* clazz) {
	return $of($alloc(LocaleNames_sr_Cyrl_BA));
}

void LocaleNames_sr_Cyrl_BA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sr_Cyrl_BA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"свијет"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Сјеверноамерички континент"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Сјеверна Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Сјеверна и Јужна Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Сјеверна Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Сјеверна Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"острво Асенсион"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Бјелорусија"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Кокосова (Килинг) острва"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Конго"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"острво Клипертон"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Кабо Верде"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Чешка Република"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Њемачка"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Јужна Џорџија и Јужна Сендвичка острва"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"Гвам"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Хонгконг (САО Кине)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"острво Херд и острва Макдоналд"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Свети Китс и Невис"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Сјеверна Кореја"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Сјеверна Македонија"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"САР Макао"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Сјеверна Маријанска острва"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"острво Норфок"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Нијуе"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Свети Пјер и Микелон"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"палестинске територије"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Реунион"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Спољна острва САД"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Свети Винсент и Гренадини"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Британска Дјевичанска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Америчка Дјевичанска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"бјелоруски"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"бамананкан"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"бангла"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"њемачки"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"хаићански креолски"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"лаошки"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"сјеверни ндебеле"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"сјеверни сами"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"синхалски"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"исикоса"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"исизулу"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"мапудунгун"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"њемачки (Швајцарска)"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"сјеверни лури"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"мохок"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"нискоњемачки"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"н’ко"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"јужни шилха"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"централноатласки тамашек"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"стандардни марокански тамашек"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"редослијед сортирања"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"систем мјерних јединица"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"мјанмарске цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"подразумијевани Unicode редослијед сортирања"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"претрага опште намјене"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"стандардни редослијед сортирања"_s)
		})
	}));
	return data;
}

LocaleNames_sr_Cyrl_BA::LocaleNames_sr_Cyrl_BA() {
}

$Class* LocaleNames_sr_Cyrl_BA::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sr_Cyrl_BA, name, initialize, &_LocaleNames_sr_Cyrl_BA_ClassInfo_, allocate$LocaleNames_sr_Cyrl_BA);
	return class$;
}

$Class* LocaleNames_sr_Cyrl_BA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun