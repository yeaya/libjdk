#include <sun/util/resources/cldr/ext/CurrencyNames_pt_MZ.h>

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

$MethodInfo _CurrencyNames_pt_MZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_pt_MZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_pt_MZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_pt_MZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pt_MZ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pt_MZ_MethodInfo_
};

$Object* allocate$CurrencyNames_pt_MZ($Class* clazz) {
	return $of($alloc(CurrencyNames_pt_MZ));
}

void CurrencyNames_pt_MZ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pt_MZ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MZN"_s),
		$of("MTn"_s)
	})}));
	return data;
}

CurrencyNames_pt_MZ::CurrencyNames_pt_MZ() {
}

$Class* CurrencyNames_pt_MZ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pt_MZ, name, initialize, &_CurrencyNames_pt_MZ_ClassInfo_, allocate$CurrencyNames_pt_MZ);
	return class$;
}

$Class* CurrencyNames_pt_MZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun