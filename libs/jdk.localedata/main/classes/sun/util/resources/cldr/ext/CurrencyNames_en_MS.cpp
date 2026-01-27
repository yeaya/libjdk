#include <sun/util/resources/cldr/ext/CurrencyNames_en_MS.h>

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

$MethodInfo _CurrencyNames_en_MS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_MS, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_MS, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_MS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_MS",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_MS_MethodInfo_
};

$Object* allocate$CurrencyNames_en_MS($Class* clazz) {
	return $of($alloc(CurrencyNames_en_MS));
}

void CurrencyNames_en_MS::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_MS::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("XCD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_en_MS::CurrencyNames_en_MS() {
}

$Class* CurrencyNames_en_MS::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_MS, name, initialize, &_CurrencyNames_en_MS_ClassInfo_, allocate$CurrencyNames_en_MS);
	return class$;
}

$Class* CurrencyNames_en_MS::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun