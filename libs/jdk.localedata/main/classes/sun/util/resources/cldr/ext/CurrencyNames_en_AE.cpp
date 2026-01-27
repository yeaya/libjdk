#include <sun/util/resources/cldr/ext/CurrencyNames_en_AE.h>

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

$MethodInfo _CurrencyNames_en_AE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_AE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_AE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_AE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_AE",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_AE_MethodInfo_
};

$Object* allocate$CurrencyNames_en_AE($Class* clazz) {
	return $of($alloc(CurrencyNames_en_AE));
}

void CurrencyNames_en_AE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_AE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("AED"_s),
		$of("AED"_s)
	})}));
	return data;
}

CurrencyNames_en_AE::CurrencyNames_en_AE() {
}

$Class* CurrencyNames_en_AE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_AE, name, initialize, &_CurrencyNames_en_AE_ClassInfo_, allocate$CurrencyNames_en_AE);
	return class$;
}

$Class* CurrencyNames_en_AE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun