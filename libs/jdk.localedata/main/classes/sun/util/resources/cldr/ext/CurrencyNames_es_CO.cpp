#include <sun/util/resources/cldr/ext/CurrencyNames_es_CO.h>
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

void CurrencyNames_es_CO::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_CO::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"COP"_s,
			"$"_s
		}),
		$$new($ObjectArray, {
			"USD"_s,
			"US$"_s
		})
	}));
	return data;
}

CurrencyNames_es_CO::CurrencyNames_es_CO() {
}

$Class* CurrencyNames_es_CO::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_CO, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_CO, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_es_CO",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_es_CO, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_es_CO);
	});
	return class$;
}

$Class* CurrencyNames_es_CO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun