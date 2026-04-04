#include <sun/util/resources/cldr/ext/CurrencyNames_yav.h>
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

void CurrencyNames_yav::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_yav::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"aoa"_s,
			u"kuansa wu angolá"_s
		}),
		$$new($ObjectArray, {
			"aud"_s,
			u"toláal wu ostalalí"_s
		}),
		$$new($ObjectArray, {
			"bhd"_s,
			u"tináal wu paaléen"_s
		}),
		$$new($ObjectArray, {
			"bif"_s,
			u"faláŋɛ u pulundí"_s
		}),
		$$new($ObjectArray, {
			"bwp"_s,
			u"pula pu posuána"_s
		}),
		$$new($ObjectArray, {
			"cad"_s,
			u"toláal u kanáta"_s
		}),
		$$new($ObjectArray, {
			"cdf"_s,
			u"́faláŋɛ u kongó"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			u"yuan ɛlɛnmimbí"_s
		}),
		$$new($ObjectArray, {
			"cve"_s,
			u"ɛskúdo u kápfɛ́ɛl"_s
		}),
		$$new($ObjectArray, {
			"djf"_s,
			u"́faláŋɛ u síputí"_s
		}),
		$$new($ObjectArray, {
			"dzd"_s,
			u"tináal wu alselí"_s
		}),
		$$new($ObjectArray, {
			"egp"_s,
			u"lífilɛ wu isípit"_s
		}),
		$$new($ObjectArray, {
			"ern"_s,
			u"náfka wu elitilée"_s
		}),
		$$new($ObjectArray, {
			"etb"_s,
			u"píil wu etiopí"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"olóo"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"lífilɛ sitelelíiŋ"_s
		}),
		$$new($ObjectArray, {
			"ghc"_s,
			u"setí"_s
		}),
		$$new($ObjectArray, {
			"gmd"_s,
			u"talasí u kaambí"_s
		}),
		$$new($ObjectArray, {
			"gns"_s,
			u"silí u kiiné"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"ulupí"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"yɛ́ɛn u sapɔ́ɔŋ"_s
		}),
		$$new($ObjectArray, {
			"kes"_s,
			u"síliŋ u kénia"_s
		}),
		$$new($ObjectArray, {
			"kmf"_s,
			u"́faláŋɛ u kɔmɔ́ɔl"_s
		})
	}));
	return data;
}

CurrencyNames_yav::CurrencyNames_yav() {
}

$Class* CurrencyNames_yav::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_yav, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_yav, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_yav",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_yav, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_yav);
	});
	return class$;
}

$Class* CurrencyNames_yav::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun