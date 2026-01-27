#include <sun/util/resources/cldr/ext/CurrencyNames_ff_Adlm_SN.h>

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

$MethodInfo _CurrencyNames_ff_Adlm_SN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ff_Adlm_SN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ff_Adlm_SN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ff_Adlm_SN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ff_Adlm_SN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ff_Adlm_SN_MethodInfo_
};

$Object* allocate$CurrencyNames_ff_Adlm_SN($Class* clazz) {
	return $of($alloc(CurrencyNames_ff_Adlm_SN));
}

void CurrencyNames_ff_Adlm_SN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ff_Adlm_SN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("GNF"_s),
		$of("GNF"_s)
	})}));
	return data;
}

CurrencyNames_ff_Adlm_SN::CurrencyNames_ff_Adlm_SN() {
}

$Class* CurrencyNames_ff_Adlm_SN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ff_Adlm_SN, name, initialize, &_CurrencyNames_ff_Adlm_SN_ClassInfo_, allocate$CurrencyNames_ff_Adlm_SN);
	return class$;
}

$Class* CurrencyNames_ff_Adlm_SN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun