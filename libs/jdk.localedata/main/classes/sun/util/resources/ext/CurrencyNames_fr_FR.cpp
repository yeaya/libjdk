#include <sun/util/resources/ext/CurrencyNames_fr_FR.h>

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

$MethodInfo _CurrencyNames_fr_FR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_FR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_FR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_FR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_fr_FR",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_FR_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_FR($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_FR));
}

void CurrencyNames_fr_FR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_FR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("FRF"_s),
			$of("F"_s)
		})
	});
}

CurrencyNames_fr_FR::CurrencyNames_fr_FR() {
}

$Class* CurrencyNames_fr_FR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_FR, name, initialize, &_CurrencyNames_fr_FR_ClassInfo_, allocate$CurrencyNames_fr_FR);
	return class$;
}

$Class* CurrencyNames_fr_FR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun