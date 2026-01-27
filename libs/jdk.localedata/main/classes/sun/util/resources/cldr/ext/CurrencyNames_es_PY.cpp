#include <sun/util/resources/cldr/ext/CurrencyNames_es_PY.h>

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

$MethodInfo _CurrencyNames_es_PY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_PY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_PY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_PY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_PY",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_PY_MethodInfo_
};

$Object* allocate$CurrencyNames_es_PY($Class* clazz) {
	return $of($alloc(CurrencyNames_es_PY));
}

void CurrencyNames_es_PY::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_PY::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("PYG"_s),
		$of("Gs."_s)
	})}));
	return data;
}

CurrencyNames_es_PY::CurrencyNames_es_PY() {
}

$Class* CurrencyNames_es_PY::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_PY, name, initialize, &_CurrencyNames_es_PY_ClassInfo_, allocate$CurrencyNames_es_PY);
	return class$;
}

$Class* CurrencyNames_es_PY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun