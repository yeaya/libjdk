#include <sun/util/resources/cldr/ext/LocaleNames_ru.h>

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

$MethodInfo _LocaleNames_ru_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ru, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ru, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ru_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ru",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ru_MethodInfo_
};

$Object* allocate$LocaleNames_ru($Class* clazz) {
	return $of($alloc(LocaleNames_ru));
}

void LocaleNames_ru::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ru::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_gu, u"гуджарати"_s);
	$var($String, metaValue_kn, u"каннада"_s);
	$var($String, metaValue_ml, u"малаялам"_s);
	$var($String, metaValue_or, u"ория"_s);
	$var($String, metaValue_te, u"телугу"_s);
	$var($String, metaValue_tl, u"тагалог"_s);
	$var($String, metaValue_bax, u"бамум"_s);
	$var($String, metaValue_chr, u"чероки"_s);
	$var($String, metaValue_kpe, u"кпелле"_s);
	$var($String, metaValue_men, u"менде"_s);
	$var($String, metaValue_nqo, u"нко"_s);
	$var($String, metaValue_zbl, u"блиссимволика"_s);
	$var($String, metaValue_Zsye, u"эмодзи"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"кёльнский"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"огамическая"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"мирандский"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"символы"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"атсам"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"марвари"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"цифры тай там там"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(metaValue_Zsye)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"тагбанва"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"чакма"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"древнеегипетский"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"раджастхани"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"пагспа"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"темне"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"тесо"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"рапануйский"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"терено"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"о-в Вознесения"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"раротонга"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"тетум"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Андорра"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"ОАЭ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"фламандский"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Афганистан"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Антигуа и Барбуда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"эфиопский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Ангилья"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"часовой пояс"_s)
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
			$of("Teng"_s),
			$of(u"тенгварская"_s)
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
			$of("Prti"_s),
			$of(u"парфянская"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Американское Самоа"_s)
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
			$of(u"американский английский"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Аландские о-ва"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"миене"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Азербайджан"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Восточно-армянский"_s)
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
			$of("ceb"_s),
			$of(u"себуано"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Бангладеш"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"кумыкский"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Бельгия"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"средневерхненемецкий"_s)
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
			$of(u"Сен-Бартелеми"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Бермудские о-ва"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"кутенаи"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"эрзянский"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Бруней-Даруссалам"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Боливия"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Бонэйр, Синт-Эстатиус и Саба"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Бразилия"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Багамы"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"сога"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Бутан"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"о-в Буве"_s)
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
			$of("Visp"_s),
			$of(u"видимая речь"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"персидский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"цифры на иврите"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Канада"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Кокосовые о-ва"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"мазандеранский"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Конго - Киншаса"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Центрально-Африканская Республика"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Конго - Браззавиль"_s)
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
			$of(u"Острова Кука"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Чили"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"кайтхи"_s)
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
			$of("CP"_s),
			$of(u"о-в Клиппертон"_s)
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
			$of(u"о-в Рождества"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Кипр"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"балийские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Чехия"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"экаджук"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Германия"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"древневерхненемецкий"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ачехский"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"кига"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Диего-Гарсия"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"цифры деванагари"_s)
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
			$of("ach"_s),
			$of(u"ачоли"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"гонди"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"шрифт Брайля"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"брахми"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Доминика"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"армянские цифры в нижнем регистре"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Доминиканская Республика"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"горонтало"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"готский"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"манипури"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"зуньи"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"тигре"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"такри"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Алжир"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"пангасинан"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"полуширинные символы"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"пехлевийский"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Сеута и Мелилья"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"чибча"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"пампанга"_s)
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
			$of("ada"_s),
			$of(u"адангме"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Эстония"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"тиви"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Египет"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Западная Сахара"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"чагатайский"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"палау"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"чукотский"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"чинук жаргон"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"марийский"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"чипевьян"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"чоктавский"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
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
			$of(u"Европейский союз"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"эламский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"григорианский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"еврозона"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"шайенский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"цифры гуджарати"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"хараппская (письменность долины Инда)"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"адыгейский"_s)
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
			$of(u"Фолклендские о-ва"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Федеративные Штаты Микронезии"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"вариант региональных настроек"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Фарерские о-ва"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"тамильская"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Франция"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"токелайский"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"гребо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Национальный календарь Индии"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"древнегреческий"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Габон"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"водский"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Великобритания"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"нигерийско-креольский"_s)
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
			$of(u"Французская Гвиана"_s)
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
			$of("Tale"_s),
			$of(u"тайский ле"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Гибралтар"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"африхили"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Гренландия"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"среднеанглийский"_s)
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
			$of("GS"_s),
			$of(u"Южная Георгия и Южные Сандвичевы о-ва"_s)
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
			$of("tli"_s),
			$of(u"тлингит"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"клингонский"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"новый тайский ле"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Гайана"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"сорани"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"нет языкового материала"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"чжурчжэньская"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"австрийский немецкий"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Гонконг (САР)"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"вайская"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"о-ва Херд и Макдональд"_s)
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
			$of(u"агем"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"швейцарский немецкий"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"исламский календарь (Умм аль-Кура)"_s)
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
			$of("tmh"_s),
			$of(u"тамашек"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Канарские о-ва"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"миньнань"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Индонезия"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"староперсидский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"цифры кайя ли"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ирландия"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"неаполитанский"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"нама"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"цифры сора-сомпенг"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"заза"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"тангутское меня"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Израиль"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"набатейская"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"о-в Мэн"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Индия"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"европейские правила сортировки"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Британская территория в Индийском океане"_s)
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
			$of(u"математические обозначения"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"тайские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"Компьютерный"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"бенгальские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Джерси"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"исламский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Ямайка"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"бенгальская"_s)
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
			$of("%%1606NICT"_s),
			$of(u"Поздне-средневековый французский до 1606 г."_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"айнский"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"гусии"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"цифры каннада"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"кайа"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"литературный швейцарский немецкий"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Фонетический порядок сортировки"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"буддийский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Кения"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Латинская Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Киргизия"_s)
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
			$of(u"Коморы"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Сент-Китс и Невис"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"унаследованная"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"канадский французский"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"КНДР"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Республика Корея"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"поллардовская фонетика"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"швейцарский французский"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Кувейт"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ток-писин"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Острова Кайман"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Казахстан"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"кириллица"_s)
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
			$of("phn"_s),
			$of(u"финикийский"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"старославянская"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"гвичин"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"нижненемецкий"_s)
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
			$of("akk"_s),
			$of(u"аккадский"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"коптский"_s)
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
			$of("Phlv"_s),
			$of(u"пахлави книжная"_s)
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
			$of(u"катакана"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of(u"сора-сонпенг"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Ливия"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ладино"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"вунджо"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"лахнда"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"ланго"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"тана"_s)
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
			$of("Nshu"_s),
			$of(u"нюй-шу"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Черногория"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Сен-Мартен"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"ламба"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Мадагаскар"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Маршалловы Острова"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"алеутский"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"тайская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Цифры языка вай"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Северная Македония"_s)
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
			$of(u"неварский"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Макао (САР)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Северные Марианские о-ва"_s)
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
			$of("type.m0.ungegn"_s),
			$of(u"система транслитерации ООН"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Маврикий"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"южноалтайский"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Мальдивы"_s)
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
			$of(u"японский календарь"_s)
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
			$of("Phli"_s),
			$of(u"пехлевийская"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Намибия"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Тропическая Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"еврейский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"словарный порядок сортировки"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Новая Каледония"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Система Уэйда – Джайлза"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of(u"туройо"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Нигер"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"о-в Норфолк"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Нигерия"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"седекский"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"пахлави псалтирная"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Никарагуа"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"пахау хмонг"_s)
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
			$of("NR"_s),
			$of(u"Науру"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Ниуэ"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"финикийская"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ромбо"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"цимшиан"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Новая Зеландия"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"мероитская курсивная"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"цыганский"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"мероитская"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"крымско-татарский"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"староанглийский"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Оман"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ангика"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"сейшельский креольский"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"староперсидская"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Панама"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Исламский гражданский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"кашубский"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"британский английский"_s)
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
			$of(u"Папуа — Новая Гвинея"_s)
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
			$of("ewo"_s),
			$of(u"эвондо"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Сен-Пьер и Микелон"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"о-ва Питкэрн"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Пуэрто-Рико"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Палестинские территории"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"балийская"_s)
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
			$of(u"ниас"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"греческие цифры в нижнем регистре"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Парагвай"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"тумбука"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"еврейская"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Катар"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Англо-шотландский"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ниуэ"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Внешняя Океания"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"лезгинский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"цифры такри"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"тувалу"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"тай-вьет"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"весь мир"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Северная Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Реюньон"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Южная Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ложбан"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"реджангская"_s)
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
			$of("Mroo"_s),
			$of(u"мро"_s)
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
			$of("type.nu.talu"_s),
			$of(u"цифры новой тай-лю"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"манихейская"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"угаритская"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"кхароштхи"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Саудовская Аравия"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"понапе"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"мандейская"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Соломоновы Острова"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"тасавак"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Западная Африка"_s)
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
			$of("013"_s),
			$of(u"Центральная Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Швеция"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Восточная Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"арамейский"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"лома"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Северная Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Сингапур"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"о-в Св. Елены"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"жесткий перевод строки"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Центральная Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Словения"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Южная Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Шпицберген и Ян-Майен"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(metaValue_bax)
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
			$of("Wole"_s),
			$of(u"волеаи"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Сьерра-Леоне"_s)
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
			$of("arn"_s),
			$of(u"мапуче"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"арапахо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"тамильские традиционные цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Суринам"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Южный Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Сан-Томе и Принсипи"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Сальвадор"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"недждийский арабский"_s)
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
			$of("yao"_s),
			$of(u"яо"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Эсватини"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"аравакский"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"яп"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Тристан-да-Кунья"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"асу"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"американская система мер"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Североамериканский регион"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"о-ва Тёркс и Кайкос"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"янгбен"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Чад"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of(u"зоджи"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Французские Южные территории"_s)
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
			$of("029"_s),
			$of(u"Карибы"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Токелау"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Восточный Тимор"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"йемба"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Поиск по первой согласной хангыль"_s)
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
			$of(u"Турция"_s)
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
			$of(u"Тайвань"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"астурийский"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"орхоно-енисейская"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Танзания"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"квасио"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"неизвестная письменность"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"кхудавади"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Украина"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"арумынский"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Восточная Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"тувинский"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"конголезский суахили"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Южная Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"хайда"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Юго-Восточная Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Уганда"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"хакка"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"пиньинь"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Южная Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"сингальская"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Внешние малые о-ва (США)"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Организация Объединенных Наций"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Соединенные Штаты"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"гавайский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"упрощенный китайский - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Уругвай"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"прусский"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Узбекистан"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"среднеатласский тамазигхтский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"по чертам"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"нгиембунд"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Ватикан"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"старопровансальский"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Сент-Винсент и Гренадины"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Венесуэла"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Виргинские о-ва (Великобритания)"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Виргинские о-ва (США)"_s)
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
			$of(u"ногайский"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"руанда"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"старонорвежский"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Австралазия"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"Западно-армянский"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Меланезия"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Уоллис и Футуна"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"традиционный порядок"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Микронезия"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"нгомба"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"лакота"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Символы обозначения финансовых показателей"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"совместимый порядок сортировки"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"валлисский"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"басса (вах)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"цифры манипури"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"воламо"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"вашо"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"псевдоакценты"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"варай"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"псевдо-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"авадхи"_s)
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
			$of("type.nu.brah"_s),
			$of(u"цифры брахми"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"нет письменности"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ол чики"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"вальбири"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"батакская"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Йемен"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"стандартная сортировка"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"фанг"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"Резьянский"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"фанти"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"язык знаков"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Майотта"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"чамские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Южно-Африканская Республика"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"суданские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"мягкий перевод строки"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"деванагари"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"грузинские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"чжуинь"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"хирагана"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Замбия"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"Пиньинь"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Зимбабве"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"неизвестный регион"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"руническая"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"метрическая система"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"календарь ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"монго"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"северный сото"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"цифры телугу"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"луизианский креольский"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"лози"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"наси геба"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"мачаме"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"китайские упрощенные цифры (финансы)"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"хилигайнон"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"расширенная система арабско-индийских цифр"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"нуэр"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"дакота"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"полноширинные цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"хеттский"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"даргинский"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"таита"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"майя"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"севернолурский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(metaValue_Zsye)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"коптская"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"классический невари"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"удмуртский"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"кхмерская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"исламский календарь (Саудовская Аравия)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"лимбу"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"сандаве"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"римские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"саха"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"цифры шарада"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"самаритянский арамейский"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"самбуру"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"сасакский"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"сантали"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"древнеливийская"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"еврейско-персидский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Числовая"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Обозначения цифр коренного населения"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"нгамбайский"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"гурмукхи"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"луба-лулуа"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"полноширинные символы"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"сангу"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"луисеньо"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ньянколе"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ньямвези"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"лунда"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"ньоро"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"луо"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"филиппинский"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"хмонг"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"делаварский"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"мизо"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"белуджский"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"слейви"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"балийский"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"угаритский"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"лухья"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"баса"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"еврейско-арабский"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"европейский испанский"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"нзима"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"шотландский"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"сицилийский"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"афарский"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"абхазский"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"насталик"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"авестийский"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"африкаанс"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"акан"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"цифры чакма"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"гомала"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"амхарский"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"арагонский"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"арабица"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"японская"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"арабский"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"катакана и хирагана"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ассамский"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"линейное письмо А"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"аварский"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"линейное письмо Б"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"южнокурдский"_s)
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
			$of("Khoj"_s),
			$of(u"ходжики"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"башкирский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"сортировка по ключам, затем по чертам"_s)
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
			$of("bi"_s),
			$of(u"бислама"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"яванские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"бамбара"_s)
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
			$of("dgr"_s),
			$of(u"догриб"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"бретонский"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"боснийский"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"сенека"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"мьянманская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"лаосские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"сена"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"селькупский"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"каталанский"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"койраборо сенни"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"чеченский"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"чаморро"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"корсиканский"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"кри"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"чешский"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"церковнославянский"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"чувашский"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"валлийский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"эфиопские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"и"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"датский"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"европейский португальский"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"немецкий"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"стандартный формат"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"беджа"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"динка"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"бугинизийская"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"бемба"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"староирландский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Монгольские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"мальдивский"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"латиноамериканский испанский"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"дзонг-кэ"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"бена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"китайский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"лису"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"джерма"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"греческие цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"эве"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"бафут"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"обычный перевод строки"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"молдавский"_s)
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
			$of("type.co.big5han"_s),
			$of(u"Сортировка традиционного китайского языка – Big5"_s)
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
			$of("Hanb"_s),
			$of(u"ханьб"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"баскский"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"бухид"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"хангыль"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"самаритянская"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ташельхит"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"верхнелужицкий"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"китайская"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"шанский"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"хануну"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"персидский"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"упрощенная китайская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"современные арабские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"традиционная китайская"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"фулах"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"чадский арабский"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"сян"_s)
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
			$of("fon"_s),
			$of(u"фон"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"западный белуджский"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"кантонский"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"фарерский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"система транслитерации BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"умбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"французский"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"сидама"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"западнофризский"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ирландский"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"гэльский"_s)
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
			$of("bho"_s),
			$of(u"бходжпури"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"неизвестный язык"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Эфиопский календарь \"Амете Алем\""_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"исламский календарь (табличный, астрономическая эпоха)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"мэнский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"цифры османья"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"хауса"_s)
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
			$of("hup"_s),
			$of(u"хупа"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"бикольский"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"бини"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"хиримоту"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"хорватский"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"гаитянский"_s)
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
			$of("hz"_s),
			$of(u"гереро"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"каджунский французский"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"Международный фонетический алфавит"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"интерлингва"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"джамо"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"индонезийский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"тибетские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"интерлингве"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"игбо"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"носу"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"среднефранцузский"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"инупиак"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"старофранцузский"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"идо"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"восточный фризский"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"северный фризский"_s)
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
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"японский"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"староюжноарабская"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"сарати"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"догри"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"цифры лепча"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"ком"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"южносаамский"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"яванский"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"алфавит Шоу"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"мадурский"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"луле-саамский"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"магахи"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"мафа"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"майтхили"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"инари-саамский"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"грузинский"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"сиксика"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"макассарский"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"ву"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"колтта-саамский"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"мандинго"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"конго"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"готская"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"кикуйю"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"масаи"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"кунама"_s)
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
			$of(u"кхмерский"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"корейский"_s)
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
			$of("Cirt"_s),
			$of(u"кирт"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"лепха"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"авестийская"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"курдский"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"коми"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"корнский"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"киргизский"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"сонинке"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"латинский"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"люксембургский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"цифры малаялам"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ганда"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"ронго-ронго"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"лимбургский"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"тибетская"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"лингала"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"фриульский"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"лаосский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"британская система мер"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"цифры тай там хора"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"литовский"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"луба-катанга"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"латышский"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"согдийский"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"малагасийский"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"маршалльский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"cтандартная сортировка Unicode"_s)
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
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"монгольский"_s)
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
			$of("Saur"_s),
			$of(u"саураштра"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"армянская"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"мокшанский"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"маба"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"нижнелужицкий"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"арамейская"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"науру"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"поиск"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"норвежский букмол"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"северный ндебеле"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"непальский"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ндонга"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"мандарский"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"нидерландский"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"нюнорск"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"норвежский"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"южный ндебеле"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"навахо"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"каракалпакский"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ньянджа"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"качинский"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"кабильский"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"Многотональный"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"окситанский"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"каджи"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"камба"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"оджибва"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"меру"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"армянские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"оромо"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"кави"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"осетинский"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"кабардинский"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"маврикийский креольский"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"сранан-тонго"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"панджаби"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"дуала"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"серер"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"канембу"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"пали"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"польский"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"средненидерландский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"цифры саураштра"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"календарь данги"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"пушту"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"португальский"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"среднеирландский"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"порядок сортировки"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"бразильский португальский"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"тьяп"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"макуа-меетто"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"формат валюты"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"цифры нко"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"брауи"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"лаосская"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"мета"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-часовой формат времени (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-часовой формат времени (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"сахо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"бирманские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"кечуа"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"сапотекский"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"бодо"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"ланна"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"маконде"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"эфиопская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-часовой формат времени (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-часовой формат времени (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"романшский"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"рунди"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"валюта"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"румынский"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(u"Сахо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"цифры ория"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"китайские десятичные цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"русский"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"акоосе"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"киньяруанда"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"кабувердьяну"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"микмак"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"сукума"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"австралийский английский"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"дуплоянская скоропись"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"санскрит"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"сардинский"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"сусу"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"синдхи"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"северносаамский"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"минангкабау"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"санго"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"сербскохорватский"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"сингальский"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"шумерский"_s)
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
			$of("Gran"_s),
			$of(u"грантха"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"самоанский"_s)
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
			$of("type.nu.arab"_s),
			$of(u"арабско-индийские цифры"_s)
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
			$of(u"свази"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"финансовый формат"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"южный сото"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"яванская"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"сунданский"_s)
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
			$of("type.nu.hantfin"_s),
			$of(u"китайские традиционные цифры (финансы)"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ибибио"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ибанский"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"тамильский"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"бурятский"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Центральная Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Западная Азия"_s)
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
			$of(u"тигринья"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"бугийский"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"коро"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"канадский английский"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"туркменский"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"тсвана"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"тонганский"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"булу"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"диола-фоньи"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"японские цифры"_s)
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
			$of("swb"_s),
			$of(u"коморский"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"чакмийская"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"татарский"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"диула"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"тви"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"таитянский"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Восточная Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Северная Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"даза"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Западная Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"уйгурский"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"староитальянская"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"корейская"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"общепринятая"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"украинский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Коптский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"урду"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Стандартизированная резьянская орфография"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"калмыцкий"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"зенагский"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"узбекский"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"кхаси"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Правила немецкой орфографии установленные с 1996 года"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"нижнесаксонский"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"силоти нагри"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"венда"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"варанг-кшити"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"календарь Миньго"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"вьетнамский"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"хотанский"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"койра чиини"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"формат времени (12- или 24-часовой)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Тарашкевица"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"волапюк"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"классический сирийский"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"османская"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"киче"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"га"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"валлонский"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"гагаузский"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"сирийский"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"греческая"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"гань"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"лидийская"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"шумеро-аккадская клинопись"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"волоф"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"тамазигхтский"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"арабский литературный"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"канадское слоговое письмо"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"гайо"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"монгольская"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"маньчжурский"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"латинская фрактура"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"лувийские иероглифы"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"гбая"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"манипурский"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"латиница"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"гэльская латинская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"китайские упрощенные цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"китайские традиционные цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"коса"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"римские цифры в нижнем регистре"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"билин"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"лициан"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"оседжи"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"медумба"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"азбука муна"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"мохаук"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"како"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"идиш"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"моси"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"сирийская"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"дезерет"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"йоруба"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Традиционная система нумерации"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"мексиканский испанский"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"западносирийская"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"старотурецкий"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"сирийская эстрангело"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"ваи"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"чжуань"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"карийская"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"календжин"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"китайский"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"афака"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"бопомофо"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"древнепермская"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"стиль перевода строки"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"зулу"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"порядок телефонной книги"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"Монотонный"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"грузинская"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"шарада"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"кимбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"японские цифры (финансы)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"чамская"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"геэз"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"восточно-сирийская"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"бирманские шанские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"северноаравийское"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"цифры ол-чики"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"реформированный порядок сортировки"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"египетская демотическая"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"египетская иератическая"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"пальмиры"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"эмбу"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"египетская иероглифическая"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"грузинская хуцури"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"китайский, упрощенное письмо"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"коми-пермяцкий"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"старовенгерская"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"конкани"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Традиционная немецкая орфография"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"косраенский"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"цифры лимбу"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"китайский, традиционное письмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"сунданская"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"кхмерские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"тирхута"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"илоко"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"Валенсийский"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"кипрская"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Унифицированный тюрско-латинский алфавит"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"мунданг"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"цифры гурмукхи"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"языки разных семей"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"каддо"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"система мер"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"крик"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"глаголица"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"гилбертский"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"Общая орфография"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"кариб"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"кайюга"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"тамильские цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"карачаево-балкарский"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ингушский"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"дари"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"карельский"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"эфик"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"цифры"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"курух"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"шамбала"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"бафия"_s)
		})
	}));
	return data;
}

LocaleNames_ru::LocaleNames_ru() {
}

$Class* LocaleNames_ru::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ru, name, initialize, &_LocaleNames_ru_ClassInfo_, allocate$LocaleNames_ru);
	return class$;
}

$Class* LocaleNames_ru::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun