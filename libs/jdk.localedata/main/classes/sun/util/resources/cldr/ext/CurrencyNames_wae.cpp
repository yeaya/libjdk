#include <sun/util/resources/cldr/ext/CurrencyNames_wae.h>

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

$MethodInfo _CurrencyNames_wae_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_wae, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_wae, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_wae_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_wae",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_wae_MethodInfo_
};

$Object* allocate$CurrencyNames_wae($Class* clazz) {
	return $of($alloc(CurrencyNames_wae));
}

void CurrencyNames_wae::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_wae::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"¥"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Brasilianiši Real"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Chinesiši Yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Pfund"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Indiši Rupie"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yen"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Unbekannti Wãrig"_s)
		})
	}));
	return data;
}

CurrencyNames_wae::CurrencyNames_wae() {
}

$Class* CurrencyNames_wae::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_wae, name, initialize, &_CurrencyNames_wae_ClassInfo_, allocate$CurrencyNames_wae);
	return class$;
}

$Class* CurrencyNames_wae::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun