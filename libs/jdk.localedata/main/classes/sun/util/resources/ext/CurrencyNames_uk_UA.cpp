#include <sun/util/resources/ext/CurrencyNames_uk_UA.h>

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

$MethodInfo _CurrencyNames_uk_UA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_uk_UA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_uk_UA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_uk_UA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_uk_UA",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_uk_UA_MethodInfo_
};

$Object* allocate$CurrencyNames_uk_UA($Class* clazz) {
	return $of($alloc(CurrencyNames_uk_UA));
}

void CurrencyNames_uk_UA::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_uk_UA::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("UAH"_s),
		$of(u"грн."_s)
	})});
}

CurrencyNames_uk_UA::CurrencyNames_uk_UA() {
}

$Class* CurrencyNames_uk_UA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_uk_UA, name, initialize, &_CurrencyNames_uk_UA_ClassInfo_, allocate$CurrencyNames_uk_UA);
	return class$;
}

$Class* CurrencyNames_uk_UA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun