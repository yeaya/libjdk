#include <sun/util/resources/cldr/ext/LocaleNames_tt.h>

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

$MethodInfo _LocaleNames_tt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_tt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_tt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_tt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_tt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_tt_MethodInfo_
};

$Object* allocate$LocaleNames_tt($Class* clazz) {
	return $of($alloc(LocaleNames_tt));
}

void LocaleNames_tt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_tt::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, u"гарәп"_s);
	$var($String, metaValue_la, u"латин"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"филиппин"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"бали"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"испан (Европа)"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Андорра"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Берләшкән Гарәп Әмирлекләре"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Әфганстан"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"африкаанс"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Антигуа һәм Барбуда"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Ангилья"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Албания"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Әрмәнстан"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"амхар"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ангола"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Антарктика"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Аргентина"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Америка Самоасы"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ассам"_s)
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
			$of("en_US"_s),
			$of(u"Америка инглизчәсе"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Аланд утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Әзәрбайҗан"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"әзәрбайҗан"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Босния һәм Герцеговина"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"башкорт"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Барбадос"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"себуано"_s)
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
			$of("be"_s),
			$of(u"белорус"_s)
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
			$of("bg"_s),
			$of(u"болгар"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Бәхрәйн"_s)
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
			$of("BL"_s),
			$of(u"Сен-Бартельми"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Бермуд утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Бруней"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"бенгали"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Боливия"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"тибет"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Бразилия"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"бретон"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Багам утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"босния"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Бутан"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Буве утравы"_s)
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
			$of("ca"_s),
			$of(u"каталан"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Кокос (Килинг) утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Үзәк Африка Республикасы"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Швейцария"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Кот-д’Ивуар"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Кук утраулары"_s)
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
			$of(u"Кытай"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Колумбия"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"корсика"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Коста-Рика"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"чех"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Куба"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Кабо-Верде"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Кюрасао"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Раштуа утравы"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Кипр"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"уэльс"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Чехия Республикасы"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"дания"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"португал (Европа)"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Германия"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"алман"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Җибүти"_s)
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
			$of(u"Доминикана Республикасы"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"бемба"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"мальдив"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"испан (Латин Америкасы)"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Алжир"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"дзонг-кха"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Эквадор"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"папьяменто"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Эстония"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Мисыр"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"грек"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"инглиз"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"мари"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"эсперанто"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"чероки"_s)
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
			$of("es"_s),
			$of(u"испан"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Эфиопия"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"эстон"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"баск"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"григориан ел исәбе"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"югары сорб"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"фарсы"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"гадиләштерелгән"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"көнбатыш цифрлары"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"традицион"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"фула"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Финляндия"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"фин"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Фиджи"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Фолкленд утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Микронезия"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Фарер утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"фарер"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Франция"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"француз"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Габон"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ирланд"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Берләшкән Корольлек"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Гренада"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"шотланд гэль"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Грузия"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Француз Гвианасы"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Гернси"_s)
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
			$of(u"Гренландия"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"галисия"_s)
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
			$of("gn"_s),
			$of(u"гуарани"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Гваделупа"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Экваториаль Гвинея"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"билгесез тел"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Греция"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Көньяк Георгия һәм Көньяк Сандвич утраулары"_s)
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
			$of("gu"_s),
			$of(u"гуҗарати"_s)
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
			$of("ha"_s),
			$of(u"хауса"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"үзәк көрд"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"яһүд"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"һинд"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Гонконг Махсус Идарәле Төбәге"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Херд утравы һәм Макдональд утраулары"_s)
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
			$of("hr"_s),
			$of(u"хорват"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Гаити"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"гаити креол"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Венгрия"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"венгр"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"әрмән"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"гереро"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Индонезия"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"индонезия"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ирландия"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"игбо"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Израиль"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Мэн утравы"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Индия"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Британиянең Һинд Океанындагы Территориясе"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Гыйрак"_s)
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
			$of("is"_s),
			$of(u"исланд"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Италия"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"итальян"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"инуктикут"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"япон"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Джерси"_s)
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
			$of("sma"_s),
			$of(u"көньяк саам"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"луле-саам"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"югары алман (Швейцария)"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"инари-саам"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"грузин"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"колтта-саам"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Кения"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Кыргызстан"_s)
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
			$of("kk"_s),
			$of(u"казакъ"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Комор утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"кхмер"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Сент-Китс һәм Невис"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"каннада"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"корея"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Төньяк Корея"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"канури"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"кашмири"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"көрд"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Күвәйт"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Кайман утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"кыргыз"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Казахстан"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"кирилл"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
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
			$of("lb"_s),
			$of(u"люксембург"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Сент-Люсия"_s)
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
			$of("lo"_s),
			$of(u"лаос"_s)
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
			$of("lt"_s),
			$of(u"литва"_s)
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
			$of("lv"_s),
			$of(u"латыш"_s)
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
			$of("ME"_s),
			$of(u"Черногория"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Сент-Мартин"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Мадагаскар"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"малагаси"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Маршалл утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"маори"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Төньяк Македония"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"македон"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Мали"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"малаялам"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Монголия"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"монгол"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Макао Махсус Идарәле Төбәге"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Төньяк Мариана утраулары"_s)
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
			$of("mr"_s),
			$of(u"маратхи"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Монтсеррат"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"малай"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Мальта"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"мальта"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Маврикий"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Мальдив утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Малави"_s)
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
			$of("my"_s),
			$of(u"бирма"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Мозамбик"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"түбән сорб"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Намибия"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Яңа Каледония"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Нигер"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"непали"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Норфолк утравы"_s)
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
			$of(u"Нидерланд"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"голланд"_s)
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
			$of("NR"_s),
			$of(u"Науру"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Ниуэ"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ньянҗа"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Яңа Зеландия"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"окситан"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"менде"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Оман"_s)
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
			$of("PA"_s),
			$of(u"Панама"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"пәнҗаби"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Британия инглизчәсе"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Перу"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Француз Полинезиясе"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Папуа - Яңа Гвинея"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Филиппин"_s)
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
			$of("pl"_s),
			$of(u"поляк"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Сен-Пьер һәм Микелон"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Питкэрн утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Пуэрто-Рико"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"пушту"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Португалия"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"португал"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Палау"_s)
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
			$of("niu"_s),
			$of(u"ниуэ"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"кечуа"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Реюньон"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"ретороман"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Румыния"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"румын"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Сербия"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Россия"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"рус"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Руанда"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"руанда"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Согуд Гарәбстаны"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"санскрит"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Сөләйман утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Сейшел утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"синдһи"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Швеция"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"төньяк саам"_s)
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
			$of("si"_s),
			$of(u"сингал"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Шпицберген һәм Ян-Майен"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Словакия"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"словак"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Сьерра-Леоне"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"словен"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Сан-Марино"_s)
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
			$of("so"_s),
			$of(u"сомали"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"мапуче"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"албан"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Суринам"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"серб"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Көньяк Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Сан-Томе һәм Принсипи"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Сальвадор"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"швед"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Синт-Мартен"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Сүрия"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Свазиленд"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ибибио"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"тамил"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Теркс һәм Кайкос утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Чад"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"телугу"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Франциянең Көньяк Территорияләре"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Того"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"таҗик"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Тайланд"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"тай"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"тигринья"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Таҗикстан"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Токелау"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"төрекмән"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Тимор-Лесте"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Төркмәнстан"_s)
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
			$of("to"_s),
			$of(u"тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Төркия"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"төрек"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Тринидад һәм Тобаго"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"татар"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Тувалу"_s)
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
			$of("Zzzz"_s),
			$of(u"билгесез язу"_s)
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
			$of("ug"_s),
			$of(u"уйгыр"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"украин"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"АКШ Кече Читтәге утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"урду"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"АКШ"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"гавайи"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Уругвай"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Үзбәкстан"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"үзбәк"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"үзәк атлас тамазигт"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Сент-Винсент һәм Гренадин"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Венесуэла"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"венда"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Британия Виргин утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"АКШ Виргин утраулары"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"вьетнам"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Вьетнам"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"киче"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Вануату"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"сүрия"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Уоллис һәм Футуна"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"волоф"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"манипури"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"Косово"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"язусыз"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"могаук"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Йәмән"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"гадәти тәртипләү ысулы"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"идиш"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"йоруба"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Майотта"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Көньяк Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"кытай"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Замбия"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Зимбабве"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"билгесез төбәк"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"гадиләштерелгән кытай"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"конкани"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"хилигайнон"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"традицион кытай"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"саха"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"сантали"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"курух"_s)
		})
	}));
	return data;
}

LocaleNames_tt::LocaleNames_tt() {
}

$Class* LocaleNames_tt::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_tt, name, initialize, &_LocaleNames_tt_ClassInfo_, allocate$LocaleNames_tt);
	return class$;
}

$Class* LocaleNames_tt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun