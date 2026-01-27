#include <sun/util/resources/cldr/ext/CurrencyNames_su.h>

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

$MethodInfo _CurrencyNames_su_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_su, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_su, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_su_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_su",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_su_MethodInfo_
};

$Object* allocate$CurrencyNames_su($Class* clazz) {
	return $of($alloc(CurrencyNames_su));
}

void CurrencyNames_su::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_su::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("IDR"_s),
			$of("Rp"_s)
		}),
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
			$of("Real Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan Tiongkok"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Pound Inggris"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"Rupee Indonésia"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupee India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yén Jepang"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rubel Rusia"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dolar A.S."_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Mata Uang Teu Dikenal"_s)
		})
	}));
	return data;
}

CurrencyNames_su::CurrencyNames_su() {
}

$Class* CurrencyNames_su::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_su, name, initialize, &_CurrencyNames_su_ClassInfo_, allocate$CurrencyNames_su);
	return class$;
}

$Class* CurrencyNames_su::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun