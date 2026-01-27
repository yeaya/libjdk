#include <sun/util/resources/cldr/ext/CurrencyNames_es_PH.h>

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

$MethodInfo _CurrencyNames_es_PH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_PH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_PH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_PH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_PH",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_PH_MethodInfo_
};

$Object* allocate$CurrencyNames_es_PH($Class* clazz) {
	return $of($alloc(CurrencyNames_es_PH));
}

void CurrencyNames_es_PH::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_PH::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("PHP"_s),
		$of(u"₱"_s)
	})}));
	return data;
}

CurrencyNames_es_PH::CurrencyNames_es_PH() {
}

$Class* CurrencyNames_es_PH::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_PH, name, initialize, &_CurrencyNames_es_PH_ClassInfo_, allocate$CurrencyNames_es_PH);
	return class$;
}

$Class* CurrencyNames_es_PH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun