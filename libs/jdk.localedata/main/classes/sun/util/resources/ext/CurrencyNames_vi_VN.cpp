#include <sun/util/resources/ext/CurrencyNames_vi_VN.h>
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

void CurrencyNames_vi_VN::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_vi_VN::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"VND"_s,
		u"đ"_s
	})});
}

CurrencyNames_vi_VN::CurrencyNames_vi_VN() {
}

$Class* CurrencyNames_vi_VN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_vi_VN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_vi_VN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_vi_VN",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_vi_VN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_vi_VN);
	});
	return class$;
}

$Class* CurrencyNames_vi_VN::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun