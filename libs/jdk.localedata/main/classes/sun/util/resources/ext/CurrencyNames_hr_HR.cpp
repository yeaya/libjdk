#include <sun/util/resources/ext/CurrencyNames_hr_HR.h>

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

$MethodInfo _CurrencyNames_hr_HR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_hr_HR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_hr_HR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_hr_HR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_hr_HR",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_hr_HR_MethodInfo_
};

$Object* allocate$CurrencyNames_hr_HR($Class* clazz) {
	return $of($alloc(CurrencyNames_hr_HR));
}

void CurrencyNames_hr_HR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_hr_HR::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("HRK"_s),
		$of("Kn"_s)
	})});
}

CurrencyNames_hr_HR::CurrencyNames_hr_HR() {
}

$Class* CurrencyNames_hr_HR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_hr_HR, name, initialize, &_CurrencyNames_hr_HR_ClassInfo_, allocate$CurrencyNames_hr_HR);
	return class$;
}

$Class* CurrencyNames_hr_HR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun