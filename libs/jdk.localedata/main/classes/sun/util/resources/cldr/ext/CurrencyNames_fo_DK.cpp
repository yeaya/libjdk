#include <sun/util/resources/cldr/ext/CurrencyNames_fo_DK.h>

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

$MethodInfo _CurrencyNames_fo_DK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fo_DK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fo_DK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fo_DK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fo_DK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fo_DK_MethodInfo_
};

$Object* allocate$CurrencyNames_fo_DK($Class* clazz) {
	return $of($alloc(CurrencyNames_fo_DK));
}

void CurrencyNames_fo_DK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fo_DK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("DKK"_s),
		$of("kr."_s)
	})}));
	return data;
}

CurrencyNames_fo_DK::CurrencyNames_fo_DK() {
}

$Class* CurrencyNames_fo_DK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fo_DK, name, initialize, &_CurrencyNames_fo_DK_ClassInfo_, allocate$CurrencyNames_fo_DK);
	return class$;
}

$Class* CurrencyNames_fo_DK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun