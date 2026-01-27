#include <sun/util/resources/cldr/ext/CurrencyNames_fy.h>

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

$MethodInfo _CurrencyNames_fy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fy, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fy, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fy",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fy_MethodInfo_
};

$Object* allocate$CurrencyNames_fy($Class* clazz) {
	return $of($alloc(CurrencyNames_fy));
}

void CurrencyNames_fy::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fy::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AUD"_s),
			$of("AU$"_s)
		}),
		$$new($ObjectArray, {
			$of("CAD"_s),
			$of("C$"_s)
		}),
		$$new($ObjectArray, {
			$of("FJD"_s),
			$of("FJ$"_s)
		}),
		$$new($ObjectArray, {
			$of("SBD"_s),
			$of("SI$"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of(u"฿"_s)
		}),
		$$new($ObjectArray, {
			$of("XPF"_s),
			$of("XPF"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("Andorrese peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Verenigde Arabyske Emiraten-dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Afghani (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afghaanske afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Albanese lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Armeense dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Nederlânsk-Antilliaanske gûne"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Angolese kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"Angolese kwanza (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"Angolese nieuwe kwanza (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"Angolese kwanza reajustado (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Argentynske austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"Argentynske peso ley (1970–1983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"Argentynske peso (1881–1970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Argentynske peso (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Argentynske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of("Eastenrykse schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Australyske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Arubaanske gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"Azerbeidzjaanske manat (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Azerbeidzjaanske manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("Bosnyske dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Bosnyske convertibele mark"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"Nije Bosnyske dinar (1994–1997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Barbadaanske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Bengalese taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("Belgyske frank (convertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Belgyske frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("Belgyske frank (finansjeel)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of("Bulgaarse harde lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of("Bulgaarse socialistyske lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Bulgaarse lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"Bulgaarse lev (1879–1952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Bahreinse dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Burundese frank"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Bermuda-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Bruneise dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Boliviaanske boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"Boliviaanske boliviano (1863–1963)"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("Boliviaanske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Boliviaanske mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"Braziliaanske cruzeiro novo (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of("Braziliaanske cruzado"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"Braziliaanske cruzeiro (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Braziliaanske real"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of("Braziliaanske cruzado novo"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of("Braziliaanske cruzeiro"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of(u"Braziliaanske cruzeiro (1942–1967)"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Bahamaanske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Bhutaanske ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("Birmese kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Botswaanske pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Wit-Russyske nieuwe roebel (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Wit-Russyske roebel"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Wit-Russyske roebel (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("Belizaanske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Canadese dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Congolese frank"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("WIR euro"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Zwitserse frank"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("WIR franc"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of("Sileenske escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("Sileenske unidades de fomento"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Sileenske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Sineeske yuan renminbi"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Kolombiaanske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("Unidad de Valor Real"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Costaricaanske colón"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of("Alde Servyske dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of("Tsjechoslowaakse harde koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("Kubaanske convertibele peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Kubaanske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Kaapverdyske escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"Cyprysk pûn"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Tsjechyske kroon"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"East-Dútske ostmark"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Dútske mark"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Djiboutiaanske frank"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Deenske kroon"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Dominikaanske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Algerynske dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("Ecuadoraanske sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("Ecuadoraanske unidad de valor constante (UVC)"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"Estlânske kroon"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Egyptysk pûn"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Eritrese nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of("Spaanske peseta (account A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of("Spaanske peseta (convertibele account)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("Spaanske peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Ethiopyske birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Finse markka"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Fiji-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Falklâneilânske pûn"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("Franske franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Brits pûn"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of("Georgyske kupon larit"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Georgyske lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Ghanese cedi (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Ghanese cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"Gibraltarees pûn"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Gambiaanske dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Guinese franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Guinese syli"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("Equatoriaal-Guinese ekwele guineana"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("Grykse drachme"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Guatemalteekse quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("Portugees-Guinese escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Guinee-Bissause peso"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Guyaanske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Hongkongske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Hondurese lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("Kroatyske dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kroatyske kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"Haïtiaanske gourde"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Hongaarse forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Indonesyske roepia"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"Ierske pûn"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of(u"Israëlysk pûn"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Israëlyske nieuwe shekel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Indiase roepie"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Iraakse dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Iraanske rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Yslânske kroon"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("Italiaanske lire"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Jamaikaanske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Jordaanske dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Japanse yen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Keniaanske shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Kirgizyske som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Kambodjaanske riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Komorese frank"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("Noard-Koreaanske won"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"Sûd-Koreaanske hwan (1953–1962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"Alde Sûd-Koreaanske won (1945–1953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"Sûd-Koreaanske won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Koeweitse dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Caymaneilânske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Kazachstaanske tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Laotiaanske kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"Libaneeske pûn"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Sri Lankaanske roepie"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Liberiaanske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesothaanske loti"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Litouwse litas"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("Litouwse talonas"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of(u"Lúksemboargske convertibele franc"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"Lúksemboargske frank"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of(u"Lúksemboargske finansjele franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Letse lats"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Letse roebel"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Libyske dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Marokkaanske dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("Marokkaanske franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of("Monegaskyske frank"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of("Moldavyske cupon"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Moldavyske leu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Malagassyske ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Malagassyske franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Macedonyske denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"Macedonyske denar (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("Malinese franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Myanmarese kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Mongoalske tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Macause pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Mauritaanske ouguiya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Mauritaanske ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("Maltese lire"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of(u"Maltees pûn"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Mauritiaanske roepie"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Maldivyske rufiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Malawyske kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Meksikaanske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Meksikaanske sulveren peso (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("Meksikaanske unidad de inversion (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Maleisyske ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("Mozambikaanske escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Alde Mozambikaanske metical"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mozambikaanske metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Namibyske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Nigeriaanske naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Nicaraguaanske córdoba (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Nicaraguaanske córdoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"Nederlânske gûne"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Noarske kroon"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Nepalese roepie"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Nij-Seelânske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Omaanske rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Panamese balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("Peruaanske inti"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Peruaanske sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"Peruaanske sol (1863–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Papuaanske kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Filipynske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Pakistaanske roepie"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Poalske zloty"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"Poalske zloty (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("Portugeeske escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Paraguayaanske guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Katarese rial"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("Rhodesyske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of("Alde Roemeenske leu"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Roemeenske leu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Servyske dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Russyske roebel"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"Russyske roebel (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Rwandese frank"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Saoedi-Arabyske riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Salomon-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Seychelse roepie"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of("Soedaneeske dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Soedaneeske pûn"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Soedaneeske pûn (1957–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Sweedske kroon"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Singaporese dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Sint-Heleenske pûn"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Sloveenske tolar"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("Slowaakse koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Sierraleoonse leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Somalyske shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Surinaamske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Surinaamske gulden"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"Sûd-Soedaneeske pûn"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Santomese dobra (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Santomese dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("Sovjet-roebel"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Salvadoraanske colón"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"Syrysk pûn"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Swazyske lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Thaise baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("Tadzjikistaanske roebel"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Tadzjikistaanske somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Turkmeense manat (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Turkmeense manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Tunesyske dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Tongaanske paʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("Timorese escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of("Turkse lire"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Turkse lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Trinidad en Tobago-dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("Nije Taiwanese dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Tanzaniaanske shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"Oekraïense hryvnia"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of(u"Oekraïense karbovanetz"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"Oegandese shilling (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Oegandese shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Amerikaanske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of("Amerikaanske dollar (folgjende dei)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of("Amerikaanske dollar (zelfde dei)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"Uruguayaanske peso en geïndexeerde eenheden"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"Uruguayaanske peso (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Uruguayaanske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Oezbekistaanske sum"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Fenezolaanske bolivar (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Fenezolaanske bolivar (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("Fenezolaanske bolivar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Fietnameeske dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"Alde Fietnameeske dong (1978–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vanuatuaanske vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Samoaanske tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("CFA-frank"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("Sulver"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Goud"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("Europeeske gearfoege ienheid"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of("Europeeske monetaire ienheid"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("Europeeske rekkenienheid (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("Europeeske rekkenienheid (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("East-Karibyske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("Special Drawing Rights"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of("European Currency Unit"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("Franse gouden franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("Franse UIC-franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("CFA-franc BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Palladium"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP-franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Platina"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("RINET-fondsen"_s)
		}),
		$$new($ObjectArray, {
			$of("xsu"_s),
			$of("Sucre"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("Valutacode voor testdoeleinden"_s)
		}),
		$$new($ObjectArray, {
			$of("xua"_s),
			$of("ADB-rekkenienheid"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Unbekende muntienheid"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("Jemenityske dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Jemenityske rial"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of("Joegoslavyske harde dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("Joegoslavyske noviy-dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of("Joegoslavyske convertibele dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"Joegoslavyske herfoarme dinar (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"Sûd-Afrikaanske rand (finansjeel)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Sûd-Afrikaanske rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Sambiaanske kwacha (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Sambiaanske kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"Saïreeske nije Saïre"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of(u"Saïreeske Saïre"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Simbabwaanske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("Simbabwaanske dollar (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of("Simbabwaanske dollar (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_fy::CurrencyNames_fy() {
}

$Class* CurrencyNames_fy::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fy, name, initialize, &_CurrencyNames_fy_ClassInfo_, allocate$CurrencyNames_fy);
	return class$;
}

$Class* CurrencyNames_fy::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun