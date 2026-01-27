#include <sun/util/resources/cldr/ext/CurrencyNames_fr_CA.h>

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

$MethodInfo _CurrencyNames_fr_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_CA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_CA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_CA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_CA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_CA_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_CA($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_CA));
}

void CurrencyNames_fr_CA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_CA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ARS"_s),
			$of("ARS"_s)
		}),
		$$new($ObjectArray, {
			$of("AUD"_s),
			$of(u"$ AU"_s)
		}),
		$$new($ObjectArray, {
			$of("BMD"_s),
			$of("BMD"_s)
		}),
		$$new($ObjectArray, {
			$of("BND"_s),
			$of("BND"_s)
		}),
		$$new($ObjectArray, {
			$of("BZD"_s),
			$of("BZD"_s)
		}),
		$$new($ObjectArray, {
			$of("CAD"_s),
			$of(u"$ CA"_s)
		}),
		$$new($ObjectArray, {
			$of("CLP"_s),
			$of("CLP"_s)
		}),
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of(u"CN¥"_s)
		}),
		$$new($ObjectArray, {
			$of("COP"_s),
			$of("COP"_s)
		}),
		$$new($ObjectArray, {
			$of("FJD"_s),
			$of("FJD"_s)
		}),
		$$new($ObjectArray, {
			$of("FKP"_s),
			$of("FKP"_s)
		}),
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of(u"£"_s)
		}),
		$$new($ObjectArray, {
			$of("GIP"_s),
			$of("GIP"_s)
		}),
		$$new($ObjectArray, {
			$of("HKD"_s),
			$of(u"$ HK"_s)
		}),
		$$new($ObjectArray, {
			$of("ILS"_s),
			$of("ILS"_s)
		}),
		$$new($ObjectArray, {
			$of("INR"_s),
			$of("INR"_s)
		}),
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"¥"_s)
		}),
		$$new($ObjectArray, {
			$of("KRW"_s),
			$of("KRW"_s)
		}),
		$$new($ObjectArray, {
			$of("LBP"_s),
			$of("LBP"_s)
		}),
		$$new($ObjectArray, {
			$of("MXN"_s),
			$of("MXN"_s)
		}),
		$$new($ObjectArray, {
			$of("NAD"_s),
			$of("NAD"_s)
		}),
		$$new($ObjectArray, {
			$of("NZD"_s),
			$of(u"$ NZ"_s)
		}),
		$$new($ObjectArray, {
			$of("SBD"_s),
			$of("SBD"_s)
		}),
		$$new($ObjectArray, {
			$of("SGD"_s),
			$of(u"$ SG"_s)
		}),
		$$new($ObjectArray, {
			$of("SRD"_s),
			$of("SRD"_s)
		}),
		$$new($ObjectArray, {
			$of("TTD"_s),
			$of("TTD"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of(u"$ US"_s)
		}),
		$$new($ObjectArray, {
			$of("UYU"_s),
			$of("UYU"_s)
		}),
		$$new($ObjectArray, {
			$of("VND"_s),
			$of("VND"_s)
		}),
		$$new($ObjectArray, {
			$of("WST"_s),
			$of("WST"_s)
		}),
		$$new($ObjectArray, {
			$of("XAF"_s),
			$of("XAF"_s)
		}),
		$$new($ObjectArray, {
			$of("XOF"_s),
			$of("XOF"_s)
		}),
		$$new($ObjectArray, {
			$of("XPF"_s),
			$of("XPF"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"manat azerbaïdjanais"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("escudo cap-verdien"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("rial iranien"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("kip laotien"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("rial omanais"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"nouveau sol péruvien"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"kina papou-néo-guinéen"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("riyal du Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("rial saoudien"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("dollar du Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"pa’anga"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("tala"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Devise inconnue"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"rial yéménite"_s)
		})
	}));
	return data;
}

CurrencyNames_fr_CA::CurrencyNames_fr_CA() {
}

$Class* CurrencyNames_fr_CA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_CA, name, initialize, &_CurrencyNames_fr_CA_ClassInfo_, allocate$CurrencyNames_fr_CA);
	return class$;
}

$Class* CurrencyNames_fr_CA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun