#include <sun/util/resources/cldr/ext/CurrencyNames_es_EC.h>

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

$MethodInfo _CurrencyNames_es_EC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_EC, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_EC, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_EC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_EC",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_EC_MethodInfo_
};

$Object* allocate$CurrencyNames_es_EC($Class* clazz) {
	return $of($alloc(CurrencyNames_es_EC));
}

void CurrencyNames_es_EC::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_EC::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("USD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_es_EC::CurrencyNames_es_EC() {
}

$Class* CurrencyNames_es_EC::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_EC, name, initialize, &_CurrencyNames_es_EC_ClassInfo_, allocate$CurrencyNames_es_EC);
	return class$;
}

$Class* CurrencyNames_es_EC::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun