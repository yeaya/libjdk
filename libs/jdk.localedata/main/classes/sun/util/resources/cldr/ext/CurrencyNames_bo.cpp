#include <sun/util/resources/cldr/ext/CurrencyNames_bo.h>
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

void CurrencyNames_bo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_bo::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"CNY"_s,
			u"¥"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			u"ཡུ་ཨན་"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"རྒྱ་གར་སྒོར་"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"ཨ་རིའི་སྒོར་"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"མ་རྟོགས་པའི་ནུས་མེད་དངུལ་ལོར"_s
		})
	}));
	return data;
}

CurrencyNames_bo::CurrencyNames_bo() {
}

$Class* CurrencyNames_bo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_bo, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_bo, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_bo",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_bo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_bo);
	});
	return class$;
}

$Class* CurrencyNames_bo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun