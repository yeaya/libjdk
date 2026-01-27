#include <sun/util/resources/cldr/ext/CurrencyNames_mni.h>

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

$MethodInfo _CurrencyNames_mni_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mni, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mni, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_mni_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mni",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mni_MethodInfo_
};

$Object* allocate$CurrencyNames_mni($Class* clazz) {
	return $of($alloc(CurrencyNames_mni));
}

void CurrencyNames_mni::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mni::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"ব্রাজিলিয়ান রেয়াল"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"চাইনিজ য়ুআন"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"য়ুরো"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"ব্রিটিশ পাউন্দ"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"ইন্দিয়ান রুপি"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"জাপানিজ য়েন"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"রুসিয়ান রুবল"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"য়ু এস দি"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"মশকখংদবা করেন্সি"_s)
		})
	}));
	return data;
}

CurrencyNames_mni::CurrencyNames_mni() {
}

$Class* CurrencyNames_mni::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mni, name, initialize, &_CurrencyNames_mni_ClassInfo_, allocate$CurrencyNames_mni);
	return class$;
}

$Class* CurrencyNames_mni::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun