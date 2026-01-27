#include <sun/util/resources/cldr/ext/CurrencyNames_nus.h>

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

$MethodInfo _CurrencyNames_nus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_nus, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_nus, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_nus_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_nus",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_nus_MethodInfo_
};

$Object* allocate$CurrencyNames_nus($Class* clazz) {
	return $of($alloc(CurrencyNames_nus));
}

void CurrencyNames_nus::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_nus::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of(u"GB£"_s)
		}),
		$$new($ObjectArray, {
			$of("SSP"_s),
			$of(u"£"_s)
		})
	}));
	return data;
}

CurrencyNames_nus::CurrencyNames_nus() {
}

$Class* CurrencyNames_nus::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_nus, name, initialize, &_CurrencyNames_nus_ClassInfo_, allocate$CurrencyNames_nus);
	return class$;
}

$Class* CurrencyNames_nus::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun