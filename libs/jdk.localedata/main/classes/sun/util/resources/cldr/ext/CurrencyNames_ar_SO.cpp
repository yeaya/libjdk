#include <sun/util/resources/cldr/ext/CurrencyNames_ar_SO.h>

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

$MethodInfo _CurrencyNames_ar_SO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_SO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_SO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_SO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ar_SO",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_SO_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_SO($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_SO));
}

void CurrencyNames_ar_SO::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_SO::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("SOS"_s),
		$of("S"_s)
	})}));
	return data;
}

CurrencyNames_ar_SO::CurrencyNames_ar_SO() {
}

$Class* CurrencyNames_ar_SO::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_SO, name, initialize, &_CurrencyNames_ar_SO_ClassInfo_, allocate$CurrencyNames_ar_SO);
	return class$;
}

$Class* CurrencyNames_ar_SO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun