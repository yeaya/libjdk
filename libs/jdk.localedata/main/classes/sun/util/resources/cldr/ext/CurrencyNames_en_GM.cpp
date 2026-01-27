#include <sun/util/resources/cldr/ext/CurrencyNames_en_GM.h>

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

$MethodInfo _CurrencyNames_en_GM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_GM, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_GM, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_GM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_GM",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_GM_MethodInfo_
};

$Object* allocate$CurrencyNames_en_GM($Class* clazz) {
	return $of($alloc(CurrencyNames_en_GM));
}

void CurrencyNames_en_GM::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_GM::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("GMD"_s),
		$of("D"_s)
	})}));
	return data;
}

CurrencyNames_en_GM::CurrencyNames_en_GM() {
}

$Class* CurrencyNames_en_GM::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_GM, name, initialize, &_CurrencyNames_en_GM_ClassInfo_, allocate$CurrencyNames_en_GM);
	return class$;
}

$Class* CurrencyNames_en_GM::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun