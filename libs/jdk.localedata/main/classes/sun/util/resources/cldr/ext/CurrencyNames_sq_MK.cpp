#include <sun/util/resources/cldr/ext/CurrencyNames_sq_MK.h>

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

$MethodInfo _CurrencyNames_sq_MK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sq_MK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sq_MK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sq_MK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sq_MK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sq_MK_MethodInfo_
};

$Object* allocate$CurrencyNames_sq_MK($Class* clazz) {
	return $of($alloc(CurrencyNames_sq_MK));
}

void CurrencyNames_sq_MK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sq_MK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MKD"_s),
		$of("den"_s)
	})}));
	return data;
}

CurrencyNames_sq_MK::CurrencyNames_sq_MK() {
}

$Class* CurrencyNames_sq_MK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sq_MK, name, initialize, &_CurrencyNames_sq_MK_ClassInfo_, allocate$CurrencyNames_sq_MK);
	return class$;
}

$Class* CurrencyNames_sq_MK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun