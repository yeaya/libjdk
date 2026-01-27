#include <sun/util/resources/cldr/ext/CurrencyNames_es_US.h>

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

$MethodInfo _CurrencyNames_es_US_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_US, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_US, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_US_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_US",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_US_MethodInfo_
};

$Object* allocate$CurrencyNames_es_US($Class* clazz) {
	return $of($alloc(CurrencyNames_es_US));
}

void CurrencyNames_es_US::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_US::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("JPY"_s),
			$of(u"¥"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"taka bangladesí"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"ngultrum butanés"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("birr"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("kip laosiano"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("bat"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("sum"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("dong vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"franco CFA de África central"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha zambiano"_s)
		})
	}));
	return data;
}

CurrencyNames_es_US::CurrencyNames_es_US() {
}

$Class* CurrencyNames_es_US::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_US, name, initialize, &_CurrencyNames_es_US_ClassInfo_, allocate$CurrencyNames_es_US);
	return class$;
}

$Class* CurrencyNames_es_US::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun