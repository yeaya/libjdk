#include <sun/util/resources/ext/CurrencyNames_it_IT.h>

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

$MethodInfo _CurrencyNames_it_IT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_it_IT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_it_IT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_it_IT_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_it_IT",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_it_IT_MethodInfo_
};

$Object* allocate$CurrencyNames_it_IT($Class* clazz) {
	return $of($alloc(CurrencyNames_it_IT));
}

void CurrencyNames_it_IT::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_it_IT::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("ITL"_s),
			$of("L."_s)
		})
	});
}

CurrencyNames_it_IT::CurrencyNames_it_IT() {
}

$Class* CurrencyNames_it_IT::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_it_IT, name, initialize, &_CurrencyNames_it_IT_ClassInfo_, allocate$CurrencyNames_it_IT);
	return class$;
}

$Class* CurrencyNames_it_IT::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun