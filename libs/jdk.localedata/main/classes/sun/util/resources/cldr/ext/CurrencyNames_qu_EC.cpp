#include <sun/util/resources/cldr/ext/CurrencyNames_qu_EC.h>

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

$MethodInfo _CurrencyNames_qu_EC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_qu_EC, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_qu_EC, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_qu_EC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_qu_EC",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_qu_EC_MethodInfo_
};

$Object* allocate$CurrencyNames_qu_EC($Class* clazz) {
	return $of($alloc(CurrencyNames_qu_EC));
}

void CurrencyNames_qu_EC::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_qu_EC::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PEN"_s),
			$of("PEN"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		})
	}));
	return data;
}

CurrencyNames_qu_EC::CurrencyNames_qu_EC() {
}

$Class* CurrencyNames_qu_EC::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_qu_EC, name, initialize, &_CurrencyNames_qu_EC_ClassInfo_, allocate$CurrencyNames_qu_EC);
	return class$;
}

$Class* CurrencyNames_qu_EC::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun