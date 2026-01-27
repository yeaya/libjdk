#include <sun/util/resources/cldr/ext/CurrencyNames_es_CO.h>

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

$MethodInfo _CurrencyNames_es_CO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_CO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_CO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_CO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_CO",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_CO_MethodInfo_
};

$Object* allocate$CurrencyNames_es_CO($Class* clazz) {
	return $of($alloc(CurrencyNames_es_CO));
}

void CurrencyNames_es_CO::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_CO::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("COP"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("US$"_s)
		})
	}));
	return data;
}

CurrencyNames_es_CO::CurrencyNames_es_CO() {
}

$Class* CurrencyNames_es_CO::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_CO, name, initialize, &_CurrencyNames_es_CO_ClassInfo_, allocate$CurrencyNames_es_CO);
	return class$;
}

$Class* CurrencyNames_es_CO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun