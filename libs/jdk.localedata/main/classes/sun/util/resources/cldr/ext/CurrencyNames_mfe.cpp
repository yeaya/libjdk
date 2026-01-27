#include <sun/util/resources/cldr/ext/CurrencyNames_mfe.h>

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

$MethodInfo _CurrencyNames_mfe_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mfe, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mfe, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_mfe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mfe",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mfe_MethodInfo_
};

$Object* allocate$CurrencyNames_mfe($Class* clazz) {
	return $of($alloc(CurrencyNames_mfe));
}

void CurrencyNames_mfe::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mfe::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MUR"_s),
			$of("Rs"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("dirham Emira arab ini"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwanza angole"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("dolar ostralien"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"dinar bahreïn"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("fran burunde"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula ya botswane"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("dolar kanadien"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("fran kongole"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("fran swis"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("yuan renminbi sinwa"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("eskudo kapverdien"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("fran djiboutien"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("dinar alzerien"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("liv ezipsien"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nafka erythreen"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("birr etiopien"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("liv sterlin"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("sedi ganeen"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi gambien"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("fran gineen"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("roupi"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("yen zapone"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("shiling kenyan"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("fran komorien"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("dolar liberien"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("loti lezoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinar libien"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("dirham marokin"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("fran malgas"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ouguiya moritanien (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("ouguiya moritanien"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("roupi morisien"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha malawit"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("metikal mozanbikin"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("dolar namibien"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naira nizerian"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("fran rwande"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("rial saoudien"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("roupi seselwa"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("dinar soudane"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("liv soudane"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"liv Sainte-Hélène"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("leonn Sierra-Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("shilingi somalien"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra santomeen (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("dobra santomeen"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinar tinizien"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("shiling tanzanien"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("shiling ougande"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("dolar amerikin"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("fran CFA (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("fran CFA (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("rand sid-afrikin"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"kwacha zanbien (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha zanbien"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("dolar zimbawe"_s)
		})
	}));
	return data;
}

CurrencyNames_mfe::CurrencyNames_mfe() {
}

$Class* CurrencyNames_mfe::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mfe, name, initialize, &_CurrencyNames_mfe_ClassInfo_, allocate$CurrencyNames_mfe);
	return class$;
}

$Class* CurrencyNames_mfe::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun