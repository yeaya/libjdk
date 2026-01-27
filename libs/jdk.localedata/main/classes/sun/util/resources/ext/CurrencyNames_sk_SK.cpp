#include <sun/util/resources/ext/CurrencyNames_sk_SK.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_sk_SK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sk_SK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sk_SK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sk_SK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_sk_SK",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sk_SK_MethodInfo_
};

$Object* allocate$CurrencyNames_sk_SK($Class* clazz) {
	return $of($alloc(CurrencyNames_sk_SK));
}

void CurrencyNames_sk_SK::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_sk_SK::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("SKK"_s),
			$of("Sk"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"Slovenská koruna"_s)
		})
	});
}

CurrencyNames_sk_SK::CurrencyNames_sk_SK() {
}

$Class* CurrencyNames_sk_SK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sk_SK, name, initialize, &_CurrencyNames_sk_SK_ClassInfo_, allocate$CurrencyNames_sk_SK);
	return class$;
}

$Class* CurrencyNames_sk_SK::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun