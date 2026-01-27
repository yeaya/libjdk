#include <sun/util/resources/cldr/ext/CurrencyNames_doi.h>

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

$MethodInfo _CurrencyNames_doi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_doi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_doi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_doi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_doi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_doi_MethodInfo_
};

$Object* allocate$CurrencyNames_doi($Class* clazz) {
	return $of($alloc(CurrencyNames_doi));
}

void CurrencyNames_doi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_doi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"¥"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"ब्राजीली रियाल"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"चीनी युआन"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"यूरो"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"ब्रिटिश पाउंड"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"भारती रपेऽ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"जापानी येन"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"रूसी रूबल"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"यूएस डालर"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"अनजांती करंसी"_s)
		})
	}));
	return data;
}

CurrencyNames_doi::CurrencyNames_doi() {
}

$Class* CurrencyNames_doi::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_doi, name, initialize, &_CurrencyNames_doi_ClassInfo_, allocate$CurrencyNames_doi);
	return class$;
}

$Class* CurrencyNames_doi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun