#include <sun/util/resources/ext/LocaleNames_sr.h>

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

$MethodInfo _LocaleNames_sr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_sr",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_sr_MethodInfo_
};

$Object* allocate$LocaleNames_sr($Class* clazz) {
	return $of($alloc(LocaleNames_sr));
}

void LocaleNames_sr::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_sr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Андора"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Уједињени Арапски Емирати"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Авганистан"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Албанија"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Арменија"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"Холандски Антили"_s)
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
			$of(u"Аустрија"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Аустралија"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Аруба"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Аландска острва"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Азербејџан"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Босна и Херцеговина"_s)
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
			$of(u"Белгија"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Буркина Фасо"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Бугарска"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Бахреин"_s)
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
			$of(u"Бермуда"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Брунеј"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Боливија"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Браѕил"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Бахами"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Бутан"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Буве"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Боцвана"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Белорусија"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Белисе"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Канада"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Кокосова Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Демократска република Конго"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Централно Афричка Република"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Конго"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Швајцарска"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Обала Слоноваче"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Чиле"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Камерун"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Кина"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Колумбија"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Костарика"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of(u"Србија и Црна Гора"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Куба"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Капе Верде"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Божићно Острво"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Кипар"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Чешка"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Немачка"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Џибути"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Данска"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Доминика"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Доминиканска Република"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Алжир"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Еквадор"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Естонија"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Египат"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Западна Сахара"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Еритреја"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Шпанија"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Етиопија"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Финска"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Фиџи"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Фолкландска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Микронезија"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Фарска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Француска"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Габон"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Велика Британија"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Гренада"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Грузија"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Француска Гвајана"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Гана"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Гибралтар"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Гренланд"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Гамбија"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Гвинеја"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Гваделупе"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Екваторијална Гвинеја"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Грчка"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Јужна Џорџија и Јужна Сендвич Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Гватемала"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"Гуам"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Гвинеја-Бисао"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Гвајана"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Хонг Конг (С. А. Р. Кина)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Херд и Мекдоналд Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Хондурас"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Хрватска"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Хаити"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Мађарска"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Индонезија"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ирска"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Израел"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Индија"_s)
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
			$of(u"Исланд"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Италија"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Јамајка"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Јордан"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Јапан"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Кенија"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Киргизстан"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Камбоџа"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Кирибати"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Коморска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Сент Китс и Невис"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Северна Кореја"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Јужна Кореја"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Кувајт"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Кајманска Острва"_s)
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
			$of(u"Либан"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Сент Луција"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Лихтенштајн"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Шри Ланка"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Либерија"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Лесото"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Литванија"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Луксембург"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Летонија"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Либија"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Мароко"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Монако"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Молдавија"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Мадагаскар"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Маршалска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Македонија"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Мали"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Мијанмар"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Монголија"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Макао (С. А. Р. Кина)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Северна Маријанска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Мартиник"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Мауританија"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Монсерат"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Малта"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Маурицијус"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Малдиви"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Малави"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Мексико"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Малезија"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Мозамбик"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Намибија"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Нова Каледонија"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Нигер"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Норфолк Острво"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Нигерија"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Никарагва"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Холандија"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Норвешка"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Непал"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"Науру"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Ниуе"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Нови Зеланд"_s)
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
			$of(u"Француска Полинезија"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Папуа Нова Гвинеја"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Филипини"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Пакистан"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Пољска"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Сен Пјер и Микелон"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Питкерн"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Порто Рико"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Палестинска територија"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Португал"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Палау"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Парагвај"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Катар"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Реинион"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Румунија"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Русија"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Руанда"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Саудијска Арабија"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Соломонска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Сејшели"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Шведска"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Сингапур"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Света Јелена"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Словенија"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Свалбард и Јанмајен Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Словачка"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Сијера Леоне"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Сан Марино"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Сенегал"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Сомалија"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Суринам"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Сао Томе и Принципи"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Салвадор"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Сирија"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Свазиленд"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Туркс и Кајкос Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Чад"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Француске Јужне Територије"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Того"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Тајланд"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Таџикистан"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Токелау"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Тимор-Лесте"_s)
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
			$of("TR"_s),
			$of(u"Турска"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Тринидад и Тобаго"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Тувалу"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Тајван"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Танзанија"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Украјина"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Уганда"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Мања удаљена острва САД"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Сједињене Америчке Државе"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Уругвај"_s)
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
			$of("VC"_s),
			$of(u"Сент Винсент и Гренадини"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Венецуела"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Британска Девичанска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"С.А.Д. Девичанска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Вијетнам"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Вануату"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Валис и Футуна Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Јемен"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Мајоте"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Јужноафричка Република"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Замбија"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Зимбабве"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"Африканерски"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Арапски"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Белоруски"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Бугарски"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"Бретонски"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"Каталонски"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"Корзикански"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Чешки"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Дански"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Немачки"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Грчки"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Енглески"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"Есперанто"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Шпански"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Естонски"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"Баскијски"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Персијски"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Фински"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Француски"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Ирски"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"Хебрејски"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Хинди"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Хрватски"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Мађарски"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"Арменски"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Индонезијски"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"Индонезијски"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Исландски"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Италијански"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"Хебрејски"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Јапански"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"Јидиш"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Грузијски"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Кмерски"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Корејски"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Курдски"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Киргиски"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"Латински"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Литвански"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"Летонски"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Македонски"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"Монголски"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"Молдавски"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Бурмански"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Холандски"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"Норвешки"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Пољски"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Португалски"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Рето-Романски"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Румунски"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Руски"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"Санскрит"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Словачки"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Словеначки"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Албански"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Српски"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Шведски"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"Свахили"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Турски"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Украјински"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Вијетнамски"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Јидиш"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Кинески"_s)
		})
	});
}

LocaleNames_sr::LocaleNames_sr() {
}

$Class* LocaleNames_sr::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sr, name, initialize, &_LocaleNames_sr_ClassInfo_, allocate$LocaleNames_sr);
	return class$;
}

$Class* LocaleNames_sr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun