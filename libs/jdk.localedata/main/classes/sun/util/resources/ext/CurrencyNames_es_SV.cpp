#include <sun/util/resources/ext/CurrencyNames_es_SV.h>

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

$MethodInfo _CurrencyNames_es_SV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_SV, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_SV, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_SV_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es_SV",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_SV_MethodInfo_
};

$Object* allocate$CurrencyNames_es_SV($Class* clazz) {
	return $of($alloc(CurrencyNames_es_SV));
}

void CurrencyNames_es_SV::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_SV::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("SVC"_s),
		$of("C"_s)
	})});
}

CurrencyNames_es_SV::CurrencyNames_es_SV() {
}

$Class* CurrencyNames_es_SV::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_SV, name, initialize, &_CurrencyNames_es_SV_ClassInfo_, allocate$CurrencyNames_es_SV);
	return class$;
}

$Class* CurrencyNames_es_SV::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun