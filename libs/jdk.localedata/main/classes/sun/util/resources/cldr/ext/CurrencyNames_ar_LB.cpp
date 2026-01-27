#include <sun/util/resources/cldr/ext/CurrencyNames_ar_LB.h>

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

$MethodInfo _CurrencyNames_ar_LB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_LB, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_LB, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_LB_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ar_LB",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_LB_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_LB($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_LB));
}

void CurrencyNames_ar_LB::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_LB::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("SDG"_s),
		$of("SDG"_s)
	})}));
	return data;
}

CurrencyNames_ar_LB::CurrencyNames_ar_LB() {
}

$Class* CurrencyNames_ar_LB::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_LB, name, initialize, &_CurrencyNames_ar_LB_ClassInfo_, allocate$CurrencyNames_ar_LB);
	return class$;
}

$Class* CurrencyNames_ar_LB::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun