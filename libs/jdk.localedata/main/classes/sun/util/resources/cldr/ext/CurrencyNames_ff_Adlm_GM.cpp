#include <sun/util/resources/cldr/ext/CurrencyNames_ff_Adlm_GM.h>
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

void CurrencyNames_ff_Adlm_GM::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ff_Adlm_GM::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"GMD"_s,
			"D"_s
		}),
		$$new($ObjectArray, {
			"GNF"_s,
			"GNF"_s
		})
	}));
	return data;
}

CurrencyNames_ff_Adlm_GM::CurrencyNames_ff_Adlm_GM() {
}

$Class* CurrencyNames_ff_Adlm_GM::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ff_Adlm_GM, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ff_Adlm_GM, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_ff_Adlm_GM",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_ff_Adlm_GM, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_ff_Adlm_GM);
	});
	return class$;
}

$Class* CurrencyNames_ff_Adlm_GM::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun