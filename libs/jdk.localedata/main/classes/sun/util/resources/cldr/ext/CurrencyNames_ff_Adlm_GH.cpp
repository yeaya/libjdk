#include <sun/util/resources/cldr/ext/CurrencyNames_ff_Adlm_GH.h>

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

$MethodInfo _CurrencyNames_ff_Adlm_GH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ff_Adlm_GH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ff_Adlm_GH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ff_Adlm_GH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ff_Adlm_GH",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ff_Adlm_GH_MethodInfo_
};

$Object* allocate$CurrencyNames_ff_Adlm_GH($Class* clazz) {
	return $of($alloc(CurrencyNames_ff_Adlm_GH));
}

void CurrencyNames_ff_Adlm_GH::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ff_Adlm_GH::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GHS"_s),
			$of(u"GH₵"_s)
		}),
		$$new($ObjectArray, {
			$of("GNF"_s),
			$of("GNF"_s)
		})
	}));
	return data;
}

CurrencyNames_ff_Adlm_GH::CurrencyNames_ff_Adlm_GH() {
}

$Class* CurrencyNames_ff_Adlm_GH::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ff_Adlm_GH, name, initialize, &_CurrencyNames_ff_Adlm_GH_ClassInfo_, allocate$CurrencyNames_ff_Adlm_GH);
	return class$;
}

$Class* CurrencyNames_ff_Adlm_GH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun