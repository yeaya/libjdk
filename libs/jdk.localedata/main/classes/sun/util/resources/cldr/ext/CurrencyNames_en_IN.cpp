#include <sun/util/resources/cldr/ext/CurrencyNames_en_IN.h>

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

$MethodInfo _CurrencyNames_en_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_IN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_IN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_IN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_IN_MethodInfo_
};

$Object* allocate$CurrencyNames_en_IN($Class* clazz) {
	return $of($alloc(CurrencyNames_en_IN));
}

void CurrencyNames_en_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Venezuelan Bolívar"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("VES"_s)
		})
	}));
	return data;
}

CurrencyNames_en_IN::CurrencyNames_en_IN() {
}

$Class* CurrencyNames_en_IN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_IN, name, initialize, &_CurrencyNames_en_IN_ClassInfo_, allocate$CurrencyNames_en_IN);
	return class$;
}

$Class* CurrencyNames_en_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun