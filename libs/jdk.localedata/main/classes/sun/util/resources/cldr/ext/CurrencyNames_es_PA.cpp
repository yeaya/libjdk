#include <sun/util/resources/cldr/ext/CurrencyNames_es_PA.h>

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

$MethodInfo _CurrencyNames_es_PA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_PA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_PA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_PA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_PA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_PA_MethodInfo_
};

$Object* allocate$CurrencyNames_es_PA($Class* clazz) {
	return $of($alloc(CurrencyNames_es_PA));
}

void CurrencyNames_es_PA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_PA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("PAB"_s),
		$of("B/."_s)
	})}));
	return data;
}

CurrencyNames_es_PA::CurrencyNames_es_PA() {
}

$Class* CurrencyNames_es_PA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_PA, name, initialize, &_CurrencyNames_es_PA_ClassInfo_, allocate$CurrencyNames_es_PA);
	return class$;
}

$Class* CurrencyNames_es_PA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun