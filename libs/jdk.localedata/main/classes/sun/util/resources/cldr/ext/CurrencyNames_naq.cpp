#include <sun/util/resources/cldr/ext/CurrencyNames_naq.h>

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

$MethodInfo _CurrencyNames_naq_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_naq, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_naq, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_naq_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_naq",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_naq_MethodInfo_
};

$Object* allocate$CurrencyNames_naq($Class* clazz) {
	return $of($alloc(CurrencyNames_naq));
}

void CurrencyNames_naq::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_naq::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NAD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("United Arab Emirates Dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Angolan Kwanzab"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Australian Dollari"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Bahrain Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Burundi Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Botswanan Pulab"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Canadian Dollari"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Congolese Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Swiss Franci"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Chinese Yuan Renminbi"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Escudo Caboverdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Djibouti Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Algerian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Egytian Ponds"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Eritreian Nakfa"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Ethiopian Birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Eurob"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("British Ponds"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Ghana Cedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Gambia Dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Guinea Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Indian Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Japanese Yenni"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Kenyan Shilling"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Comorian Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Liberian Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lesotho Loti"_s)
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
			$of("mga"_s),
			$of("Malagasy Franc"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Mauritania Ouguiya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Mauritania Ouguiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Mauritius Rupeeb"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Malawian Kwachab"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Mozambique Metical"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Namibia Dollari"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Nigerian Naira"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Rwanda Franci"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Saudi Riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Seychelles Rupee"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Sudanese Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("Sudanese Ponds"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("St Helena Ponds"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Somali Shillings"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Sao Tome and Principe Dobra (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Sao Tome and Principe Dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Tunisian Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Tanzanian Shillings"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Ugandan Shillings"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("US Dollari"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("CFA Franc BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("CFA Franc BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("South African Randi"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambian Kwachab (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Zambian Kwachab"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Zimbabwe Dollari"_s)
		})
	}));
	return data;
}

CurrencyNames_naq::CurrencyNames_naq() {
}

$Class* CurrencyNames_naq::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_naq, name, initialize, &_CurrencyNames_naq_ClassInfo_, allocate$CurrencyNames_naq);
	return class$;
}

$Class* CurrencyNames_naq::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun