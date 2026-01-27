#include <sun/util/resources/ext/CurrencyNames_es_CU.h>

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

$MethodInfo _CurrencyNames_es_CU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_CU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_CU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_CU_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es_CU",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_CU_MethodInfo_
};

$Object* allocate$CurrencyNames_es_CU($Class* clazz) {
	return $of($alloc(CurrencyNames_es_CU));
}

void CurrencyNames_es_CU::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_CU::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CUC"_s),
			$of("CUC$"_s)
		}),
		$$new($ObjectArray, {
			$of("CUP"_s),
			$of("CU$"_s)
		})
	});
}

CurrencyNames_es_CU::CurrencyNames_es_CU() {
}

$Class* CurrencyNames_es_CU::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_CU, name, initialize, &_CurrencyNames_es_CU_ClassInfo_, allocate$CurrencyNames_es_CU);
	return class$;
}

$Class* CurrencyNames_es_CU::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun