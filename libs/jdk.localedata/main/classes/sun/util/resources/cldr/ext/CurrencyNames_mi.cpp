#include <sun/util/resources/cldr/ext/CurrencyNames_mi.h>

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

$MethodInfo _CurrencyNames_mi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_mi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mi_MethodInfo_
};

$Object* allocate$CurrencyNames_mi($Class* clazz) {
	return $of($alloc(CurrencyNames_mi));
}

void CurrencyNames_mi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"¥"_s)
		}),
		$$new($ObjectArray, {
			$of("NZD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Real Parahi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan Haina"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Pāuna Piritene"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rupī Iniana"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yen Hapanihi"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Tāra o Aotearoa"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Rūpera Ruhiana"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Tāra US"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Moni Tē Mōhiotia"_s)
		})
	}));
	return data;
}

CurrencyNames_mi::CurrencyNames_mi() {
}

$Class* CurrencyNames_mi::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mi, name, initialize, &_CurrencyNames_mi_ClassInfo_, allocate$CurrencyNames_mi);
	return class$;
}

$Class* CurrencyNames_mi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun