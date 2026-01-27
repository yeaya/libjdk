#include <sun/util/resources/cldr/ext/CurrencyNames_so.h>

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

$MethodInfo _CurrencyNames_so_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_so, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_so, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_so_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_so",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_so_MethodInfo_
};

$Object* allocate$CurrencyNames_so($Class* clazz) {
	return $of($alloc(CurrencyNames_so));
}

void CurrencyNames_so::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_so::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BBD"_s),
			$of("DBB"_s)
		}),
		$$new($ObjectArray, {
			$of("MRO"_s),
			$of("MRO"_s)
		}),
		$$new($ObjectArray, {
			$of("SOS"_s),
			$of("S"_s)
		}),
		$$new($ObjectArray, {
			$of("VEF"_s),
			$of("VEF"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Dirhamka Isutaga Imaaraatka Carabta"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afgan Afgani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Lekta Albaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Daraamka Armeniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Galdarka Nadarlaan Antiliyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kawansada Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("Argentine Austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arl"_s),
			$of(u"Beesada Ley ee Arjentiin (1970–1983)"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"Beesada Ley ee Arjentiin (1881–1970)"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"Beesada Ley ee Arjentiin (1883–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Beesada Arjentiin"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Doolarka Astaraaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Foloorinta Aruban"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Manaata Asarbeyjan"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Diinaarka BBosnia-Hersogofina 1.00 konfatibal maakta Bosnia-Hersogofina 1 konfatibal maaka Bosnia-Hersogofina (1992–1994)"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Konfatibal Maakta Bosnia-Hersogofina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Doolarka Barbaadiyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Taka Bangledesh"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Lefta Bulgariya"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Dinaarka Baxreyn"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Faranka Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Doolarka Barmuuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Doolarka Buruney"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Bolifiyanada Bolifiya"_s)
		}),
		$$new($ObjectArray, {
			$of("bol"_s),
			$of(u"Bolifiyaabka Bolifiyaano(1863–1963)"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Realka Barasil"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Doolarka Bahamaas"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Nugultaramta Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Buulada Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Rubalka Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("Doolarka Beelisa"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Doolarka Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Faranka Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Faranka Iswiska"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Beesada Jili"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("Yuwanta Shiinaha (Ofshoor)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuwanta Shiinaha"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Beesada Kolombiya"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Kolonka Kosta Riika"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("Beesada Konfatibal ee Kuuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Beesada Kuuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Eskudo Keyb Farde"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Korunada Jeek"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Faran Jabuuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Koronka Danishka"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Beesada Dominiika"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinaarka Aljeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Kroonka Estooniya"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Bowndka Masar"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfada Eritriya"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Birta Itoobbiya"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Yuuroo"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Markkada Fiinishka ah"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Doolarka Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Bowndka Faalklaan Aylaanis"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Bowndka Biritishka"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Laariga Joorjiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Sedida Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Bowndka Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasida Gambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Faranka Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Kuwestalka Guwatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Doolarka Guyanes"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Doolarka Hoon Koon"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Lembirada Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kunada Korooshiya"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Goordada Hiyati"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Forintiska Hangari"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Rubiah Indonesiya"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("baawnka Ayrishka"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("Niyuu Shekelka Israaiil"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rubiga Hindiya"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Dinaarka Ciraaq"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Riyaalka Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("Koronada Eysland"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Doolarka Jamayka"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Dinaarka Urdun"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yenta Jabaan"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Shilingka Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Somta Kiyrgiystan"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Riyf kambodiya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Faranka Komoros"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("Wonka Waqooyiga Kuuriya"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("Wonka Koonfur Kuuriya"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Dinaarka Kuweyt"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("Doolarka Kayman Aylaanis"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Tengeda Kasakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Kib Laoti"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Bowndka Lubnaan"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Rubiga Siri lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Doolarka Liberiya"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Rubalka Latfiya"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Dinaarka Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Dirhamka Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Leeyuuda Moldofa"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Arayrida Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Denaarka Masedoniya"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Kayatda Mayanmaar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Tugrikta Mongoliya"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Bataka Makana"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Oogiya Mawritaniya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Oogiyada Mawritaaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rubiga Mowrishiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Rufiyada Maldifiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kawajada Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Beesada Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Ringitda Malayshiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Metikalka Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Doolarka Namibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Nairada Neyjeeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of("Kordobada Nikargow"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Koronka Norway"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Rubiga Nebal"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("Doolarka Niyuu Siyalaan"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Riyaalka Cumaan"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Balbow Banama"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Solsha Beeru"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Kinada Babua Niyuu Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Biso Filibin"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Rubiga Bakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Solotida Bolaan"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Guranida Baraguway"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Riyaalka Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Liyuuda Romaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Dinaarka Serbiya"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rubalka Ruushka"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Faranka Ruwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riyaalka Sacuudiga"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Doolarka Solomon Aylaanis"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rubiga Siisalis"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Bowndka Suudaan"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Koronka Isweden"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Doolarka Singabuur"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Bowndka St Helen"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leonka Sira Leon"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Shilingka Soomaaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Doolarka Surinamees"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("Bowndka Koonfurta Suudaan"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Dobra Sao Tome & Birinsibi"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Bowndka Suuriya"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeenida iswaasi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Baatka Taylaan"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Somoonida Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Manaata Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinaarka Tunisiya"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Ba’angada Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Liirada Turkiga"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Doolarka Tirinidad iyo Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("Doolarka Taywaanta Cusub"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Shilingka Tansaaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Hirfiniyada Yukreeyn"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Shilingka Yugandha"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Doolarka Mareeykanka"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Beesada Urugway"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Somta Usbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Bolifar Fenesuala (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("Bolifarada Fenesuwela"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Dongta Fitnaam"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Fatu Fanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Tala Samao"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Faranka CFA ee Bartamaha Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("Doolarka Iist Kaaribyan"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Faranka CFA Galbeedka Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("Faranka CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Lacag aan la aqoon"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Riyaalka Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Randka Koonfur Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kawajada Sambiya"_s)
		})
	}));
	return data;
}

CurrencyNames_so::CurrencyNames_so() {
}

$Class* CurrencyNames_so::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_so, name, initialize, &_CurrencyNames_so_ClassInfo_, allocate$CurrencyNames_so);
	return class$;
}

$Class* CurrencyNames_so::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun