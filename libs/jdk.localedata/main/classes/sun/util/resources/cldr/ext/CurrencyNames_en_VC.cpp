#include <sun/util/resources/cldr/ext/CurrencyNames_en_VC.h>

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

$MethodInfo _CurrencyNames_en_VC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_VC, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_VC, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_VC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_VC",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_VC_MethodInfo_
};

$Object* allocate$CurrencyNames_en_VC($Class* clazz) {
	return $of($alloc(CurrencyNames_en_VC));
}

void CurrencyNames_en_VC::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_VC::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("XCD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_en_VC::CurrencyNames_en_VC() {
}

$Class* CurrencyNames_en_VC::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_VC, name, initialize, &_CurrencyNames_en_VC_ClassInfo_, allocate$CurrencyNames_en_VC);
	return class$;
}

$Class* CurrencyNames_en_VC::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun