#include <sun/util/resources/ext/CurrencyNames_ar_KW.h>

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

$MethodInfo _CurrencyNames_ar_KW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_KW, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_KW, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_KW_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_KW",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_KW_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_KW($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_KW));
}

void CurrencyNames_ar_KW::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_KW::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("KWD"_s),
		$of(u"د.ك.\u200f"_s)
	})});
}

CurrencyNames_ar_KW::CurrencyNames_ar_KW() {
}

$Class* CurrencyNames_ar_KW::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_KW, name, initialize, &_CurrencyNames_ar_KW_ClassInfo_, allocate$CurrencyNames_ar_KW);
	return class$;
}

$Class* CurrencyNames_ar_KW::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun