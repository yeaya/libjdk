#include <sun/util/resources/cldr/ext/CurrencyNames_ig.h>

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

$MethodInfo _CurrencyNames_ig_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ig, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ig, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ig_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ig",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ig_MethodInfo_
};

$Object* allocate$CurrencyNames_ig($Class* clazz) {
	return $of($alloc(CurrencyNames_ig));
}

void CurrencyNames_ig::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ig::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"¥"_s)
		}),
		$$new($ObjectArray, {
			$of("NGN"_s),
			$of(u"₦"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Ego Dirham obodo United Arab Emirates"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Ego Afghani Obodo Afghanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Ego Lek Obodo Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Ego Dram obodo Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Ego Antillean Guilder obodo Netherlands"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Ego Kwanza obodo Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Ego Peso obodo Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Ego Dollar obodo Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Ego Florin obodo Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Ego Manat obodo Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Akara mgbanwe ego obodo Bosnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Ego Dollar obodo Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Ego Taka obodo Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Ego Lev mba Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Ego Dinar Obodo Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Ego Franc obodo Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Dollar Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Ego Dollar obodo Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Ego Boliviano obodo Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Real Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Ego Dollar Obodo Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Ego Ngultrum obodo Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Ego Pula obodo Bostwana"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Ego Ruble mba Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("Dollar Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Dollar Canada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Ego Franc obodo Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Ego Franc mba Switzerland"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Ego Peso obodo Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Ego Yuan Obodo China (ndị bi na mmiri)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan China"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Ego Peso obodo Columbia"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Ego Colón obodo Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Ego Peso e nwere ike ịgbanwe nke obodo Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Ego Peso obodo Cuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Escudo Caboverdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Ego Koruna obodo Czech"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Ego Franc obodo Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Ego Krone Obodo Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Ego Peso Obodo Dominica"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Ego Dinar Obodo Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Ego Pound obodo Egypt"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Ego Nakfa obodo Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Ego Birr obodo Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Ego Dollar obodo Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Ego Pound obodo Falkland Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Pound British"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Ego Lari Obodo Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Ego Cedi obodo Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Ego Pound obodo Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Ego Dalasi obodo Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Ego Franc obodo Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Ego Quetzal obodo Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Ego Dollar obodo Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Ego Dollar Obodo Honk Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Ego Lempira obodo Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Ego Kuna obodo Croatia"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Ego Gourde obodo Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Ego Forint obodo Hungary"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Ego Rupiah Obodo Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Ego Shekel ọhụrụ obodo Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupee India"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Ego Dinar obodo Iraq"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Ego Rial obodo Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Ego Króna obodo Iceland"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Ego Dollar obodo Jamaica"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Ego Dinar Obodo Jordan"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yen Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Ego Shilling obodo Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Ego Som Obodo Kyrgyzstan"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Ego Riel obodo Cambodia"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Ego Franc obodo Comoros"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("Ego Won Obodo North Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("Ego Won Obodo South Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Ego Dinar Obodo Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("Ego Dollar obodo Cayman Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Ego Tenge obodo Kazakhstani"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Ego Kip Obodo Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Ego Pound obodo Lebanon"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Ego Rupee obodo Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Ego Dollar obodo Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Ego Dinar obodo Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Ego Dirham obodo Morocco"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Ego Leu obodo Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ego Ariary obodo Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Ego Denar Obodo Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Ego Kyat obodo Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Ego Turgik Obodo Mongolia"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"Ego Pataca ndị Obodo Macanese"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ego Ouguiya Obodo Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Ego Rupee obodo Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Ego Rufiyaa obodo Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Ego Kwacha obodo Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Ego Peso obodo Mexico"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Ego Ringgit obodo Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Ego Metical obodo Mozambique"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Ego Dollar obodo Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Naịra"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Ego Córodoba obodo Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Ego Krone Obodo Norway"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Ego Rupee obodo Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("Ego Dollar obodo New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Ego Rial obodo Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Ego Balboa obodo Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Ego Sol obodo Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Ego Kina obodo Papua New Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Ego piso obodo Philippine"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Ego Rupee obodo Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Ego Zloty mba Poland"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Ego Guarani obodo Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Ego Rial obodo Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Ego Leu obodo Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Ego Dinar obodo Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Ruble Russia"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Ego Franc obodo Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Ego Riyal obodo Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Ego Dollar obodo Solomon Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Ego Rupee obodo Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Ego Pound obodo Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Ego Krona Obodo Sweden"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Ego Dollar obodo Singapore"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Ego Pound obodo St Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Ego Leone obodo Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Ego shilling obodo Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Dollar Surinamese"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("Ego Pound obodo South Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Ego Dobra nke obodo Sāo Tomé na Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Ego Pound obodo Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Ego Lilangeni obodo Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Ego Baht obodo Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Who Somoni obodo Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Ego Manat Obodo Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Ego Dinar Obodo Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Ego paʻanga obodo Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Ego Lira obodo Turkey"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Dollar Trinidad & Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("Dollar obodo New Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Ego Shilling Obodo Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Ego Hryvnia obodo Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Ego Shilling obodo Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dollar US"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Ego Peso obodo Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Ego Som obodo Uzbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("Ego Bolivar obodo Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Ego Dong obodo Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Ego Vatu obodo Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Ego Tala obodo Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Ego Franc mba etiti Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("Ego Dollar obodo East Carribbean"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Ego CFA Franc obodo West Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("Ego Franc obodo CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Ego Amaghị"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Ego Rial obodo Yemeni"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Ego Rand obodo South Africa"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Ego Kwacha Obodo Zambia"_s)
		})
	}));
	return data;
}

CurrencyNames_ig::CurrencyNames_ig() {
}

$Class* CurrencyNames_ig::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ig, name, initialize, &_CurrencyNames_ig_ClassInfo_, allocate$CurrencyNames_ig);
	return class$;
}

$Class* CurrencyNames_ig::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun