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

$MethodInfo _CurrencyNames_ff_Adlm_MR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ff_Adlm_MR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ff_Adlm_MR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ff_Adlm_MR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ff_Adlm_MR",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ff_Adlm_MR_MethodInfo_
};

$Object* allocate$CurrencyNames_ff_Adlm_MR($Class* clazz) {
	return $of($alloc(CurrencyNames_ff_Adlm_MR));
}

void CurrencyNames_ff_Adlm_MR::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ff_Adlm_MR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GNF"_s),
			$of("GNF"_s)
		}),
		$$new($ObjectArray, {
			$of("MRU"_s),
			$of("UM"_s)
		})
	}));
	return data;
}

CurrencyNames_ff_Adlm_MR::CurrencyNames_ff_Adlm_MR() {
}

$Class* CurrencyNames_ff_Adlm_MR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ff_Adlm_MR, name, initialize, &_CurrencyNames_ff_Adlm_MR_ClassInfo_, allocate$CurrencyNames_ff_Adlm_MR);
	return class$;
}

$Class* CurrencyNames_ff_Adlm_MR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun