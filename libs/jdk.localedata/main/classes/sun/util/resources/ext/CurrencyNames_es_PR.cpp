#include <sun/util/resources/ext/CurrencyNames_es_PR.h>

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

$MethodInfo _CurrencyNames_es_PR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_PR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_PR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_PR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es_PR",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_PR_MethodInfo_
};

$Object* allocate$CurrencyNames_es_PR($Class* clazz) {
	return $of($alloc(CurrencyNames_es_PR));
}

void CurrencyNames_es_PR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_PR::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("USD"_s),
		$of("$"_s)
	})});
}

CurrencyNames_es_PR::CurrencyNames_es_PR() {
}

$Class* CurrencyNames_es_PR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_PR, name, initialize, &_CurrencyNames_es_PR_ClassInfo_, allocate$CurrencyNames_es_PR);
	return class$;
}

$Class* CurrencyNames_es_PR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun