#include <sun/util/resources/cldr/ext/CurrencyNames_fr_MR.h>

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

$MethodInfo _CurrencyNames_fr_MR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_MR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_MR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_MR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_MR",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_MR_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_MR($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_MR));
}

void CurrencyNames_fr_MR::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_MR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MRU"_s),
		$of("UM"_s)
	})}));
	return data;
}

CurrencyNames_fr_MR::CurrencyNames_fr_MR() {
}

$Class* CurrencyNames_fr_MR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_MR, name, initialize, &_CurrencyNames_fr_MR_ClassInfo_, allocate$CurrencyNames_fr_MR);
	return class$;
}

$Class* CurrencyNames_fr_MR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun