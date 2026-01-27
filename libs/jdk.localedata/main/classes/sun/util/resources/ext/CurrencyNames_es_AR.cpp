#include <sun/util/resources/ext/CurrencyNames_es_AR.h>

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

$MethodInfo _CurrencyNames_es_AR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_AR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_AR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_AR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es_AR",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_AR_MethodInfo_
};

$Object* allocate$CurrencyNames_es_AR($Class* clazz) {
	return $of($alloc(CurrencyNames_es_AR));
}

void CurrencyNames_es_AR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_AR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ARS"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("US$"_s)
		})
	});
}

CurrencyNames_es_AR::CurrencyNames_es_AR() {
}

$Class* CurrencyNames_es_AR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_AR, name, initialize, &_CurrencyNames_es_AR_ClassInfo_, allocate$CurrencyNames_es_AR);
	return class$;
}

$Class* CurrencyNames_es_AR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun