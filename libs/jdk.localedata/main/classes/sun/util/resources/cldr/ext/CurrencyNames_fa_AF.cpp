#include <sun/util/resources/cldr/ext/CurrencyNames_fa_AF.h>

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

$MethodInfo _CurrencyNames_fa_AF_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fa_AF, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fa_AF, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fa_AF_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fa_AF",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fa_AF_MethodInfo_
};

$Object* allocate$CurrencyNames_fa_AF($Class* clazz) {
	return $of($alloc(CurrencyNames_fa_AF));
}

void CurrencyNames_fa_AF::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fa_AF::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"دالر آسترالیا"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"دالر برونی"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"روبل روسیهٔ سفید"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"روبل روسیهٔ سفید (۲۰۰۰–۲۰۱۶)"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"دالر کانادا"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"فرانک سویس"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"کرون دنمارک"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"ین جاپان"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"پزوی مکسیکو"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"گیلدر هالند"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"کرون ناروی"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"کرون سویدن"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"دالر سینگاپور"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"سامانی تاجکستان"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"دالر امریکا"_s)
		})
	}));
	return data;
}

CurrencyNames_fa_AF::CurrencyNames_fa_AF() {
}

$Class* CurrencyNames_fa_AF::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fa_AF, name, initialize, &_CurrencyNames_fa_AF_ClassInfo_, allocate$CurrencyNames_fa_AF);
	return class$;
}

$Class* CurrencyNames_fa_AF::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun