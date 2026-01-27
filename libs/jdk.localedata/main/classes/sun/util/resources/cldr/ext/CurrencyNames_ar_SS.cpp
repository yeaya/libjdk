#include <sun/util/resources/cldr/ext/CurrencyNames_ar_SS.h>

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

$MethodInfo _CurrencyNames_ar_SS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_SS, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_SS, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_SS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ar_SS",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_SS_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_SS($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_SS));
}

void CurrencyNames_ar_SS::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_SS::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of(u"GB£"_s)
		}),
		$$new($ObjectArray, {
			$of("SSP"_s),
			$of(u"£"_s)
		})
	}));
	return data;
}

CurrencyNames_ar_SS::CurrencyNames_ar_SS() {
}

$Class* CurrencyNames_ar_SS::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_SS, name, initialize, &_CurrencyNames_ar_SS_ClassInfo_, allocate$CurrencyNames_ar_SS);
	return class$;
}

$Class* CurrencyNames_ar_SS::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun