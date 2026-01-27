#include <sun/util/resources/ext/CurrencyNames_en_PH.h>

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

$MethodInfo _CurrencyNames_en_PH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_PH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_PH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_PH_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_en_PH",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_PH_MethodInfo_
};

$Object* allocate$CurrencyNames_en_PH($Class* clazz) {
	return $of($alloc(CurrencyNames_en_PH));
}

void CurrencyNames_en_PH::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_PH::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("PHP"_s),
		$of("Php"_s)
	})});
}

CurrencyNames_en_PH::CurrencyNames_en_PH() {
}

$Class* CurrencyNames_en_PH::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_PH, name, initialize, &_CurrencyNames_en_PH_ClassInfo_, allocate$CurrencyNames_en_PH);
	return class$;
}

$Class* CurrencyNames_en_PH::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun