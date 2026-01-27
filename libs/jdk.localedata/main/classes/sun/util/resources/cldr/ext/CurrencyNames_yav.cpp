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

$MethodInfo _CurrencyNames_yav_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_yav, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_yav, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_yav_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_yav",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_yav_MethodInfo_
};

$Object* allocate$CurrencyNames_yav($Class* clazz) {
	return $of($alloc(CurrencyNames_yav));
}

void CurrencyNames_yav::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_yav::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"kuansa wu angolá"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"toláal wu ostalalí"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"tináal wu paaléen"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"faláŋɛ u pulundí"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"pula pu posuána"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"toláal u kanáta"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"́faláŋɛ u kongó"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"yuan ɛlɛnmimbí"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"ɛskúdo u kápfɛ́ɛl"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"́faláŋɛ u síputí"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"tináal wu alselí"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"lífilɛ wu isípit"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"náfka wu elitilée"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"píil wu etiopí"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"olóo"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"lífilɛ sitelelíiŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"setí"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"talasí u kaambí"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"silí u kiiné"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"ulupí"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"yɛ́ɛn u sapɔ́ɔŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"síliŋ u kénia"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"́faláŋɛ u kɔmɔ́ɔl"_s)
		})
	}));
	return data;
}

CurrencyNames_yav::CurrencyNames_yav() {
}

$Class* CurrencyNames_yav::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_yav, name, initialize, &_CurrencyNames_yav_ClassInfo_, allocate$CurrencyNames_yav);
	return class$;
}

$Class* CurrencyNames_yav::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun