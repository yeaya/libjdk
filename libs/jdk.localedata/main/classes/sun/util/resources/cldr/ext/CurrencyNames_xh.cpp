#include <sun/util/resources/cldr/ext/CurrencyNames_xh.h>

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

$MethodInfo _CurrencyNames_xh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_xh, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_xh, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_xh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_xh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_xh_MethodInfo_
};

$Object* allocate$CurrencyNames_xh($Class* clazz) {
	return $of($alloc(CurrencyNames_xh));
}

void CurrencyNames_xh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_xh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ZAR"_s),
			$of("R"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("iRandi yaseMzanzi Afrika"_s)
		})
	}));
	return data;
}

CurrencyNames_xh::CurrencyNames_xh() {
}

$Class* CurrencyNames_xh::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_xh, name, initialize, &_CurrencyNames_xh_ClassInfo_, allocate$CurrencyNames_xh);
	return class$;
}

$Class* CurrencyNames_xh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun