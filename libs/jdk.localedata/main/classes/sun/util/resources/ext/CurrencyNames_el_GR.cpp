#include <sun/util/resources/ext/CurrencyNames_el_GR.h>

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

$MethodInfo _CurrencyNames_el_GR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_el_GR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_el_GR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_el_GR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_el_GR",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_el_GR_MethodInfo_
};

$Object* allocate$CurrencyNames_el_GR($Class* clazz) {
	return $of($alloc(CurrencyNames_el_GR));
}

void CurrencyNames_el_GR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_el_GR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("GRD"_s),
			$of(u"δρχ"_s)
		})
	});
}

CurrencyNames_el_GR::CurrencyNames_el_GR() {
}

$Class* CurrencyNames_el_GR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_el_GR, name, initialize, &_CurrencyNames_el_GR_ClassInfo_, allocate$CurrencyNames_el_GR);
	return class$;
}

$Class* CurrencyNames_el_GR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun