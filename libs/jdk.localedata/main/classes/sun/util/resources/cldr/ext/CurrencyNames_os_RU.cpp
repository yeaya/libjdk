#include <sun/util/resources/cldr/ext/CurrencyNames_os_RU.h>

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

$MethodInfo _CurrencyNames_os_RU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_os_RU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_os_RU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_os_RU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_os_RU",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_os_RU_MethodInfo_
};

$Object* allocate$CurrencyNames_os_RU($Class* clazz) {
	return $of($alloc(CurrencyNames_os_RU));
}

void CurrencyNames_os_RU::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_os_RU::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GEL"_s),
			$of("GEL"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of(u"₽"_s)
		})
	}));
	return data;
}

CurrencyNames_os_RU::CurrencyNames_os_RU() {
}

$Class* CurrencyNames_os_RU::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_os_RU, name, initialize, &_CurrencyNames_os_RU_ClassInfo_, allocate$CurrencyNames_os_RU);
	return class$;
}

$Class* CurrencyNames_os_RU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun