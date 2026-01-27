#include <sun/util/resources/cldr/ext/CurrencyNames_az_Cyrl.h>

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

$MethodInfo _CurrencyNames_az_Cyrl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_az_Cyrl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_az_Cyrl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_az_Cyrl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_az_Cyrl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_az_Cyrl_MethodInfo_
};

$Object* allocate$CurrencyNames_az_Cyrl($Class* clazz) {
	return $of($alloc(CurrencyNames_az_Cyrl));
}

void CurrencyNames_az_Cyrl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_az_Cyrl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("AZN"_s),
		$of(u"₼"_s)
	})}));
	return data;
}

CurrencyNames_az_Cyrl::CurrencyNames_az_Cyrl() {
}

$Class* CurrencyNames_az_Cyrl::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_az_Cyrl, name, initialize, &_CurrencyNames_az_Cyrl_ClassInfo_, allocate$CurrencyNames_az_Cyrl);
	return class$;
}

$Class* CurrencyNames_az_Cyrl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun