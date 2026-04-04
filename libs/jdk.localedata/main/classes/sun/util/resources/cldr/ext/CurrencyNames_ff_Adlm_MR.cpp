#include <sun/util/resources/cldr/ext/CurrencyNames_ff_Adlm_MR.h>
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

void CurrencyNames_ff_Adlm_MR::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ff_Adlm_MR::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"GNF"_s,
			"GNF"_s
		}),
		$$new($ObjectArray, {
			"MRU"_s,
			"UM"_s
		})
	}));
	return data;
}

CurrencyNames_ff_Adlm_MR::CurrencyNames_ff_Adlm_MR() {
}

$Class* CurrencyNames_ff_Adlm_MR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ff_Adlm_MR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ff_Adlm_MR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_ff_Adlm_MR",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_ff_Adlm_MR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_ff_Adlm_MR);
	});
	return class$;
}

$Class* CurrencyNames_ff_Adlm_MR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun