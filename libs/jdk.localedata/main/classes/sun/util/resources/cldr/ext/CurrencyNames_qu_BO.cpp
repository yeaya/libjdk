#include <sun/util/resources/cldr/ext/CurrencyNames_qu_BO.h>
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

void CurrencyNames_qu_BO::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_qu_BO::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"BOB"_s,
			"Bs"_s
		}),
		$$new($ObjectArray, {
			"PEN"_s,
			"PEN"_s
		})
	}));
	return data;
}

CurrencyNames_qu_BO::CurrencyNames_qu_BO() {
}

$Class* CurrencyNames_qu_BO::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_qu_BO, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_qu_BO, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_qu_BO",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_qu_BO, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_qu_BO);
	});
	return class$;
}

$Class* CurrencyNames_qu_BO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun