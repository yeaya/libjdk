#include <sun/util/resources/cldr/ext/CurrencyNames_en_KI.h>

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

$MethodInfo _CurrencyNames_en_KI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_KI, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_KI, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_KI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_KI",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_KI_MethodInfo_
};

$Object* allocate$CurrencyNames_en_KI($Class* clazz) {
	return $of($alloc(CurrencyNames_en_KI));
}

void CurrencyNames_en_KI::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_KI::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("AUD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_en_KI::CurrencyNames_en_KI() {
}

$Class* CurrencyNames_en_KI::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_KI, name, initialize, &_CurrencyNames_en_KI_ClassInfo_, allocate$CurrencyNames_en_KI);
	return class$;
}

$Class* CurrencyNames_en_KI::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun