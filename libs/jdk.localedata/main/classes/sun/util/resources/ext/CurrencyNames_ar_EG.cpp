#include <sun/util/resources/ext/CurrencyNames_ar_EG.h>

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

$MethodInfo _CurrencyNames_ar_EG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_EG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_EG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_EG_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_EG",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_EG_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_EG($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_EG));
}

void CurrencyNames_ar_EG::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_EG::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("EGP"_s),
		$of(u"ج.م.\u200f"_s)
	})});
}

CurrencyNames_ar_EG::CurrencyNames_ar_EG() {
}

$Class* CurrencyNames_ar_EG::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_EG, name, initialize, &_CurrencyNames_ar_EG_ClassInfo_, allocate$CurrencyNames_ar_EG);
	return class$;
}

$Class* CurrencyNames_ar_EG::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun