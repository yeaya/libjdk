#include <sun/util/resources/ext/CurrencyNames_en_CA.h>

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

$MethodInfo _CurrencyNames_en_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_CA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_CA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_CA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_en_CA",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_CA_MethodInfo_
};

$Object* allocate$CurrencyNames_en_CA($Class* clazz) {
	return $of($alloc(CurrencyNames_en_CA));
}

void CurrencyNames_en_CA::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_CA::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CAD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("US$"_s)
		})
	});
}

CurrencyNames_en_CA::CurrencyNames_en_CA() {
}

$Class* CurrencyNames_en_CA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_CA, name, initialize, &_CurrencyNames_en_CA_ClassInfo_, allocate$CurrencyNames_en_CA);
	return class$;
}

$Class* CurrencyNames_en_CA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun