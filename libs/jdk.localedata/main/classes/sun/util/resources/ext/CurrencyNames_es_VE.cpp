#include <sun/util/resources/ext/CurrencyNames_es_VE.h>

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

$MethodInfo _CurrencyNames_es_VE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_VE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_VE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_VE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es_VE",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_VE_MethodInfo_
};

$Object* allocate$CurrencyNames_es_VE($Class* clazz) {
	return $of($alloc(CurrencyNames_es_VE));
}

void CurrencyNames_es_VE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_VE::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("VEB"_s),
			$of("Bs"_s)
		}),
		$$new($ObjectArray, {
			$of("VEF"_s),
			$of("Bs.F."_s)
		}),
		$$new($ObjectArray, {
			$of("VES"_s),
			$of("Bs.S."_s)
		})
	});
}

CurrencyNames_es_VE::CurrencyNames_es_VE() {
}

$Class* CurrencyNames_es_VE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_VE, name, initialize, &_CurrencyNames_es_VE_ClassInfo_, allocate$CurrencyNames_es_VE);
	return class$;
}

$Class* CurrencyNames_es_VE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun