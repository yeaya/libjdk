#include <sun/util/resources/ext/CurrencyNames_hu_HU.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_hu_HU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_hu_HU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_hu_HU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_hu_HU_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_hu_HU",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_hu_HU_MethodInfo_
};

$Object* allocate$CurrencyNames_hu_HU($Class* clazz) {
	return $of($alloc(CurrencyNames_hu_HU));
}

void CurrencyNames_hu_HU::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_hu_HU::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("HUF"_s),
		$of("Ft"_s)
	})});
}

CurrencyNames_hu_HU::CurrencyNames_hu_HU() {
}

$Class* CurrencyNames_hu_HU::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_hu_HU, name, initialize, &_CurrencyNames_hu_HU_ClassInfo_, allocate$CurrencyNames_hu_HU);
	return class$;
}

$Class* CurrencyNames_hu_HU::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun