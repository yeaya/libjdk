#include <sun/util/resources/cldr/ext/CurrencyNames_en_KY.h>

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

$MethodInfo _CurrencyNames_en_KY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_KY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_KY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_KY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_KY",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_KY_MethodInfo_
};

$Object* allocate$CurrencyNames_en_KY($Class* clazz) {
	return $of($alloc(CurrencyNames_en_KY));
}

void CurrencyNames_en_KY::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_KY::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("KYD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_en_KY::CurrencyNames_en_KY() {
}

$Class* CurrencyNames_en_KY::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_KY, name, initialize, &_CurrencyNames_en_KY_ClassInfo_, allocate$CurrencyNames_en_KY);
	return class$;
}

$Class* CurrencyNames_en_KY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun