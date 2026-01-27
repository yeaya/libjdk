#include <sun/util/resources/cldr/ext/LocaleNames_bs_Cyrl.h>

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

$MethodInfo _LocaleNames_bs_Cyrl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_bs_Cyrl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_bs_Cyrl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_bs_Cyrl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_bs_Cyrl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_bs_Cyrl_MethodInfo_
};

$Object* allocate$LocaleNames_bs_Cyrl($Class* clazz) {
	return $of($alloc(LocaleNames_bs_Cyrl));
}

void LocaleNames_bs_Cyrl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bs_Cyrl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_gu, u"гуџарати"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"келнски"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"огамско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"мирандешки"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"симболи"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"атсамски"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"марвари"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"тагбанва писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"емоџи"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"Гњива/Њива дијалкект"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"чакма"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"староегипатски"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"рађастани"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"пагс-па писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"тимне"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"тесо"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"рапануи"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"терено"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Острво Асенсион"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"раротонган"_s)
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
			$of(u"Уједињени Арапски Емирати"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"фламански"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Афганистан"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Антигва и Барбуда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"етиопски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Ангвила"_s)
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
			$of("Teng"_s),
			$of(u"тенгвар писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ангола"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Антарктик"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Аргентина"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"писани партиан"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Америчка Самоа"_s)
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
			$of(u"Оландска острва"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Азербејџан"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Источни арменијски"_s)
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
			$of(u"цебуано"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Бангладеш"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"кумик"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Белгија"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"средњи високи немачки"_s)
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
			$of("BL"_s),
			$of(u"Свети Бартоломеј"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Бермуди"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"кутенаи"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ерзија"_s)
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
			$of("BQ"_s),
			$of(u"Карипска Холандија"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Бразил"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Бахами"_s)
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
			$of(u"Острво Буве"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Боцвана"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Бјелорусија"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Белизе"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"видљиви говор"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"персијски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"хебрејски бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Канада"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Кокос (Келинг) Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"мазандерани"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Демократска Република Конго"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Централноафричка Република"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Конго"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Швицарска"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Обала Слоноваче (Кот д’Ивоар)"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Кукова Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Чиле"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"каити"_s)
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
			$of("CP"_s),
			$of(u"Острво Клипертон"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Костарика"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Куба"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Зеленортска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Курасао"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Божићно острво"_s)
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
			$of("eka"_s),
			$of(u"екајук"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Њемачка"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"старонемачки"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ачинески"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"чига"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Дијего Гарсија"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"девангари цифре"_s)
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
			$of("ach"_s),
			$of(u"аколи"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"гонди"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Брајево писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"браманско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Доминика"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"мали јерменски бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Доминиканска Република"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"горонтало"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"готски"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"меитеи мајек писмо"_s)
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
			$of(u"пангасински"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"пола ширине"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"пахлави"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Сеута и Мелиља"_s)
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
			$of(u"адангмејски"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Естонија"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"тив"_s)
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
			$of("chg"_s),
			$of(u"чагатаи"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"палауански"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"чукески"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"чинукски"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"мари"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"чипвијански"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"чоктавски"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"чероки"_s)
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
			$of("EU"_s),
			$of(u"Европска унија"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"еламитски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"грегоријански календар"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Еурозона"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"чејенски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"гуџаратске цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"индушко писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"адигејски"_s)
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
			$of(u"Фокландска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Микронезија"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Фарска острва"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"тамилско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Француска"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"токелау"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"гребо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Индијски национални календар"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"старогрчки"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Габон"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"вотски"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Уједињено Краљевство"_s)
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
			$of("GG"_s),
			$of(u"Гернзи"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Гана"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"таи ле писмо"_s)
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
			$of(u"Гренланд"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"средњи енглески"_s)
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
			$of(u"Јужна Џорџија и Јужна Сендвичка Острва"_s)
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
			$of(u"Гвинеја-Бисау"_s)
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
			$of(u"нови таи луе"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Гвајана"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"централнокурдски"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"без лингвистичког садржаја"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Хонг Конг С. А. Р."_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"ваи писмо"_s)
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
			$of("agq"_s),
			$of(u"ахемски"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"њемачки (Швицарска)"_s)
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
			$of("tmh"_s),
			$of(u"тамашек"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Канарска острва"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Индонезија"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"староперсијски"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ирска"_s)
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
			$of(u"Острво Мен"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Индија"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Британска територија у Индијском океану"_s)
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
			$of("Zmth"_s),
			$of(u"математичка нотација"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"тајске цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"Компјутер"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"бенгалске цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Џерзи"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"исламски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Јамајка"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"бенгалско писмо"_s)
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
			$of("%%1606NICT"_s),
			$of(u"Француски из касног средњег века до 1606."_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"аину"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"гуси"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"њаса тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"канада цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"кајах-ли писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"високи њемачки (Швицарска)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"будистички календар"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Кенија"_s)
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
			$of(u"Камбоџа"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"Кирибати"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Комори"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Свети Китс и Невис"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"канада писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"наследно писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Сјеверна Кореја"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Јужна Кореја"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"поралд фонетско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Кувајт"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ток писин"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Кајманска острва"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Казахстан"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"ћирилица"_s)
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
			$of(u"Света Луција"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"феничански"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"Старословенска црквена ћирилица"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"гвич’ин"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"ниски њемачки"_s)
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
			$of("akk"_s),
			$of(u"акадијски"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"коптски"_s)
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
			$of("Phlv"_s),
			$of(u"пахлави писмо"_s)
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
			$of(u"Латвија"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"катакана"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Либија"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ладино"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"вунјо"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"ланда"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"ланги"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"тана писмо"_s)
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
			$of("ME"_s),
			$of(u"Црна Гора"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Свети Мартин"_s)
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
			$of(u"Маршалска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"аљут"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"тајландско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Сјеверна Македонија"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Мали"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Мјанмар"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Монголија"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"невари"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Макао С. А. Р."_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Сјеверна Маријанска Острва"_s)
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
			$of("type.m0.ungegn"_s),
			$of(u"УНГЕГН (BGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Маурицијус"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"јужни алтаи"_s)
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
			$of(u"јапански календар"_s)
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
			$of("Phli"_s),
			$of(u"писани пахлави"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Намибија"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Подсахарска Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"хебрејски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Редослед сортирања у речнику"_s)
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
			$of(u"Острво Норфолк"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Нигерија"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"псалтер пахлави"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Никарагва"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"пахав хмонг писмо"_s)
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
			$of("Phnx"_s),
			$of(u"Феничанско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ромбо"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"тсимшиан"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Нови Зеланд"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"романи"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"мероитик писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"кримеански турски"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"староенглески"_s)
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
			$of("Xpeo"_s),
			$of(u"староперсијско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Панама"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Исламски цивилни календар"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"кашубијански"_s)
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
			$of("ewo"_s),
			$of(u"евондо"_s)
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
			$of(u"Порторико"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Палестинске територије"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"балијско писмо"_s)
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
			$of("nia"_s),
			$of(u"ниас"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"мали грчки бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Парагвај"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"тумбука"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"хебрејско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Катар"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Шкотски стандардни Енглески"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ниуеан"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Остала океанија"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"лезгиан"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"УПА фонетика"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"тувалу"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"таи виет писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Свијет"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Сјеверноамерички континент"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Реинион"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Јужна Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"лојбан"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"рејанг писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Океанија"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Румунија"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Србија"_s)
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
			$of("Mani"_s),
			$of(u"манихејско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"угаритско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"карошти писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Саудијска Арабија"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"понпејски"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"мандеанско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Соломонска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"тасавак"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Западна Африка"_s)
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
			$of("013"_s),
			$of(u"Централна Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Шведска"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Источна Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"армајски"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Сјеверна Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Сингапур"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Света Хелена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"строги стил завршетка ретка"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Централна Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Словенија"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Јужна Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Свалбард и Јан Мајен"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Сјеверна и Јужна Америка"_s)
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
			$of("arn"_s),
			$of(u"ароканијски"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"арапахо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"тамилски бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Суринам"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Јужни Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Сао Томе и Принципе"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Салвадор"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Свети Мартин (Холандија)"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Сирија"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"јао"_s)
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
			$of(u"јапешки"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Тристан да Куња"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"асу"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"амерички систем мјерења"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Сјеверна Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Туркс и Кајкос Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"јангбен"_s)
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
			$of("029"_s),
			$of(u"Кариби"_s)
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
			$of("ast"_s),
			$of(u"астуријски"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"орконско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Танзанија"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"квасио"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"непознато писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Украјина"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"ароманијски"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Источна Азија"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"тувинијски"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Јужна Азија"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"хаида"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Југоисточна Азија"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Уганда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Пињин сортирање"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Јужна Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"синхалско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Мања удаљена острва САД"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Уједињене нације"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Сједињене Америчке Државе"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"хавајски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Поједностављено кинеско сортирање"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Уругвај"_s)
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
			$of(u"централноатласки тамазихт"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Сортирање по броју црта"_s)
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
			$of(u"Свети Винсент и Гренадини"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Венецуела"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Британска Дјевичанска острва"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Америчка Дјевичанска острва"_s)
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
			$of("nog"_s),
			$of(u"ногаи"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"рва"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"стари норски"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Аустралија и Нови Зеланд"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"Западно јерменска"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Меланезија"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Валис и Футуна"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Традиционално сортирање"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Микронезијски регион"_s)
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
			$of("wae"_s),
			$of(u"валсерски"_s)
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
			$of(u"вашо"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"псеудо акценти"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"варај"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"псеудо двосмјерно"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"авадхи"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Полинезија"_s)
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
			$of(u"неписани језик"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ол чики писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"батак писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"блисимболично писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Јемен"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"н’ко"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"стандардни редослијед сортирања"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"фанг"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"Ресијан"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"фанти"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"знаковно писмо"_s)
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
			$of("type.lb.loose"_s),
			$of(u"слободан стил завршетка ретка"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"деванагари"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"грузијски бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"хирагана"_s)
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
			$of("ZZ"_s),
			$of(u"Непозната или неважећа област"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"рунско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"метрички систем"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 календар"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"монго"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"сјеверни сото"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"телугу цифре"_s)
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
			$of(u"поједностављени кинески финансијски бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"хилигајнон"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"продужене арапско-индијске цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"нуер"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"дакота"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"цифре пуне ширине"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"хитите"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"даргва"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"таита"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"мајански хијероглифи"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"сјеверни лури"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"коптичко писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"класични невари"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"удмурт"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"кмерско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"лимбу писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"сандаве"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"римски бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"јакутски"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"самаритански арамејски"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"Скауз"_s)
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
			$of("Tfng"_s),
			$of(u"тифинаг писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"јудео-персијски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Нумеричка"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"гурмуки писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"луба-лулуа"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"пуна ширина"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"сангу"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"луисено"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"њанколе"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"њамвези"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"лунда"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"њоро"_s)
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
			$of(u"делавер"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"лушаи"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"балучи"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"славски"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"балинезијски"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"угаритски"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"луја"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"баса"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"јудео-арапски"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"нзима"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"шкотски"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"сицилијански"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"афарски"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"абказијски"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"авестански"_s)
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
			$of(u"арагонежански"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"арапско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Столвица/Солбица дијалект"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"јапанско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"арапски"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"јапанско слоговно писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"асемијски"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"линеарно А писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"аварски"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"линеарно Б писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ајмара"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"азербејџански"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Осеако/Осојане дијалект"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"башкир"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Редослед сортирања радикалним цртицама"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"бјелоруски"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"бугарски"_s)
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
			$of(u"тибетански"_s)
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
			$of(u"босански"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"мијанмарско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"лаоске цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"сена"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"н’ко писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"селкап"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"каталонски"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"којраборо сени"_s)
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
			$of(u"Ревидирана ортографија"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"корзикански"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"одија писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"кри"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"чешки"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"старославенски"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"чувашки"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"велшки"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"етиопски бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"ји писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"дански"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"њемачки"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"стандардни формат валуте"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"беја"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"динка"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"бугинско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"бемба"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"староирски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"монголске цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"дивехијски"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"џонга"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"бена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"кинески календар"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"зарма"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"грчки бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"еве"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"нормални стил завршетка ретка"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"молдавски"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"грчки"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"енглески"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"есперанто"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Традиционално кинеско сортирање"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"шпански"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"естонски"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"хан с бопомофо писмом"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"баскијски"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"бухидско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"хангул"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"самаританско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"ташелхит"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"горњолужичкосрпски"_s)
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
			$of(u"хануно"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"персијски"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"поједностављени"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"западне цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"традиционални"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"фулах"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"фински"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"фиджијски"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"фон"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"кантонски"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"фарски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"БГН (BGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"умбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"француски"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"сидамо"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"западни фризијски"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ирски"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"шкотски галски"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"галски"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"гварани"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"бојпури"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"непознати језик"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"етиопски амет алем календар"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"манкс"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"хауса"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"хебрејски"_s)
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
			$of(u"бикол"_s)
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
			$of(u"хрватски"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"хаићански креолски"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"мађарски"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"јерменски"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"хереро"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"ИПА фонетика"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"интерлингва"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"џамо"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"индонежански"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"тибетанске цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"међујезички"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"игбо"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"сечуан ји"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"средњи француски"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"унупиак"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"старофранцуски"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"идо"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"источни фризијски"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"северно-фризијски"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"исландски"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"италијански"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"инуктитут"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"јапански"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"малајалам писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"сарати писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"догри"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"јужни сами"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"јавански"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"шавијанско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"мадурешки"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"луле сами"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"магахи"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"маитили"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"инари сами"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"грузијски"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"сисика"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"макасар"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"сколтски језик"_s)
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
			$of(u"Готика"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"кикују"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"масаи"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"куањама"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"казашки"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"калалисут"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"кмерски"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"канада"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"корејски"_s)
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
			$of(u"цирт писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"лепча писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"авестанско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"курдски"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"коми"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"корнишки"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"киргиски"_s)
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
			$of(u"луксембуршки"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"малајалам цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ганда"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"ронгоронго писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"лимбургиш"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"тибетанско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"лингала"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"фриулијски"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"лаоски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"империјални систем мјерења"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"литвански"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"луба-катанга"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"латвијски"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"соџијенски"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"малагасијски"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"маршалски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"задани Unicode редослијед сортирања"_s)
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
			$of(u"малајалам"_s)
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
			$of(u"малајски"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"малтешки"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"бурмански"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"саураштра писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"јерменско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"мокша"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"доњолужичкосрпски"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"империјско арамејско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"науру"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"претрага опште намене"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"норвешки бокмал"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"сјеверни ндебеле"_s)
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
			$of(u"холандски"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"норвешки нинорск"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"норвешки"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"јужни ндебеле"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"навахо"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"кара-калпашки"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"њања"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"качин"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"кабиле"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"Политоник"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"провансалски"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"ђу"_s)
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
			$of(u"ојибва"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"меру"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"јерменски бројеви"_s)
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
			$of(u"одија"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"осетски"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"кабардијски"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"мауритански"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"сранански тонго"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"пенџапски"_s)
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
			$of(u"Липовички дијалект ресијански"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"пали"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"пољски"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"средњи холандски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"данги календар"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"паштунски"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"португалски"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"средњи ирски"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"сортирање"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"тјап"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"макуа-мето"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"формат валуте"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"брај"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Календар"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"лаоско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"мета"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-сатни систем (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-сатни систем (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"мијанмарске цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"квенча"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"запотечки"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"бодо"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"ланна писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"маконде"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"етиопско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-сатни систем (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-сатни систем (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"рето-романски"_s)
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
			$of(u"румунски"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(u"Сахо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"орија цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"кинески децимални бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"руски"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"кинјаруанда"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"блисимболи"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"кабовердијански креолски"_s)
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
			$of("sa"_s),
			$of(u"санскрит"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"сардињаски"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"сусу"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"синди"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"сјеверни сами"_s)
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
			$of(u"српскохрватски"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"синхалски"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"сумерски"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"словачки"_s)
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
			$of(u"сомалски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"арапско-индијске цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"албански"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"српски"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"свати"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"рачуноводствени формат валуте"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"сесото"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"јаванско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"сундански"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"Натисоне дијалект"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"шведски"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"свахили"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"традиционални кинески финансијски бројеви"_s)
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
			$of(u"Азија"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"буриат"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Централна Азија"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"телугу"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Западна Азија"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"таџички"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"тајландски"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"тигриња"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"бугинежански"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"коро"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"туркменски"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"тагалски"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"тсвана"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"јола-фоњи"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"јапански бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"турски"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"тсонга"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"коморски"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"чакманско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"татарски"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"ђула"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"тви"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"тахићански"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"Сан Ђорђио/Била дијалект"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Источна Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Сјеверна Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Западна Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ујгурски"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"стари италик"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"корејско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"заједничко писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"украјински"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"коптски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"урду"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Стандарднизована ресијанска ортографија"_s)
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
			$of(u"узбечки"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"каси"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Немачка ортографија из 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"силоти нагри писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"венда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Календар Републике Кине"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"вијетнамски"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"котанешки"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"којра чини"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"сат (12-сати / 24-сата)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Тараскијевичка ортографија"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"волапук"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"класични сиријски"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"осмањанско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"га"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"валун"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"сиријски"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"грчко писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"лидијско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"сумерско-акадско кунеиформ писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"волоф"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"стандардни марокански тамазихт"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"арапски (стандардни)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"уједињени канадски абориџински силабици"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"гајо"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"монголско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"манчу"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"латиница (фрактур варијанта)"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"гбаја"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"манипури"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"латиница"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"галска латиница"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"поједностављени кинески бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"традиционални кинески бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"коса"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"мали римски бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"блин"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"лисијско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"осаге"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"месечево писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"махавски"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"како"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"Рани модерни француски"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"јидиш"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"моси"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"сиријско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"Дезерет"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"јоруба"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"западносиријско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"отомански турски"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"сиријско естрангело писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"ваи"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"жуанг"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"каријско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"калењин"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"кинески"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"бопомофо писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"старо пермикско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"стил завршетка ретка"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"зулу"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Сортирање као телефонски именик"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"Монотоник"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"грузијско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"кимбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"јапански финансијски бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"чамско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"џиз"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"писмо источне Сирије"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Реформисани редослед сортирања"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"Тагалог"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"египатско народно писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"египатско хијератско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ембу"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"египатски хијероглифи"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"грузијско кхутсури писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"кинески (поједностављен)"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"старомађарско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"конкани"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Традиционална немачка ортографија"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"косреански"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"кпеле"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"кмерске цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"илоко"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"Валенцијска"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"кипарско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Уједињен турски латинични алфабет"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"мунданг"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"гурмуки цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"више језика"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"кадо"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"систем мјерења"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"кришки"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"глагољица"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"гилбертшки"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"Чероки"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"карипски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"тамилске цифре"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"карачај-балкар"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ингвишки"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"карелијски"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ефикски"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"Бројеви"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"курукх"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"шамбала"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"телугу писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"бафија"_s)
		})
	}));
	return data;
}

LocaleNames_bs_Cyrl::LocaleNames_bs_Cyrl() {
}

$Class* LocaleNames_bs_Cyrl::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bs_Cyrl, name, initialize, &_LocaleNames_bs_Cyrl_ClassInfo_, allocate$LocaleNames_bs_Cyrl);
	return class$;
}

$Class* LocaleNames_bs_Cyrl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun