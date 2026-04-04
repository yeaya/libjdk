#include <sun/util/resources/cldr/ext/CurrencyNames_es_GQ.h>
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

void CurrencyNames_es_GQ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_GQ::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		"XAF"_s,
		"FCFA"_s
	})}));
	return data;
}

CurrencyNames_es_GQ::CurrencyNames_es_GQ() {
}

$Class* CurrencyNames_es_GQ::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_GQ, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_GQ, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_es_GQ",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_es_GQ, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_es_GQ);
	});
	return class$;
}

$Class* CurrencyNames_es_GQ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun