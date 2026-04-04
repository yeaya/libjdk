#include <sun/util/resources/cldr/ext/CurrencyNames_es_MX.h>
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

void CurrencyNames_es_MX::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_MX::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MRO"_s,
			"MRU"_s
		}),
		$$new($ObjectArray, {
			"MRU"_s,
			"UM"_s
		}),
		$$new($ObjectArray, {
			"MXN"_s,
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
			"kgs"_s,
			u"som kirguís"_s
		}),
		$$new($ObjectArray, {
			"khr"_s,
			"riel camboyano"_s
		}),
		$$new($ObjectArray, {
			"lak"_s,
			"kip laosiano"_s
		}),
		$$new($ObjectArray, {
			"mvr"_s,
			"rupia de Maldivas"_s
		}),
		$$new($ObjectArray, {
			"stn"_s,
			"dobra santotomense"_s
		}),
		$$new($ObjectArray, {
			"thb"_s,
			u"baht tailandés"_s
		}),
		$$new($ObjectArray, {
			"vnd"_s,
			"dong vietnamita"_s
		}),
		$$new($ObjectArray, {
			"zmw"_s,
			"kwacha zambiano"_s
		})
	}));
	return data;
}

CurrencyNames_es_MX::CurrencyNames_es_MX() {
}

$Class* CurrencyNames_es_MX::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_MX, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_MX, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_es_MX",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_es_MX, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_es_MX);
	});
	return class$;
}

$Class* CurrencyNames_es_MX::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun