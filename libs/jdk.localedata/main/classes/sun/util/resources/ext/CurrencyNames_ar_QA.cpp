#include <sun/util/resources/ext/CurrencyNames_ar_QA.h>

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

$MethodInfo _CurrencyNames_ar_QA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_QA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_QA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_QA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_QA",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_QA_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_QA($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_QA));
}

void CurrencyNames_ar_QA::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_QA::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("QAR"_s),
		$of(u"ر.ق.\u200f"_s)
	})});
}

CurrencyNames_ar_QA::CurrencyNames_ar_QA() {
}

$Class* CurrencyNames_ar_QA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_QA, name, initialize, &_CurrencyNames_ar_QA_ClassInfo_, allocate$CurrencyNames_ar_QA);
	return class$;
}

$Class* CurrencyNames_ar_QA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun