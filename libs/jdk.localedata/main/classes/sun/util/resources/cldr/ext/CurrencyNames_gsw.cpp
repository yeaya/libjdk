#include <sun/util/resources/cldr/ext/CurrencyNames_gsw.h>

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

$MethodInfo _CurrencyNames_gsw_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_gsw, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_gsw, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_gsw_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_gsw",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_gsw_MethodInfo_
};

$Object* allocate$CurrencyNames_gsw($Class* clazz) {
	return $of($alloc(CurrencyNames_gsw));
}

void CurrencyNames_gsw::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_gsw::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ATS"_s),
			$of(u"öS"_s)
		}),
		$$new($ObjectArray, {
			$of("CHF"_s),
			$of("CHF"_s)
		}),
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"¥"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("Andorranischi Peseete"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("UAE Dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Afghani (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Niderländischi-Antille-Gulde"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Angolanische Kwanza (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Nöie Kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of("Kwanza Reajustado"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Argentinische Auschtral"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Argentinische Peso (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Argentinische Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Öschtriichische Schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Auschtralische Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Aruba Florin"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Aserbeidschanische Manat (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Aserbeidschanische Manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("Bosnie-und-Herzegowina-Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Konvertierbari Mark vo Bosnie und Herzegowina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Barbados-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("Belgische Franc (konvertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Belgische Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("Belgische Finanz-Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Lew (1962–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Bulgarische Lew"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Bahrain-Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Burundi-Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Bermuda-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Brunei-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("Bolivianische Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Bolivianische Mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Brasilianische Cruzeiro Novo (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of("Brasilianische Cruzado"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Brasilianische Cruzeiro (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Brasilianische Real"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of("Brasilianische Cruzado Novo"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of("Brasilianische Cruzeiro"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Bahama-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Bhutanische Ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("Birmanische Kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Botswanische Pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Belarus-Rubel (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Belarus Rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Belarus Rubel (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("Belize-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Kanadische Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Kongolesische Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("WIR-Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Schwiizer Franke"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("WIR-Franke"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("Tschileenische Unidad de Fomento"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Tschileenische Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Renminbi Yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Kolumbianische Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("Unidad de Valor Real"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Costa Rica Colon"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of("Alte Serbische Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of("Tschechoslowakischi Chroone"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Kubanische Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Kap Verde Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Zypere-Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Tschechischi Chroone"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of("DDR-Mark"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Tüütschi Mark"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Dschibuti-Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"Tänischi Chroone"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Tominikanische Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Algeerischi Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("Ecuadorianische Sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"Verrächnigsäiheit für EC"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Eestnischi Chroone"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Ägüptischs Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Eritreische Nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of(u"Schpanischi Peseeta (A–Kontene)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of("Schpanischi Peseeta (konvertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("Schpanischi Peseeta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Äthiopische Birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Finnischi Mark"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Fidschi Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Falkland-Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Französische Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Pfund Schtörling"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of("Georgische Kupon Larit"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Georgische Lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Ghanaische Cedi (GHC)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Ghanaische Cedi (GHS)"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Gibraltar-Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Gambische Dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Guinea-Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Guineische Syli"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of(u"Äquatorialguinea-Ekwele"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("Griechische Trachme"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("Portugiisische Guinea Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Guinea-Bissau-Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Guyana-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Hongkong-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("Kroazische Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Gourde"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Indonesischi Rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("Iirischs Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("Israelischs Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("Schekel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Indischi Rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Irak-Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Iisländischi Chroone"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"Italiänischi Lira"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Jamaika-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Jordaanische Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Kenia-Schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Komore-Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("Nordkoreanische Won"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"Süüdkoreanische Won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Kuwait-Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("Kaiman-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Libaneesischs Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Sri-Lanka-Rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Liberiaanische Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Litauische Litas"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("Litauische Talonas"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of("Luxemburgische Franc (konvertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("Luxemburgische Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of("Luxemburgischer Finanz-Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Lettische Lats"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Lettische Rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Lüübische Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Marokkanische Dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("Marokkanischer Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"Moldau-Löi"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Madagaschkar-Ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Madagaschkar-Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("Malische Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ouguiya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("Malteesischi Lira"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("Malteesischs Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Maurizius-Rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Rufiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Malawi-Kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Mexikanische Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Mexikanische Silber-Peso (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("Mexikanische Unidad de Inversion (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Malaysische Ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Mosambikanische Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Alte Metical"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Namibia-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of("Cordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Nicaragua-Córdoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"Holländische Gulde"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Norweegischi Chroone"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Nepaleesischi Rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("Neuseeland-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Rial Omani"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("Peruanische Inti"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Sol (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Philippiinische Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Pakischtanischi Rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Zloty"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Zloty (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("Portugiisische Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Katar-Riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("Rhodesische Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"Löi"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"Rumäänische Löi"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Serbische Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Russische Rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of("Russische Rubel (alt)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Ruanda-Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Saudi-Riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Salomone-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Seyschelle-Rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of("Sudaneesische Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Sudaneesischs Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("Sudaneesischs Pfund (alt)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Schweedischi Chroone"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Singapur-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("St.-Helena-Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Tolar"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("Slowakischi Chroone"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Somalia-Schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Surinamische Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Surinamische Gulde"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"Süüdsudaneesischs Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("Sowjetische Rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("El-Salvador-Colon"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"Süürischs Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("Tadschikischtan-Rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Tadschikischtan-Somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of("Turkmeenischtan-Manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Tuneesische Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Paʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("Timor-Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"Türkischi Liire"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"Nöii Türkischi Liire"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Trinidad-und-Tobago-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"Nöii Taiwan-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Tansania-Schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Hryvnia"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("Ukraiinische Karbovanetz"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Uganda-Schilling (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Uganda-Schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("US-Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"US Dollar (Nöchschte Taag)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of("US Dollar (Gliiche Taag)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Uruguayische Nöie Peso (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Uruguayische Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Usbeekischtan-Sum"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Bolivar (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Bolivar (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("Bolivar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"CFA-Franc (Äquatoriaal)"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("Silber"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Gold"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Europääischi Rächnigseinheit"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Europääischi Währigseinheit (XBB)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"Europääischi Rächnigseinheit (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"Europääischi Rächnigseinheit (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("Oschtkaribische Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"Sunderziäigsrächt"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of(u"Europääischi Währigseinheit (XEU)"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"Französische Gold-Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"Französische UIC-Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("CFA-Franc (Wescht)"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Palladium"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP-Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Platin"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("RINET-Funds"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"Teschtwährig"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Unbekannti Währig"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("Jeme-Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Jeme-Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"Jugoslawische Dinar (1966–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"Nöii Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of("Jugoslawische Dinar (konvertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwacha (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Nöie Zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of("Zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Simbabwe-Dollar"_s)
		})
	}));
	return data;
}

CurrencyNames_gsw::CurrencyNames_gsw() {
}

$Class* CurrencyNames_gsw::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_gsw, name, initialize, &_CurrencyNames_gsw_ClassInfo_, allocate$CurrencyNames_gsw);
	return class$;
}

$Class* CurrencyNames_gsw::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun