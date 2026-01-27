#include <sun/util/resources/cldr/ext/CurrencyNames_haw.h>

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

$MethodInfo _CurrencyNames_haw_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_haw, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_haw, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_haw_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_haw",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_haw_MethodInfo_
};

$Object* allocate$CurrencyNames_haw($Class* clazz) {
	return $of($alloc(CurrencyNames_haw));
}

void CurrencyNames_haw::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_haw::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("USD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_haw::CurrencyNames_haw() {
}

$Class* CurrencyNames_haw::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_haw, name, initialize, &_CurrencyNames_haw_ClassInfo_, allocate$CurrencyNames_haw);
	return class$;
}

$Class* CurrencyNames_haw::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun