#include <sun/util/resources/ext/CurrencyNames_es_BO.h>

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

$MethodInfo _CurrencyNames_es_BO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_BO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_BO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_BO_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es_BO",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_BO_MethodInfo_
};

$Object* allocate$CurrencyNames_es_BO($Class* clazz) {
	return $of($alloc(CurrencyNames_es_BO));
}

void CurrencyNames_es_BO::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_BO::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("BOB"_s),
		$of("B$"_s)
	})});
}

CurrencyNames_es_BO::CurrencyNames_es_BO() {
}

$Class* CurrencyNames_es_BO::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_BO, name, initialize, &_CurrencyNames_es_BO_ClassInfo_, allocate$CurrencyNames_es_BO);
	return class$;
}

$Class* CurrencyNames_es_BO::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun