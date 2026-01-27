#include <sun/util/resources/cldr/ext/CurrencyNames_en_MW.h>

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

$MethodInfo _CurrencyNames_en_MW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_MW, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_MW, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_MW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_MW",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_MW_MethodInfo_
};

$Object* allocate$CurrencyNames_en_MW($Class* clazz) {
	return $of($alloc(CurrencyNames_en_MW));
}

void CurrencyNames_en_MW::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_MW::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MWK"_s),
		$of("MK"_s)
	})}));
	return data;
}

CurrencyNames_en_MW::CurrencyNames_en_MW() {
}

$Class* CurrencyNames_en_MW::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_MW, name, initialize, &_CurrencyNames_en_MW_ClassInfo_, allocate$CurrencyNames_en_MW);
	return class$;
}

$Class* CurrencyNames_en_MW::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun