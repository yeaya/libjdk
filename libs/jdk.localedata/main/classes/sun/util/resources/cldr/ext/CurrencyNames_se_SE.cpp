#include <sun/util/resources/cldr/ext/CurrencyNames_se_SE.h>
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

void CurrencyNames_se_SE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_se_SE::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"NOK"_s,
			"Nkr"_s
		}),
		$$new($ObjectArray, {
			"SEK"_s,
			"kr"_s
		})
	}));
	return data;
}

CurrencyNames_se_SE::CurrencyNames_se_SE() {
}

$Class* CurrencyNames_se_SE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_se_SE, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_se_SE, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_se_SE",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_se_SE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_se_SE);
	});
	return class$;
}

$Class* CurrencyNames_se_SE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun