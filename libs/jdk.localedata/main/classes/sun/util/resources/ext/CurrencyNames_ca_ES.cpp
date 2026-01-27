#include <sun/util/resources/ext/CurrencyNames_ca_ES.h>

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

$MethodInfo _CurrencyNames_ca_ES_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ca_ES, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ca_ES, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ca_ES_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ca_ES",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ca_ES_MethodInfo_
};

$Object* allocate$CurrencyNames_ca_ES($Class* clazz) {
	return $of($alloc(CurrencyNames_ca_ES));
}

void CurrencyNames_ca_ES::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ca_ES::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ESP"_s),
			$of("Pts"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		})
	});
}

CurrencyNames_ca_ES::CurrencyNames_ca_ES() {
}

$Class* CurrencyNames_ca_ES::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ca_ES, name, initialize, &_CurrencyNames_ca_ES_ClassInfo_, allocate$CurrencyNames_ca_ES);
	return class$;
}

$Class* CurrencyNames_ca_ES::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun