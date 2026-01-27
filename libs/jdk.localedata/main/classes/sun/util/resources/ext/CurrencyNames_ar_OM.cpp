#include <sun/util/resources/ext/CurrencyNames_ar_OM.h>

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

$MethodInfo _CurrencyNames_ar_OM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_OM, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_OM, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_OM_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_OM",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_OM_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_OM($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_OM));
}

void CurrencyNames_ar_OM::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_OM::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("OMR"_s),
		$of(u"ر.ع.\u200f"_s)
	})});
}

CurrencyNames_ar_OM::CurrencyNames_ar_OM() {
}

$Class* CurrencyNames_ar_OM::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_OM, name, initialize, &_CurrencyNames_ar_OM_ClassInfo_, allocate$CurrencyNames_ar_OM);
	return class$;
}

$Class* CurrencyNames_ar_OM::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun