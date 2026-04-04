#include <sun/util/resources/ext/CurrencyNames_sv_SE.h>
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

void CurrencyNames_sv_SE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_sv_SE::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"EUR"_s,
			u"€"_s
		}),
		$$new($ObjectArray, {
			"SEK"_s,
			"kr"_s
		})
	});
}

CurrencyNames_sv_SE::CurrencyNames_sv_SE() {
}

$Class* CurrencyNames_sv_SE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sv_SE, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sv_SE, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_sv_SE",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_sv_SE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_sv_SE);
	});
	return class$;
}

$Class* CurrencyNames_sv_SE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun