#include <sun/util/resources/cldr/ext/CurrencyNames_es_GT.h>
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

void CurrencyNames_es_GT::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_GT::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"GTQ"_s,
			"Q"_s
		}),
		$$new($ObjectArray, {
			"gtq"_s,
			"quetzal"_s
		})
	}));
	return data;
}

CurrencyNames_es_GT::CurrencyNames_es_GT() {
}

$Class* CurrencyNames_es_GT::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_GT, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_GT, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_es_GT",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_es_GT, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_es_GT);
	});
	return class$;
}

$Class* CurrencyNames_es_GT::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun