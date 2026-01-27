#include <sun/util/resources/cldr/ext/LocaleNames_mk.h>

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

$MethodInfo _LocaleNames_mk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_mk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_mk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_mk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_mk",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_mk_MethodInfo_
};

$Object* allocate$LocaleNames_mk($Class* clazz) {
	return $of($alloc(LocaleNames_mk));
}

void LocaleNames_mk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mk::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_gu, u"гуџарати"_s);
	$var($String, metaValue_kn, u"каннада"_s);
	$var($String, metaValue_te, u"телугу"_s);
	$var($String, metaValue_bas, u"баса"_s);
	$var($String, metaValue_nqo, u"нко"_s);
	$var($String, metaValue_vai, u"вај"_s);
	$var($String, metaValue_zbl, u"блиссимболи"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"колоњски"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"огам"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"мирандски"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"симболи"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"ацам"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"марвари"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"емилијански"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"тагбанванско"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"емоџи"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of(u"мегрелски"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"чакмански"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"староегипетски"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"раџастански"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"пагспа"_s)
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
			$of(u"рапанујски"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"терено"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Остров Асенсион"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"раротонгански"_s)
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
			$of(u"Обединети Арапски Емирати"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"фламански"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Авганистан"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Антига и Барбуда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Етиопски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of(u"гилански"_s)
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
			$of(u"Ерменија"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"тенгвар"_s)
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
			$of(u"натписно партиско"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Американска Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Австрија"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Австралија"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Аруба"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"американски англиски"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Оландски Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"мјене"_s)
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
			$of("ceb"_s),
			$of(u"себуански"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Бангладеш"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"кумички"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Белгија"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"средногорногермански"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Буркина Фасо"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Бугарија"_s)
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
			$of(u"Свети Вартоломеј"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Бермуди"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"кутенајски"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ерзјански"_s)
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
			$of(u"Остров Буве"_s)
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
			$of(u"Белизе"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"видлив говор"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Персиски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Хебрејски броеви"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Канада"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Кокосови (Килиншки) Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"мазендерански"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Конго - Киншаса"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Централноафриканска Република"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Конго - Бразавил"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Швајцарија"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Брегот на Слоновата Коска"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Кукови Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Чиле"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"кајти"_s)
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
			$of(u"Остров Клипертон"_s)
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
			$of(u"Зелен ’Рт"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Курасао"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Божиќен Остров"_s)
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
			$of(u"екаџук"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of(u"Паучинхауово"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"западнофламански"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Германија"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"старогорногермански"_s)
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
			$of(u"Диего Гарсија"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"гоански конкани"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Деванагарски цифри"_s)
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
			$of(u"брајово писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"брами"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Доминика"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Ерменски мали броеви"_s)
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
			$of("vmf"_s),
			$of(u"мајнскофранконски"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"мејтејско"_s)
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
			$of("Takr"_s),
			$of(u"такри"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Алжир"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"пангасинански"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"средноперсиски"_s)
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
			$of(u"папијаменто"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"адангме"_s)
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
			$of(u"Египет"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Западна Сахара"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"чагатајски"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"палауански"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"чучки"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"чинучки жаргон"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"мариски"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"чипевјански"_s)
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
			$of(u"еламски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Грегоријански календар"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Еврозона"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"чејенски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Гуџарати цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"харапско"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"адигејски"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"туниски арапски"_s)
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
			$of(u"Фолкландски Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Микронезија"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Фарски Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"тамилско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Франција"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"кпелско"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of(u"пикардски"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"токелауански"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"гребо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Индиски национален календар"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of(u"ромањолски"_s)
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
			$of("tkr"_s),
			$of(u"цахурски"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"вотски"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Обединето Кралство"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"нигериски пиџин"_s)
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
			$of(u"тај ле"_s)
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
			$of(u"средноанглиски"_s)
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
			$of(u"Гвадалупе"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Екваторска Гвинеја"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Грција"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Јужна Џорџија и Јужни Сендвички Острови"_s)
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
			$of("pdc"_s),
			$of(u"пенсилваниски германски"_s)
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
			$of(u"ново тај луе"_s)
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
			$of(u"без лингвистичка содржина"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"џурченско"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"талишки"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of(u"менонитски долногермански"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"австриски германски"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Хонгконг САР Кина"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Остров Херд и Острови Мекдоналд"_s)
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
			$of(u"агемски"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"швајцарски германски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"Исламски календар (Ум ал-Кура)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Хаити"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Унгарија"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of(u"рифски"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"тамашек"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Канарски Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"јужномински"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Индонезија"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"староперсиски"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ирска"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"неаполски"_s)
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
			$of("Tang"_s),
			$of(u"тангутско"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Израел"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"набатејско"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Остров Ман"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Индија"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Европски правила за подредување"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Британска Индоокеанска Територија"_s)
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
			$of(u"Тајландски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"виру"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"гвахиро"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Бенгалски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"фалечкогермански"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Џерси"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Исламски календар"_s)
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
			$of("gur"_s),
			$of(u"фарефаре"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Јапонија"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ајну"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"мендско"_s)
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
			$of(u"Каннада цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"каја ли"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of(u"сидам"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"швајцарски горногермански"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"ижорски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Будистички календар"_s)
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
			$of(u"Киргистан"_s)
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
			$of(u"Коморски Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Свети Китс и Невис"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"наследено"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"канадски француски"_s)
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
			$of("Plrd"_s),
			$of(u"Полардово"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"швајцарски француски"_s)
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
			$of(u"Кајмански Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Казахстан"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"кирилско писмо"_s)
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
			$of(u"Сент Лусија"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"феникиски"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"старословенска кирилица"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"гвичински"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"долногермански"_s)
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
			$of(u"акадски"_s)
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
			$of("esu"_s),
			$of(u"централнојупички"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Лесото"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"книжевно староперсиско"_s)
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
			$of("Sora"_s),
			$of(u"соранг сомпенг"_s)
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
			$of(u"вунџо"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"алабамски"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"ланда"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of(u"махаџани"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"ланги"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"тана"_s)
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
			$of("Nshu"_s),
			$of(u"нишу"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Црна Гора"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Сент Мартин"_s)
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
			$of(u"Маршалски Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"алеутски"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"тајландско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Северна Македонија"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Мали"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Мјанмар (Бурма)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Монголија"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"неварски"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Макао САР"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"гешки албански"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Северни Маријански Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Мартиник"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Мавританија"_s)
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
			$of("cps"_s),
			$of(u"капизнон"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Маврициус"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"јужноалтајски"_s)
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
			$of(u"Јапонски календар"_s)
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
			$of(u"натписно средноперсиско"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Намибија"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Супсахарска Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Еврејски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Подредување по азбучен редослед"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Нова Каледонија"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Вејд-Џајлс романизација"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of(u"туројо"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Нигер"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Норфолшки Остров"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Нигерија"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"тароко"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"псалтирско средноперсиско"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Никарагва"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"пахауанско хмоншко"_s)
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
			$of("tsd"_s),
			$of(u"цаконски"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Ниује"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"феникиско"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ромбо"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"цимшијански"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Нов Зеланд"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"мероитско ракописно"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"ромски"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"мероитско"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"кримскотурски"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"староанглиски"_s)
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
			$of(u"француски (Сеселва креоли)"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"староперсиско"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Панама"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Исламски граѓански календар"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"кашупски"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"британски англиски"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Перу"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"татски"_s)
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
			$of(u"Полска"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"евондо"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Сент Пјер и Микелан"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Питкернски Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Порторико"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Палестински Територии"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"балиско"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Португалија"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Палау"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"нијас"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Грчки мали броеви"_s)
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
			$of("jam"_s),
			$of(u"јамајски креолски"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"пиемонтски"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ниујески"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Зависни земји во Океанија"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"екстремадурски"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"лезгински"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"Ахомски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"тувалуански"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"тај вјет"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Свет"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of(u"ао нага"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Северна Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Реунион"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Јужна Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of(u"лингва франка нова"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ложбан"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"понтски"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"реџаншко"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Океанија"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Романија"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Србија"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"мро"_s)
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
			$of(u"манихејско"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"угаритско"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"карошти"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Саудиска Арабија"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"понпејски"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"мандејско"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Соломонски Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"тазавак"_s)
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
			$of(u"арамејски"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"ломско"_s)
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
			$of(u"Строг стил за разделување редови"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Средна Африка"_s)
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
			$of(u"Америки"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Словачка"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"бамумско"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"волеајско"_s)
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
			$of(u"Сомалија"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"мапучки"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"арапахо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Традиционални тамилски броеви"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Суринам"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"араона"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Јужен Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Сао Томе и Принсипе"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"алжирски арапски"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Ел Салвадор"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Свети Мартин"_s)
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
			$of(u"Свазиленд"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"аравачки"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"египетски арапски"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"марокански арапски"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"јапски"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of(u"ротумански"_s)
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
			$of(u"Американски мерен систем"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Северна континентална Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Острови Туркс и Каикос"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"јенгбен"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Чад"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Француски Јужни Територии"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"американски знаковен јазик"_s)
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
			$of(u"Тимор Лесте"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"јемба"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Пребарување според почетна согласка хангул"_s)
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
			$of(u"Турција"_s)
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
			$of(u"астурски"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"русински"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of(u"ровијански"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"старотурско"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Танзанија"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"квазио"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"непознато писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"кудабади"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Украина"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"лигурски"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"влашки"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Источна Азија"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"тувански"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"конгоански свахили"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Јужна Азија"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"хајда"_s)
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
			$of("hak"_s),
			$of(u"хака"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Сортирање Pinyin"_s)
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
			$of(u"Американски територии во Пацификот"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of(u"ливонски"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Обединети нации"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Соединети Американски Држави"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"хавајски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Поедноставено кинеско сортирање"_s)
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
			$of(u"централноатлански тамазитски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Ритмички редослед"_s)
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
			$of(u"Сент Винсент и Гренадини"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Венецуела"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Британски Девствени Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Американски Девствени Острови"_s)
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
			$of(u"ногајски"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"руа"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"старонордиски"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Австралазија"_s)
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
			$of(u"Микронезиски регион"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"нгомба"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"лакотски"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of(u"новијал"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of(u"котава"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"Претходно подредување"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"валсер"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(metaValue_bas)
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
			$of(u"псевдо-акценти"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"варајски"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"псевдо-биди"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"авади"_s)
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
			$of(u"без писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ол чики"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"варлпири"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"батачко"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Јемен"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Стандардно подредување"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of(u"ломбардиски"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"фанг"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"фанти"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"знаковно пишување"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Мајот"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Јужноафриканска Република"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Допустлив стил за разделување редови"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"деванагари"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Грузиски броеви"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"Подредување жујин"_s)
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
			$of("%%PINYIN"_s),
			$of(u"Пинјин романизација"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Зимбабве"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Непознат регион"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"рунско"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"Метрички систем"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"Календар ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"монго"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"северносотски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Телугу цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"луизијански креолски"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"лози"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"насиска геба"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"мачаме"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"фиџиски хинди"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Поедноставени кинески финансиски броеви"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"хилигајнонски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Проширени арапско-индиски цифри"_s)
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
			$of(u"Цифри со целосна ширина"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"хетитски"_s)
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
			$of(u"мајански хиероглифи"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"севернолуриски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"Подредување емотикони"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"коптско"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"класичен неварски"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"удмуртски"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"кмерско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"Исламски календар (Саудиска Арабија)"_s)
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
			$of(u"Римски броеви"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"јакутски"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of(u"латгалски"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"самарјански арамејски"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"кавкаскоалбански"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"самбуру"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"сасачки"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"сантали"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"тифинаг"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"еврејскоперсиски"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(u"саураштра"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"нгембеј"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"гурмуки"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"луба-лулуа"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"сангу"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"лујсењски"_s)
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
			$of(u"мизо"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"белуџиски"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"слејви"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"балиски"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"угаритски"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"турнедаленски фински"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"луја"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"баварски"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(metaValue_bas)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"бамунски"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"еврејскоарапски"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"шпански (Европа)"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"нзима"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"шкотски германски"_s)
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
			$of(u"апхаски"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(u"тоба"_s)
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
			$of(u"акански"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"гомала"_s)
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
			$of(u"арапско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"јапонско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"арапски"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"јапонско слоговно"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"асамски"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"сасарски сардински"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"линеарно А"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"аварски"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"линеарно Б"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"јужнокурдски"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ајмарски"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"азербејџански"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"хоџки"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"башкирски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Подредување унихан"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"белоруски"_s)
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
			$of(u"тибетски"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"догрипски"_s)
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
			$of("see"_s),
			$of(u"сенека"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"мјанмарско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of(u"сери"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Лаошки цифри"_s)
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
			$of(u"селкупски"_s)
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
			$of(u"чаморски"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"корзикански"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"оријанско писмо"_s)
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
			$of(u"црковнословенски"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of(u"њенгату"_s)
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
			$of(u"Етиопски броеви"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"ји"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"дански"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"португалски (Европа)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"германски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Стандарден формат на валута"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"беџа"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"динка"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"јитски"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"бугиско"_s)
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
			$of("dv"_s),
			$of(u"дивехи"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"латиноамерикански шпански"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of(u"бетавски"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ѕонгка"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"бена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Кинески календар"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"книжевен кинески"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"Фрејзерово"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"зарма"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of(u"самогитски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Грчки броеви"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"еве"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"бафут"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Нормален стил за разделување редови"_s)
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
			$of(u"англиски"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"есперанто"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of(u"бадага"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of(u"ласки"_s)
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
			$of(u"ханб"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"баскиски"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"бухидско"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"хангул"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"самарјанско"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"тачелхит"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"горнолужички"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"ханско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"шан"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"хануноовско"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"персиски"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"поедноставено"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Арапски броеви"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"традиционално"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"фула"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"чадски арапски"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"сјанг"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"фински"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"фиџиски"_s)
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
			$of(u"фарски"_s)
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
			$of(u"западнофризиски"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ирски"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"шкотски гелски"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"галициски"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"гварански"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"боџпури"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"непознат јазик"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Етиопски Амет Алем календар"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"Исламски календар (астрономска епоха)"_s)
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
			$of(u"хрватски"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"хаитски"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"унгарски"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"ерменски"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"хереро"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"каџунски француски"_s)
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
			$of(u"индонезиски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Тибетски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"окцидентал"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"игбо"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"сичуан ји"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"среднофранцуски"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"инупијачки"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"старофранцуски"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"франкопровансалски"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"идо"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"источнофризиски"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"банџарски"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"севернофризиски"_s)
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
			$of("sli"_s),
			$of(u"долношлезиски"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"јапонски"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"малајаламско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"старојужноарапско"_s)
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
			$of("sly"_s),
			$of(u"селајарски"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"ком"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"јужен сами"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"јавански"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"Шоово"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"мадурски"_s)
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
			$of("maf"_s),
			$of(u"мафа"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"маитили"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"инариски сами"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"грузиски"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"сиксика"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"макасарски"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"ву"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"сколт сами"_s)
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
			$of(u"готско"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"кикују"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"масајски"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"квањама"_s)
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
			$of(metaValue_kn)
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
			$of(u"кирт"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"лепчанско"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"авестанско"_s)
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
			$of(u"корнски"_s)
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
			$of(u"Малајаламски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ганда"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"ронгоронго"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"лимбуршки"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"тибетско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"лингала"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"фурлански"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"лаошки"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Империјален мерен систем"_s)
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
			$of(u"латвиски"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"зогдијански"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"малгашки"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"маршалски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Стандардно подредување во уникод"_s)
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
			$of(u"малајамски"_s)
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
			$of(u"саураштранско"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"ерменско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"мокшански"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"маба"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"долнолужички"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"царскоарамејски"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"науруански"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Општо пребарување"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"норвешки букмол"_s)
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
			$of(u"мандарски"_s)
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
			$of(u"јужен ндебеле"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"навахо"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"каракалпачки"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"њанџа"_s)
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
			$of("oc"_s),
			$of(u"окситански"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"каџе"_s)
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
			$of(u"оџибва"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"меру"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Ерменски броеви"_s)
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
			$of("dtp"_s),
			$of(u"дусунски"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"одија"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of(u"моди"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"осетски"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"бишнуприја"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"кабардински"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"морисјен"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"срански тонго"_s)
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
			$of("kbl"_s),
			$of(u"канембу"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"пали"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"бахтијарски"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"полски"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"среднохоландски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Дангиски календар"_s)
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
			$of(u"средноирски"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Подредување"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"бразилски португалски"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"тјап"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"макува-мито"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Формат на валута"_s)
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
			$of(u"лаошко писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"мета"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-часовен систем (0-23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-часовен систем (1-24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"сахо"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"брахујски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Мјанмарски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"кечуански"_s)
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
			$of(u"ланско"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"маконде"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of(u"затерландски фризиски"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"етиопско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-часовен систем (1-12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-часовен систем (0-11)"_s)
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
			$of(u"Валута"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"романски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Одиски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Кинески децимални броеви"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"руски"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"акосе"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"руандски"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"кабувердиану"_s)
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
			$of(u"австралиски англиски"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Диплојеево стенографско"_s)
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
			$of(u"синди"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"северен сами"_s)
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
			$of("ken"_s),
			$of(u"кењанг"_s)
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
			$of(u"словенечки"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"гранта"_s)
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
			$of(u"сомалиски"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Арапско-индиски цифри"_s)
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
			$of(u"Сметководствен формат на валута"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"сесото"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"јаванско"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"сундски"_s)
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
			$of(u"Традиционални кинески финансиски броеви"_s)
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
			$of(u"Азија"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"бурјатски"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Централна Азија"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Западна Азија"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"таџикистански"_s)
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
			$of(u"бугиски"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"коро"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"канадски англиски"_s)
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
			$of(u"цвана"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"тонгајски"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"булу"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"јола-фоњи"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Јапонски броеви"_s)
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
			$of(u"коморијански"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"чакманско"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"татарски"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"џула"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"тви"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"тахитски"_s)
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
			$of(u"ујгурски"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"староиталско"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"корејско писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of(u"каинганшки"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"општо"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"украински"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"зеландски"_s)
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
			$of("xal"_s),
			$of(u"калмички"_s)
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
			$of("nds_NL"_s),
			$of(u"долносаксонски"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"силхетско нагари"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"венда"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"варанг кшити"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Мингуо-календар"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"виетнамски"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"хотански"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"којра чиини"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Часовен циклус (12 или 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"волапик"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of(u"коварски"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"класичен сириски"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"сомалиско"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"киче"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"кичвански"_s)
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
			$of(u"гагауски"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"сириски"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"грчко писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"ган"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"зазаки"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"лидиско"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"сумероакадско клинесто"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"волофски"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"стандарден марокански тамазитски"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"современ стандардизиран арапски"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"канадско слоговно"_s)
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
			$of(u"манџурски"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"фрактурна латиница"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"шлезиски"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"анадолски хиероглифи"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"гбаја"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"манипурски"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"латинично писмо"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"гелска латиница"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Поедноставени кинески броеви"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Традиционални кинески броеви"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"коса"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Римски мали броеви"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"биленски"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"ликиско"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"осашки"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"медумба"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of(u"зороастриски дари"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"Муново"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"мохавски"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"како"_s)
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
			$of(u"сириско"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"дезеретско"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"јорупски"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"мексикански шпански"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"западносириско"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"отомански турски"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"естрангелско сириско"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"џуаншки"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"кариско"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"каленџин"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"кинески"_s)
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
			$of(u"старопермско"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Стил за разделување редови"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"зулу"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Азбучен редослед"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"грузиско писмо"_s)
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
			$of(u"Јапонски финансиски броеви"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"чамско"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"гиз"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"западномариски"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"источносириско"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"елбасанско"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"старосеверноарапско"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Реформирано подредување"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"тагалошко"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"египетско демотско"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"египетско хиератско"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"палмирско"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ембу"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"египетски хиероглифи"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"грузиски хуцури"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"поедноставен кинески"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"коми-пермјачки"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"староунгарско"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"конкани"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"козрејски"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"венетски"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"традиционален кинески"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"сунданско"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of(u"вепшки"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"кпеле"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Кмерски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"тирхута"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"илокански"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"кипарско"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"мунданг"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Гурмуки цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"повеќе јазици"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"кадо"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Мерен систем"_s)
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
			$of(u"гилбертански"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"черокиско"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"карипски"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"кајуга"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Тамилски цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"карачаевско-балкарски"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ингушки"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of(u"кинарајски"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of(u"крио"_s)
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
			$of("tcy"_s),
			$of(u"тулу"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"Броеви"_s)
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
			$of(u"бафија"_s)
		})
	}));
	return data;
}

LocaleNames_mk::LocaleNames_mk() {
}

$Class* LocaleNames_mk::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mk, name, initialize, &_LocaleNames_mk_ClassInfo_, allocate$LocaleNames_mk);
	return class$;
}

$Class* LocaleNames_mk::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun