#include <sun/util/resources/cldr/ext/CurrencyNames_sat.h>

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

$MethodInfo _CurrencyNames_sat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sat, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sat, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sat",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sat_MethodInfo_
};

$Object* allocate$CurrencyNames_sat($Class* clazz) {
	return $of($alloc(CurrencyNames_sat));
}

void CurrencyNames_sat::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sat::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"ᱵᱨᱟᱡᱤᱞᱤᱭᱟᱱ ᱨᱤᱭᱟᱹᱞ"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"ᱪᱤᱱᱤ ᱭᱩᱣᱟᱱ"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"ᱭᱩᱨᱚ"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"ᱵᱨᱤᱴᱤᱥ ᱯᱟᱣᱩᱸᱰ"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"ᱥᱤᱧᱚᱛ ᱨᱮᱱᱟᱜ ᱴᱟᱠᱟ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"ᱡᱟᱯᱟᱱᱤ ᱭᱮᱱ"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"ᱨᱩᱥᱤ ᱨᱩᱵᱟᱹᱞ"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"ᱭᱩᱮᱥ ᱰᱚᱞᱟᱨ"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"ᱵᱟᱝᱩᱨᱩᱢ ᱠᱟᱨᱮᱱᱥᱤ"_s)
		})
	}));
	return data;
}

CurrencyNames_sat::CurrencyNames_sat() {
}

$Class* CurrencyNames_sat::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sat, name, initialize, &_CurrencyNames_sat_ClassInfo_, allocate$CurrencyNames_sat);
	return class$;
}

$Class* CurrencyNames_sat::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun