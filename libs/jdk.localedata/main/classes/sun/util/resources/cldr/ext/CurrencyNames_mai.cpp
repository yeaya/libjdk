#include <sun/util/resources/cldr/ext/CurrencyNames_mai.h>

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

$MethodInfo _CurrencyNames_mai_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mai, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mai, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_mai_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mai",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mai_MethodInfo_
};

$Object* allocate$CurrencyNames_mai($Class* clazz) {
	return $of($alloc(CurrencyNames_mai));
}

void CurrencyNames_mai::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mai::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"ब्राज़ीली रियाल"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"चीनी युआन"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"यूरो"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"ब्रिटिश पाउंड स्टर्लिंग"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"भारतीय रुपया"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"जापानी येन"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"रूसी रूबल"_s)
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

CurrencyNames_mai::CurrencyNames_mai() {
}

$Class* CurrencyNames_mai::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mai, name, initialize, &_CurrencyNames_mai_ClassInfo_, allocate$CurrencyNames_mai);
	return class$;
}

$Class* CurrencyNames_mai::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun