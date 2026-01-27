#include <sun/util/resources/ext/LocaleNames_ru.h>

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

$MethodInfo _LocaleNames_ru_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ru, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ru, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ru_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_ru",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_ru_MethodInfo_
};

$Object* allocate$LocaleNames_ru($Class* clazz) {
	return $of($alloc(LocaleNames_ru));
}

void LocaleNames_ru::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_ru::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Андорра"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Объединенные Арабские Эмираты"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Афганистан"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Ангуила"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Албания"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Армения"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"Нидерландские Антильские острова"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ангола"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Аргентина"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Австрия"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Австралия"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Аруба"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Азербайджан"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Босния и Герцеговина"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Барбадос"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Бангладеш"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Бельгия"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Буркина-Фасо"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Болгария"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Бахрейн"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Бурунди"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Бенин"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Бермудские острова"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Бруней"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Боливия"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Бразилия"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Багамские острова"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Бутан"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Ботсвана"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Беларусь"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Белиз"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Канада"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Центральноафриканская Республика"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Конго"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Швейцария"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Кот-д\'Ивуар"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Чили"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Камерун"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Китай"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Колумбия"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Коста-Рика"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Куба"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Зеленый Мыс"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Кипр"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Чехия"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Германия"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Джибути"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Дания"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Доминика"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Доминиканская Республика"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Алжир"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Эквадор"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Эстония"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Египт"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Западная Сахара"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Эритрея"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Испания"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Эфиопия"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Финляндия"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Фиджи"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Микронезия"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Франция"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Габон"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Соединенное Королевство"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Грузия"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Французская Гвинея"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Гана"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Гамбия"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Гвинея"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Гваделупа"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Экваториальная Гвинея"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Греция"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Гватемала"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Гвинея-Бисау"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Гайана"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Гонконг"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Гондурас"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Хорватия"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Гаити"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Венгрия"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Индонезия"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ирландия"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Израиль"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Индия"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Ирак"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Иран"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Исландия"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Италия"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Ямайка"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Иордания"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Япония"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Кения"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Киргизстан"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Камбоджа"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Кирибати"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Коморос"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Северная Корея"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Южная Корея"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Кувейт"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Казахстан"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"Лаос"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Ливан"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Лихтенштейн"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Шри-Ланка"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Либерия"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Лесото"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Литва"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Люксембург"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Латвия"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Ливия"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Марокко"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Монако"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Молдова"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Мадагаскар"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Македония"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Мали"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Мьянма"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Монголия"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Мартиника"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Мавритания"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Монтсерат"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Мальта"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Маврикий"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Мексика"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Малайзия"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Мозамбик"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Намибия"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Новая Каледония"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Нигер"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Нигерия"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Никарагуа"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Нидерланды"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Норвегия"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Непал"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Нию"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Новая Зеландия"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Оман"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Панама"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Перу"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Французская Полинезия"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Папуа - Новая Гвинея"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Филиппины"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Пакистан"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Польша"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Пуэрто-Рико"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Португалия"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Парагвай"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Катар"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Румыния"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Россия"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Руанда"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Саудовская Аравия"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Сейшельские Острова"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Швеция"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Сингапур"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Словения"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Словакия"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Сьерра-Леоне"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Сенегал"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Сомали"_s)
		}),
		$$new($ObjectArray, {
			$of("SP"_s),
			$of(u"Сербия"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Суринам"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Сальвадор"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Сирия"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Свазиленд"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Чад"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"французские южные территории"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Того"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Таиланд"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Таджикистан"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Токелау"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Туркменистан"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Тунис"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"Тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("TP"_s),
			$of(u"Восточный Тимор"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Турция"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Тринидад и Тобаго"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Тайвань"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Танзания"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Украина"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Уганда"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Соединенные Штаты"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Уругвай"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Узбекистан"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Ватикан"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Венесуэла"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Британские Виргинские острова"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Виргинские острова Соединенных Штатов"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Вьетнам"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Вануату"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Йемен"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Майотте"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Южная Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Замбия"_s)
		}),
		$$new($ObjectArray, {
			$of("ZR"_s),
			$of(u"Заир"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Зимбабве"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"афар"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"абхазский"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"африкаанс"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"амхарик"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"арабский"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ассамский"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"аймара"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"азербайджанский"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"башкирский"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"белорусский"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"болгарский"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of(u"бихари"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"бислама"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"бенгальский"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"тибетский"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"бретонский"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"каталанский"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"корсиканский"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"чешский"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"валлийский"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"датский"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"немецкий"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"бутанский"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"греческий"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"английский"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"эсперанто"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"испанский"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"эстонский"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"баскский"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"персидский"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"финский"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"фиджи"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"фарерский"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"французкий"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"фризский"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ирландский"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"гаэльский"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"галисийский"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"гуарани"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"гуярати"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"хаус"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"иврит"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"хинди"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"хорватский"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"венгерский"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"армянский"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"интерлингва"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"индонезийский"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"интерлингва"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"инупиак"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"индонезийский"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"исландский"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"итальянский"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"инуктитут"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"древнееврейский"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"японский"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"идиш"_s)
		}),
		$$new($ObjectArray, {
			$of("jw"_s),
			$of(u"яванский"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"грузинский"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"казахский"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"гренландский"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"камбоджийский"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"канада"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"корейский"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"кашмирский"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"курдский"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"киргизский"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"латинский"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"лингала"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"лаосский"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"литовский"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"латвийский"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"малагасийский"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"маори"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"македонский"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"малайялам"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"монгольский"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"молдаванский"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"маратхи"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"малайский"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"мальтийский"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"бирманский"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"науру"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"непальский"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"нидерландский"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"норвежский"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"осетинский"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"оромо"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"ория"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"пенджаби"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"польский"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"пашто (пушто)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"португальский"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"кечуа"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"ретороманские диалекты"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"кирунди"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"румынский"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"русский"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"киниарванда"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"санскрит"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"синхи"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"санхо"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"сингальский"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"словацкий"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"словенский"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"полинезийский"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"шона"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"сомали"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"албанский"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"сербский"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"сисвати"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"сесозо"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"санданезский"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"шведский"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"суахили"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"тамильский"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"телугу"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"таджикский"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"тайский"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"тигрийский"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"туркменский"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"тагальский"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"сетсвана"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"турецкий"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"тсонга"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"татарский"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"тви"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"синцзян-Уйгурский"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"украинский"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"урду"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"узбекский"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"вьетнамский"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"воляпюк"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"волоф"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"хоса"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"еврейский"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"йоруба"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"жанг"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"китайский"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"зулусский"_s)
		})
	});
}

LocaleNames_ru::LocaleNames_ru() {
}

$Class* LocaleNames_ru::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ru, name, initialize, &_LocaleNames_ru_ClassInfo_, allocate$LocaleNames_ru);
	return class$;
}

$Class* LocaleNames_ru::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun