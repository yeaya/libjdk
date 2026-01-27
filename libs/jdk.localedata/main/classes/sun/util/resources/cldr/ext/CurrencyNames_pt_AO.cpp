#include <sun/util/resources/cldr/ext/CurrencyNames_pt_AO.h>

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

$MethodInfo _CurrencyNames_pt_AO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_pt_AO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_pt_AO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_pt_AO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pt_AO",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pt_AO_MethodInfo_
};

$Object* allocate$CurrencyNames_pt_AO($Class* clazz) {
	return $of($alloc(CurrencyNames_pt_AO));
}

void CurrencyNames_pt_AO::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pt_AO::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("AOA"_s),
		$of("Kz"_s)
	})}));
	return data;
}

CurrencyNames_pt_AO::CurrencyNames_pt_AO() {
}

$Class* CurrencyNames_pt_AO::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pt_AO, name, initialize, &_CurrencyNames_pt_AO_ClassInfo_, allocate$CurrencyNames_pt_AO);
	return class$;
}

$Class* CurrencyNames_pt_AO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun