#include <sun/util/resources/cldr/ext/CurrencyNames_sd_Deva.h>

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

$MethodInfo _CurrencyNames_sd_Deva_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sd_Deva, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sd_Deva, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sd_Deva_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sd_Deva",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sd_Deva_MethodInfo_
};

$Object* allocate$CurrencyNames_sd_Deva($Class* clazz) {
	return $of($alloc(CurrencyNames_sd_Deva));
}

void CurrencyNames_sd_Deva::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sd_Deva::getContents() {
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
			$of(u"बरजिलियन रियलु"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"चीना युआनु"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"यूरो"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"बरतानवी पाउंडु"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"हिंदुस्तानी रुपयो"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"जापानी येनु"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"रशियनु रुबलु"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"यूएस जो डॉलल"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"अणवाकुफु चालू सिक्को"_s)
		})
	}));
	return data;
}

CurrencyNames_sd_Deva::CurrencyNames_sd_Deva() {
}

$Class* CurrencyNames_sd_Deva::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sd_Deva, name, initialize, &_CurrencyNames_sd_Deva_ClassInfo_, allocate$CurrencyNames_sd_Deva);
	return class$;
}

$Class* CurrencyNames_sd_Deva::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun