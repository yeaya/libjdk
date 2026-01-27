#include <sun/util/resources/cldr/ext/CurrencyNames_mua.h>

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

$MethodInfo _CurrencyNames_mua_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mua, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mua, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_mua_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mua",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mua_MethodInfo_
};

$Object* allocate$CurrencyNames_mua($Class* clazz) {
	return $of($alloc(CurrencyNames_mua));
}

void CurrencyNames_mua::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mua::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Solai Arabiya"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("solai Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("solai Australya"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("solai Barenya"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("solai Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("solai Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("solai Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("solai Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Solai Swiss"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"solai Syiŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("solai Kapverdiya"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("solai Djibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("solai Algerya"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("solai Egypt"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("solai Eritre"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("solai Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("solai Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("solai Britaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("solai Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("solai Gambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("solai Guine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("solai India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"solai Japoŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("solai Kenia"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("solai Komorya"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("solai Liberiya"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("solai Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("solai Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Solai Marok"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Solai Malagasya"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Solai Mauritaniya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Solai Mauritaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Solai Mauricǝ"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Solai Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Solai Mozambika"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Solai Namibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Solai Nigeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Solai Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Solai Saudiya"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Solai Saichel"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Solai Sudaŋ ma dii ne dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Solai Sudaŋ ma dii ne livre"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Solai Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"solai Sierra leonǝ"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Solai Somaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Solai Sao Tome (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Solai Sao Tome"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("solai Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Solai Tunisiya"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Solai Tanzaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Solai Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Solai Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("solai BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("solai BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Solai Africa nekǝsǝŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Solai Zambiya (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Solai Zambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Solai Zimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_mua::CurrencyNames_mua() {
}

$Class* CurrencyNames_mua::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mua, name, initialize, &_CurrencyNames_mua_ClassInfo_, allocate$CurrencyNames_mua);
	return class$;
}

$Class* CurrencyNames_mua::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun