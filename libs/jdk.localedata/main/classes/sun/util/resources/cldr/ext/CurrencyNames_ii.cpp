#include <sun/util/resources/cldr/ext/CurrencyNames_ii.h>
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

void CurrencyNames_ii::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ii::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"CNY"_s,
			u"¥"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"ꅉꀋꐚꌠꌋꆀꎆꃀꀋꈁꀐꌠ"_s
		})
	}));
	return data;
}

CurrencyNames_ii::CurrencyNames_ii() {
}

$Class* CurrencyNames_ii::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ii, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ii, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_ii",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_ii, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_ii);
	});
	return class$;
}

$Class* CurrencyNames_ii::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun