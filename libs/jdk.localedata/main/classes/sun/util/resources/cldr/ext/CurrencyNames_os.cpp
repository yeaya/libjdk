#include <sun/util/resources/cldr/ext/CurrencyNames_os.h>

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

$MethodInfo _CurrencyNames_os_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_os, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_os, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_os_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_os",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_os_MethodInfo_
};

$Object* allocate$CurrencyNames_os($Class* clazz) {
	return $of($alloc(CurrencyNames_os));
}

void CurrencyNames_os::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_os::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GEL"_s),
			$of(u"₾"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Бразилиаг реал"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Евро"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Бритайнаг Фунт"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"Лар"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Сом"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"АИШ-ы Доллар"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Нӕзонгӕ валютӕ"_s)
		})
	}));
	return data;
}

CurrencyNames_os::CurrencyNames_os() {
}

$Class* CurrencyNames_os::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_os, name, initialize, &_CurrencyNames_os_ClassInfo_, allocate$CurrencyNames_os);
	return class$;
}

$Class* CurrencyNames_os::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun