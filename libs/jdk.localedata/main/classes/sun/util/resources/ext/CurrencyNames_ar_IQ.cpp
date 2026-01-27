#include <sun/util/resources/ext/CurrencyNames_ar_IQ.h>

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

$MethodInfo _CurrencyNames_ar_IQ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_IQ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_IQ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_IQ_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ar_IQ",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_IQ_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_IQ($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_IQ));
}

void CurrencyNames_ar_IQ::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_IQ::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("IQD"_s),
		$of(u"د.ع.\u200f"_s)
	})});
}

CurrencyNames_ar_IQ::CurrencyNames_ar_IQ() {
}

$Class* CurrencyNames_ar_IQ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_IQ, name, initialize, &_CurrencyNames_ar_IQ_ClassInfo_, allocate$CurrencyNames_ar_IQ);
	return class$;
}

$Class* CurrencyNames_ar_IQ::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun