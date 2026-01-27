#include <sun/util/resources/cldr/ext/CurrencyNames_it.h>

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

$MethodInfo _CurrencyNames_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_it, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_it, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_it_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_it",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_it_MethodInfo_
};

$Object* allocate$CurrencyNames_it($Class* clazz) {
	return $of($alloc(CurrencyNames_it));
}

void CurrencyNames_it::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_it::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BRL"_s),
			$of("BRL"_s)
		}),
		$$new($ObjectArray, {
			$of("CNH"_s),
			$of("CNH"_s)
		}),
		$$new($ObjectArray, {
			$of("HKD"_s),
			$of("HKD"_s)
		}),
		$$new($ObjectArray, {
			$of("INR"_s),
			$of("INR"_s)
		}),
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of("JPY"_s)
		}),
		$$new($ObjectArray, {
			$of("KRW"_s),
			$of("KRW"_s)
		}),
		$$new($ObjectArray, {
			$of("MRU"_s),
			$of("MRU"_s)
		}),
		$$new($ObjectArray, {
			$of("MXN"_s),
			$of("MXN"_s)
		}),
		$$new($ObjectArray, {
			$of("PLN"_s),
			$of("PLN"_s)
		}),
		$$new($ObjectArray, {
			$of("STN"_s),
			$of("STN"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of(u"฿"_s)
		}),
		$$new($ObjectArray, {
			$of("TWD"_s),
			$of("TWD"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("USD"_s)
		}),
		$$new($ObjectArray, {
			$of("VES"_s),
			$of("VES"_s)
		}),
		$$new($ObjectArray, {
			$of("VND"_s),
			$of("VND"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("peseta andorrana"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("dirham degli Emirati Arabi Uniti"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afgani (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("lek albanese"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("dram armeno"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("fiorino delle Antille olandesi"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwanza angolano"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"kwanza angolano (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"nuovo kwanza angolano (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"kwanza reajustado angolano (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("austral argentino"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("peso argentino (vecchio Cod.)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("peso argentino"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of("scellino austriaco"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("dollaro australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("fiorino di Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"manat azero (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("manat azero"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("dinar Bosnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("marco convertibile della Bosnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("dollaro di Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("taka bangladese"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("franco belga (convertibile)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("franco belga"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("franco belga (finanziario)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"lev bulgaro (1962–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("lev bulgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("dinaro del Bahrein"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("franco del Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("dollaro delle Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("dollaro del Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("peso boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("mvdol boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"cruzeiro novo brasiliano (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of("cruzado brasiliano"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"cruzeiro brasiliano (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("real brasiliano"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of("cruzado novo brasiliano"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of("cruzeiro brasiliano"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("dollaro delle Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("ngultrum bhutanese"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("kyat birmano"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula del Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"nuovo rublo bielorusso (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("rublo bielorusso"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"rublo bielorusso (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("dollaro del Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("dollaro canadese"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("franco congolese"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("franco svizzero"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("unidades de fomento chilene"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("peso cileno"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("renmimbi cinese offshore"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("renminbi cinese"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("peso colombiano"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"colón costaricano"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of("antico dinaro serbo"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of("corona forte cecoslovacca"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("peso cubano convertibile"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("peso cubano"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("escudo capoverdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("sterlina cipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("corona ceca"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of("ostmark della Germania Orientale"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("marco tedesco"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("franco di Gibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("corona danese"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("peso dominicano"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("dinaro algerino"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of(u"sucre dell’Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"unidad de valor constante (UVC) dell’Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"corona dell’Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("sterlina egiziana"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nakfa eritreo"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of("peseta spagnola account"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of("peseta spagnola account convertibile"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("peseta spagnola"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("birr etiope"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("markka finlandese"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("dollaro delle Figi"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("sterlina delle Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("franco francese"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("sterlina britannica"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of("kupon larit georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("lari georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("cedi del Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("cedi ghanese"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("sterlina di Gibilterra"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi gambiano"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("franco della Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("syli della Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("ekwele della Guinea Equatoriale"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("dracma greca"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("quetzal guatemalteco"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("escudo della Guinea portoghese"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("peso della Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("dollaro della Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("dollaro di Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("lempira honduregna"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("dinaro croato"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kuna croata"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("gourde haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("fiorino ungherese"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("rupia indonesiana"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("sterlina irlandese"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("sterlina israeliana"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("nuovo siclo israeliano"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("rupia indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("dinaro iracheno"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("rial iraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("corona islandese"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("lira italiana"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("dollaro giamaicano"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("dinaro giordano"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("yen giapponese"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("scellino keniota"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("som kirghiso"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("riel cambogiano"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("franco comoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("won nordcoreano"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("won sudcoreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("dinaro kuwaitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("dollaro delle Isole Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("tenge kazako"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("kip laotiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("lira libanese"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("rupia di Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("dollaro liberiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("loti del Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("litas lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("talonas lituani"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of("franco convertibile del Lussemburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("franco del Lussemburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of("franco finanziario del Lussemburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("lats lettone"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("rublo lettone"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinaro libico"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("dirham marocchino"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("franco marocchino"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("leu moldavo"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariary malgascio"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("franco malgascio"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("dinaro macedone"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"dinaro macedone (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("franco di Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("kyat di Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("tugrik mongolo"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("pataca di Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ouguiya della Mauritania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("ouguiya della Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("lira maltese"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("sterlina maltese"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("rupia mauriziana"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("rufiyaa delle Maldive"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha malawiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("peso messicano"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"peso messicano d’argento (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("unidad de inversion (UDI) messicana"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("ringgit malese"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("escudo del Mozambico"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("metical mozambicano"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("dollaro namibiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naira nigeriana"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of("cordoba nicaraguense"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"córdoba nicaraguense"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("fiorino olandese"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("corona norvegese"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("rupia nepalese"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("dollaro neozelandese"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("rial omanita"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("balboa panamense"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("inti peruviano"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("sol peruviano"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"sol peruviano (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("kina papuana"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("peso filippino"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("rupia pakistana"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"złoty polacco"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"złoty Polacco (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("escudo portoghese"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"guaraní paraguayano"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("rial qatariano"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("dollaro della Rhodesia"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of("leu della Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("leu rumeno"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("dinaro serbo"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rublo russo"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of("rublo della CSI"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("franco ruandese"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("riyal saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("dollaro delle Isole Salomone"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("rupia delle Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of("dinaro sudanese"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("sterlina sudanese"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("corona svedese"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("dollaro di Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"sterlina di Sant’Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("tallero sloveno"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("corona slovacca"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("leone della Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("scellino somalo"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("dollaro del Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("fiorino del Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("sterlina sud-sudanese"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra di Sao Tomé e Principe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"dobra di Sao Tomé e Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("rublo sovietico"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"colón salvadoregno"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("lira siriana"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni dello Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("baht thailandese"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("rublo del Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("somoni tagiko"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"manat turkmeno (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("manat turkmeno"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinaro tunisino"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"paʻanga tongano"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("escudo di Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"lira turca (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("lira turca"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("dollaro di Trinidad e Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("nuovo dollaro taiwanese"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("scellino della Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("grivnia ucraina"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("karbovanetz ucraino"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"scellino ugandese (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("scellino ugandese"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("dollaro statunitense"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of("dollaro statunitense (next day)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of("dollaro statunitense (same day)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"peso uruguaiano in unità indicizzate"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"peso uruguaiano (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("peso uruguayano"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("sum uzbeco"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"bolivar venezuelano (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"bolívar venezuelano (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"bolívar venezuelano"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("dong vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu di Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("tala samoano"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("franco CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("argento"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("oro"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"unità composita europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"unità monetaria europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"unità di acconto europea (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"unità di acconto europea (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("dollaro dei Caraibi orientali"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("diritti speciali di incasso"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("franco oro francese"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("franco UIC francese"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("franco CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("palladio"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("franco CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platino"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("fondi RINET"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("codice di verifica della valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("valuta sconosciuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("dinaro dello Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("riyal yemenita"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of("dinaro forte yugoslavo"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("dinaro noviy yugoslavo"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of("dinaro convertibile yugoslavo"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of("rand sudafricano (finanziario)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("rand sudafricano"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"kwacha dello Zambia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha zambiano"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of("nuovo zaire dello Zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of("zaire dello Zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("dollaro dello Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("dollaro zimbabwiano (2009)"_s)
		})
	}));
	return data;
}

CurrencyNames_it::CurrencyNames_it() {
}

$Class* CurrencyNames_it::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_it, name, initialize, &_CurrencyNames_it_ClassInfo_, allocate$CurrencyNames_it);
	return class$;
}

$Class* CurrencyNames_it::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun