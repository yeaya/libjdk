#include <sun/util/resources/cldr/ext/CurrencyNames_yi.h>

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

$MethodInfo _CurrencyNames_yi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_yi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_yi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_yi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_yi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_yi_MethodInfo_
};

$Object* allocate$CurrencyNames_yi($Class* clazz) {
	return $of($alloc(CurrencyNames_yi));
}

void CurrencyNames_yi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_yi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of("RUB"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"בראזיל רעאל"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"בעליז דאלאַר"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"שווייצער פֿראַנק"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"כינעזישער יואן"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"איירא"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"פֿונט שטערלינג"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"אינדישער רופי"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"יאפאנעזישער יען"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"רוסישער רובל"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"שוועדישע קראנע"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"אמעריקאנער דאלאר"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"זילבער"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"גאלד"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"אומבאַוואוסטע וואַלוטע"_s)
		})
	}));
	return data;
}

CurrencyNames_yi::CurrencyNames_yi() {
}

$Class* CurrencyNames_yi::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_yi, name, initialize, &_CurrencyNames_yi_ClassInfo_, allocate$CurrencyNames_yi);
	return class$;
}

$Class* CurrencyNames_yi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun