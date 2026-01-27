#include <sun/util/resources/ext/CurrencyNames_ar_LB.h>

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

$MethodInfo _CurrencyNames_ar_LB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_LB, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_LB, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_LB_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_LB",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_LB_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_LB($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_LB));
}

void CurrencyNames_ar_LB::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_LB::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("LBP"_s),
		$of(u"ل.ل.\u200f"_s)
	})});
}

CurrencyNames_ar_LB::CurrencyNames_ar_LB() {
}

$Class* CurrencyNames_ar_LB::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_LB, name, initialize, &_CurrencyNames_ar_LB_ClassInfo_, allocate$CurrencyNames_ar_LB);
	return class$;
}

$Class* CurrencyNames_ar_LB::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun