#include <sun/util/resources/cldr/ext/CurrencyNames_hsb.h>

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

$MethodInfo _CurrencyNames_hsb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_hsb, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_hsb, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_hsb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_hsb",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_hsb_MethodInfo_
};

$Object* allocate$CurrencyNames_hsb($Class* clazz) {
	return $of($alloc(CurrencyNames_hsb));
}

void CurrencyNames_hsb::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_hsb::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("ALL"_s)
		}),
		$$new($ObjectArray, {
			$of("AUD"_s),
			$of("AUD"_s)
		}),
		$$new($ObjectArray, {
			$of("BGN"_s),
			$of("BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"¥"_s)
		}),
		$$new($ObjectArray, {
			$of("KPW"_s),
			$of("KPW"_s)
		}),
		$$new($ObjectArray, {
			$of("PLN"_s),
			$of(u"zł"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of(u"฿"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("andorraska peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("ZAE dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afghaniski afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("albanski lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("armenski dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"nižozemsko-antilski gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("angolska kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"angolska kwanza (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"angolska nowa kwanza (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"angolska kwanza reajustado (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("argentinski austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"argentinski peso (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("argentinski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"awstriski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("awstralski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("aruba-florin"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"azerbajdźanski manat (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"azerbajdźanski manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("bosniski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("bosniska konwertibelna hriwna"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("barbadoski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"bangladešska taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("belgiski frank (konwertibelny)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("belgiski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"belgiski finančny frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"bołharski lew (1962–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"bołharski lew"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("bahrainski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("burundiski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("bermudaski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("bruneiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliwiski boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("boliwiski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("boliwiski mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"brazilski nowy cruzeiro (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of(u"brazilski cruzado (1986–1989)"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"brazilski cruzeiro (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("brazilski real"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of(u"brazilski nowy cruzado (1989–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of(u"brazilski cruzeiro (1993–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("bahamaski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("bhutanski ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("burmaski kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("botswanska pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"běłoruski rubl (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"běłoruski rubl"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"běłoruski rubl (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("belizeski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kanadiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("kongoski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"šwicarski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("chilski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("chinski yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("kolumbiski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"kosta-rikaski colón"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("kubaski konwertibelny peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("kubaski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("kapverdski escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"čěska króna"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"dźibutiski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"danska króna"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("dominikanski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("algeriski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("egyptowski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("eritrejska nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("etiopiski birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"fidźiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("falklandski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("britiski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("georgiski lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("ghanaski cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("gibraltarski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("gambiski dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("ginejski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("guatemalski quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("ginejsko-bissauski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("guyanski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("hongkongski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("honduraska lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("chorwatska kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("haitiska gourda"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"madźarski forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("indoneska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"israelski nowy šekel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("indiska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("irakski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("iranski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"islandska króna"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("jamaiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("jordaniski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("japanski yen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"keniaski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("kirgiski som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"kambodźaski riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("komorski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("sewjernokorejski won"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"južnokorejski won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("kuwaitski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("kajmanski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("kazachski tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("laoski kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("libanonski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("sri-lankaska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("liberiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("litawski litas"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("letiski lat"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("libyski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("marokkoski dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("moldawski leu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("madagaskarski ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("makedonski denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("myanmarski kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("mongolski tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("macaoska pataka"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"mawretanska ouguiya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("mawretanska ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("mauritiuska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("malediwiska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("malawiski kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("mexiski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("malajziski ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("mosambikski escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"mosambikski metical (1980–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mosambikski metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("namibiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("nigeriski naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of("nikaraguaski cordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"norwegska króna"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("nepalska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("nowoseelandski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("omanski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("panamaski balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("peruski sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("papua-nowoginejski kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("filipinski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("pakistanska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"pólski złoty"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("paraguayski guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("katarski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("rumunski leu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("serbiski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("ruski rubl"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("ruandiski frank"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("saudi-arabski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("salomonski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("seychellska rupija"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("sudanski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"šwedska króna"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("singapurski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("St. Helenski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("sierra-leoneski leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"somaliski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("surinamski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"južnosudanski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"são tomeski dobra (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"são tomeski dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"el salvadorski colón"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("syriski punt"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("swasiski lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("thaiski baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"tadźikski somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("turkmenski manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("tuneziski dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"tongaski paʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("turkowska lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("trinidad-tobagoski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("nowy taiwanski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"tansaniski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("ukrainska hriwna"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"ugandaski šiling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("ameriski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("uruguayski peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("uzbekski sum"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"venezuelski bolívar (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"venezuelski bolívar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("vietnamski dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vanuatuski vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("samoaski tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("CFA-frank (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("wuchodnokaribiski dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("CFA-frank (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP-frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"njeznata měna"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("jemenski rial"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"južnoafriski rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("sambiski kwacha"_s)
		})
	}));
	return data;
}

CurrencyNames_hsb::CurrencyNames_hsb() {
}

$Class* CurrencyNames_hsb::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_hsb, name, initialize, &_CurrencyNames_hsb_ClassInfo_, allocate$CurrencyNames_hsb);
	return class$;
}

$Class* CurrencyNames_hsb::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun