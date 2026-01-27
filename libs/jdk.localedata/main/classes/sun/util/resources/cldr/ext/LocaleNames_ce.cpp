#include <sun/util/resources/cldr/ext/LocaleNames_ce.h>

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

$MethodInfo _LocaleNames_ce_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ce, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ce, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ce_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ce",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ce_MethodInfo_
};

$Object* allocate$LocaleNames_ce($Class* clazz) {
	return $of($alloc(LocaleNames_ce));
}

void LocaleNames_ce::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ce::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, u"Ӏаьрбийн"_s);
	$var($String, metaValue_bo, u"тибетхойн"_s);
	$var($String, metaValue_el, u"грекийн"_s);
	$var($String, metaValue_fa, u"гӀажарийн"_s);
	$var($String, metaValue_gu, u"гуджарати"_s);
	$var($String, metaValue_he, u"жугтийн"_s);
	$var($String, metaValue_hy, u"эрмалойн"_s);
	$var($String, metaValue_ja, u"японийн"_s);
	$var($String, metaValue_ka, u"гуьржийн"_s);
	$var($String, metaValue_km, u"кхмерийн"_s);
	$var($String, metaValue_kn, u"каннада"_s);
	$var($String, metaValue_ko, u"корейн"_s);
	$var($String, metaValue_la, u"латинан"_s);
	$var($String, metaValue_lo, u"лаоссийн"_s);
	$var($String, metaValue_mn, u"монголийн"_s);
	$var($String, metaValue_or, u"ори"_s);
	$var($String, metaValue_si, u"сингалхойн"_s);
	$var($String, metaValue_ta, u"тамилхойн"_s);
	$var($String, metaValue_te, u"телугу"_s);
	$var($String, metaValue_th, u"тайн"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"сангу"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"коьлнийн"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ньянколе"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"мирандойн"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"лунда"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"луо (Кени а, Танзани а)"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"символаш"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"филиппинийн"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"хмонг"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"лушей"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"балийн"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"эмодзи"_s)
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
			$of("es_ES"_s),
			$of(u"европан испанхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"темне"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"шотландхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"сицилийн"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"тесо"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"афарийн"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"рапануйн"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"абхазхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Айъадаларан гӀайре"_s)
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
			$of(u"Ӏарбийн Цхьанатоьхна Эмираташ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"фламандийн"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"ОвхӀан мохк"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"африкаанс"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Антигуа а, Барбуда а"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Ангилья"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"акан"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Албани"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Эрмалойчоь"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"амхаройн"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"арагонойн"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ангола"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Антарктида"_s)
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
			$of("Hrkt"_s),
			$of(u"катакана я хирагана"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Американ Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ассамийн"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Австри"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Австрали"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"суьйлийн"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Аруба"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"американ ингалсан"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Аландан гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"аймара"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Азербайджан"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"азербайджанийн"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Босни а, Герцеговина а"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"башкирийн"_s)
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
			$of(u"гӀумкийн"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Бельги"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"белорусийн"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Буркина- Фасо"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Болгари"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"болгарийн"_s)
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
			$of("bi"_s),
			$of(u"бислама"_s)
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
			$of(u"Бермудан гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"бамбара"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"эрзянийн"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Бруней-Даруссалам"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"бенгалийн"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Боливи"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"догриб"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Бонэйр, Синт-Эстатиус а, Саба а"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Бразили"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"бретонийн"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Багаман гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"боснийн"_s)
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
			$of(u"Бувен гӀайре"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Ботсвана"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"мьянманийн"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Белорусси"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"сена"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(metaValue_fa)
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
			$of(u"каталонийн"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Кокосийн гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"мазандеранхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"койраборо сенни"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Демократин Республика Конго"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"нохчийн"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Юккъерчу Африкин Республика"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Конго - Браззавиль"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Швейцари"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"чаморро"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Кот-Д’ивуар"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Кукан гӀайренаш"_s)
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
			$of(u"Цийчоь"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Колумби"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"корсиканийн"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Клиппертон"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Коста-Рика"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"чехийн"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Куба"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"килсславянийн"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Кабо-Верде"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"чувашийн"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Кюрасао"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"ГӀайре ӏиса пайхӏамар вина де"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Кипр"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"валлийн"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Чехи"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"экаджук"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"датхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"европан португалихойн"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Германи"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"немцойн"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"ачехийн"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"чига"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Диего-Гарси"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Джибути"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Дани"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"брайля"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Доминика"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Доминикан Республика"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"бемба"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"горонтало"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"мальдивийн"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"зуньи"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"латинан американ испанхойн"_s)
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
			$of("dz"_s),
			$of(u"дзонг-кэ"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"бена"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"пангасинан"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Сеута а, Мелилья а"_s)
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
			$of("dje"_s),
			$of(u"зарма"_s)
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
			$of(u"Эстони"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"эве"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Мисар"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Малхбузен Саьхьара"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"молдавийн"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"палау"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"чукчийн"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ингалсан"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"марийн"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"эсперанто"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"чоктавийн"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"чероки"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Эритрей"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Испани"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"испанхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Эфиопи"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"эстонийн"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"ханьб"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Евробарт"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"баскийн"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"хангыль"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"григорианан"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"еврозона"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"шайенийн"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"тахелхит"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"лакхара сербийн"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"китайн"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"адигейн"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"шанойн"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(metaValue_fa)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"атта китайн"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"ламастан китайн"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"фулах"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Финлянди"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"финнийн"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Фиджи"_s)
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
			$of("FK"_s),
			$of(u"Фолклендан гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Микронезин Федеративни штаташ"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"малхбузен-белуджийн"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"кантонийн"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Фарерийн гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"фарерийн"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"умбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Франци"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"французийн"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"малхбузен-фризийн"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Габон"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ирландхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Йоккха Британи"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"нигерийн-креолийн"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Гренада"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"гэлийн"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Гуьржийчоь"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Французийн Гвиана"_s)
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
			$of(u"Гренланди"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"галисийн"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Гамби"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Гвиней"_s)
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
			$of("GP"_s),
			$of(u"Гваделупа"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Экваторан Гвиней"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"боьвзуш боцу мотт"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Греци"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Къилба Джорджи а, Къилба Гавайн гӀайренаш а"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Гватемала"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"Гуам"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"мэнийн"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Гвиней-Бисау"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"клингонин"_s)
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
			$of(u"юккъерчу курдийн"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"меттан чулацам боцуш"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"хӀинди"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"австрин немцойн"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"хупа"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Гонконг (ша-къаьстина кӀошт)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Херд гӀайре а, Макдональд гӀайренаш а"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Гондурас"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"бини"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Хорвати"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"хорватийн"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"агхӀем"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"швейцарин немцойн"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Гаити"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"гаитийн"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Венгри"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"венгрийн"_s)
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
			$of("ia"_s),
			$of(u"интерлингва"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Канаран гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"джамо"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Индонези"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"индонезихойн"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Ирланди"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"неаполитанойн"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"игбо"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"нама"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"сычуань"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"заза"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Израиль"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Мэн гӀайре"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ХӀинди"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Британин латта Индин океанехь"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"идо"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Ӏиракъ"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ГӀажарийчоь"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Исланди"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"исландхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Итали"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"итальянийн"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"инуктитут"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"математикан маьӀна"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"малаялийн"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Джерси"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"исламан"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Ямайка"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"бенгалхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Урдан"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Япони"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"саамийн (къилба)"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"айнийн"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"яванийн"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"гусии"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"мадурийн"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"луле-саамийн"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"магахи"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"швейцарин литературин немцойн"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"майтхили"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"инари-саамийн"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"сиксика"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"макасарийн"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"скольт-саамийн"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Кени"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Латинан Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Киргизи"_s)
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
			$of(u"кхазакхийн"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"гренландхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Комораш"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Сент-Китс а, Невис а"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"канадан французийн"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Къилбаседа Корей"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Къилба Корей"_s)
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
			$of(u"курдийн"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"швейцарин французийн"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"комийн"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Кувейт"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"корнуоллийн"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ток-писин"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Кайман гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"гӀиргӀизойн"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Кхазакхстан"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"кириллица"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"сонинке"_s)
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
			$of(u"люксембургхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Сент-Люси"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"гвичин"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"ганда"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"лахара германхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Лихтенштейн"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"лимбургийн"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Шри-Ланка"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"лингала"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"фриулийн"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Либери"_s)
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
			$of(u"литвахойн"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Люксембург"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"луба-катанга"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Латви"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"латышийн"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"катакана"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Ливи"_s)
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
			$of("lag"_s),
			$of(u"ланги"_s)
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
			$of(u"Молдави"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Ӏаьржаламанчоь"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Сен-Мартен"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Мадагаскар"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"малагасийн"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Маршаллан гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"маршаллийн"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"алеутийн"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"маори"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"македонхойн"_s)
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
			$of("MM"_s),
			$of(u"Мьянма (Бирма)"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Монголи"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"неваройн"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Макао (ша-къаьстина кӀошт)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Къилбаседа Марианан гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Мартиника"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Мавритани"_s)
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
			$of(u"малайн"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Мальта"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"мальтойн"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Маврики"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"къилба алтайн"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Мальдиваш"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Малави"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Мексика"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Малайзи"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"бирманийн"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Мозамбик"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"мокшанойн"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"сорбийн"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Намиби"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"науру"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"норвегийн букмол"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Керла Каледони"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"къилбаседа ндебели"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Нигер"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"непалхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Норфолк гӀайре"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Нигери"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ндонга"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"седекойн"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"Никарагуа"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Нидерландаш"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"голландхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"норвегийн нюнорск"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Норвеги"_s)
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
			$of("nr"_s),
			$of(u"къилба ндебеле"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Ниуэ"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"навахо"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"ромбо"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ньянджа"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Керла Зеланди"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"качинийн"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"кабилийн"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"окситанойн"_s)
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
			$of(u"менде"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"меру"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Ӏоман"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"оромо"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ангика"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"хӀирийн"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"сейшелийн креолийн"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"гӀебартойн"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"маврикин креолийн"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"сранан-тонго"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"Панама"_s)
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
			$of("en_GB"_s),
			$of(u"британин ингалсан"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Перу"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Французийн Полинези"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Папуа — Керла Гвиней"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Филиппинаш"_s)
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
			$of(u"полякийн"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"эвондо"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Сен-Пьер а, Микелон а"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Питкэрн гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Пуэрто-Рико"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"ПалестӀинан латтанаш"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"пушту"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Португали"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"португалихойн"_s)
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
			$of("PY"_s),
			$of(u"Парагвай"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"бразилин португалихойн"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"тумбука"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"тьяп"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"макуа-меетто"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Катар"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Календарь"_s)
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
			$of("ssy"_s),
			$of(u"сахо"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"ниуэ"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Арахьара Океани"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"лаьзгийн"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"кечуа"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"бодо"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"тувалу"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"маконде"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Дерригдуьненан"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"эфиопин"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Къилбаседа Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Реюньон"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Къилба Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ложбан"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Океани"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"романшийн"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"рунди"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"ахча"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Румыни"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"румынийн"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Серби"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Росси"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"оьрсийн"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Руанда"_s)
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
			$of(u"Австралин ингалсан"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"СаӀудийн Ӏаьрбийчоь"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"санскрит"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Соломонан гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"тасавак"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Малхбузен Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Сейшелан гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"сардинийн"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"синдхи"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Юккъера Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Швеци"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"къилбаседа саамийн"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Малхбален Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"минангкабау"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Къилбаседа Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Сингапур"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"санго"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Сийлахьчу Еленин гӀайре"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Юккъера Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Словени"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Къилба Африка"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Шпицберген а, Ян-Майен а"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Къилбаседа а, къилба а Америка"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Словаки"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"словакийн"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Сьерра- Леоне"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"словенийн"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Сан-Марино"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"самоанойн"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Сенегал"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"шона"_s)
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
			$of(u"арауканхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"албанойн"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"арапахо"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Суринам"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"сербийн"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Къилба Судан"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"свази"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Сан-Томе а, Принсипи а"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"къилба сото"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"сунданхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Сальвадор"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"шведийн"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"суахили"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Синт-Мартен"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Шема"_s)
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
			$of("iba"_s),
			$of(u"ибанийн"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Тристан-да- Кунья"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"асу"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Къилбаседа Америка – АЦШ а, Канада а"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Ази"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Тёркс а, Кайкос а гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"янгбен"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Юккъера Малхбале"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Чад"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Юккъера а, Гергара а Малхбале"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Французийн къилба латтанаш"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Того"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"таджикийн"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Таиланд"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"тигринья"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"бугийн"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"коро"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Таджикистан"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"канадан ингалсан"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Карибаш"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"Токелау"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"туркменийн"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Малхбален Тимор"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"йемба"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Туркмени"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Тунис"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"тсвана"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"Тонга"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"тонганийн"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"дьола-фоньи"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Туркойчоь"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"туркойн"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"тсонга"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"коморийн"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Тринидад а, Тобаго а"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"гӀезалойн"_s)
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
			$of(u"астурийн"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"таитянойн"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Танзани"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"квасио"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"доьвзуш доцу йоза"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Украина"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"аруминийн"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Юккъера Ази"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Малхбален Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Къилбаседа Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"даза"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"тувинийн"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"суахили (Конго)"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Къилба Ази"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Малхбузен Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Къилба-малхбален Ази"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Уганда"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"уйгурийн"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"массара а тӀеэцна"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Къилба Европа"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"украинийн"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"АЦШн арахьара кегийн гӀайренаш"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Вовшахкхетта Къаьмнийн Организаци"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"урду"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Цхьанатоьхна Штаташ"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"гавайн"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"гӀалмакхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Уругвай"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"пруссийн"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Узбекистан"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"узбекийн"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"кхаси"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"тамазигхтийн"_s)
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
			$of("nds_NL"_s),
			$of(u"лахара саксонийн"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Сент-Винсент а, Гренадинаш а"_s)
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
			$of(u"Виргинийн гӀайренаш (Британи)"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Виргинийн гӀайренаш (АЦШ)"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"вьетнамхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"койра чиини"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Вьетнам"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"волапюк"_s)
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
			$of("gaa"_s),
			$of(u"га"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"ногӀийн"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"руанда"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"валлонойн"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"гагаузийн"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"шемахойн"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Австралази"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Меланези"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"Уоллис а, Футуна а"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Микронези"_s)
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
			$of("wo"_s),
			$of(u"волоф"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"валлисийн"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"мороккон стандартан тамазигхтийн"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"ХӀинца болу стандартан Ӏаьрбийн"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Самоа"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"воламо"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"манипурийн"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"варай"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"авадхи"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Полинези"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"коса"_s)
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
			$of(u"йоза доцу"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"билийн"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"варлпири"_s)
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
			$of("YE"_s),
			$of(u"Йемен"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"нко"_s)
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
			$of("yo"_s),
			$of(u"йоруба"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"мексикан испанхойн"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Майотта"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"ваи"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Къилба-Африкин Республика"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"календжин"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"деванагари"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"цийн"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"хирагана"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Замби"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"бопомофо"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"зулу"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Зимбабве"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Йоьвзуш йоцу регион"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"кимбунду"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"къилбаседа сото"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"лози"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"геэз"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"эмбу"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"мачаме"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"атта цийн"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"коми-пермякийн"_s)
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
			$of("nus"_s),
			$of(u"нуэр"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"дакота"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"даьргӀойн"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"таита"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"къилбаседа лури"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"ламастан цийн"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"кпелле"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"илоко"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"мунданг"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"удмуртийн"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"тайп-тайпа доьзалан меттанаш"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"крик"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"гильбертийн"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"сандаве"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"якутийн"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"кхарачойн-балкхаройн"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"гӀалгӀайн"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"самбуру"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"карелийн"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"сантали"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"эфик"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"курух"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"нгамбайн"_s)
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
			$of("ksb"_s),
			$of(u"шамбала"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"бафиа"_s)
		})
	}));
	return data;
}

LocaleNames_ce::LocaleNames_ce() {
}

$Class* LocaleNames_ce::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ce, name, initialize, &_LocaleNames_ce_ClassInfo_, allocate$LocaleNames_ce);
	return class$;
}

$Class* LocaleNames_ce::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun