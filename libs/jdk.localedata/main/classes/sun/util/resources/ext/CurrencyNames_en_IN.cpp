#include <sun/util/resources/ext/CurrencyNames_en_IN.h>

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

$MethodInfo _CurrencyNames_en_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_IN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_IN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_IN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_en_IN",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_IN_MethodInfo_
};

$Object* allocate$CurrencyNames_en_IN($Class* clazz) {
	return $of($alloc(CurrencyNames_en_IN));
}

void CurrencyNames_en_IN::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_IN::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("INR"_s),
		$of("Rs."_s)
	})});
}

CurrencyNames_en_IN::CurrencyNames_en_IN() {
}

$Class* CurrencyNames_en_IN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_IN, name, initialize, &_CurrencyNames_en_IN_ClassInfo_, allocate$CurrencyNames_en_IN);
	return class$;
}

$Class* CurrencyNames_en_IN::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun