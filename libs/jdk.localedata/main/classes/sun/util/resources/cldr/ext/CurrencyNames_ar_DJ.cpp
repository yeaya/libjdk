#include <sun/util/resources/cldr/ext/CurrencyNames_ar_DJ.h>

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

$MethodInfo _CurrencyNames_ar_DJ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ar_DJ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ar_DJ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ar_DJ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ar_DJ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ar_DJ_MethodInfo_
};

$Object* allocate$CurrencyNames_ar_DJ($Class* clazz) {
	return $of($alloc(CurrencyNames_ar_DJ));
}

void CurrencyNames_ar_DJ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ar_DJ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("DJF"_s),
		$of("Fdj"_s)
	})}));
	return data;
}

CurrencyNames_ar_DJ::CurrencyNames_ar_DJ() {
}

$Class* CurrencyNames_ar_DJ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ar_DJ, name, initialize, &_CurrencyNames_ar_DJ_ClassInfo_, allocate$CurrencyNames_ar_DJ);
	return class$;
}

$Class* CurrencyNames_ar_DJ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun