#include <sun/util/resources/cldr/ext/CurrencyNames_lrc.h>

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

$MethodInfo _CurrencyNames_lrc_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_lrc, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_lrc, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_lrc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_lrc",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_lrc_MethodInfo_
};

$Object* allocate$CurrencyNames_lrc($Class* clazz) {
	return $of($alloc(CurrencyNames_lrc));
}

void CurrencyNames_lrc::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_lrc::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("IQD"_s),
			$of(u"د.ع.\u200f"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"رئال بئرئزیل"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"یوان چین"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"یورو"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"پوند بئریتانیا"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"روٙپیه هئن"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"یئن جاپوٙن"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"روٙبل روٙسیه"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"پیل نادیار"_s)
		})
	}));
	return data;
}

CurrencyNames_lrc::CurrencyNames_lrc() {
}

$Class* CurrencyNames_lrc::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_lrc, name, initialize, &_CurrencyNames_lrc_ClassInfo_, allocate$CurrencyNames_lrc);
	return class$;
}

$Class* CurrencyNames_lrc::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun