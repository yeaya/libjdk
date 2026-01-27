#include <sun/util/resources/cldr/ext/CurrencyNames_fr_MU.h>

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

$MethodInfo _CurrencyNames_fr_MU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_MU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_MU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_MU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_MU",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_MU_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_MU($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_MU));
}

void CurrencyNames_fr_MU::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_MU::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MUR"_s),
		$of("Rs"_s)
	})}));
	return data;
}

CurrencyNames_fr_MU::CurrencyNames_fr_MU() {
}

$Class* CurrencyNames_fr_MU::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_MU, name, initialize, &_CurrencyNames_fr_MU_ClassInfo_, allocate$CurrencyNames_fr_MU);
	return class$;
}

$Class* CurrencyNames_fr_MU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun