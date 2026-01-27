#include <sun/util/resources/ext/CurrencyNames_en_ZA.h>

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

$MethodInfo _CurrencyNames_en_ZA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_ZA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_ZA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_ZA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_en_ZA",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_ZA_MethodInfo_
};

$Object* allocate$CurrencyNames_en_ZA($Class* clazz) {
	return $of($alloc(CurrencyNames_en_ZA));
}

void CurrencyNames_en_ZA::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_ZA::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("ZAR"_s),
		$of("R"_s)
	})});
}

CurrencyNames_en_ZA::CurrencyNames_en_ZA() {
}

$Class* CurrencyNames_en_ZA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_ZA, name, initialize, &_CurrencyNames_en_ZA_ClassInfo_, allocate$CurrencyNames_en_ZA);
	return class$;
}

$Class* CurrencyNames_en_ZA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun