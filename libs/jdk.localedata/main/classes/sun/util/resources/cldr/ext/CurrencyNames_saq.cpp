#include <sun/util/resources/cldr/ext/CurrencyNames_saq.h>

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

$MethodInfo _CurrencyNames_saq_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_saq, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_saq, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_saq_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_saq",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_saq_MethodInfo_
};

$Object* allocate$CurrencyNames_saq($Class* clazz) {
	return $of($alloc(CurrencyNames_saq));
}

void CurrencyNames_saq::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_saq::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("KES"_s),
			$of("Ksh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Njilingi eel Falme za Kiarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Njilingi eel Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Njilingi eel Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Njilingi eel Bahareni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Njilingi eel Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Njilingi eel Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Njilingi eel Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Njilingi eel Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Njilingi eel Uswisi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Njilingi eel China"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Njilingi eel Kepuvede"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Njilingi eel Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Njilingi eel Aljeria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Njilingi eel Misri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Njilingi eel Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Njilingi eel Uhabeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Njilingi eel Uingereza"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Njilingi eel Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Njilingi eel Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Njilingi eel Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Njilingi eel India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Njilingi eel Kijapani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Njilingi eel Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Njilingi eel Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Dola eel Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Njilingi eel Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Njilingi eel Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Njilingi eel Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Njilingi eel Bukini"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Njilingi eel Moritania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Njilingi eel Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Njilingi eel Morisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Njilingi eel Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Njilingi eel Msumbiji"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Njilingi eel Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Njilingi eel Nijeria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Njilingi eel Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Njilingi eel Saudia"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Njilingi eel Shelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Paunt eel Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Paunt eel Santahelena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leoni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Njilingi eel Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Njilingi eel Sao Tome na Principe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Njilingi eel Sao Tome na Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Njilingi eel Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Njilingi eel Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Njilingi eel Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dola eel Marekani"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Njilingi eel CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Njilingi eel CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Njilingi eel Afrika Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Njilingi eel Zambia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Njilingi eel Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Dola eel Zimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_saq::CurrencyNames_saq() {
}

$Class* CurrencyNames_saq::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_saq, name, initialize, &_CurrencyNames_saq_ClassInfo_, allocate$CurrencyNames_saq);
	return class$;
}

$Class* CurrencyNames_saq::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun