#include <sun/util/resources/cldr/ext/LocaleNames_ky.h>

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

$MethodInfo _LocaleNames_ky_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ky, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ky, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ky_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ky",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ky_MethodInfo_
};

$Object* allocate$LocaleNames_ky($Class* clazz) {
	return $of($alloc(LocaleNames_ky));
}

void LocaleNames_ky::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ky::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_type_nu_gujr, u"Гужарати сандары"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"колоньяча"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"мирандизче"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"Белгилер"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"Быйтыкча"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"чакма"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"тимнече"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"тесочо"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"рапаньюча"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Вознесение аралы"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"раротонгача"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"тетумча"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Андорра"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Бириккен Араб Эмираттары"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"фламандча"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Афганистан"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Антигуа жана Барбуда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Эфиоп жылнаамасы"_s)
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
			$of(u"Армения"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ангола"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Антарктида"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Аргентина"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Америкалык Самоа"_s)
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
			$of(u"англисче (Америка Кошмо Штаттары)"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Аланд аралдары"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Азербайжан"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Босния жана Герцеговина"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Барбадос"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"себуанча"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Бангладеш"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"кумыкча"_s)
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
			$of("BL"_s),
			$of(u"Сент Бартелеми"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Бермуд аралдары"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"эрзянча"_s)
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
			$of("BQ"_s),
			$of(u"Кариб Нидерланддары"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Бразилия"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Багама аралдары"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"согача"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Бутан"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Буве аралы"_s)
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
			$of("type.ca.persian"_s),
			$of(u"Перс жылнаамасы"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Иврит сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Канада"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Кокос (Килинг) аралдары"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"мазандераниче"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Конго-Киншаса"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Борбордук Африка Республикасы"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Конго-Браззавил"_s)
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
			$of(u"Кук аралдары"_s)
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
			$of("CP"_s),
			$of(u"Клиппертон аралы"_s)
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
			$of(u"Кабо-Верде"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Кюрасао"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Рождество аралы"_s)
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
			$of("eka"_s),
			$of(u"экажукча"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Германия"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ачехче"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"чигача"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Диего Гарсия"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Деванагари сандары"_s)
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
			$of("Brai"_s),
			$of(u"Брейл"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Доминика"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Армян сандары (кичинекей тамга менен))"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Доминика Республикасы"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"горонталочо"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"зуниче"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"тигрече"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Алжир"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"пангасиче"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"Кыска формат"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Сеута жана Мелилла"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"пампангача"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Эквадор"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"папиаменточо"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"адаңмече"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Эстония"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Египет"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Батыш Сахара"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"палауанча"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"чуукиче"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"мариче"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"чокточо"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"черокиче"_s)
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
			$of("EU"_s),
			$of(u"Европа Биримдиги"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Григориан жылнаамасы"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(metaValue_type_nu_gujr)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Еврозона"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"шайеннче"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"адыгейче"_s)
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
			$of("FK"_s),
			$of(u"Фолкленд аралдары"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Микронезия"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Фарер аралдары"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"Тамил"_s)
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
			$of(u"Улуу Британия"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"аргындашкан тил (Нигерия)"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Гренада"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Грузия"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Француздук Гвиана"_s)
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
			$of(u"Экватордук Гвинея"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Греция"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Түштүк Жоржия жана Түштүк Сэндвич аралдары"_s)
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
			$of(u"Гвинея-Бисау"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"клингончо"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Гайана"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"борбордук курдча"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"тилдик мазмун жок"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Гонконг Кытай ААА"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Херд жана Макдональд аралдары"_s)
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
			$of("agq"_s),
			$of(u"агемче"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"немисче (Швейцария)"_s)
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
			$of("IC"_s),
			$of(u"Канар аралдары"_s)
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
			$of("nap"_s),
			$of(u"неополитанча"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"намача"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"зазача"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Израиль"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Мэн аралы"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Индия"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Инди океанындагы Британ территориясы"_s)
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
			$of("Zmth"_s),
			$of(u"Математикалык маани"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Тай сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Бенгали сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Жерси"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Ислам жылнаамасы"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Ямайка"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"Бенгал"_s)
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
			$of("ain"_s),
			$of(u"айнуча"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"гусиче"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Каннада сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"адабий немисче (Швейцария)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Будда жылнаамасы"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Кения"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Латын Америкасы"_s)
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
			$of("KM"_s),
			$of(u"Коморос"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Сент-Китс жана Невис"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"Каннада"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Түндүк Корея"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Түштүк Корея"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Кувейт"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ток-писинче"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Кайман аралдары"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Казакстан"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"Кирилл"_s)
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
			$of("LC"_s),
			$of(u"Сент-Люсия"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"гвичинче"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"төмөнкү немисче"_s)
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
			$of("Kana"_s),
			$of(u"Катакана"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Ливия"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ладиночо"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"вунжочо"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"лангиче"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"Таана"_s)
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
			$of("MH"_s),
			$of(u"Маршалл аралдары"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"алеутча"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"Тай"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Түндүк Македония"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Мали"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Мьянма (Бирма)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Монголия"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"невариче"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Макао Кытай ААА"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Түндүк Мариана аралдары"_s)
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
			$of(u"Монтсеррат"_s)
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
			$of("alt"_s),
			$of(u"түштүк алтайча"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Мальдив"_s)
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
			$of("type.ca.japanese"_s),
			$of(u"Жапон жылнаамасы"_s)
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
			$of("202"_s),
			$of(u"Африка өлкөлөрү"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Иврит жылнаамасы"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Жаңы Каледония"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Нигер"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Норфолк аралы"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Нигерия"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"тарокочо"_s)
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
			$of("rof"_s),
			$of(u"ромбочо"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Жаңы Зеландия"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Оман"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ангикача"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"сеселва креол французча"_s)
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
			$of(u"Полинезия (франциялык)"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Папуа-Жаңы Гвинея"_s)
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
			$of("ewo"_s),
			$of(u"эвондочо"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Сен-Пьер жана Микелон"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Питкэрн аралдары"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Пуэрто-Рико"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Палестина аймактары"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Португалия"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Палау"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"ниасча"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Грек сандары (кичинекей тамга менен))"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Парагвай"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"тумбукача"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"Иврит"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Катар"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ньюанча"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Алыскы Океания"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"лезгинче"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"тувалуча"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Дүйнө"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Түндүк Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Реюньон"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Түштүк Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ложбанча"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Океания"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Румыния"_s)
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
			$of("RW"_s),
			$of(u"Руанда"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Сауд Арабиясы"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Соломон аралдары"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"тасабакча"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Батыш Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Сейшел аралдары"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Борбордук Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Швеция"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Чыгыш Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Түндүк Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Сингапур"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Ыйык Елена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Саптардын арасы тыкыс"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Борбордук Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Словения"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Түштүк Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Шпицберген жана Ян-Майен"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Америка"_s)
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
			$of("SM"_s),
			$of(u"Сан Марино"_s)
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
			$of("arn"_s),
			$of(u"мапучече"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"арапахочо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Салттуу тамил сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Суринам"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Түштүк Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Сан-Томе жана Принсипи"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Эль-Сальвадор"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Синт-Мартен"_s)
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
			$of("TA"_s),
			$of(u"Тристан-да-Кунья"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"асуча"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"АКШ өлчөө тутуму"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Түндүк Америка (чөлкөм)"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Түркс жана Кайкос аралдары"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"янгбенче"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Чад"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Франциянын Түштүктөгү аймактары"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Того"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Тайланд"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Тажикстан"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Кариб аралдары"_s)
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
			$of("ybb"_s),
			$of(u"йембача"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Түркмөнстан"_s)
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
			$of(u"Түркия"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Тринидад жана Тобаго"_s)
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
			$of("ast"_s),
			$of(u"астурийче"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Танзания"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"квасиочо"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Белгисиз жазуу"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Украина"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"аромунча"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Чыгыш Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"тувинче"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"конго суахаличе"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Түштүк Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Түштүк-Чыгыш Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Уганда"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"Хакка кытайча"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Түштүк Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"Сингала"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"АКШнын сырткы аралдары"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"БУ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Кошмо Штаттар"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"гавайча"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Уругвай"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"пруссча"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Өзбекстан"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"борбордук Атлас тамазигтче"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"нгимбунча"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Ватикан"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Сент-Винсент жана Гренадиндер"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Венесуэла"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Виргин аралдары (Британия)"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Виргин аралдары (АКШ)"_s)
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
			$of("nog"_s),
			$of(u"ногайча"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"руача"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Австралазия"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Меланезия"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Уоллис жана Футуна"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Микронезия чөлкөмү"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"нгомбача"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"лакотача"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"валцерче"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"вольяттача"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"Жасалма- Акцент"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"варайча"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"Жасалма - эки тараптуу"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"авадхиче"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Полинезия"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"Косово"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"Гужарати"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Жазылбаган"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"ворлпириче"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Йемен"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"нкочо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Стандарттык иргөө тартиби"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Майотта"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Түштүк-Африка Республикасы"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Саптардын арасы кенен"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"Деванагари"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Грузин сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"Хирагана"_s)
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
			$of(u"Белгисиз чөлкөм"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"Метрикалык тутум"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ИСО-8601 жылнаамасы"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"түндүк соточо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Телугу сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"лозиче"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"мачамече"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Жөнөкөйлөштүрүлгөн кытай каржы сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"хилигайнончо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Кеңейтилген араб-индус сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"нуерче"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"дакотача"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"Толук эндүү сандар"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"даргинче"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"таитача"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"түндүк луриче"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"удмуртча"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"Кмер"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"сандавече"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Роман сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"сахача"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"самбуруча"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"санталиче"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"нгамбайча"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"Гурмухи"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"луба-лулуача"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"Кең формат"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"сангуча"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ныйанколчо"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"лундача"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"луочо"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"филипинче"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"хмонгчо"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"мизочо"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"баличе"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"лухияча"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"басаача"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"испанча (Европа)"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"шотландча"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"сицилийче"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"афарча"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"абхазча"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"африкаанча"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"аканча"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"амхарча"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"арагончо"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"Араб"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"Жапан"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"арабча"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"Жапон силлабографиясы"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ассамча"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"аварикче"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"түштүк курдча"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"аймарача"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"азербайжанча"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"башкырча"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"беларусча"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"болгарча"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"бисламача"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"бамбарача"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"бангладешче"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"тибетче"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"догрибче"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"бретончо"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"боснийче"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"Мйанмар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Лао сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"сенача"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"каталончо"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"койраборо сенниче"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"чеченче"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"чаморрочо"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"корсиканча"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"Орийа"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"чехче"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"чиркөө славянча"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"чувашча"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"уелшче"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Эфиоп сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"датча"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"португалча (Европа)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"немисче"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Стандарттык валюта форматы"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"бембача"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"дивехиче"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"жонгуча"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"бенача"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Кытай жылнаамасы"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"зармача"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Грек сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"эбече"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Саптардын арасы орточо"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"молдованча"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"грекче"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"англисче"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"эсперанто"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"испанча"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"эстончо"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"Ханб"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"баскча"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"Хангул"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ташелитче"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"жогорку сорбианча"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"Хань"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"шанча"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"фарсча"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Жөнөкөйлөштүрүлгөн"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Батыш сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"Салттуу"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"фулача"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"Сянь Кытайча"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"финче"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"фижиче"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"фончо"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"чыгыш балучиче"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"кантончо"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"фарерче"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"умбундуча"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"французча"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"батыш фризче"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ирландча"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"шотладиялык гелча"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"галисияча"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"гуараниче"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"бхожпуриче"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"белгисиз тилде"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"гужаратча"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"мэнксыча"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"хаусача"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"ивритче"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"хиндиче"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"хупача"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"биниче"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"хорватча"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"гаитиче"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"венгерче"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"армянча"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"герерочо"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"интерлингва"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"Джамо"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"индонезияча"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Тибет сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"игбочо"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"сычуань йиче"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"идочо"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"исландча"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"италиянча"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"инуктитутча"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"жапончо"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"Малайалам"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"түштүк саамиче"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"жаванизче"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"мадурисче"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"луле саамиче"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"магахиче"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"маитиличе"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"инари саамиче"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"грузинче"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"сиксикача"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"макасарча"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"сколт саамиче"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"кикуйиче"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"масайча"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"куаньямача"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"казакча"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"калаалисутча"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"кмерче"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"каннадача"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"корейче"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"кануриче"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"кашмирче"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"курдча"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"комиче"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"корнишче"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"кыргызча"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"сонинкече"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"латынча"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"люксембургча"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Малайалам сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"гандача"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"лимбургиче"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"Тибет"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"лингалача"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"фриулча"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"лаочо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Британ империясынын өлчөө тутуму"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"литовчо"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"луба-катангача"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"латышча"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"малагасча"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"маршаллча"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Демейки Unicode иргөө тартиби"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"маориче"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"македончо"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"малайаламча"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"монголчо"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"маратиче"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"малайча"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"малтизче"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"бурмача"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"Армян"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"мокшача"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"төмөнкү сорбианча"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"науруча"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Жалпы издөө"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"норвежче (букмал)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"түндүк ндыбелче"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"непалча"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ндонгача"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"голландча"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"норвежче (нинорск)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"норвежче"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"түштүк ндебелече"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"наваджочо"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ньянджача"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"кахинче"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"кабылча"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"окситанча"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"джуча"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"камбача"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"мендече"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"меруча"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Армян сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"оромочо"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"орияча"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"осетинче"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"кабардинче"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"морисианча"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"сранан тонгочо"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"пунжабиче"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"дуалача"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"полякча"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Данги жылнаамасы"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"пуштуча"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"португалча"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Иргөө тартиби"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"тяпча"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"макуача"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Валюта форматы"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Жылнаама"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"Лао"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"метача"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 сааттык тутум (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 сааттык тутум (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"сахочо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Мйанмар сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"кечуача"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"бодочо"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"макондече"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Эфиоп"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 сааттык тутум (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 сааттык тутум (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"романшча"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"рундиче"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Валюта"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"румынча"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Ория сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Кытай ондук сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"орусча"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"руандача"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"кабувердиче"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"микмакча"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"сукумача"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"санскритче"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"сардинче"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"синдхиче"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"түндүк саамиче"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"минанкабауча"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"сангочо"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"серб-хорват"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"сингалача"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"словакча"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"словенче"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"самоанча"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"шонача"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"сомаличе"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Араб-индус сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"албанча"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"сербче"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"сватиче"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Эсептешүү валютасынын форматы"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"сесоточо"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"сунданча"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"шведче"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"суахиличе"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Салттуу кытай каржы сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ибибиочо"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ибанча"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"тамилче"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Борбор Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"телугуча"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Батыш Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"тажикче"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"тайча"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"тигриниача"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"бугийче"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"корочо"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"түркмөнчө"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"тсванача"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"тонгача"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"жола-фониче"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Жапон сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"түркчө"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"тсонгача"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"коморчо"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"татарча"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"тви"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"таитиче"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Чыгыш Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Түндүк Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"дазагача"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Батыш Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"уйгурча"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"Корей"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"Жалпы"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"украинче"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"урдуча"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"калмыкча"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"өзбекче"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"хасиче"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"төмөнкү саксончо"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"вендача"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Мингуо жылнаамасы"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"вьетнамча"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"койра чиниче"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Саат мерчеми (12/24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"волапюкча"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"кичече"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"гача"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"валлончо"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"гагаузча"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"сирияча"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"Грек"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"Гань Кытайча"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"уолофчо"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"марокко тамазигт адабий тилинде"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"азыркы адабий араб тилинде"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"Монгол"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"манипуриче"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"Латын"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Жөнөкөйлөштүрүлгөн кытай сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Салттуу кытай сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"косача"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Роман сандары (кичинекей тамга менен)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"блинче"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"мохаукча"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"какочо"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"идишче"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"моссиче"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"йорубача"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"вайиче"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"каленжиче"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"кытайча"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"Бопомофо"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Саптарды ажыратуу стили"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"зулуча"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"Грузин"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"кимбундуча"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Жапон каржы сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"гиизче"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"эмбуча"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"кытайча (жөнөкөйлөштүрүлгөн)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"коми-пермякча"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"конканиче"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"кытайча (салттуу)"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"кпеллече"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Кмер сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"илокочо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(metaValue_type_nu_gujr)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"мундангча"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"бир нече тилде"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Өлчөө тутуму"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"крикче"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"гилбертче"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Тамил сандары"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"карачай-балкарча"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ингушча"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"дари"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"карелче"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"эфикче"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"Сандар"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"курухча"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"шамабалача"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"Телу"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"бафияча"_s)
		})
	}));
	return data;
}

LocaleNames_ky::LocaleNames_ky() {
}

$Class* LocaleNames_ky::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ky, name, initialize, &_LocaleNames_ky_ClassInfo_, allocate$LocaleNames_ky);
	return class$;
}

$Class* LocaleNames_ky::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun