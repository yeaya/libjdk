#include <sun/util/resources/ext/CurrencyNames_no_NO.h>

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

$MethodInfo _CurrencyNames_no_NO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_no_NO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_no_NO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_no_NO_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_no_NO",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_no_NO_MethodInfo_
};

$Object* allocate$CurrencyNames_no_NO($Class* clazz) {
	return $of($alloc(CurrencyNames_no_NO));
}

void CurrencyNames_no_NO::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_no_NO::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NOK"_s),
		$of("kr"_s)
	})});
}

CurrencyNames_no_NO::CurrencyNames_no_NO() {
}

$Class* CurrencyNames_no_NO::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_no_NO, name, initialize, &_CurrencyNames_no_NO_ClassInfo_, allocate$CurrencyNames_no_NO);
	return class$;
}

$Class* CurrencyNames_no_NO::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun