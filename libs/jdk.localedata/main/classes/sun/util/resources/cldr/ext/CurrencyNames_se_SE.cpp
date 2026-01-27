#include <sun/util/resources/cldr/ext/CurrencyNames_se_SE.h>

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

$MethodInfo _CurrencyNames_se_SE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_se_SE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_se_SE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_se_SE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_se_SE",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_se_SE_MethodInfo_
};

$Object* allocate$CurrencyNames_se_SE($Class* clazz) {
	return $of($alloc(CurrencyNames_se_SE));
}

void CurrencyNames_se_SE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_se_SE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NOK"_s),
			$of("Nkr"_s)
		}),
		$$new($ObjectArray, {
			$of("SEK"_s),
			$of("kr"_s)
		})
	}));
	return data;
}

CurrencyNames_se_SE::CurrencyNames_se_SE() {
}

$Class* CurrencyNames_se_SE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_se_SE, name, initialize, &_CurrencyNames_se_SE_ClassInfo_, allocate$CurrencyNames_se_SE);
	return class$;
}

$Class* CurrencyNames_se_SE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun