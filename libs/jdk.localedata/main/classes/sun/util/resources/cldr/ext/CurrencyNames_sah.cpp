#include <sun/util/resources/cldr/ext/CurrencyNames_sah.h>

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

$MethodInfo _CurrencyNames_sah_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sah, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sah, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sah_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sah",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sah_MethodInfo_
};

$Object* allocate$CurrencyNames_sah($Class* clazz) {
	return $of($alloc(CurrencyNames_sah));
}

void CurrencyNames_sah::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sah::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of(u"₽"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Арассыыйа солкуобайа"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"АХШ дуоллара"_s)
		})
	}));
	return data;
}

CurrencyNames_sah::CurrencyNames_sah() {
}

$Class* CurrencyNames_sah::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sah, name, initialize, &_CurrencyNames_sah_ClassInfo_, allocate$CurrencyNames_sah);
	return class$;
}

$Class* CurrencyNames_sah::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun