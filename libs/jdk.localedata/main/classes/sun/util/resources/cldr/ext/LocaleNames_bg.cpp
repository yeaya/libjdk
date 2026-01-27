#include <sun/util/resources/cldr/ext/LocaleNames_bg.h>

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

$MethodInfo _LocaleNames_bg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_bg, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_bg, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_bg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_bg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_bg_MethodInfo_
};

$Object* allocate$LocaleNames_bg($Class* clazz) {
	return $of($alloc(LocaleNames_bg));
}

void LocaleNames_bg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_gu, u"гуджарати"_s);
	$var($String, metaValue_he, u"иврит"_s);
	$var($String, metaValue_kn, u"каннада"_s);
	$var($String, metaValue_ml, u"малаялам"_s);
	$var($String, metaValue_or, u"ория"_s);
	$var($String, metaValue_te, u"телугу"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"кьолнски"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"Огамическа"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"мирандийски"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"символи"_s)
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
			$of("Tagb"_s),
			$of(u"Тагбанва"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"емоджи"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"Диалект Нджива"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"чакма"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"древноегипетски"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"раджастански"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"Фагс-па"_s)
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
			$of(u"рапа нуи"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"терено"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"остров Възнесение"_s)
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
			$of(u"Андора"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Обединени арабски емирства"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"фламандски"_s)
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
			$of(u"етиопски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Ангуила"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"Часова зона"_s)
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
			$of(u"Антарктика"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Аржентина"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Американска Самоа"_s)
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
			$of(u"американски английски"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Оландски острови"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Азербайджан"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Източно арменски"_s)
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
			$of("ceb"_s),
			$of(u"себуански"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Бангладеш"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"кумикски"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Белгия"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"средновисоконемски"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Буркина Фасо"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"България"_s)
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
			$of(u"Сен Бартелеми"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Бермудски острови"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"кутенай"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ерзиа"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Бруней Даруссалам"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Боливия"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Карибска Нидерландия"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Бразилия"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Бахамски острови"_s)
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
			$of(u"остров Буве"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Ботсвана"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Беларус"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Белиз"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"Видима реч"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"персийски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"цифри в иврит"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Канада"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Кокосови острови (острови Кийлинг)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"мазандерански"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Конго (Киншаса)"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Централноафриканска република"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Конго (Бразавил)"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Швейцария"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Кот д’Ивоар"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"острови Кук"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Чили"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"Кайтхи"_s)
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
			$of(u"остров Клипертон"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Коста Рика"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Куба"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Кабо Верде"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Кюрасао"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"остров Рождество"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Кипър"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Чехия"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"екажук"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Германия"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"старовисоконемски"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ачешки"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"чига"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Диего Гарсия"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"цифри в деванагари"_s)
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
			$of(u"аколи"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"гонди"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"брайлова"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"Брахми"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Доминика"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"арменски цифри в долен регистър"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Доминиканска република"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"горонтало"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"готически"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"Манипури"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"зуни"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"тигре"_s)
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
			$of(u"С половин ширина"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"пахлави"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Сеута и Мелия"_s)
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
			$of(u"Еквадор"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"папиаменто"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"адангме"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Естония"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"тив"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Египет"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Западна Сахара"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"чагатай"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"палауан"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"чуук"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"жаргон чинуук"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"марийски"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"чиипувски"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"чокто"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"черокски"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Еритрея"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Испания"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Етиопия"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Европейски съюз"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"еламитски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"григориански календар"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"еврозона"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"шайенски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"цифри в гуджарати"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"Харапска"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"адигейски"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Финландия"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Фиджи"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Фолкландски острови"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Микронезия"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Вариант на локала"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Фарьорски острови"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"тамилска"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Франция"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"токелайски"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"гребо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Индийски граждански календар"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"древногръцки"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Габон"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"вотик"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Обединеното кралство"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"нигерийски пиджин"_s)
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
			$of(u"Френска Гвиана"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Гърнзи"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Гана"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"Тай Ле"_s)
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
			$of(u"средновековен английски"_s)
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
			$of(u"Екваториална Гвинея"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Гърция"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Южна Джорджия и Южни Сандвичеви острови"_s)
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
			$of(u"клингонски"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"Нова Тай Ле"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Гаяна"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"кюрдски (централен)"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"без лингвистично съдържание"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Хонконг, САР на Китай"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"Вайска"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"острови Хърд и Макдоналд"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Хондурас"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Хърватия"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"агем"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"швейцарски немски"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Хаити"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Унгария"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"тамашек"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Канарски острови"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Индонезия"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"староперсийски"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ирландия"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"неаполитански"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"нама"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"заза"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Израел"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"остров Ман"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Индия"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Британска територия в Индийския океан"_s)
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
			$of(u"математически символи"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"тайландски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"Компютърен"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"бенгалски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Джърси"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ислямски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Ямайка"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"бенгалска"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Йордания"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Япония"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"Късен средновековен френски до 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"айну"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"гусии"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"нианса тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"цифри в каннада"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"Кая Ли"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Фонетичен ред на сортиране"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"будистки календар"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Кения"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Латинска Америка"_s)
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
			$of(u"Коморски острови"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Сейнт Китс и Невис"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Северна Корея"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Южна Корея"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"Писменост Полард"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Кувейт"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ток писин"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Кайманови острови"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Казахстан"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"кирилица"_s)
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
			$of(u"Сейнт Лусия"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"финикийски"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"гвичин"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"долнонемски"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Лихтенщайн"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Шри Ланка"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"акадски"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"коптски"_s)
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
			$of(u"Пахлавска"_s)
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
			$of("LY"_s),
			$of(u"Либия"_s)
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
			$of(u"ланги"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"таана"_s)
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
			$of(u"Молдова"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Черна гора"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Сен Мартен"_s)
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
			$of(u"Маршалови острови"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"алеутски"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"тайска"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Цифри във ваи"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Северна Македония"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Мали"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Мианмар (Бирма)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Монголия"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"неварски"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Макао, САР на Китай"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Северни Мариански острови"_s)
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
			$of(u"Малта"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"ГЕСГИ ООН (UNGEGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Мавриций"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"южноалтайски"_s)
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
			$of("type.ca.japanese"_s),
			$of(u"японски календар"_s)
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
			$of(u"Субсахарска Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"еврейски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Речников ред на сортиране"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Нова Каледония"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Уейд-Джайлс романизация"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Нигер"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"остров Норфолк"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Нигерия"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"тароко"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Никарагуа"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"Пахау хмонг"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Нидерландия"_s)
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
			$of(u"Ниуе"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"Финикийска"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ромбо"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"цимшиански"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Нова Зеландия"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"ромски"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"Мероитска"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"кримскотатарски"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"староанглийски"_s)
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
			$of(u"сеселва, креолски френски"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"Староперсийска"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Панама"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Ислямски цивилен календар"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"кашубски"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"британски английски"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Перу"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Френска Полинезия"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Папуа-Нова Гвинея"_s)
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
			$of(u"Полша"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"евондо"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Сен Пиер и Микелон"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Острови Питкерн"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Пуерто Рико"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Палестински територии"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"Балийски"_s)
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
			$of(u"гръцки цифри в долен регистър"_s)
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
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Катар"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Шотландски английски"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ниуеан"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Отдалечени острови на Океания"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"лезгински"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"Уралска фонетична азбука"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"тувалуански"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"свят"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Северноамерикански континент"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Реюнион"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Южна Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ложбан"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Океания"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Румъния"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Сърбия"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Русия"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Руанда"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"Манихейска"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"Угаритска"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"Кхароштхи"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Саудитска Арабия"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"понапеан"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"Мандаринска"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Соломонови острови"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"тасавак"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Западна Афирка"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Сейшели"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Централна Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Швеция"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Източна Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"арамейски"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Северна Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Сингапур"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Света Елена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Строг стил за нов ред"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Централна Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Словения"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Южноафрикански регион"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Свалбард и Ян Майен"_s)
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
			$of(u"Сиера Леоне"_s)
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
			$of(u"Сомалия"_s)
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
			$of(u"традиционни тамилски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Суринам"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Южен Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Сао Томе и Принсипи"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Салвадор"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Синт Мартен"_s)
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
			$of(u"Есватини"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"аравак"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"япезе"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Тристан да Куня"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"асу"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"Мерна система на САЩ"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Северна Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"острови Търкс и Кайкос"_s)
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
			$of("TF"_s),
			$of(u"Френски южни територии"_s)
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
			$of(u"Таджикистан"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Карибски регион"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Токелау"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Тимор Лесте"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"йемба"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Търсене по първоначални съгласни в хангул"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Туркменистан"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"Бунтлинг"_s)
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
			$of(u"Тайван"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"астурски"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"Орхоно-енисейска"_s)
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
			$of(u"непозната писменост"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Украйна"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"арумънски"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Източна Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"тувински"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"конгоански суахили"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Южна Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"хайда"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Югоизточна Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Уганда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Сортиране Пинин"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Южна Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"синхалска"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Отдалечени острови на САЩ"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Организация на обединените нации"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Съединени щати"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"хавайски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Опростен китайски (GB2312)"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Уругвай"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"пруски"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Узбекистан"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"централноатласки тамазигт"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Сортиране по щрих"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"нгиембун"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Ватикан"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"старопровансалски"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Сейнт Винсънт и Гренадини"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Венецуела"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Британски Вирджински острови"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Американски Вирджински острови"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Виетнам"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Вануату"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"ногаи"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"рва"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"старонорвежки"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Австралазия"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"Западно арменски"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Меланезия"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Уолис и Футуна"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Традиционно"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Микронезийски регион"_s)
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
			$of(u"Финансови цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"валзерски немски"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"валамо"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"уашо"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"Псевдоакценти"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"варай"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"Псевдодвупосочни"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"авади"_s)
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
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"без писменост"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"Ол Чики"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"валпири"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"Батакска"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"Блис символи"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Йемен"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"нко"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"стандартен ред на сортиране"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"фанг"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"Резиански"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"фанти"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Майот"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Южна Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Свободен стил за нов ред"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"деванагари"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"грузински цифри"_s)
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
			$of(u"Пинин романизация"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Зимбабве"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"непознат регион"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"Руническа"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"Метрична система"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"календар съгласно ISO 8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"монго"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"северен сото"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"цифри в телугу"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"лози"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"мачаме"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"финансови цифри в китайски (опростен)"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"хилигайнон"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"разширени арабско-индийски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"нуер"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"дакотски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"цифри с пълна ширина"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"хитски"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"даргински"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"таита"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"Йероглифи на Маите"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"северен лури"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"Коптска"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"класически невари"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"удмуртски"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"кхмерска"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"Лимбу"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"сандаве"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"римски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"саха"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"самаритански арамейски"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"Ливърпулски диалект"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"самбуру"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"сасак"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"сантали"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"юдео-персийски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Цифрови"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Местни цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"нгамбай"_s)
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
			$of(u"С пълна ширина"_s)
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
			$of(u"нянколе"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ниамвези"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"лунда"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"нуоро"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"луо"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"филипински"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"хмонг"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"делауер"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"мизо"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"балучи"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"слейви"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"балийски"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"угаритски"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"лухя"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"баса"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"юдео-арабски"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"нзима"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"шотландски"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"сицилиански"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"афарски"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"абхазки"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"авестски"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"африканс"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"акан"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"амхарски"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"арагонски"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"арабска"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Диалект Столвиза"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"японска"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"арабски"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"японска сричкова"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"асамски"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"Линейна А"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"аварски"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"Линейна Б"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"южнокюрдски"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"аймара"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"азербайджански"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Диалект Осеако/Осояне"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"башкирски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Ред на сортиране по ключове и черти"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"беларуски"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"български"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"бислама"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"бамбара"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"бенгалски"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"тибетски"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"догриб"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"бретонски"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"босненски"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"бирманска"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"лаоски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"сена"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"Н’Ко"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"селкуп"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"каталонски"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"койраборо сени"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"чеченски"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"чаморо"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"Променен правопис"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"корсикански"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"крии"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"чешки"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"църковнославянски"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"чувашки"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"уелски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"етиопски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"Йи"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"датски"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"немски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"стандартен формат на валута"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"бея"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"динка"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"Бугинска"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"бемба"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"староирландски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Монголски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"дивехи"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"дзонгкха"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"бена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"китайски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"зарма"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"гръцки цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"еве"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Нормален стил за нов ред"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"молдовски"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"гръцки"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"английски"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"есперанто"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Традиционен китайски (Big5)"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"испански"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"естонски"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"ханб"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"баски"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"Бухид"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"хангъл"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"Самаританска"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ташелхит"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"горнолужишки"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"хан"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"шан"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"Хануну"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"персийски"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"опростена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"западни цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"традиционна"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"фула"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"фински"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"фиджийски"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"фон"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"западен балочи"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"кантонски"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"фарьорски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"АКГН (BGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"умбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"френски"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"сидамо"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"западнофризийски"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ирландски"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"шотландски келтски"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"галисийски"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"гуарани"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"боджпури"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"непознат език"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Етиопски календар Амит Алем"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"манкски"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"хауса"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
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
			$of(u"биколски"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"бини"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"хири моту"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"хърватски"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"хаитянски креолски"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"унгарски"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"арменски"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"хереро"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"Международна фонетична азбука"_s)
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
			$of(u"индонезийски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"тибетски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"оксидентал"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"игбо"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"съчуански йи"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"средновековен френски"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"инупиак"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"старофренски"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"идо"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"източнофризийски"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"северен фризски"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"исландски"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"италиански"_s)
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
			$of(u"японски"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"Сарати"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"догри"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"южносаамски"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"явански"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"мадурски"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"луле-саамски"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"магахи"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"майтхили"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"инари-саамски"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"грузински"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"сиксика"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"макасар"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"сколт-саамски"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"мандинго"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"конгоански"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"Готическа"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"кикую"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"масайски"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"кваняма"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"казахски"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"гренландски"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"кхмерски"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"корейски"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"канури"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"кашмирски"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"Кирт"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"Лепча"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"Авестанска"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"кюрдски"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"коми"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"корнуолски"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"киргизки"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"сонинке"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"латински"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"люксембургски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"цифри в малаялам"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ганда"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"Ронго-ронго"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"лимбургски"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"тибетска"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"лингала"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"фриулски"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"лаоски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Имперска мерна система"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"литовски"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"луба-катанга"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"латвийски"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"согдийски"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"малгашки"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"маршалезе"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"ред на сортиране в Unicode по подразбиране"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"маорски"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"македонски"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"монголски"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"марати"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"малайски"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"малтийски"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"бирмански"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"Саураштра"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"арменска"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"мокша"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"долнолужишки"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"Арамейска"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"науру"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"търсене с общо предназначение"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"норвежки (букмол)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"северен ндебеле"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"непалски"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ндонга"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"мандар"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"нидерландски"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"норвежки (нюношк)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"норвежки"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"южен ндебеле"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"навахо"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"каракалпашки"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"нянджа"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"качински"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"кабилски"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"Политонично"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"окситански"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"жжу"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"камба"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"менде"_s)
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
			$of(u"арменски цифри"_s)
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
			$of(u"осетински"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"кабардиан"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"морисиен"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"сранан тонго"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"пенджабски"_s)
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
			$of("%%LIPAW"_s),
			$of(u"Диалект Липовац"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"пали"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"полски"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"средновековен холандски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"корейски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"пущу"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"португалски"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"средновековен ирландски"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"ред на сортиране"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"туап"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"макуа мето"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"формат на валута"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"брадж"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"календар"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"лаоска"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"мета"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-часова система (0 – 23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-часова система (1 – 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"сахо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"бирмански цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"кечуа"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"запотек"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"бодо"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"Ланна"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"маконде"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"етиопска"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-часова система (1 – 12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-часова система (0 – 11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"реторомански"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"рунди"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"валута"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"румънски"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(u"Сахо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"цифри в ория"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"китайски десетични цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"руски"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"киняруанда"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"блис символи"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"кабовердиански"_s)
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
			$of(u"австралийски английски"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"санскрит"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"сардински"_s)
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
			$of(u"северносаамски"_s)
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
			$of(u"сърбохърватски"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"синхалски"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"шумерски"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"словашки"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"словенски"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"самоански"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"шона"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"сомалийски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"арабско-индийски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"албански"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"сръбски"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"свати"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"формат на валута за счетоводни цели"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"сото"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"Яванска"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"сундански"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"Диалект Натисоне"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"шведски"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"суахили"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"финансови цифри в китайски (традиционен)"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ибибио"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ибан"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"тамилски"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"бурятски"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Централна Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Западна Азия"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"таджикски"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"тайски"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"тигриня"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"бугински"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"коро"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"канадски английски"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"туркменски"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"тагалог"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"тсвана"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"тонгански"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"диола-фони"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"японски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"турски"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"цонга"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"коморски"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"Чакма"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"татарски"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"диула"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"туи"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"таитянски"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"Диалект Сан Джорджио/Била"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Източна Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Северна Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"дазага"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Западна Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"уйгурски"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"Древно италийска"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"корейска"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"обща"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"украински"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Коптски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"урду"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Стандартен резиански правопис"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"калмик"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"зенага"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"узбекски"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"кхаси"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Немски правопис от 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"долносаксонски"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"Силоти Нагри"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"венда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"календар на Република Китай"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"виетнамски"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"котски"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"койра чиини"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Часови формат (12- или 24-часов)"_s)
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
			$of(u"класически сирийски"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"Османска"_s)
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
			$of(u"валонски"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"гагаузки"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"сирийски"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"гръцка"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"Лидийска"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"Шумеро-акадски клинопис"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"волоф"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"стандартен марокански тамазигт"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"съвременен стандартен арабски"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"Унифицирани символи на канадски аборигени"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"гайо"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"монголска"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"манджурски"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"Латинска фрактура"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"гбая"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"манипурски"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"латиница"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"Галска латинска"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"цифри в китайски (опростен)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"цифри в китайски (традиционен)"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"кхоса"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"римски цифри в долен регистър"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"биленски"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"Лицийска"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"осейджи"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"Мун"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"мохоук"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"како"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"Ранен съвременен френски"_s)
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
			$of(u"Сирийска"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"Дезерет"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"йоруба"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Традиционни цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"Западна сирийска"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"отомански турски"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"Сирийска естрангело"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"ваи"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"зуанг"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"Карийска"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"календжин"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"китайски"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"бопомофо"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"Древно пермска"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Стил за нов ред"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"зулуски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Азбучен ред"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"Монотонично"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"грузинска"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"кимбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"японски финансови цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"Хамитска"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"гииз"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"Източна сирийска"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Следреформен ред на сортиране"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"Тагалог"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"Египетско демотично писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"Египетско йератично писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ембу"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Египетски йероглифи"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"Грузинска хуцури"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"китайски (опростен)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"коми-пермякски"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"Староунгарска"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"конкани"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Традиционен немски правопис"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"косраен"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"китайски (традиционен)"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"Сунданска"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"кпеле"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"кхмерски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"илоко"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"Валенсиански"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"Кипърска"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Унифицирана тюркска азбука"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"мунданг"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"цифри в гурмукхи"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"многоезични"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"каддо"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Мерна система"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"мускогски"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"Глаголическа"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"гилбертски"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"Чероки"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"карибски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"тамилски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"карачай-балкарски"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ингушетски"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"дари"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"карелски"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ефик"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"курук"_s)
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

LocaleNames_bg::LocaleNames_bg() {
}

$Class* LocaleNames_bg::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bg, name, initialize, &_LocaleNames_bg_ClassInfo_, allocate$LocaleNames_bg);
	return class$;
}

$Class* LocaleNames_bg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun