#include <sun/util/resources/ext/CurrencyNames_fr_BE.h>

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

$MethodInfo _CurrencyNames_fr_BE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_BE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_BE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_BE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_fr_BE",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_BE_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_BE($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_BE));
}

void CurrencyNames_fr_BE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_BE::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BEF"_s),
			$of("FB"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		})
	});
}

CurrencyNames_fr_BE::CurrencyNames_fr_BE() {
}

$Class* CurrencyNames_fr_BE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_BE, name, initialize, &_CurrencyNames_fr_BE_ClassInfo_, allocate$CurrencyNames_fr_BE);
	return class$;
}

$Class* CurrencyNames_fr_BE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun