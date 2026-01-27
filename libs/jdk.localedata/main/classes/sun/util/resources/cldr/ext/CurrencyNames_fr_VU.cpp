#include <sun/util/resources/cldr/ext/CurrencyNames_fr_VU.h>

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

$MethodInfo _CurrencyNames_fr_VU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_VU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_VU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_VU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_VU",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_VU_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_VU($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_VU));
}

void CurrencyNames_fr_VU::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_VU::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("VUV"_s),
		$of("VT"_s)
	})}));
	return data;
}

CurrencyNames_fr_VU::CurrencyNames_fr_VU() {
}

$Class* CurrencyNames_fr_VU::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_VU, name, initialize, &_CurrencyNames_fr_VU_ClassInfo_, allocate$CurrencyNames_fr_VU);
	return class$;
}

$Class* CurrencyNames_fr_VU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun