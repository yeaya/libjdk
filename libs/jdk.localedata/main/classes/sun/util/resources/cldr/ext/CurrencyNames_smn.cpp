#include <sun/util/resources/cldr/ext/CurrencyNames_smn.h>

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

$MethodInfo _CurrencyNames_smn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_smn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_smn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_smn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_smn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_smn_MethodInfo_
};

$Object* allocate$CurrencyNames_smn($Class* clazz) {
	return $of($alloc(CurrencyNames_smn));
}

void CurrencyNames_smn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_smn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"Tanska ruvnâ"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"Eesti ruvnâ"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"Suomâ märkki"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Island ruvnâ"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("Latvia ruble"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"Taažâ ruvnâ"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"Ruotâ ruvnâ"_s)
		})
	}));
	return data;
}

CurrencyNames_smn::CurrencyNames_smn() {
}

$Class* CurrencyNames_smn::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_smn, name, initialize, &_CurrencyNames_smn_ClassInfo_, allocate$CurrencyNames_smn);
	return class$;
}

$Class* CurrencyNames_smn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun