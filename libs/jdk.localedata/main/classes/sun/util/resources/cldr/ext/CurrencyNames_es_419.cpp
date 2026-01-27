#include <sun/util/resources/cldr/ext/CurrencyNames_es_419.h>

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

$MethodInfo _CurrencyNames_es_419_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_419, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_419, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_419_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_419",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_419_MethodInfo_
};

$Object* allocate$CurrencyNames_es_419($Class* clazz) {
	return $of($alloc(CurrencyNames_es_419));
}

void CurrencyNames_es_419::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_419::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of("EUR"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of("THB"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("USD"_s)
		}),
		$$new($ObjectArray, {
			$of("VND"_s),
			$of("VND"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"florín de las Antillas Neerlandesas"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"dólar de Bermudas"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"kwacha malauí"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"córdoba nicaragüense"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("baht tailandes"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("som uzbeko"_s)
		})
	}));
	return data;
}

CurrencyNames_es_419::CurrencyNames_es_419() {
}

$Class* CurrencyNames_es_419::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_419, name, initialize, &_CurrencyNames_es_419_ClassInfo_, allocate$CurrencyNames_es_419);
	return class$;
}

$Class* CurrencyNames_es_419::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun