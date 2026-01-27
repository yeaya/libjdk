#include <sun/util/resources/cldr/ext/CurrencyNames_ff_Adlm_LR.h>

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

$MethodInfo _CurrencyNames_ff_Adlm_LR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ff_Adlm_LR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ff_Adlm_LR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ff_Adlm_LR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ff_Adlm_LR",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ff_Adlm_LR_MethodInfo_
};

$Object* allocate$CurrencyNames_ff_Adlm_LR($Class* clazz) {
	return $of($alloc(CurrencyNames_ff_Adlm_LR));
}

void CurrencyNames_ff_Adlm_LR::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ff_Adlm_LR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GNF"_s),
			$of("GNF"_s)
		}),
		$$new($ObjectArray, {
			$of("LRD"_s),
			$of("$"_s)
		})
	}));
	return data;
}

CurrencyNames_ff_Adlm_LR::CurrencyNames_ff_Adlm_LR() {
}

$Class* CurrencyNames_ff_Adlm_LR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ff_Adlm_LR, name, initialize, &_CurrencyNames_ff_Adlm_LR_ClassInfo_, allocate$CurrencyNames_ff_Adlm_LR);
	return class$;
}

$Class* CurrencyNames_ff_Adlm_LR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun