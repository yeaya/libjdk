#include <sun/util/resources/cldr/ext/CurrencyNames_zh_Hans_HK.h>
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

void CurrencyNames_zh_Hans_HK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_zh_Hans_HK::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"CNY"_s,
			u"CN¥"_s
		}),
		$$new($ObjectArray, {
			"kyd"_s,
			u"开曼群岛元"_s
		}),
		$$new($ObjectArray, {
			"xag"_s,
			u"白银"_s
		})
	}));
	return data;
}

CurrencyNames_zh_Hans_HK::CurrencyNames_zh_Hans_HK() {
}

$Class* CurrencyNames_zh_Hans_HK::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_zh_Hans_HK, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_zh_Hans_HK, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_zh_Hans_HK",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_zh_Hans_HK, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_zh_Hans_HK);
	});
	return class$;
}

$Class* CurrencyNames_zh_Hans_HK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun