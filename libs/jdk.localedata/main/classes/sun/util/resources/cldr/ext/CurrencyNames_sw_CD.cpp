#include <sun/util/resources/cldr/ext/CurrencyNames_sw_CD.h>

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

$MethodInfo _CurrencyNames_sw_CD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sw_CD, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sw_CD, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sw_CD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sw_CD",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sw_CD_MethodInfo_
};

$Object* allocate$CurrencyNames_sw_CD($Class* clazz) {
	return $of($alloc(CurrencyNames_sw_CD));
}

void CurrencyNames_sw_CD::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sw_CD::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CDF"_s),
			$of("FC"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan Renminbi ya China"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Bir ya Uhabeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Sarafu ya Kijapani"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariary ya Bukini"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ugwiya ya Moritania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ugwiya ya Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupia ya Shelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Faranga CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Faranga CFA BCEAO"_s)
		})
	}));
	return data;
}

CurrencyNames_sw_CD::CurrencyNames_sw_CD() {
}

$Class* CurrencyNames_sw_CD::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sw_CD, name, initialize, &_CurrencyNames_sw_CD_ClassInfo_, allocate$CurrencyNames_sw_CD);
	return class$;
}

$Class* CurrencyNames_sw_CD::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun