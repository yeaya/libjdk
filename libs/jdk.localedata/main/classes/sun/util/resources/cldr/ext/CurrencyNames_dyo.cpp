#include <sun/util/resources/cldr/ext/CurrencyNames_dyo.h>
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

void CurrencyNames_dyo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_dyo::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"aoa"_s,
			"kwanza yati Angola"_s
		}),
		$$new($ObjectArray, {
			"aud"_s,
			"dolaar yati Ostraalia"_s
		}),
		$$new($ObjectArray, {
			"bhd"_s,
			"dinaar yati Bahrayn"_s
		}),
		$$new($ObjectArray, {
			"bif"_s,
			u"fraaŋ yati Burundi"_s
		}),
		$$new($ObjectArray, {
			"bwp"_s,
			"pula yati Boswana"_s
		}),
		$$new($ObjectArray, {
			"cad"_s,
			"dolaar yati Kanada"_s
		}),
		$$new($ObjectArray, {
			"cdf"_s,
			u"fraaŋ yati Kongo"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			"yuan yati Siin"_s
		}),
		$$new($ObjectArray, {
			"cve"_s,
			"eskuudo yati Kap Ver"_s
		}),
		$$new($ObjectArray, {
			"djf"_s,
			u"fraaŋ yati Jibuti"_s
		}),
		$$new($ObjectArray, {
			"dzd"_s,
			"dinaar yati Alseri"_s
		}),
		$$new($ObjectArray, {
			"egp"_s,
			u"liiverey yati Esípt"_s
		}),
		$$new($ObjectArray, {
			"ern"_s,
			"nafka yati Eritree"_s
		}),
		$$new($ObjectArray, {
			"etb"_s,
			"birr yati Ecoopi"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			"euro"_s
		}),
		$$new($ObjectArray, {
			"ghc"_s,
			"cedi yati Gaana"_s
		}),
		$$new($ObjectArray, {
			"gmd"_s,
			"dalasi yati Gambi"_s
		}),
		$$new($ObjectArray, {
			"gns"_s,
			u"sili yati Giné"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			"rupii yati End"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"yen yati Sapoŋ"_s
		}),
		$$new($ObjectArray, {
			"kes"_s,
			u"silliŋ yati Keniya"_s
		}),
		$$new($ObjectArray, {
			"kmf"_s,
			u"fraaŋ yati Komor"_s
		}),
		$$new($ObjectArray, {
			"lrd"_s,
			"dolaar yati Liberia"_s
		}),
		$$new($ObjectArray, {
			"lyd"_s,
			"dinaar yati Libia"_s
		}),
		$$new($ObjectArray, {
			"mga"_s,
			"ariari yati Madagaskaar"_s
		}),
		$$new($ObjectArray, {
			"mro"_s,
			u"ugiiya yati Mooritanii (1973–2017)"_s
		}),
		$$new($ObjectArray, {
			"mru"_s,
			"ugiiya yati Mooritanii"_s
		}),
		$$new($ObjectArray, {
			"mwk"_s,
			"kwacha yati Malawi"_s
		}),
		$$new($ObjectArray, {
			"xaf"_s,
			"seefa BEAC"_s
		}),
		$$new($ObjectArray, {
			"xof"_s,
			"seefa yati BCEAO"_s
		})
	}));
	return data;
}

CurrencyNames_dyo::CurrencyNames_dyo() {
}

$Class* CurrencyNames_dyo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_dyo, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_dyo, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_dyo",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_dyo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_dyo);
	});
	return class$;
}

$Class* CurrencyNames_dyo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun