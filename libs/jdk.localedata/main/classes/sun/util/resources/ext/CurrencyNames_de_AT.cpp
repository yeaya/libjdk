#include <sun/util/resources/ext/CurrencyNames_de_AT.h>

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

$MethodInfo _CurrencyNames_de_AT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_de_AT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_de_AT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_de_AT_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_de_AT",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_de_AT_MethodInfo_
};

$Object* allocate$CurrencyNames_de_AT($Class* clazz) {
	return $of($alloc(CurrencyNames_de_AT));
}

void CurrencyNames_de_AT::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_de_AT::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ATS"_s),
			$of(u"öS"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		})
	});
}

CurrencyNames_de_AT::CurrencyNames_de_AT() {
}

$Class* CurrencyNames_de_AT::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_de_AT, name, initialize, &_CurrencyNames_de_AT_ClassInfo_, allocate$CurrencyNames_de_AT);
	return class$;
}

$Class* CurrencyNames_de_AT::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun