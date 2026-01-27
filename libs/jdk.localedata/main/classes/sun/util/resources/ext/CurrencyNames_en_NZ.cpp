#include <sun/util/resources/ext/CurrencyNames_en_NZ.h>

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

$MethodInfo _CurrencyNames_en_NZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_NZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_NZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_NZ_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_en_NZ",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_NZ_MethodInfo_
};

$Object* allocate$CurrencyNames_en_NZ($Class* clazz) {
	return $of($alloc(CurrencyNames_en_NZ));
}

void CurrencyNames_en_NZ::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_NZ::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NZD"_s),
		$of("$"_s)
	})});
}

CurrencyNames_en_NZ::CurrencyNames_en_NZ() {
}

$Class* CurrencyNames_en_NZ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_NZ, name, initialize, &_CurrencyNames_en_NZ_ClassInfo_, allocate$CurrencyNames_en_NZ);
	return class$;
}

$Class* CurrencyNames_en_NZ::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun