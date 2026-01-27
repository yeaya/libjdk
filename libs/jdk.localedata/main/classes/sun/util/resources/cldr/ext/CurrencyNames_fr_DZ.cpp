#include <sun/util/resources/cldr/ext/CurrencyNames_fr_DZ.h>

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

$MethodInfo _CurrencyNames_fr_DZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_DZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_DZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_DZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_DZ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_DZ_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_DZ($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_DZ));
}

void CurrencyNames_fr_DZ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_DZ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("DZD"_s),
		$of("DA"_s)
	})}));
	return data;
}

CurrencyNames_fr_DZ::CurrencyNames_fr_DZ() {
}

$Class* CurrencyNames_fr_DZ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_DZ, name, initialize, &_CurrencyNames_fr_DZ_ClassInfo_, allocate$CurrencyNames_fr_DZ);
	return class$;
}

$Class* CurrencyNames_fr_DZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun