#include <sun/util/resources/ext/CurrencyNames_es_ES.h>

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

$MethodInfo _CurrencyNames_es_ES_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_ES, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_ES, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_ES_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es_ES",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_ES_MethodInfo_
};

$Object* allocate$CurrencyNames_es_ES($Class* clazz) {
	return $of($alloc(CurrencyNames_es_ES));
}

void CurrencyNames_es_ES::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_ES::getContents() {
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

CurrencyNames_es_ES::CurrencyNames_es_ES() {
}

$Class* CurrencyNames_es_ES::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_ES, name, initialize, &_CurrencyNames_es_ES_ClassInfo_, allocate$CurrencyNames_es_ES);
	return class$;
}

$Class* CurrencyNames_es_ES::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun