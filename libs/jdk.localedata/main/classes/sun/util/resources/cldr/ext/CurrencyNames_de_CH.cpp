#include <sun/util/resources/cldr/ext/CurrencyNames_de_CH.h>

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

$MethodInfo _CurrencyNames_de_CH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_de_CH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_de_CH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_de_CH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_de_CH",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_de_CH_MethodInfo_
};

$Object* allocate$CurrencyNames_de_CH($Class* clazz) {
	return $of($alloc(CurrencyNames_de_CH));
}

void CurrencyNames_de_CH::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_de_CH::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of("EUR"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Weissrussischer Rubel"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Weissrussischer Rubel (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"São-toméischer Dobra (2018)"_s)
		})
	}));
	return data;
}

CurrencyNames_de_CH::CurrencyNames_de_CH() {
}

$Class* CurrencyNames_de_CH::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_de_CH, name, initialize, &_CurrencyNames_de_CH_ClassInfo_, allocate$CurrencyNames_de_CH);
	return class$;
}

$Class* CurrencyNames_de_CH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun