#include <sun/util/resources/cldr/ext/CurrencyNames_ta_LK.h>

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

$MethodInfo _CurrencyNames_ta_LK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ta_LK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ta_LK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ta_LK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ta_LK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ta_LK_MethodInfo_
};

$Object* allocate$CurrencyNames_ta_LK($Class* clazz) {
	return $of($alloc(CurrencyNames_ta_LK));
}

void CurrencyNames_ta_LK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ta_LK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("LKR"_s),
		$of("Rs."_s)
	})}));
	return data;
}

CurrencyNames_ta_LK::CurrencyNames_ta_LK() {
}

$Class* CurrencyNames_ta_LK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ta_LK, name, initialize, &_CurrencyNames_ta_LK_ClassInfo_, allocate$CurrencyNames_ta_LK);
	return class$;
}

$Class* CurrencyNames_ta_LK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun