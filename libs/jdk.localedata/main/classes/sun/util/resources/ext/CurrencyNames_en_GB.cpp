#include <sun/util/resources/ext/CurrencyNames_en_GB.h>

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

$MethodInfo _CurrencyNames_en_GB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_GB, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_GB, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_GB_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_en_GB",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_GB_MethodInfo_
};

$Object* allocate$CurrencyNames_en_GB($Class* clazz) {
	return $of($alloc(CurrencyNames_en_GB));
}

void CurrencyNames_en_GB::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_GB::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of(u"£"_s)
		})
	});
}

CurrencyNames_en_GB::CurrencyNames_en_GB() {
}

$Class* CurrencyNames_en_GB::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_GB, name, initialize, &_CurrencyNames_en_GB_ClassInfo_, allocate$CurrencyNames_en_GB);
	return class$;
}

$Class* CurrencyNames_en_GB::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun