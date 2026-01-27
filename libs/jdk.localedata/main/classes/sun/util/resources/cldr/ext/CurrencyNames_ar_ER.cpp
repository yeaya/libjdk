#include <sun/util/resources/cldr/ext/CurrencyNames_ar_ER.h>

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

$MethodInfo _CurrencyNames_ar_ER_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_ER, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_ER, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_ER_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ar_ER",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_ER_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_ER($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_ER));
}

void CurrencyNames_ar_ER::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_ER::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("ERN"_s),
		$of("Nfk"_s)
	})}));
	return data;
}

CurrencyNames_ar_ER::CurrencyNames_ar_ER() {
}

$Class* CurrencyNames_ar_ER::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_ER, name, initialize, &_CurrencyNames_ar_ER_ClassInfo_, allocate$CurrencyNames_ar_ER);
	return class$;
}

$Class* CurrencyNames_ar_ER::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun