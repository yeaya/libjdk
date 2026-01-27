#include <sun/util/resources/cldr/ext/CurrencyNames_ceb.h>

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

$MethodInfo _CurrencyNames_ceb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ceb, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ceb, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ceb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ceb",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ceb_MethodInfo_
};

$Object* allocate$CurrencyNames_ceb($Class* clazz) {
	return $of($alloc(CurrencyNames_ceb));
}

void CurrencyNames_ceb::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ceb::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("US $"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("United Arab Emirates Dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afghan Afghani"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("Albanian Lek"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Armenian Dram"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Netherlands Antillean Guilder"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Angolan Kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Argentine Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Australian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Aruban Florin"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Azerbaijani Manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Bosnia-Herzegovina Convertible Mark"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Barbadian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Bangladeshi Taka"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("Bulgarian Lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Bahraini Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Burundian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Bermudan Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Brunei Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Bolivian Boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Brazilian Real"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Bahamian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Bhutanese Ngultrum"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Botswanan Pula"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Belarusian Ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("Belize Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Canadian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Congolese Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Swiss Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Chilean Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("Chinese Yuan (layo sa baybayon)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Chinese Yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Colombian Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Costa Rican Colon"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("Cuban Convertible Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Cuban Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Cape Verdean Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Czech Koruna"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Djiboutian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Danish Krone"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Dominican Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Algerian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Egyptian Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Eritrean Nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Ethiopian Birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("Fijian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Falkland Islands Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("British Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Georgian Lari"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Ghanaian Cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Gibraltar Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Gambian Dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("Guinean Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("Guatemalan Quetzal"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("Guyanaese Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("Hong Kong Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Honduran Lempira"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Croatian Kuna"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Haitian Gourde"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Hungarian Forint"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Indonesian Rupiah"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("Israeli New Shekel"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Indian Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Iraqi Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Iranian Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("Icelandic Krona"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("Jamaican Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Jordanian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Japanese Yen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Kenyan Shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Kyrgystani Som"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Cambodian Riel"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Comorian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("North Korean Won"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("South Korean Won"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Kuwaiti Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("Cayman Islands Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Kazakhstani Tenge"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Laotian Kip"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Lebanese Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Sri Lankan Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Liberian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Libyan Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Moroccan Dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("Moldovan Leu"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Malagasy Ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Macedonian Denar"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Myanmar Kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Mongolian Tugrik"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Macanese Pataca"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Mauritanian Ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Mauritian Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Maldivian Rufiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Malawian Kwacha"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Mexican Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Malaysian Ringgit"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mozambican Metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Namibian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Nigerian Naira"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of("Nicaraguan Cordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Norwegian Krone"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Nepalese Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("New Zealand Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Omani Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Panamanian Balboa"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Peruvian Sol"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("Papua New Guinean Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Philippine Piso"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Pakistani Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Polish Zloty"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Paraguayan Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Qatari Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Romanian Leu"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Serbian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Russian Ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Rwandan Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Saudi Riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Solomon Islands Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Seychellois Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Sudanese Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Swedish Krona"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Singapore Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("St. Helena Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Sierra Leonean Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Somali Shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("Surinamese Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("South Sudanese Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Sao Tome & Principe Dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of("Syrian Pound"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Swazi Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Thai Baht"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Tajikistani Somoni"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Turkmenistani Manat"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Tunisian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Tongan Paʻanga"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Turkish Lira"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Trinidad & Tobago Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("New Taiwan Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Tanzanian Shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Ukrainian Hryvnia"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Ugandan Shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("US Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Uruguayan Peso"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Uzbekistani Som"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("Venezuelan Bolivar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Vietnamese Dong"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vanuatu Vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Samoan Tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Central African CFA Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("East Caribbean Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("West African CFA Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("CFP Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Wala Nailhi nga Kwarta"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Yemeni Rial"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("South African Rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Zambian Kwacha"_s)
		})
	}));
	return data;
}

CurrencyNames_ceb::CurrencyNames_ceb() {
}

$Class* CurrencyNames_ceb::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ceb, name, initialize, &_CurrencyNames_ceb_ClassInfo_, allocate$CurrencyNames_ceb);
	return class$;
}

$Class* CurrencyNames_ceb::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun