#include <sun/util/resources/ext/CurrencyNames_lt_LT.h>

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

$MethodInfo _CurrencyNames_lt_LT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_lt_LT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_lt_LT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_lt_LT_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_lt_LT",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_lt_LT_MethodInfo_
};

$Object* allocate$CurrencyNames_lt_LT($Class* clazz) {
	return $of($alloc(CurrencyNames_lt_LT));
}

void CurrencyNames_lt_LT::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_lt_LT::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("LTL"_s),
			$of("Lt"_s)
		})
	});
}

CurrencyNames_lt_LT::CurrencyNames_lt_LT() {
}

$Class* CurrencyNames_lt_LT::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_lt_LT, name, initialize, &_CurrencyNames_lt_LT_ClassInfo_, allocate$CurrencyNames_lt_LT);
	return class$;
}

$Class* CurrencyNames_lt_LT::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun