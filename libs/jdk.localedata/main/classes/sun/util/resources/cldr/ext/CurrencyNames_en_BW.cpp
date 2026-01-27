#include <sun/util/resources/cldr/ext/CurrencyNames_en_BW.h>

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

$MethodInfo _CurrencyNames_en_BW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_BW, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_BW, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_BW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_BW",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_BW_MethodInfo_
};

$Object* allocate$CurrencyNames_en_BW($Class* clazz) {
	return $of($alloc(CurrencyNames_en_BW));
}

void CurrencyNames_en_BW::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_BW::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("BWP"_s),
		$of("P"_s)
	})}));
	return data;
}

CurrencyNames_en_BW::CurrencyNames_en_BW() {
}

$Class* CurrencyNames_en_BW::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_BW, name, initialize, &_CurrencyNames_en_BW_ClassInfo_, allocate$CurrencyNames_en_BW);
	return class$;
}

$Class* CurrencyNames_en_BW::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun