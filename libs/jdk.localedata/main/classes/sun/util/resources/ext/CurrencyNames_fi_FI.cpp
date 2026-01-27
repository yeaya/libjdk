#include <sun/util/resources/ext/CurrencyNames_fi_FI.h>

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

$MethodInfo _CurrencyNames_fi_FI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fi_FI, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fi_FI, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fi_FI_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_fi_FI",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fi_FI_MethodInfo_
};

$Object* allocate$CurrencyNames_fi_FI($Class* clazz) {
	return $of($alloc(CurrencyNames_fi_FI));
}

void CurrencyNames_fi_FI::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_fi_FI::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("FIM"_s),
			$of("mk"_s)
		})
	});
}

CurrencyNames_fi_FI::CurrencyNames_fi_FI() {
}

$Class* CurrencyNames_fi_FI::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fi_FI, name, initialize, &_CurrencyNames_fi_FI_ClassInfo_, allocate$CurrencyNames_fi_FI);
	return class$;
}

$Class* CurrencyNames_fi_FI::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun