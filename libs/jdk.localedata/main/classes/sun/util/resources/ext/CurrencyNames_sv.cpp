#include <sun/util/resources/ext/CurrencyNames_sv.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sv_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_sv",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sv_MethodInfo_
};

$Object* allocate$CurrencyNames_sv($Class* clazz) {
	return $of($alloc(CurrencyNames_sv));
}

void CurrencyNames_sv::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_sv::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("andorransk peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Förenade Arabemiratens dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of("afghani (1927-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("albansk lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("armenisk dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Nederländska Antillernas gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("angolansk kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("argentinsk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"österrikisk schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("australisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Aruba-gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of("azerbajdzjansk manat (1993-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("azerbajdzjansk manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("bosnisk-hercegovinsk mark (konvertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Barbados-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("bangladeshisk taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("belgisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"bulgarisk hård lev (1962â\u0080\u00931999)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("bulgarisk ny lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Bahrain-dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("burundisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Bermuda-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Brunei-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("boliviansk mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("brasiliansk real"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Bahamas-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("bhutanesisk ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("botswansk pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of("vitrysk ny rubel (1994-1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of("vitrysk rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("belizisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kanadensisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("kongolesisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("schweizisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("chilensk unidad de fomento"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("chilensk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("kinesisk yuan renminbi"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("colombiansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"costarikansk colón"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of("jugoslavisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("kubansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("kapverdisk escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("cypriotiskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("tjeckisk koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("tysk mark"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("djiboutisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("dansk krona"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("dominikansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("algerisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("estnisk krona"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("egyptiskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("eritreansk nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("spansk peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("etiopisk birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("finsk mark"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Fiji-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Falklandsöarnas pund"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("fransk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("brittiskt pund sterling"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("georgisk lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("ghanansk cedi (1979-2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("ghanansk cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("gibraltiskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("gambisk dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("guineansk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("grekisk drachma"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("guatemalansk quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Guinea-Bissau-peso"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("guyanansk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Hongkong-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("honduransk lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kroatisk kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("haitisk gourde"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("ungersk forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("indonesisk rupiah"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"irländskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("israelisk ny shekel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("indisk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("irakisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("iransk rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"isländsk krona"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("italiensk lira"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Jamaica-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("jordansk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("japansk yen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("kenyansk shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("kirgizisk som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("kambodjansk riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("komorisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("nordkoreansk won"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("sydkoreansk won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("kuwaitisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("Cayman-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("kazakisk tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("laotisk kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("libanesiskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("srilankesisk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Liberia-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("lesothisk loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("litauisk litas"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("luxemburgsk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("lettisk lats"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("libysk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("marockansk dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("moldavisk leu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("madagaskisk ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("madagaskisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("makedonisk denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("myanmarisk kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("mongolisk tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Macao-pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of("mauretansk ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("maltesisk lira"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("mauritisk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("maldivisk rufiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("malawisk kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("mexikansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("mexikansk unidad de inversion"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("malaysisk ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"gammal moçambikisk metical"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"moçambikisk metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Namibia-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("nigeriansk naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"nicaraguansk córdoba oro"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"nederländsk gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("norsk krona"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("nepalesisk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"nyzeeländsk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("omansk rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("panamansk balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("peruansk sol nuevo"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("papuansk kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("filippinsk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("pakistansk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("polsk zloty"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("portugisisk escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("paraguaysk guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("qatarisk rial"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"gammal rumänsk leu"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"rumänsk leu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Serbisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rysk rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of("rysk rubel (1991-1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("rwandisk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("saudisk riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Salomon-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("seychellisk rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of("sudanesisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("sudanesiskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("svensk krona"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Singapore-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("S:t Helena-pund"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("slovensk tolar"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("slovakisk koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("sierraleonsk leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("somalisk shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Surinam-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("surinamesisk gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"São Tomé och Príncipe-dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"salvadoransk colón"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("syriskt pund"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"swaziländsk lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"thailändsk baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("tadzjikisk somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of("turkmensk manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("tunisisk dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"tongansk paʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("timoriansk escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of("gammal turkisk lira"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("ny turkisk lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Trinidad ochTobago-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("taiwanesisk ny dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("tanzanisk shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("ukrainsk hryvnia"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("ugandisk shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("US-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"US-dollar (nästa dag)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of("US-dollar (samma dag)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("uruguayansk peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("uzbekisk sum"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of("venezuelansk bolivar"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of("venezuelansk bolivar fuerte"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("vietnamesisk dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vanuatisk vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"västsamoansk tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("centralafrikansk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("silver"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("guld"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("europeisk kompositenhet"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"europeisk monetär enhet"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("europeisk kontoenhet (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("europeisk kontoenhet (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"östkaribisk dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"IMF särskild dragningsrätt"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("fransk guldfranc"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"internationella järnvägsunionens franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"västafrikansk franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("palladium"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP-franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platina"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("test-valutakod"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"okänd eller ogiltig valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("jemenitisk rial"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("jugoslavisk ny dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("sydafrikansk rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of("zambisk kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Zimbabwe-dollar"_s)
		})
	});
}

CurrencyNames_sv::CurrencyNames_sv() {
}

$Class* CurrencyNames_sv::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sv, name, initialize, &_CurrencyNames_sv_ClassInfo_, allocate$CurrencyNames_sv);
	return class$;
}

$Class* CurrencyNames_sv::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun