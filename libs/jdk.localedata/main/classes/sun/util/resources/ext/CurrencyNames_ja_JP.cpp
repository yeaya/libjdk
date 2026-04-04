#include <sun/util/resources/ext/CurrencyNames_ja_JP.h>
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

void CurrencyNames_ja_JP::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ja_JP::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"JPY"_s,
		u"￥"_s
	})});
}

CurrencyNames_ja_JP::CurrencyNames_ja_JP() {
}

$Class* CurrencyNames_ja_JP::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ja_JP, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ja_JP, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_ja_JP",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_ja_JP, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_ja_JP);
	});
	return class$;
}

$Class* CurrencyNames_ja_JP::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun