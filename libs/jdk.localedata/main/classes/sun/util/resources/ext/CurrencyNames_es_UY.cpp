#include <sun/util/resources/ext/CurrencyNames_es_UY.h>

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

$MethodInfo _CurrencyNames_es_UY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_UY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_UY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_UY_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es_UY",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_UY_MethodInfo_
};

$Object* allocate$CurrencyNames_es_UY($Class* clazz) {
	return $of($alloc(CurrencyNames_es_UY));
}

void CurrencyNames_es_UY::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_UY::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("UYU"_s),
		$of("NU$"_s)
	})});
}

CurrencyNames_es_UY::CurrencyNames_es_UY() {
}

$Class* CurrencyNames_es_UY::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_UY, name, initialize, &_CurrencyNames_es_UY_ClassInfo_, allocate$CurrencyNames_es_UY);
	return class$;
}

$Class* CurrencyNames_es_UY::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun