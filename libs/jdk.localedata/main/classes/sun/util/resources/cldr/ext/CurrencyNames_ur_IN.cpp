#include <sun/util/resources/cldr/ext/CurrencyNames_ur_IN.h>

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

$MethodInfo _CurrencyNames_ur_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ur_IN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ur_IN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ur_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ur_IN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ur_IN_MethodInfo_
};

$Object* allocate$CurrencyNames_ur_IN($Class* clazz) {
	return $of($alloc(CurrencyNames_ur_IN));
}

void CurrencyNames_ur_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ur_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PKR"_s),
			$of("PKR"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"کوسٹا ریکا کولون"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"قابل منتقلی کیوبائی پیسو"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"کیوبائی پیسو"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"کیپ ورڈی اسکیوڈو"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"برطانوی پاونڈ سٹرلنگ"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"گھانی سیڈی"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"ساموآئی ٹالا"_s)
		})
	}));
	return data;
}

CurrencyNames_ur_IN::CurrencyNames_ur_IN() {
}

$Class* CurrencyNames_ur_IN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ur_IN, name, initialize, &_CurrencyNames_ur_IN_ClassInfo_, allocate$CurrencyNames_ur_IN);
	return class$;
}

$Class* CurrencyNames_ur_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun