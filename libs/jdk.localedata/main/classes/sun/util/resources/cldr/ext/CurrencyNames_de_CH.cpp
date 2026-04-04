#include <sun/util/resources/cldr/ext/CurrencyNames_de_CH.h>
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

void CurrencyNames_de_CH::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_de_CH::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"EUR"_s,
			"EUR"_s
		}),
		$$new($ObjectArray, {
			"byn"_s,
			"Weissrussischer Rubel"_s
		}),
		$$new($ObjectArray, {
			"byr"_s,
			u"Weissrussischer Rubel (2000–2016)"_s
		}),
		$$new($ObjectArray, {
			"stn"_s,
			u"São-toméischer Dobra (2018)"_s
		})
	}));
	return data;
}

CurrencyNames_de_CH::CurrencyNames_de_CH() {
}

$Class* CurrencyNames_de_CH::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_de_CH, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_de_CH, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_de_CH",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_de_CH, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_de_CH);
	});
	return class$;
}

$Class* CurrencyNames_de_CH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun