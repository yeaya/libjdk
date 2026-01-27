#include <sun/util/resources/cldr/ext/CurrencyNames_fr_LU.h>

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

$MethodInfo _CurrencyNames_fr_LU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_LU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_LU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_LU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_LU",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_LU_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_LU($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_LU));
}

void CurrencyNames_fr_LU::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_LU::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FRF"_s),
			$of("FRF"_s)
		}),
		$$new($ObjectArray, {
			$of("LUF"_s),
			$of("F"_s)
		})
	}));
	return data;
}

CurrencyNames_fr_LU::CurrencyNames_fr_LU() {
}

$Class* CurrencyNames_fr_LU::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_LU, name, initialize, &_CurrencyNames_fr_LU_ClassInfo_, allocate$CurrencyNames_fr_LU);
	return class$;
}

$Class* CurrencyNames_fr_LU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun