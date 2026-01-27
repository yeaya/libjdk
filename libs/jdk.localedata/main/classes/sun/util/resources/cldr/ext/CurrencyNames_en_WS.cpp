#include <sun/util/resources/cldr/ext/CurrencyNames_en_WS.h>

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

$MethodInfo _CurrencyNames_en_WS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_WS, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_WS, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_WS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_WS",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_WS_MethodInfo_
};

$Object* allocate$CurrencyNames_en_WS($Class* clazz) {
	return $of($alloc(CurrencyNames_en_WS));
}

void CurrencyNames_en_WS::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_WS::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("WST"_s),
		$of("WS$"_s)
	})}));
	return data;
}

CurrencyNames_en_WS::CurrencyNames_en_WS() {
}

$Class* CurrencyNames_en_WS::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_WS, name, initialize, &_CurrencyNames_en_WS_ClassInfo_, allocate$CurrencyNames_en_WS);
	return class$;
}

$Class* CurrencyNames_en_WS::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun