#include <sun/util/resources/cldr/ext/CurrencyNames_es_HN.h>

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

$MethodInfo _CurrencyNames_es_HN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_HN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_HN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_HN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_HN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_HN_MethodInfo_
};

$Object* allocate$CurrencyNames_es_HN($Class* clazz) {
	return $of($alloc(CurrencyNames_es_HN));
}

void CurrencyNames_es_HN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_HN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("HNL"_s),
		$of("L"_s)
	})}));
	return data;
}

CurrencyNames_es_HN::CurrencyNames_es_HN() {
}

$Class* CurrencyNames_es_HN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_HN, name, initialize, &_CurrencyNames_es_HN_ClassInfo_, allocate$CurrencyNames_es_HN);
	return class$;
}

$Class* CurrencyNames_es_HN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun