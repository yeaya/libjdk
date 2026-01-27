#include <sun/util/resources/cldr/ext/CurrencyNames_af_NA.h>

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

$MethodInfo _CurrencyNames_af_NA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_af_NA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_af_NA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_af_NA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_af_NA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_af_NA_MethodInfo_
};

$Object* allocate$CurrencyNames_af_NA($Class* clazz) {
	return $of($alloc(CurrencyNames_af_NA));
}

void CurrencyNames_af_NA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_af_NA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NAD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_af_NA::CurrencyNames_af_NA() {
}

$Class* CurrencyNames_af_NA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_af_NA, name, initialize, &_CurrencyNames_af_NA_ClassInfo_, allocate$CurrencyNames_af_NA);
	return class$;
}

$Class* CurrencyNames_af_NA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun