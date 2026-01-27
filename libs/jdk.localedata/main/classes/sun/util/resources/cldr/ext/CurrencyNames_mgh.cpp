#include <sun/util/resources/cldr/ext/CurrencyNames_mgh.h>

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

$MethodInfo _CurrencyNames_mgh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mgh, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mgh, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_mgh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mgh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mgh_MethodInfo_
};

$Object* allocate$CurrencyNames_mgh($Class* clazz) {
	return $of($alloc(CurrencyNames_mgh));
}

void CurrencyNames_mgh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mgh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MZN"_s),
		$of("MTn"_s)
	})}));
	return data;
}

CurrencyNames_mgh::CurrencyNames_mgh() {
}

$Class* CurrencyNames_mgh::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mgh, name, initialize, &_CurrencyNames_mgh_ClassInfo_, allocate$CurrencyNames_mgh);
	return class$;
}

$Class* CurrencyNames_mgh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun