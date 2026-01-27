#include <sun/util/resources/ext/CurrencyNames_es_DO.h>

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

$MethodInfo _CurrencyNames_es_DO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_DO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_DO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_DO_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es_DO",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_DO_MethodInfo_
};

$Object* allocate$CurrencyNames_es_DO($Class* clazz) {
	return $of($alloc(CurrencyNames_es_DO));
}

void CurrencyNames_es_DO::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_DO::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("DOP"_s),
		$of("RD$"_s)
	})});
}

CurrencyNames_es_DO::CurrencyNames_es_DO() {
}

$Class* CurrencyNames_es_DO::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_DO, name, initialize, &_CurrencyNames_es_DO_ClassInfo_, allocate$CurrencyNames_es_DO);
	return class$;
}

$Class* CurrencyNames_es_DO::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun