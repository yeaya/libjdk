#include <sun/util/resources/cldr/ext/CurrencyNames_es_AR.h>

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

$MethodInfo _CurrencyNames_es_AR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_AR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_AR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_AR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_AR",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_AR_MethodInfo_
};

$Object* allocate$CurrencyNames_es_AR($Class* clazz) {
	return $of($alloc(CurrencyNames_es_AR));
}

void CurrencyNames_es_AR::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_AR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ARS"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("US$"_s)
		})
	}));
	return data;
}

CurrencyNames_es_AR::CurrencyNames_es_AR() {
}

$Class* CurrencyNames_es_AR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_AR, name, initialize, &_CurrencyNames_es_AR_ClassInfo_, allocate$CurrencyNames_es_AR);
	return class$;
}

$Class* CurrencyNames_es_AR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun