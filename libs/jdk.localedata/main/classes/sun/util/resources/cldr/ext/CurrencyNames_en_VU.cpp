#include <sun/util/resources/cldr/ext/CurrencyNames_en_VU.h>

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

$MethodInfo _CurrencyNames_en_VU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_VU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_VU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_VU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_VU",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_VU_MethodInfo_
};

$Object* allocate$CurrencyNames_en_VU($Class* clazz) {
	return $of($alloc(CurrencyNames_en_VU));
}

void CurrencyNames_en_VU::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_VU::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("VUV"_s),
		$of("VT"_s)
	})}));
	return data;
}

CurrencyNames_en_VU::CurrencyNames_en_VU() {
}

$Class* CurrencyNames_en_VU::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_VU, name, initialize, &_CurrencyNames_en_VU_ClassInfo_, allocate$CurrencyNames_en_VU);
	return class$;
}

$Class* CurrencyNames_en_VU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun