#include <sun/util/resources/cldr/ext/CurrencyNames_ti.h>

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

$MethodInfo _CurrencyNames_ti_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ti, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ti, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ti_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ti",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ti_MethodInfo_
};

$Object* allocate$CurrencyNames_ti($Class* clazz) {
	return $of($alloc(CurrencyNames_ti));
}

void CurrencyNames_ti::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ti::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ETB"_s),
			$of("Br"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"የብራዚል ሪል"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"የቻይና ዩአን ረንሚንቢ"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"የኢትዮጵያ ብር"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"አውሮ"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"የእንግሊዝ ፓውንድ ስተርሊንግ"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"የሕንድ ሩፒ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"የጃፓን የን"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"የራሻ ሩብል"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"የአሜሪካን ዶላር"_s)
		})
	}));
	return data;
}

CurrencyNames_ti::CurrencyNames_ti() {
}

$Class* CurrencyNames_ti::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ti, name, initialize, &_CurrencyNames_ti_ClassInfo_, allocate$CurrencyNames_ti);
	return class$;
}

$Class* CurrencyNames_ti::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun