#include <sun/util/resources/cldr/ext/CurrencyNames_jgo.h>

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

$MethodInfo _CurrencyNames_jgo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_jgo, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_jgo, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_jgo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_jgo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_jgo_MethodInfo_
};

$Object* allocate$CurrencyNames_jgo($Class* clazz) {
	return $of($alloc(CurrencyNames_jgo));
}

void CurrencyNames_jgo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_jgo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Ndɔ́la-Kanandâ"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Ʉ́lɔ"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Ndɔ́la-Amɛlîk"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Fɛlâŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"ntɛ-ŋkáp yi pɛ́ ká kɛ́ jínɛ"_s)
		})
	}));
	return data;
}

CurrencyNames_jgo::CurrencyNames_jgo() {
}

$Class* CurrencyNames_jgo::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_jgo, name, initialize, &_CurrencyNames_jgo_ClassInfo_, allocate$CurrencyNames_jgo);
	return class$;
}

$Class* CurrencyNames_jgo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun