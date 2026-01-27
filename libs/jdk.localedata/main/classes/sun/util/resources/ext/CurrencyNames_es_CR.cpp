#include <sun/util/resources/ext/CurrencyNames_es_CR.h>

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

$MethodInfo _CurrencyNames_es_CR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_CR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_CR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_CR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_es_CR",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_CR_MethodInfo_
};

$Object* allocate$CurrencyNames_es_CR($Class* clazz) {
	return $of($alloc(CurrencyNames_es_CR));
}

void CurrencyNames_es_CR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_CR::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("CRC"_s),
		$of("C"_s)
	})});
}

CurrencyNames_es_CR::CurrencyNames_es_CR() {
}

$Class* CurrencyNames_es_CR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_CR, name, initialize, &_CurrencyNames_es_CR_ClassInfo_, allocate$CurrencyNames_es_CR);
	return class$;
}

$Class* CurrencyNames_es_CR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun