#include <sun/util/resources/cldr/ext/CurrencyNames_pa_Arab.h>

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

$MethodInfo _CurrencyNames_pa_Arab_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_pa_Arab, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_pa_Arab, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_pa_Arab_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pa_Arab",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pa_Arab_MethodInfo_
};

$Object* allocate$CurrencyNames_pa_Arab($Class* clazz) {
	return $of($alloc(CurrencyNames_pa_Arab));
}

void CurrencyNames_pa_Arab::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pa_Arab::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PKR"_s),
			$of(u"ر"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"يورو"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"روپئیہ [INR]"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"روپئیہ"_s)
		})
	}));
	return data;
}

CurrencyNames_pa_Arab::CurrencyNames_pa_Arab() {
}

$Class* CurrencyNames_pa_Arab::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pa_Arab, name, initialize, &_CurrencyNames_pa_Arab_ClassInfo_, allocate$CurrencyNames_pa_Arab);
	return class$;
}

$Class* CurrencyNames_pa_Arab::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun