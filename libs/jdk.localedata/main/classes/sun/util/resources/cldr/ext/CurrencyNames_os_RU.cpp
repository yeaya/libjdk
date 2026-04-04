#include <sun/util/resources/cldr/ext/CurrencyNames_os_RU.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

void CurrencyNames_os_RU::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_os_RU::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"GEL"_s,
			"GEL"_s
		}),
		$$new($ObjectArray, {
			"RUB"_s,
			u"₽"_s
		})
	}));
	return data;
}

CurrencyNames_os_RU::CurrencyNames_os_RU() {
}

$Class* CurrencyNames_os_RU::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_os_RU, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_os_RU, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_os_RU",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_os_RU, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_os_RU);
	});
	return class$;
}

$Class* CurrencyNames_os_RU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun