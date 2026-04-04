#include <sun/util/resources/cldr/ext/CurrencyNames_bo_IN.h>
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

void CurrencyNames_bo_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_bo_IN::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		"CNY"_s,
		u"CN¥"_s
	})}));
	return data;
}

CurrencyNames_bo_IN::CurrencyNames_bo_IN() {
}

$Class* CurrencyNames_bo_IN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_bo_IN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_bo_IN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_bo_IN",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_bo_IN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_bo_IN);
	});
	return class$;
}

$Class* CurrencyNames_bo_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun