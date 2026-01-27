#include <sun/util/resources/cldr/ext/CurrencyNames_rm.h>

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

$MethodInfo _CurrencyNames_rm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_rm, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_rm, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_rm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_rm",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_rm_MethodInfo_
};

$Object* allocate$CurrencyNames_rm($Class* clazz) {
	return $of($alloc(CurrencyNames_rm));
}

void CurrencyNames_rm::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_rm::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CHF"_s),
			$of("CHF"_s)
		}),
		$$new($ObjectArray, {
			$of("DKK"_s),
			$of("DKK"_s)
		}),
		$$new($ObjectArray, {
			$of("EEK"_s),
			$of("EEK"_s)
		}),
		$$new($ObjectArray, {
			$of("FIM"_s),
			$of("FIM"_s)
		}),
		$$new($ObjectArray, {
			$of("HNL"_s),
			$of("HNL"_s)
		}),
		$$new($ObjectArray, {
			$of("IEP"_s),
			$of("IEP"_s)
		}),
		$$new($ObjectArray, {
			$of("ISK"_s),
			$of("ISK"_s)
		}),
		$$new($ObjectArray, {
			$of("JMD"_s),
			$of("JMD"_s)
		}),
		$$new($ObjectArray, {
			$of("KYD"_s),
			$of("KYD"_s)
		}),
		$$new($ObjectArray, {
			$of("NOK"_s),
			$of("NOK"_s)
		}),
		$$new($ObjectArray, {
			$of("PLN"_s),
			$of("PLN"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("RUR"_s),
			$of("RUR"_s)
		}),
		$$new($ObjectArray, {
			$of("SAR"_s),
			$of("SAR"_s)
		}),
		$$new($ObjectArray, {
			$of("SEK"_s),
			$of("SEK"_s)
		}),
		$$new($ObjectArray, {
			$of("TRY"_s),
			$of("TRY"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("peseta andorrana"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("dirham dals Emirats Arabs Unids"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afgani afgan (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("afgani afgan"_s)
		}),
		$$new($ObjectArray, {
			$of("alk"_s),
			$of(u"lek albanais (1947–1961)"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("lek albanais"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("dram armen"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("flurin da las Antillas Ollandaisas"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwanza angolan"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"kwanza angolan (1977–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"nov kwanza angolan (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"kwanza angolan reagiustà (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("austral argentin"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of("peso argentin ley"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of("peso argentin moneda nacional"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"peso argentin (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("peso argentin"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of("schilling austriac"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("dollar australian"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"flurin da l’Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"manat aserbaidschan (1993–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("manat aserbaidschan"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"dinar da la Bosnia-Erzegovina (1992–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("marc convertibel da la Bosnia-Erzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"nov dinar da la Bosnia-Erzegovina (1994–1997)"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("dollar da Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("taka bangladais"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("franc beltg (convertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("franc beltg"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("franc beltg (finanzial)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of("lev bulgar dir"_s)
		}),
		$$new($ObjectArray, {
			$of("bgm"_s),
			$of("lev bulgar socialistic"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("lev bulgar"_s)
		}),
		$$new($ObjectArray, {
			$of("bgo"_s),
			$of(u"lev bulgar (1879–1952)"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("dinar dal Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("franc dal Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("dollar da las Bermudas"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("dollar dal Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviano bolivian"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of("vegl boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("peso bolivian"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("mvdol bolivian"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"cruzeiro novo brasilian (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of("cruzado brasilian"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"cruzeiro brasilian (1990–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("real brasilian"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of("cruzado novo brasilian"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of("cruzeiro brasilian"_s)
		}),
		$$new($ObjectArray, {
			$of("brz"_s),
			$of("vegl cruzeiro brasilian"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("dollar da las Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("ngultrum butanais"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("kyat burmais"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula da la Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"rubel bieloruss (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("rubel bieloruss"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"rubel bieloruss (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("dollar dal Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("dollar canadais"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("franc congolais"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of("euro WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("franc svizzer"_s)
		}),
		$$new($ObjectArray, {
			$of("chw"_s),
			$of("franc WIR"_s)
		}),
		$$new($ObjectArray, {
			$of("cle"_s),
			$of("escudo chilen"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("unidades de fomento chilenas"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("peso chilen"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("yuan chinais (offshore)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("yuan chinais"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("peso columbian"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("unidad de valor real"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("colon da la Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"dinar serb (2002–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("csk"_s),
			$of("cruna tschecoslovaca"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("peso cuban convertibel"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("peso cuban"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("escudo dal Cap Verd"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("glivra cipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("cruna tscheca"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of(u"marc da la Germania da l’Ost"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("marc tudestg"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("franc dal Dschibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("cruna danaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("peso dominican"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("dinar algerian"_s)
		}),
		$$new($ObjectArray, {
			$of("ecs"_s),
			$of("sucre equadorian"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of(u"unitad da scuntrada da l’Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("cruna estona"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("glivra egipziana"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nakfa eritreic"_s)
		}),
		$$new($ObjectArray, {
			$of("esa"_s),
			$of("peseta spagnola (conto A)"_s)
		}),
		$$new($ObjectArray, {
			$of("esb"_s),
			$of("peseta spagnola (conto convertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("peseta spagnola"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("birr etiopic"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("marc finlandais"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("dollar dal Fidschi"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("glivra dal Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("franc franzos"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("glivra britannica"_s)
		}),
		$$new($ObjectArray, {
			$of("gek"_s),
			$of("kupon larit georgian"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("lari georgian"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"cedi ghanais (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("cedi ghanais"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("glivra da Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi gambic"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("franc da la Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("syli da la Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("gqe"_s),
			$of("ekwele da la Guinea Equatoriala"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("drachma greca"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("quetzal da la Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gwe"_s),
			$of("escudo da la Guinea Portugaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("peso da la Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("dollar da la Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("dollar da Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("lempira hondurian"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("dinar croat"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kuna croata"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("gourde haitian"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("forint ungarais"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("rupia indonaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("glivra indonaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("ilp"_s),
			$of("glivra israeliana"_s)
		}),
		$$new($ObjectArray, {
			$of("ilr"_s),
			$of(u"schekel israelian (1980–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("nov schekel israelian"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("rupia indica"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("dinar iracais"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("rial iranais"_s)
		}),
		$$new($ObjectArray, {
			$of("isj"_s),
			$of("veglia cruna islandaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("cruna islandaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("lira taliana"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("dollar giamaican"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("dinar jordanic"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("yen giapunais"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("schilling kenian"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("som kirgis"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("riel cambodschan"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("franc comorian"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("won da la Corea dal Nord"_s)
		}),
		$$new($ObjectArray, {
			$of("krh"_s),
			$of(u"hwan da la Corea dal Sid (1953–1962)"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"won da la Corea dal Sid (1945–1953)"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("won da la Corea dal Sid"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("dinar dal Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("dollar da las Inslas Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("tenge kasac"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("kip laot"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("glivra libanaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("rupia da la Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("dollar liberian"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("loti dal Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("litas lituan"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("talonas lituan"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of("franc convertibel luxemburgais"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("franc luxemburgais"_s)
		}),
		$$new($ObjectArray, {
			$of("lul"_s),
			$of("franc finanzial luxemburgais"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("lats letton"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("rubel letton"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinar libic"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("dirham marocan"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("franc marocan"_s)
		}),
		$$new($ObjectArray, {
			$of("mcf"_s),
			$of("franc monegass"_s)
		}),
		$$new($ObjectArray, {
			$of("mdc"_s),
			$of("cupon moldav"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("leu moldav"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariary madagasc"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("franc madagasc"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("dinar macedon"_s)
		}),
		$$new($ObjectArray, {
			$of("mkn"_s),
			$of(u"dinar macedon (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("mlf"_s),
			$of("franc dal Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("kyat dal Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("tugrik mongolic"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("pataca dal Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ouguiya da la Mauretania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("ouguiya da la Mauretania"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("lira maltaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("mtp"_s),
			$of("glivra maltaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("rupia dal Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("mvp"_s),
			$of(u"rupia da las Maledivas (1947–1981)"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("rufiyaa da las Maledivas"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha dal Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("peso mexican"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"peso d’argient mexican (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("unidad de inversion mexicana (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("ringgit malaisic"_s)
		}),
		$$new($ObjectArray, {
			$of("mze"_s),
			$of("escudo dal Mosambic"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"metical dal Mosambic (1980–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("metical dal Mosambic"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("dollar namibian"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naira nigeriana"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of("cordoba nicaraguan"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"córdoba nicaraguan"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("flurin ollandais"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("cruna norvegiaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("rupia nepalaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("dollar da la Nova Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"rial da l’Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("balboa dal Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pei"_s),
			$of("inti peruan"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("sol peruan"_s)
		}),
		$$new($ObjectArray, {
			$of("pes"_s),
			$of(u"sol peruan (1863–1965)"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("kina da la Papua Nova Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("peso filippin"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("rupia pakistana"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("zloty polac"_s)
		}),
		$$new($ObjectArray, {
			$of("plz"_s),
			$of(u"zloty polac (1950–1995)"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("escudo portugais"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("guarani paraguaian"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("rial da Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("rhd"_s),
			$of("dollar rodesian"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"leu rumen (1952–2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("leu rumen"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("dinar serb"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rubel russ"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of("rubel russ (vegl)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("franc ruandais"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("riyal saudit"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("dollar da las Inslas da Salomon"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("rupia da las Seychellas"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"dinar sudanais (1992–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("glivra sudanaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"glivra sudanaisa (1957–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("cruna svedaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("dollar dal Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"glivra da Sontg’Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("tolar sloven"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("cruna slovaca"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("leone da la Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("schilling somalian"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("dollar surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("flurin surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("glivra sidsudanaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra da São Tomé e Principe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"dobra da São Tomé e Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("rubel sovietic"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"colon da l’El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("glivra siriana"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni dal Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("baht tailandais"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("rubel tadschic"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("somoni tadschic"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"manat turkmen (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("manat turkmen"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinar tunesian"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"paʻanga da Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("escudo dal Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"lira tirca (1922–2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("lira tirca"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("dollar da Trinidad e Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("nov dollar taiwanais"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("schilling tansanian"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("hryvnia ucranaisa"_s)
		}),
		$$new($ObjectArray, {
			$of("uak"_s),
			$of("karbovanets ucranais"_s)
		}),
		$$new($ObjectArray, {
			$of("ugs"_s),
			$of(u"schilling ugandais (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("schilling ugandais"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"dollar da l’USA"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"dollar dals Stadis Unids da l’America (proxim di)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"dollar dals Stadis Unids da l’America (medem di)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of(u"peso da l’Uruguay (unidades indexadas)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"nov peso da l’Uruguay (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"peso da l’Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("som usbec"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"bolivar venezuelan (1871–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"bolivar venezuelan (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"bolívar venezuelan"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("dong vietnamais"_s)
		}),
		$$new($ObjectArray, {
			$of("vnn"_s),
			$of(u"dong vietnamais (1978–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu dal Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("tala da la Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"franc CFA da l’Africa Centrala"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("argient"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("aur"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("unitad europeica cumponida"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("unitad dal quint europeica (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("unitad dal quint europeica (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("dollar da la Caribica Orientala"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("dretgs da prelevaziun spezials"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"franc d’aur franzos"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("franc UIC franzos"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"franc CFA da l’Africa dal Vest"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("palladi"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("franc CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("platin"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("fonds RINET"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("code per verifitgar la valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("valuta nunenconuschenta"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("dinar jemenit"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("rial jemenit"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of(u"dinar jugoslav dir (1966–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"nov dinar jugoslav (1994–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of(u"dinar jugoslav convertibel (1990–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("yur"_s),
			$of(u"dinar jugoslav refurmà (1992–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of("rand sidafrican (finanzial)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("rand sidafrican"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"kwacha da la Sambia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha da la sambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of(u"nov zaire dal Zaire (1993–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of("zaire dal Zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"dollar dal Simbabwe (1980–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of("dollar dal Simbabwe (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of("dollar dal Simbabwe (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_rm::CurrencyNames_rm() {
}

$Class* CurrencyNames_rm::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_rm, name, initialize, &_CurrencyNames_rm_ClassInfo_, allocate$CurrencyNames_rm);
	return class$;
}

$Class* CurrencyNames_rm::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun