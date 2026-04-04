#include <sun/util/resources/cldr/ext/CurrencyNames_xh.h>
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

void CurrencyNames_xh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_xh::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ZAR"_s,
			"R"_s
		}),
		$$new($ObjectArray, {
			"zar"_s,
			"iRandi yaseMzanzi Afrika"_s
		})
	}));
	return data;
}

CurrencyNames_xh::CurrencyNames_xh() {
}

$Class* CurrencyNames_xh::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_xh, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_xh, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_xh",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_xh, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_xh);
	});
	return class$;
}

$Class* CurrencyNames_xh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun