#include <sun/util/resources/cldr/ext/CurrencyNames_sa.h>

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

$MethodInfo _CurrencyNames_sa_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sa, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sa, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sa_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sa",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sa_MethodInfo_
};

$Object* allocate$CurrencyNames_sa($Class* clazz) {
	return $of($alloc(CurrencyNames_sa));
}

void CurrencyNames_sa::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sa::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"ब्राजीली रियाल"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"चीनी युआन"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"फिरङ्गिन् मुद्रा"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"आङ्ग्लदेशीयः पाउंड"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"भारतीय रूप्यकम्"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"जापानी येन"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"रष्यदेशीय रूबल"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"यूएस डॉलर"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"अज्ञात मुद्रा"_s)
		})
	}));
	return data;
}

CurrencyNames_sa::CurrencyNames_sa() {
}

$Class* CurrencyNames_sa::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sa, name, initialize, &_CurrencyNames_sa_ClassInfo_, allocate$CurrencyNames_sa);
	return class$;
}

$Class* CurrencyNames_sa::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun