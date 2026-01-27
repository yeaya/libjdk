#include <sun/util/resources/cldr/ext/CurrencyNames_ta_MY.h>

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

$MethodInfo _CurrencyNames_ta_MY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ta_MY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ta_MY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ta_MY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ta_MY",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ta_MY_MethodInfo_
};

$Object* allocate$CurrencyNames_ta_MY($Class* clazz) {
	return $of($alloc(CurrencyNames_ta_MY));
}

void CurrencyNames_ta_MY::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ta_MY::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MYR"_s),
			$of("RM"_s)
		}),
		$$new($ObjectArray, {
			$of("SGD"_s),
			$of("S$"_s)
		})
	}));
	return data;
}

CurrencyNames_ta_MY::CurrencyNames_ta_MY() {
}

$Class* CurrencyNames_ta_MY::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ta_MY, name, initialize, &_CurrencyNames_ta_MY_ClassInfo_, allocate$CurrencyNames_ta_MY);
	return class$;
}

$Class* CurrencyNames_ta_MY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun