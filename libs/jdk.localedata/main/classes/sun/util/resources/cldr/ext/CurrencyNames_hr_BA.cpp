#include <sun/util/resources/cldr/ext/CurrencyNames_hr_BA.h>

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

$MethodInfo _CurrencyNames_hr_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_hr_BA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_hr_BA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_hr_BA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_hr_BA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_hr_BA_MethodInfo_
};

$Object* allocate$CurrencyNames_hr_BA($Class* clazz) {
	return $of($alloc(CurrencyNames_hr_BA));
}

void CurrencyNames_hr_BA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_hr_BA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("BAM"_s),
		$of("KM"_s)
	})}));
	return data;
}

CurrencyNames_hr_BA::CurrencyNames_hr_BA() {
}

$Class* CurrencyNames_hr_BA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_hr_BA, name, initialize, &_CurrencyNames_hr_BA_ClassInfo_, allocate$CurrencyNames_hr_BA);
	return class$;
}

$Class* CurrencyNames_hr_BA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun