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

$MethodInfo _CurrencyNames_ff_Adlm_GM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ff_Adlm_GM, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ff_Adlm_GM, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ff_Adlm_GM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ff_Adlm_GM",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ff_Adlm_GM_MethodInfo_
};

$Object* allocate$CurrencyNames_ff_Adlm_GM($Class* clazz) {
	return $of($alloc(CurrencyNames_ff_Adlm_GM));
}

void CurrencyNames_ff_Adlm_GM::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ff_Adlm_GM::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GMD"_s),
			$of("D"_s)
		}),
		$$new($ObjectArray, {
			$of("GNF"_s),
			$of("GNF"_s)
		})
	}));
	return data;
}

CurrencyNames_ff_Adlm_GM::CurrencyNames_ff_Adlm_GM() {
}

$Class* CurrencyNames_ff_Adlm_GM::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ff_Adlm_GM, name, initialize, &_CurrencyNames_ff_Adlm_GM_ClassInfo_, allocate$CurrencyNames_ff_Adlm_GM);
	return class$;
}

$Class* CurrencyNames_ff_Adlm_GM::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun