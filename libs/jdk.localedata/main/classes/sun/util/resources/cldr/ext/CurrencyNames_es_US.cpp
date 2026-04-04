#include <sun/util/resources/cldr/ext/CurrencyNames_es_US.h>
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

void CurrencyNames_es_US::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_US::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"JPY"_s,
			u"¥"_s
		}),
		$$new($ObjectArray, {
			"USD"_s,
			"$"_s
		}),
		$$new($ObjectArray, {
			"bdt"_s,
			u"taka bangladesí"_s
		}),
		$$new($ObjectArray, {
			"btn"_s,
			u"ngultrum butanés"_s
		}),
		$$new($ObjectArray, {
			"etb"_s,
			"birr"_s
		}),
		$$new($ObjectArray, {
			"lak"_s,
			"kip laosiano"_s
		}),
		$$new($ObjectArray, {
			"thb"_s,
			"bat"_s
		}),
		$$new($ObjectArray, {
			"uzs"_s,
			"sum"_s
		}),
		$$new($ObjectArray, {
			"vnd"_s,
			"dong vietnamita"_s
		}),
		$$new($ObjectArray, {
			"xaf"_s,
			u"franco CFA de África central"_s
		}),
		$$new($ObjectArray, {
			"zmw"_s,
			"kwacha zambiano"_s
		})
	}));
	return data;
}

CurrencyNames_es_US::CurrencyNames_es_US() {
}

$Class* CurrencyNames_es_US::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_US, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_US, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_es_US",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_es_US, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_es_US);
	});
	return class$;
}

$Class* CurrencyNames_es_US::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun