#include <sun/util/resources/cldr/ext/CurrencyNames_ca_FR.h>

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

$MethodInfo _CurrencyNames_ca_FR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ca_FR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ca_FR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ca_FR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ca_FR",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ca_FR_MethodInfo_
};

$Object* allocate$CurrencyNames_ca_FR($Class* clazz) {
	return $of($alloc(CurrencyNames_ca_FR));
}

void CurrencyNames_ca_FR::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ca_FR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("FRF"_s),
		$of("F"_s)
	})}));
	return data;
}

CurrencyNames_ca_FR::CurrencyNames_ca_FR() {
}

$Class* CurrencyNames_ca_FR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ca_FR, name, initialize, &_CurrencyNames_ca_FR_ClassInfo_, allocate$CurrencyNames_ca_FR);
	return class$;
}

$Class* CurrencyNames_ca_FR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun