#include <sun/util/resources/cldr/ext/LocaleNames_uk.h>

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

$MethodInfo _LocaleNames_uk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_uk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_uk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_uk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_uk",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_uk_MethodInfo_
};

$Object* allocate$LocaleNames_uk($Class* clazz) {
	return $of($alloc(LocaleNames_uk));
}

void LocaleNames_uk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_uk::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_bn, u"бенгальська"_s);
	$var($String, metaValue_bo, u"тибетська"_s);
	$var($String, metaValue_el, u"грецька"_s);
	$var($String, metaValue_gu, u"гуджараті"_s);
	$var($String, metaValue_he, u"іврит"_s);
	$var($String, metaValue_hy, u"вірменська"_s);
	$var($String, metaValue_ja, u"японська"_s);
	$var($String, metaValue_ka, u"грузинська"_s);
	$var($String, metaValue_km, u"кхмерська"_s);
	$var($String, metaValue_kn, u"каннада"_s);
	$var($String, metaValue_ko, u"корейська"_s);
	$var($String, metaValue_lo, u"лаоська"_s);
	$var($String, metaValue_mn, u"монгольська"_s);
	$var($String, metaValue_si, u"сингальська"_s);
	$var($String, metaValue_ta, u"тамільська"_s);
	$var($String, metaValue_te, u"телугу"_s);
	$var($String, metaValue_th, u"тайська"_s);
	$var($String, metaValue_zh, u"китайська"_s);
	$var($String, metaValue_bax, u"бамум"_s);
	$var($String, metaValue_ccp, u"чакма"_s);
	$var($String, metaValue_chr, u"черокі"_s);
	$var($String, metaValue_nqo, u"нко"_s);
	$var($String, metaValue_vai, u"ваї"_s);
	$var($String, metaValue_key_nu, u"цифри"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"кельнська"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"огамічний"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"мірандська"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"символьна"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"атсам"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"марварі"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"тагбанва"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"емодзі"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"Діалект Нджіва"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"давньоєгипетська"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"раджастхані"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"пхагс-па"_s)
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
			$of(u"рапануї"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"терено"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Острів Вознесіння"_s)
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
			$of(u"Обʼєднані Арабські Емірати"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"фламандська"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Афганістан"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Антигуа і Барбуда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ефіопський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Ангілья"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"часовий пояс"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Албанія"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Вірменія"_s)
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
			$of(u"Антарктика"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Аргентина"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"парфянський"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Американське Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Австрія"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Австралія"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Аруба"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"американська англійська"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Аландські Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"миін"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Азербайджан"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Східновірменський"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Боснія і Герцеговина"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Барбадос"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"себуанська"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Бангладеш"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"кумицька"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Бельгія"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"середньоверхньонімецька"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Буркіна-Фасо"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Болгарія"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Бахрейн"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Бурунді"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Бенін"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Сен-Бартелемі"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Бермудські Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"кутенаї"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ерзя"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Бруней"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Болівія"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Карибські Нідерланди"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Бразилія"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Багамські Острови"_s)
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
			$of(u"Острів Буве"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Ботсвана"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Білорусь"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Беліз"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"видиме мовлення"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"перський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"цифри івриту"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Канада"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Кокосові (Кілінг) Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"мазандеранська"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Конго – Кіншаса"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Центральноафриканська Республіка"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Конго – Браззавіль"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Швейцарія"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Кот-дʼІвуар"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Острови Кука"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Чилі"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"каїті"_s)
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
			$of(u"Колумбія"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Острів Кліппертон"_s)
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
			$of(u"Острів Різдва"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Кіпр"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Чехія"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"екаджук"_s)
		}),
		$$new($ObjectArray, {
			$of("Ahom"_s),
			$of(u"ахом"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Німеччина"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"давньоверхньонімецька"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ачехська"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"кіга"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Дієго-Гарсія"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"цифри деванагарі"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Джибуті"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Данія"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"ачолі"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"гонді"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"шрифт Брайля"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"брахмі"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Домініка"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"вірменські малі цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Домініканська Республіка"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"горонтало"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"готська"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"мейтей майєк"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"зуньї"_s)
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
			$of(u"пангасінанська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"половинна ширина"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"пехлеві"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Сеута і Мелілья"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"чібча"_s)
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
			$of(u"папʼяменто"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"адангме"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Естонія"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"тів"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Єгипет"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Західна Сахара"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"чагатайська"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"палауанська"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"чуукська"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"чинук жаргон"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"марійська"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"чіпевʼян"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"чокто"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Еритрея"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Іспанія"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Ефіопія"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Європейський Союз"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"еламська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"григоріанський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Єврозона"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"чейєнн"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"цифри гуджараті"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"харапський"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"адигейська"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Фінляндія"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Фіджі"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Фолклендські Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Мікронезія"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"варіант мовного коду"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Фарерські Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Франція"_s)
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
			$of(u"індійський світський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"давньогрецька"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Габон"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"водська"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Велика Британія"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"нігерійсько-креольська"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Гренада"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Грузія"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Французька Гвіана"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Гернсі"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Гана"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"тай-лі"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Гібралтар"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"африхілі"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Гренландія"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"середньоанглійська"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Гамбія"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Гвінея"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Гваделупа"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Екваторіальна Гвінея"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Греція"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Південна Джорджія та Південні Сандвічеві Острови"_s)
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
			$of(u"Гвінея-Бісау"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"тлінгіт"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"клінгонська"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"новий тайський луе"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Гаяна"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"центральнокурдська"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"природномовний текст відсутній"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"австрійська німецька"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Гонконг, ОАР Китаю"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Острови Герд і Макдоналд"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Гондурас"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Хорватія"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"агем"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"швейцарська німецька"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"ісламський календар (Умм аль-Кура)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Гаїті"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Угорщина"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"тамашек"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Канарські Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"південноміньська"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Індонезія"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"давньоперська"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of(u"адлам"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ірландія"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"неаполітанська"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"нама"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"зазакі"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"тангут"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Ізраїль"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Острів Мен"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"Індія"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"європейські правила упорядкування"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Британська територія в Індійському Океані"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Ірак"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Іран"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Ісландія"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Італія"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"математична"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"тайські цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"Компʼютерний"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"бенґальські цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Джерсі"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ісламський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Ямайка"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Йорданія"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Японія"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"Пізньосередньофранцузська до 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"айнська"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"гусії"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"ньяса тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"цифри каннада"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"кая лі"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"швейцарська верхньонімецька"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"фонетичний порядок сортування"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"буддійський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Кенія"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Латинська Америка"_s)
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
			$of(u"Кірибаті"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Комори"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Сент-Кітс і Невіс"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"успадкована"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"канадська французька"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Північна Корея"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Південна Корея"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"писемність Полларда"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"швейцарська французька"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Кувейт"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ток-пісін"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Кайманові Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Казахстан"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"кирилиця"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"Лаос"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Ліван"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Сент-Люсія"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"фінікійсько-пунічна"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"давньоцерковнословʼянський"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"кучін"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"нижньонімецька"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Ліхтенштейн"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Шрі-Ланка"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"аккадська"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"коптська"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Ліберія"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Лесото"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"пехлеві літературний"_s)
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
			$of(u"Латвія"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"катакана"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Лівія"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ладіно"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"вуньо"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"алабама"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"ланда"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"лангі"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"таана"_s)
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
			$of(u"Чорногорія"_s)
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
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Маршаллові Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"алеутська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"цифри ваї"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Північна Македонія"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Малі"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Мʼянма (Бірма)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Монголія"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"неварі"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Макао, ОАР Китаю"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Північні Маріанські Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Мартиніка"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Мавританія"_s)
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
			$of(u"транслітерація ГЕГН ООН"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Маврикій"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"південноалтайська"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Мальдіви"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Малаві"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Мексика"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"японський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Малайзія"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Мозамбік"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"пехлеві написів"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Намібія"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Африка на південь від Сахари"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"єврейський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"порядок сортування за словником"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Нова Каледонія"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Романізація Вейда-Джайлза"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Нігер"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Острів Норфолк"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Нігерія"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"тароко"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"пехлеві релігійний"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Нікарагуа"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"пахау хмонг"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Нідерланди"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Норвегія"_s)
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
			$of(u"Ніуе"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"фінікійський"_s)
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
			$of(u"Нова Зеландія"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"циганська"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"мероїтський"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"кримськотатарська"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"давньоанглійська"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Оман"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ангіка"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"сейшельська креольська"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"давньоперський"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Панама"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"мусульманський світський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"кашубська"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"британська англійська"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Перу"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Французька Полінезія"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Папуа-Нова Гвінея"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Філіппіни"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Пакистан"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Польща"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"евондо"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Сен-Пʼєр і Мікелон"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Острови Піткерн"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Пуерто-Рико"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Палестинські території"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"балійський"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Португалія"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"Палау"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"ніаська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"грецькі малі цифри"_s)
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
			$of(u"Шотландська англійська"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ніуе"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Віддалена Океанія"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"лезгінська"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"Уральський фонетичний алфавіт"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"тувалу"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"тай-вʼєт"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Світ"_s)
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
			$of(u"Північна Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Реюньйон"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Південна Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ложбан"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"реджанг"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Океанія"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Румунія"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Сербія"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Росія"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Руанда"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"маніхейський"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"угаритський"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"кхароштхі"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Саудівська Аравія"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"понапе"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"мандейський"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Соломонові Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"тасавак"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Західна Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Сейшельські Острови"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Центральна Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Швеція"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Східна Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"арамейська"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"лома"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Північна Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Сінгапур"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Острів Святої Єлени"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"точний стиль розриву рядка"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Центральна Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Словенія"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Південноафриканський регіон"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Шпіцберген та Ян-Маєн"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Американський регіон"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Словаччина"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Сьєрра-Леоне"_s)
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
			$of(u"Сомалі"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"арауканська"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"арапахо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"тамільські традиційні цифри"_s)
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
			$of(u"Південний Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Сан-Томе і Принсіпі"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"алжирська арабська"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Сальвадор"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"надждійська арабська"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Сінт-Мартен"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Сирія"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"яо"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Есватіні"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"аравакська"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"яп"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Трістан-да-Кунья"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"асу"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"американська система мір"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Північноамериканський регіон"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Острови Теркс і Кайкос"_s)
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
			$of(u"зоджі"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Французькі Південні Території"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"американська мова рухів"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Того"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Таїланд"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Таджикистан"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Карибський басейн"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Токелау"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Тімор-Лешті"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"ємба"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"пошук за початковою приголосною хангул"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Туркменістан"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"Бунтлінг"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Туніс"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"Тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Туреччина"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Тринідад і Тобаго"_s)
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
			$of(u"астурійська"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"орхонський"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Танзанія"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"квазіо"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"невідома система письма"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Україна"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"арумунська"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Східна Азія"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"тувинська"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"суахілі (Конго)"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Південна Азія"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"хайда"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Південно-Східна Азія"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Уганда"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"хаккаська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"порядок сортування піньїнь"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Південна Європа"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Віддалені острови США"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Організація Об’єднаних Націй"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Сполучені Штати"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"гавайська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"китайський спрощений"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Уругвай"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"прусська"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Узбекистан"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"центральноатласька тамазігт"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"порядок сортування за рисками"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"нгємбун"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Ватикан"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"давньопровансальська"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Сент-Вінсент і Гренадіни"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Венесуела"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Британські Віргінські острови"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Віргінські Острови (США)"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Вʼєтнам"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Вануату"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"ногайська"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"рва"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"давньонорвезька"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Австралазія"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"Західновірменський"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Меланезія"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Уолліс і Футуна"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"традиційний порядок сортування"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Мікронезійський регіон"_s)
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
			$of(u"фінансові символи чисел"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"попередній порядок сортування, для сумісності"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"вальзерська"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"басса"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"волайтта"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"вашо"_s)
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
			$of(u"Псевдобіді"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"авадхі"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Полінезія"_s)
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
			$of(u"безписемна"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"сантальський"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"валпірі"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"батак"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"символи Блісса"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Ємен"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"стандартний порядок сортування"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"фанг"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"Резьянський"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"фанті"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"знаковий"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Майотта"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Південно-Африканська Республіка"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"неточний стиль розриву рядка"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"деванагарі"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"грузинські цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"порядок сортування чжуїнь"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"хірагана"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Замбія"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"Романізація піньїн"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Зімбабве"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Невідомий регіон"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"рунічний"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"мертична система"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"календар ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"монго"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"північна сото"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"цифри телугу"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"луїзіанська креольська"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"лозі"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"мачаме"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"китайські фінансові символи чисел (спрощене письмо)"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"хілігайнон"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"арабсько-індійські розширені цифри"_s)
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
			$of(u"цифри повної ширини"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"хітіті"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"даргінська"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"таіта"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"майя ієрогліфічний"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"північнолурська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"порядок сортування за емодзі"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"коптський"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"неварі класична"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"удмуртська"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"ісламський календар Саудівської Аравії"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"лімбу"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"сандаве"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"римські цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"саха"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"самаритянська арамейська"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"кавказька албанська"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"Ліверпульський діалект"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"самбуру"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"сасакська"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"сантальська"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"тифінаг"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"юдео-перська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"місцеві цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"нгамбай"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"гурмухі"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"луба-лулуа"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"повна ширина"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"сангу"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"луїсеньо"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ньянколе"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ньямвезі"_s)
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
			$of(u"філіппінська"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"хмонг"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"делаварська"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"мізо"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"балучі"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"слейв"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"балійська"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"угаритська"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"луйя"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"баеріш"_s)
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
			$of(u"юдео-арабська"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"європейська іспанська"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"нзіма"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"шотландська"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"сицилійська"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"афарська"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"абхазька"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"насталік"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(u"батак тоба"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"авестійська"_s)
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
			$of("bbj"_s),
			$of(u"гомала"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"амхарська"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"арагонська"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"арабиця"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Діалект Столвіца/Солбіка"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"арабська"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"японські силабарії"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"асамська"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"лінійний А"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"аварська"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"лінійний В"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"південнокурдська"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"аймара"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"азербайджанська"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Осоянський діалект"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"башкирська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"порядок сортування за ключами ієрогліфів"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"білоруська"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"болгарська"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"біслама"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"бамбара"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"догрибська"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"бретонська"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"боснійська"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"сенека"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"мʼянмська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"лаоські цифри"_s)
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
			$of(u"селькупська"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"каталонська"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"койраборо сені"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"чеченська"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"чаморро"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"Нова орфографія"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"корсиканська"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"орія"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"крі"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"чеська"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"церковнословʼянська"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"чуваська"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"валлійська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ефіопські цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"йї"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"данська"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"європейська португальська"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"німецька"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"стандартний грошовий формат"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"беджа"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"дінка"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"бугійський"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"бемба"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"давньоірландська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"монгольські цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"дівехі"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"латиноамериканська іспанська"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of(u"бетаві"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"дзонг-ке"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"бена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"китайський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"абетка Фрейзера"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"джерма"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"грецькі цифри"_s)
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
			$of(u"звичайний стиль розриву рядка"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"молдавська"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"англійська"_s)
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
			$of("type.co.big5han"_s),
			$of(u"китайський традиційний порядок сортування Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"іспанська"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"естонська"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"хань"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"баскська"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"бухід"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"хангиль"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"самаритянський"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"тачеліт"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(metaValue_zh)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"верхньолужицька"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"шанська"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"хануну"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"перська"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"спрощена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"західні цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"традиційна"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"південноазербайджанська"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"фула"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"чадійська арабська"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"сянська китайська"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"фінська"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"фіджі"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"фон"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"східнобелуджійська"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"кантонська"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"фарерська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"транслітерація РГН США"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"умбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"французька"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"сідамо"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"західнофризька"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ірландська"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"шотландська гельська"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"галісійська"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"гуарані"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"бходжпурі"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"невідома мова"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"ефіопський амете алем календар"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"ісламський астрономічний календар"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"менкська"_s)
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
			$of(u"гінді"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"хупа"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"бікольська"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"біні"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"хірі-моту"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"хорватська"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"гаїтянська креольська"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"угорська"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"гереро"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"кажунська французька"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"Міжнародний фонетичний алфавіт"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"інтерлінгва"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"чамо"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"індонезійська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"тибетські цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"інтерлінгве"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"ігбо"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"сичуаньська ї"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"середньофранцузька"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"інупіак"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"давньофранцузька"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"арпітанська"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"ідо"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"фризька східна"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"банджарська"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"фризька північна"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ісландська"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"італійська"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"інуктітут"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"малаяламська"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"сараті"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"догрі"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"ком"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"південносаамська"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"яванська"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"шоу"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"мадурська"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"саамська луле"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"магадхі"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"мафа"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"майтхілі"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"саамська інарі"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"сіксіка"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"макасарська"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"уська китайська"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"скольт-саамська"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"мандінго"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"конґолезька"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"готичний"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"кікуйю"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"масаї"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"кунама"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"казахська"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"калааллісут"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"канурі"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"кашмірська"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"кирт"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"лепча"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"авестійський"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"курдська"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"комі"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"корнська"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"киргизька"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"сонінке"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"латинська"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"люксембурзька"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"малаяламські цифри"_s)
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
			$of(u"лімбургійська"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"лінгала"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"фріульська"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"англійська система мір"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"литовська"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"луба-катанга"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"латиська"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"согдійська"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"малагасійська"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"маршалльська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"типовий порядок сортування Юнікод"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"маорі"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"македонська"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"малаялам"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"маратхі"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"малайська"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"мальтійська"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"бірманська"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"саураштра"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"мокша"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"маба"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"нижньолужицька"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"армі"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"науру"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"універсальний пошук"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"норвезька (букмол)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"північна ндебеле"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"непальська"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ндонга"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"мандарська"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"нідерландська"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"норвезька (нюношк)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"норвезька"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ндебелє південна"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of(u"осейджиська"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"навахо"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"каракалпацька"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ньянджа"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"качін"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"кабільська"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"Політонічний"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"окситанська"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"йю"_s)
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
			$of(u"оджібва"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"меру"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"вірменські цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"оромо"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"каві"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"одія"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"осетинська"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"кабардинська"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"маврикійська креольська"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"сранан тонго"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"панджабі"_s)
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
			$of(u"Ліповазський діалект резьянської мови"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"канембу"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"палі"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"бахтіарі"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"польська"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"середньонідерландська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"корейський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"пушту"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"португальська"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"середньоірландська"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"порядок сортування"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"бразильська португальська"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"тіап"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"макува-меето"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"грошовий формат"_s)
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
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"мета"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-годинний формат (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-годинний формат (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"сахо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"мʼянмські цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"кечуа"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"сапотекська"_s)
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
			$of(u"ефіопська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-годинний формат (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-годинний формат (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"ретороманська"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"рунді"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"валюта"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"румунська"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(u"Сахо"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"цифри орія"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"китайські десяткові цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"російська"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"акус"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"кіньяруанда"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"блісса мова"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"кабувердіану"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"мікмак"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"сукума"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"австралійська англійська"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"санскрит"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"сардинська"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"сусу"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"синдхі"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"північносаамська"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"мінангкабау"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"санго"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"сербсько-хорватська"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"шумерська"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"словацька"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"словенська"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"самоанська"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"шона"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"сомалі"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"арабсько-індійські цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"албанська"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"сербська"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"сісваті"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"обліковий грошовий формат"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"південна сото"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"яванський"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"сунданська"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"Натісонський діалект"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"шведська"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"суахілі"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"китайські фінансові символи чисел (традиційне письмо)"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"ібібіо"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ібанська"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Азія"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"бурятська"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Центральна Азія"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Західна Азія"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"таджицька"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"тигринья"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"бугійська"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"коро"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"канадська англійська"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"туркменська"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"тагальська"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"тсвана"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"тонганська"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"булу"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"дьола-фоні"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"японські цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"турецька"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"тсонга"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"коморська"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"татарська"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"діула"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"тві"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"таїтянська"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"Діалект Сан-Джорджіо/Біла"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Європа"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Східна Європа"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Північна Європа"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"дазага"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Західна Європа"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"уйгурська"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"давньоіталійський"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"звичайна"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"українська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"коптський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"урду"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Стандартизована резьянська орфографія"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"калмицька"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"зенага"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"узбецька"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"кхасі"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Нова німецька орфографія з 1996 р."_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"нижньосаксонська"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"сілоті нагрі"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"венда"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"календар Китайської Республіки"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"вʼєтнамська"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"хотаносакська"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"койра чіїні"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"формат часу (12 або 24 години)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Орфографія Тараскевича"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"волапюк"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"сирійська класична"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"османський"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"кіче"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of(u"нева"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"га"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"валлонська"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"гагаузька"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"сирійська"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"ґань"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"лідійський"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"шумеро-аккадський клінопис"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"волоф"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"стандартна марокканська берберська"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"сучасна стандартна арабська"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"уніфіковані символи канадських тубільців"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"гайо"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"манчжурська"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"латинський фрактурний"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"гбайя"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"маніпурі"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"латиниця"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"латинський гельський"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"китайські символи чисел (спрощене письмо)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"китайські символи чисел (традиційне письмо)"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"кхоса"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"римські малі цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"блін"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"лікійський"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"осейдж"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"медумба"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"мун"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"магавк"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"како"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"їдиш"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"моссі"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"сирійський"_s)
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
			$of(u"традиційні символи чисел"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"мексиканська іспанська"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"давньосирійський західний"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"османська"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"давньосирійський естрангело"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"чжуан"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"каріанський"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"календжин"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(metaValue_zh)
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
			$of(u"давньопермський"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"стиль розриву рядка"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"зулуська"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"порядок сортування за телефонним довідником"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"Монотонічний"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"кімбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"японські фінансові цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"хамітський"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"гєез"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"давньосирійський східний"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"реформований порядок сортування"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"тагальський"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"єгипетський демотичний"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"єгипетський ієратичний"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ембу"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"єгипетський ієрогліфічний"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"кхутсурі"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"китайська (спрощене письмо)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"комі-перм’яцька"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"давньоугорський"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"конкані"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Традиційна німецька орфографія"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"косрае"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"китайська (традиційне письмо)"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"сунданський"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"кпеллє"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"кхмерські цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ілоканська"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"Валенсійська"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"кіпрський"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Уніфікований турецький латинський алфавіт"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"мунданг"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"цифри гурмукхі"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"кілька мов"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"каддо"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"система вимірювання"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"крік"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"глаголичний"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"гільбертська"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"карібська"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"кайюга"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"тамільські цифри"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"карачаєво-балкарська"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"інгуська"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"дарі"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"карельська"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ефік"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(metaValue_key_nu)
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
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"бафіа"_s)
		})
	}));
	return data;
}

LocaleNames_uk::LocaleNames_uk() {
}

$Class* LocaleNames_uk::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_uk, name, initialize, &_LocaleNames_uk_ClassInfo_, allocate$LocaleNames_uk);
	return class$;
}

$Class* LocaleNames_uk::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun