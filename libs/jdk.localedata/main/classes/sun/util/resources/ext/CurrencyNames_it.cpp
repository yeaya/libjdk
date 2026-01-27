#include <sun/util/resources/ext/CurrencyNames_it.h>

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

$MethodInfo _CurrencyNames_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_it, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_it, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_it_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_it",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_it_MethodInfo_
};

$Object* allocate$CurrencyNames_it($Class* clazz) {
	return $of($alloc(CurrencyNames_it));
}

void CurrencyNames_it::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_it::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("Peseta Andorrana"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Dirham degli Emirati Arabi Uniti"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of("Afgani (1927-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afgani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Lek Albanese"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Dram Armeno"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Fiorino delle Antille Olandesi"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwanza Angolano"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Peso Argentino"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of("Scellino Austriaco"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Dollaro Australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Fiorino di Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of("Manat Azero (1993-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("manat azero"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Marco Conv. Bosnia-Erzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Dollaro di Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Taka Bangladese"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Franco Belga"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of("Lev Bulgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Nuovo Lev Bulgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Dinaro del Bahraini"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Franco del Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Dollaro delle Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Dollaro del Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Mvdol Boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Real Brasiliano"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Dollaro delle Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Ngultrum Butanese"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula del Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of("Nuovo Rublo Bielorussia (1994-1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of("Rublo Bielorussia"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("Dollaro Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Dollaro Canadese"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Franco Congolese"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Franco Svizzero"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("Unidades de Fomento Chilene"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Peso Cileno"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Renmimbi Cinese"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Peso Colombiano"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Colón Costaricano"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Peso Cubano"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Escudo del Capo Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Sterlina Cipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Corona Ceca"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("Marco Tedesco"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Franco Gibutiano"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Corona Danese"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Peso Dominicano"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinaro Algerino"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"Corona dell’Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Sterlina Egiziana"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa Eritreo"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("Peseta Spagnola"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Birr Etiopico"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Markka Finlandese"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Dollaro delle Figi"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Sterlina delle Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("Franco Francese"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Sterlina Inglese"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Lari Georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Cedi del Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Cedi ghanese"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Sterlina di Gibilterra"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi del Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Franco della Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("Dracma Greca"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Quetzal Guatemalteco"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Peso della Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Dollaro della Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Dollaro di Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Lempira Hoduregno"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kuna Croata"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Gourde Haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Fiorino Ungherese"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Rupia Indonesiana"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("Sterlina irlandese"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("Nuovo sheqel israeliano"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupia Indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Dinaro Iracheno"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Rial Iraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("Corona Islandese"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("Lira Italiana"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Dollaro Giamaicano"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Dinaro Giordano"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yen Giapponese"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Scellino Keniota"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Som Kirghiso"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Riel Cambogiano"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Franco Comoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("Won Nordcoreano"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("Won Sudcoreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Dinaro Kuwaitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("Dollaro delle Isole Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Tenge Kazaco"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Kip Laotiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Sterlina Libanese"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Rupia di Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Dollaro Liberiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti del Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Lita Lituana"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of("Franco del Lussemburgo"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Lat Lettone"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Dinaro Libico"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Dirham Marocchino"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Leu Moldavo"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariary Malgascio"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Franco Malgascio"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Dinaro Macedone"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Kyat di Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Tugrik Mongolo"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Pataca di Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of("Ouguiya della Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("Lira Maltese"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupia Mauriziana"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Rufiyaa delle Maldive"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwacha Malawiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Peso Messicano"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("Unidad de Inversion (UDI) Messicana"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Ringgit della Malesia"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Metical del Mozambico"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Dollaro Namibiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira Nigeriana"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Córdoba oro nicaraguense"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("Fiorino Olandese"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Corona Norvegese"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Rupia Nepalese"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("Dollaro Neozelandese"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Rial Omanita"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Balboa di Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Sol Nuevo Peruviano"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Kina della Papua Nuova Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Peso delle Filippine"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Rupia del Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Zloty Polacco"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of("Escudo Portoghese"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Guarani del Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Rial del Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of("Leu della Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("leu rumeno"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Dinaro serbo"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rublo Russo"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of("Rublo della CSI"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Franco Ruandese"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Ryal Saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Dollaro delle Isole Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupia delle Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of("Dinaro Sudanese"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Sterlina sudanese"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Corona Svedese"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Dollaro di Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Sterlina di Sant’Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Tallero Sloveno"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("Corona Slovacca"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone della Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Scellino Somalo"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Dollaro surinamese"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Fiorino del Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra di Sao Tomé e Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"Colón Salvadoregno"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Sterlina Siriana"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni dello Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Baht Tailandese"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Somoni del Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of("Manat Turkmeno"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinaro Tunisino"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Paʻanga di Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("Escudo di Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of("lira turca (1922-2005)"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("lira turca"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Dollaro di Trinidad e Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("Nuovo dollaro taiwanese"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Scellino della Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Hrivna Ucraina"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Scellino Ugandese"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dollaro Statunitense"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of("Dollaro Statunitense (Next day)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of("Dollaro Statunitense (Same day)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Peso Uruguayo uruguaiano"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"Sum dell’Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of("Bolivar Venezuelano"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Bolívar venezuelano forte"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Dong Vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vatu di Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Tala della Samoa Occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Franco CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("Argento"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Oro"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Unità composita europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Unità monetaria europea"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"Unità di acconto europea (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"Unità di acconto europea (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("Dollaro dei Caraibi Orientali"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("Diritti Speciali di Incasso"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of("Franco Oro Francese"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of("Franco UIC Francese"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Franco CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Palladio"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("Franco CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Nessuna valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Rial dello Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("Dinaro Noviy Yugoslavo"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rand Sudafricano"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of("Kwacha dello Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Dollaro dello Zimbabwe"_s)
		})
	});
}

CurrencyNames_it::CurrencyNames_it() {
}

$Class* CurrencyNames_it::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_it, name, initialize, &_CurrencyNames_it_ClassInfo_, allocate$CurrencyNames_it);
	return class$;
}

$Class* CurrencyNames_it::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun