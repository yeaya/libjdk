#include <sun/util/resources/ext/CurrencyNames_mt_MT.h>

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

$MethodInfo _CurrencyNames_mt_MT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mt_MT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mt_MT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_mt_MT_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_mt_MT",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mt_MT_MethodInfo_
};

$Object* allocate$CurrencyNames_mt_MT($Class* clazz) {
	return $of($alloc(CurrencyNames_mt_MT));
}

void CurrencyNames_mt_MT::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_mt_MT::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("MTL"_s),
			$of("Lm"_s)
		})
	});
}

CurrencyNames_mt_MT::CurrencyNames_mt_MT() {
}

$Class* CurrencyNames_mt_MT::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mt_MT, name, initialize, &_CurrencyNames_mt_MT_ClassInfo_, allocate$CurrencyNames_mt_MT);
	return class$;
}

$Class* CurrencyNames_mt_MT::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun