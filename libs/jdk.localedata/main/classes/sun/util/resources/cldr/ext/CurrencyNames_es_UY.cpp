#include <sun/util/resources/cldr/ext/CurrencyNames_es_UY.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _CurrencyNames_es_UY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_UY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_UY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_UY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_UY",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_UY_MethodInfo_
};

$Object* allocate$CurrencyNames_es_UY($Class* clazz) {
	return $of($alloc(CurrencyNames_es_UY));
}

void CurrencyNames_es_UY::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_UY::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("US$"_s)
		}),
		$$new($ObjectArray, {
			$of("UYU"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("UYW"_s),
			$of("UP"_s)
		})
	}));
	return data;
}

CurrencyNames_es_UY::CurrencyNames_es_UY() {
}

$Class* CurrencyNames_es_UY::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_UY, name, initialize, &_CurrencyNames_es_UY_ClassInfo_, allocate$CurrencyNames_es_UY);
	return class$;
}

$Class* CurrencyNames_es_UY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun