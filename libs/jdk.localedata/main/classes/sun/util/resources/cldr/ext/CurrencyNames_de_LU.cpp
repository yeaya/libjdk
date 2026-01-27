#include <sun/util/resources/cldr/ext/CurrencyNames_de_LU.h>

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

$MethodInfo _CurrencyNames_de_LU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_de_LU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_de_LU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_de_LU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_de_LU",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_de_LU_MethodInfo_
};

$Object* allocate$CurrencyNames_de_LU($Class* clazz) {
	return $of($alloc(CurrencyNames_de_LU));
}

void CurrencyNames_de_LU::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_de_LU::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("LUF"_s),
		$of("F"_s)
	})}));
	return data;
}

CurrencyNames_de_LU::CurrencyNames_de_LU() {
}

$Class* CurrencyNames_de_LU::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_de_LU, name, initialize, &_CurrencyNames_de_LU_ClassInfo_, allocate$CurrencyNames_de_LU);
	return class$;
}

$Class* CurrencyNames_de_LU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun