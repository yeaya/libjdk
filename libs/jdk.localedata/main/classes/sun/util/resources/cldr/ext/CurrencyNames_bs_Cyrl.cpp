#include <sun/util/resources/cldr/ext/CurrencyNames_bs_Cyrl.h>

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

$MethodInfo _CurrencyNames_bs_Cyrl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_bs_Cyrl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_bs_Cyrl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_bs_Cyrl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_bs_Cyrl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_bs_Cyrl_MethodInfo_
};

$Object* allocate$CurrencyNames_bs_Cyrl($Class* clazz) {
	return $of($alloc(CurrencyNames_bs_Cyrl));
}

void CurrencyNames_bs_Cyrl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_bs_Cyrl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BAM"_s),
			$of(u"КМ"_s)
		}),
		$$new($ObjectArray, {
			$of("CZK"_s),
			$of(u"Кч"_s)
		}),
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"¥"_s)
		}),
		$$new($ObjectArray, {
			$of("PLN"_s),
			$of(u"зл"_s)
		}),
		$$new($ObjectArray, {
			$of("RSD"_s),
			$of(u"дин."_s)
		}),
		$$new($ObjectArray, {
			$of("TRY"_s),
			$of(u"Тл"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"Андорска пезета"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Уједињени арапски емирати дирхам"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Авганистански авган (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"Афганистански афгани"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"Албански лек"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"Арменски драм"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Холандски антили гилдер"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Анголска кванза"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"анголијска кванза (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Анголијска нова кванза (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Анголска кванза реађустадо (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"Аргентински аустрал"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"аргентински пезо (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"Аргентински пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Аустријски шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Аустралијски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"Арубански флорин"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Азербејџански манат (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Азербејџански манат"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Босанско-Херцеговачки динар"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Конвертибилна марка"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"Барбадоски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Бангладешка така"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"Белгијски франак (конвертибилни)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"Белгијски франак"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"Белгијски франак (финансијски)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Бугарски тврди лев"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Бугарски лев"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Бахреински динар"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Бурундски франак"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Бермудски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Брунејски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"Боливијски боливиано"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of(u"Боливијски пезо"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"Боливијски мвдол"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Бразилски нови крузеиро (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"Бразилијски крузадо"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Бразилски крузеиро (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Бразилски реал"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"Бразилијски нови крузадо"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"Бразилски крузеиро"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Бахамски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"Бутански нгултрум"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of(u"Бурмански кјат"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Боцванска пула"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Белоруска нова рубља (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"Белоруска рубља"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Белоруска рубља (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Белизеански долар"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Канадски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Конгоански франак"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"WIR евро"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Швајцарски франак"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of(u"WIR франак"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"Чилеовски унидадес се фоменто"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"Чилеански пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Кинески јуан (острвски)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Кинески јуан"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Колумбијски пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of(u"Унидад де валоршки реал"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Костарикански колон"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Стари српски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of(u"Чехословачка тврда круна"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"кубански конвертибилни пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"Кубански пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Зеленортски ескудо"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"Кипарска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"Чешка круна"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"Источно-немачка марка"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Немачка марка"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Џибутски франак"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"Данска круна"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"Доминикански пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Алжирски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"Еквадорски сакр"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"Еквадорски унидад де валор константе"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"Естонска кроон"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Египатска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Еритрејска накфа"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"Шпанска пезета (рачун)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of(u"Шпанска пезета (конвертибилнирачун)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"Шпанска пезета"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Етиопијски бир"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Евро"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"Финска марка"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Фиџи долар"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Фолкландска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Француски франак"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Британска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of(u"Грузијски купон ларит"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"Грузијски лари"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Гански цеди (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"Гански цеди"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"Гибралтаска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Гамбијски даласи"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"Гвинејски франак"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Гвинејски сили"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"Екваторијално-гвинејски еквеле"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"Грчка драхма"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"Гватемалски квецал"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of(u"португалска гвинеја ескудо"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"Гвинеја Бисао Пезо"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Гвајански долар"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"Хонгконшки долар"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Хондурашка лемпира"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of(u"Хрватски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"Хрватска куна"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"Хаићански гурд"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"Мађарска форинта"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"Индонежанска рупија"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"Ирска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"Израелска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"стари израелски шекели"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Израелски нови шекел"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Индијска рупија"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"Ирачки динар"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"Ирански ријал"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of(u"стара исландска круна"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Исландска круна"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"Италијанска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Јамајски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"Јордански динар"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Јапански јен"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Кенијски шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"Киргистански сом"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"Камбоџански ријел"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Коморски франак"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"Севернокорејски вон"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"Јужнокорејски вон"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"Кувајтски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Кајмански долар"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"Казахстански тенге"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"Лаоски кип"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"Либанска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"Шриланканска рупија"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Либеријски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Лесото лоти"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"Литвански литас"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of(u"Литвански талонас"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"Луксембуршки конвертибилни франак"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"Луксембуршки франак"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"Луксембуршки финансијски франак"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"Латвијски лати"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of(u"атвијска рубља"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Либијски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Марокански дирхам"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"Марокански франак"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"Молдавски леј"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Мадагаскарски аријари"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"Малагасијски франак"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"Македонски денар"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of(u"Малијански франак"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"Мијанмарски кјат"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"Монголски тугрик"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"Макаоска патака"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Мауританијска угвија (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Мауританска огија"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"Малтешка лира"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"Малтешка фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Маурицијска рупија"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"Малдивска руфија"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Малавијска квача"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"Мексички пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Мексички сребрни пезо (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"Мексички унидад де инверсион (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"Малезијски рингит"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of(u"Мозамбијски ескудо"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Стари мозамбијски метикал"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Мозамбијски метикал"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Намибијски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Нигеријска наира"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Никарагванска кордоба"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Никарагванска златна кордоба"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"Холандски гулден"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"Норвешка круна"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"Непалска рупија"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Новозеландски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"Омански ријал"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"Панамска балбоа"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of(u"Перуански инти"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"Перуански сол"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Перуански сол (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"Папуанска кина"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"Филипински пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"Пакистанска рупија"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"Пољски злот"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Пољски злоти (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"Португалски ескудо"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"Парагвајски гварани"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"Катарски ријал"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of(u"Родејскидолар"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Стари румунски љу"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"Румунски леј"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"Српски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Руска рубља"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Руска рубља (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Руандски франак"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Саудијски ријал"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Соломонски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Сејшелска рупија"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Стари судански динар"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Суданска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Стара суданска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"Шведска круна"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Сингапурски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Света Јелена фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"Словеначки толар"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Словачка круна"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Сијералеонски леоне"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Сомалијски шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"Суринамски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"Суринамски гилдер"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"Јужносуданска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Сао Томе и Принципе добра (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Сао Томе и Принципе добра"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of(u"Совјетска рубља"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Салвадорски колон"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"Сиријска фунта"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Свазилендски лилангени"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Тајски бахт"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of(u"Таџихистанска рубља"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"Таџикистански сомони"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Туркменистански манат (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"Туркменистански манат"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Туниски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Тонгоанска панга"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"Тиморшки ескудо"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Стара турска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"Турска лира"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Тринидад-тобагошки долар"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"Нови тајвански долар"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Танзанијски шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"Украјинска хривња"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"Украјински карбованети"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Угандски шилинг (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Угандски шилинг"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Амерички долар"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"САД долар (следећи дан)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"САД долар (исти дан)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"Уругвајски пезо ен унидадес индексадас"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Уругвајски пезо (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"Уругвајски пезос"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"Узбекистански сом"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Венецуелански боливар (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Венецуелански боливар (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Венецуелански боливар"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"Вијетнамски донг"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"Вануатски вату"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"Самоанска тала"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"CFA франак BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"Сребро"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"Злато"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Европска композитна јединица"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Европска новчана јединица"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"Европска јединица рачуна (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"Европска јединица рачуна (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"Источно-карибски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"Посебна цртаћа права"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"Европска валутна јединица"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"Француски златни франак"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"Француски UIC-франак"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"CFA франак BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"Паладијум"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP франак"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"Платина"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of(u"RINET фонд"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"Код тестиране валуте"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Непозната или неважећа валута"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of(u"Јеменски динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"Јеменски ријал"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Југословенски тврди динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Југословенски нови динар"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"Југословенски конвертибилни динар"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"Јужно-афрички ранд (финансијски)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Јужноафрички ранд"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Замбијска квача (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Замбијска квача"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Заирски нови заир"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Заирски заир"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Зимбабвејски долар"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"Зимбабвеански долар (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"Зимбабвеански долар (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_bs_Cyrl::CurrencyNames_bs_Cyrl() {
}

$Class* CurrencyNames_bs_Cyrl::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_bs_Cyrl, name, initialize, &_CurrencyNames_bs_Cyrl_ClassInfo_, allocate$CurrencyNames_bs_Cyrl);
	return class$;
}

$Class* CurrencyNames_bs_Cyrl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun