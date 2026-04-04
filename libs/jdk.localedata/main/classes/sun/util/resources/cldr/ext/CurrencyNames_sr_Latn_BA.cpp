#include <sun/util/resources/cldr/ext/CurrencyNames_sr_Latn_BA.h>
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

void CurrencyNames_sr_Latn_BA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sr_Latn_BA::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"bam"_s,
			u"Bosanskohercegovačka konvertibilna marka"_s
		}),
		$$new($ObjectArray, {
			"byn"_s,
			"Bjeloruska rublja"_s
		}),
		$$new($ObjectArray, {
			"kpw"_s,
			"Sjevernokorejski von"_s
		})
	}));
	return data;
}

CurrencyNames_sr_Latn_BA::CurrencyNames_sr_Latn_BA() {
}

$Class* CurrencyNames_sr_Latn_BA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sr_Latn_BA, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sr_Latn_BA, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_sr_Latn_BA",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_sr_Latn_BA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_sr_Latn_BA);
	});
	return class$;
}

$Class* CurrencyNames_sr_Latn_BA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun