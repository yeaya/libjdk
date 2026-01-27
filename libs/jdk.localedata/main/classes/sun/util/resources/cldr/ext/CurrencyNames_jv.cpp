#include <sun/util/resources/cldr/ext/CurrencyNames_jv.h>

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

$MethodInfo _CurrencyNames_jv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_jv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_jv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_jv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_jv",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_jv_MethodInfo_
};

$Object* allocate$CurrencyNames_jv($Class* clazz) {
	return $of($alloc(CurrencyNames_jv));
}

void CurrencyNames_jv::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_jv::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("IDR"_s),
			$of("Rp"_s)
		}),
		$$new($ObjectArray, {
			$of("MRO"_s),
			$of("MRO"_s)
		}),
		$$new($ObjectArray, {
			$of("VEF"_s),
			$of("VEF"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Dirham Uni Emirat Arab"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afghani Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Lek Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Dram Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Guilder Antilla Walanda"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwanza Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Peso Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Dolar Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Florin Aruban"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Manat Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Mark Konvertibel Bosnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Dolar Barbadian"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Taka Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Lev Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Bahrain Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Franc Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Dolar Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Dolar Brunai"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Boliviano Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Real Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Dolar Bahamian"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Ngultrum Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Ruble Belarusia"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("Dolar Belise"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Dolar Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Franc Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Franc Swiss"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Peso Chili"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("Yuan Tyongkok (Jaban Rangkah)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan Tyongkok"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Peso Kolumbia"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Colon Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("Peso Konvertibel Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Peso Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Escudo Tanjung Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Koruna Czech"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Franc Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Krone Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Peso Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinar Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Pound Mesir"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Birr Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Dolar Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Pound Kepuloan Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Pound Inggris"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Lari Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Cedi Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Pound Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Franc Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Quetzal Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Dolar Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Dolar Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Lempira Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kuna Kroasia"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Gourde Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Forint Hungaria"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Rupiah Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("Shekel Anyar Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupee India"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Dinar Irak"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Rial Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("Krona Islandia"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Dolar Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Dinar Yordania"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yen Jepang"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Shilling Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Som Kirgistan"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Riel Kamboja"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Franc Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("Won Korea Lor"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("Won Korea Kidul"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Dinar Kuwait"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("Dolar Kepuloan Caiman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Tenge Kasakhstan"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Kip Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Pound Libanon"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Rupee Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Dolar Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Dinar Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Dirham Maroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Leu Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariary Malagasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Denar Masedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Kyat Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Tugrik Mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Pataca Macau"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of("Ouguiya Mauritania (1973 - 2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ouguiya Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupee Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Rufiyaa Maladewa"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwacha Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Peso Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Ringgit Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Metical Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Dolar Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of("Cordoba Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Krone Norwegia"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Rupee Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("Dolar Selandia Anyar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Rial Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Balboa Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Sol Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Kina Papua Nugini"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Piso Filipina"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Rupee Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Zloty Polandia"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Guarani Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Rial Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Leu Rumania"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Dinar Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rubel Rusia"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Franc Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riyal Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Dolar Kepuloan Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupee Seichelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Pound Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Krona Swedia"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Dolar Singapura"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Pound Santa Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Shilling Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Dolar Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("Pound Sudan Kidul"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Dobra Sao Tome lan Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Pound Siria"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni Swasi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Baht Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Somoni Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Manat Turmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinar Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Paʻanga Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Lira Turki"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Dolar Trinidad lan Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("Dolar Anyar Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Shilling Tansania"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Hryvnia Ukrania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Shilling Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dolar Amerika Serikat"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Peso Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Som Usbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of("Bolivar Venezuela (2008 - 2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("Bolivar Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Dong Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vatu Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Tala Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("CFA Franc Afrika Tengah"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("Dolar Karibia Wetan"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("CFA Franc Afrika Kulon"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("Franc CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Dhuwit Ora Dikenali"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Rial Yaman"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rand Afrika Kidul"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwacha Sambia"_s)
		})
	}));
	return data;
}

CurrencyNames_jv::CurrencyNames_jv() {
}

$Class* CurrencyNames_jv::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_jv, name, initialize, &_CurrencyNames_jv_ClassInfo_, allocate$CurrencyNames_jv);
	return class$;
}

$Class* CurrencyNames_jv::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun