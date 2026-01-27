#include <sun/util/resources/cldr/ext/CurrencyNames_en_MU.h>

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

$MethodInfo _CurrencyNames_en_MU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_MU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_MU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_MU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_MU",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_MU_MethodInfo_
};

$Object* allocate$CurrencyNames_en_MU($Class* clazz) {
	return $of($alloc(CurrencyNames_en_MU));
}

void CurrencyNames_en_MU::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_MU::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MUR"_s),
		$of("Rs"_s)
	})}));
	return data;
}

CurrencyNames_en_MU::CurrencyNames_en_MU() {
}

$Class* CurrencyNames_en_MU::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_MU, name, initialize, &_CurrencyNames_en_MU_ClassInfo_, allocate$CurrencyNames_en_MU);
	return class$;
}

$Class* CurrencyNames_en_MU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun