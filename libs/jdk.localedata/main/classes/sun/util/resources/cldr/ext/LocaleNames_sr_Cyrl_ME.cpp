#include <sun/util/resources/cldr/ext/LocaleNames_sr_Cyrl_ME.h>
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

void LocaleNames_sr_Cyrl_ME::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sr_Cyrl_ME::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"BY"_s,
			u"Бјелорусија"_s
		}),
		$$new($ObjectArray, {
			"CG"_s,
			u"Конго"_s
		}),
		$$new($ObjectArray, {
			"CZ"_s,
			u"Чешка Република"_s
		}),
		$$new($ObjectArray, {
			"DE"_s,
			u"Њемачка"_s
		}),
		$$new($ObjectArray, {
			"KN"_s,
			u"Свети Китс и Невис"_s
		}),
		$$new($ObjectArray, {
			"PM"_s,
			u"Свети Пјер и Микелон"_s
		}),
		$$new($ObjectArray, {
			"RE"_s,
			u"Реунион"_s
		}),
		$$new($ObjectArray, {
			"UM"_s,
			u"Мања удаљена острва САД"_s
		}),
		$$new($ObjectArray, {
			"VC"_s,
			u"Свети Винсент и Гренадини"_s
		}),
		$$new($ObjectArray, {
			"VG"_s,
			u"Британска Дјевичанска Острва"_s
		}),
		$$new($ObjectArray, {
			"VI"_s,
			u"Америчка Дјевичанска Острва"_s
		}),
		$$new($ObjectArray, {
			"be"_s,
			u"бјелоруски"_s
		}),
		$$new($ObjectArray, {
			"bm"_s,
			u"бамананкан"_s
		}),
		$$new($ObjectArray, {
			"bn"_s,
			u"бангла"_s
		}),
		$$new($ObjectArray, {
			"ff"_s,
			u"фулах"_s
		}),
		$$new($ObjectArray, {
			"ht"_s,
			u"хаићански креолски"_s
		}),
		$$new($ObjectArray, {
			"lo"_s,
			u"лаошки"_s
		}),
		$$new($ObjectArray, {
			"xh"_s,
			u"исикоса"_s
		}),
		$$new($ObjectArray, {
			"zu"_s,
			u"исизулу"_s
		}),
		$$new($ObjectArray, {
			"arn"_s,
			u"мапудунгун"_s
		}),
		$$new($ObjectArray, {
			"moh"_s,
			u"мохок"_s
		}),
		$$new($ObjectArray, {
			"nqo"_s,
			u"н’ко"_s
		}),
		$$new($ObjectArray, {
			"shi"_s,
			u"јужни шилха"_s
		}),
		$$new($ObjectArray, {
			"tzm"_s,
			u"централноатласки тамашек"_s
		}),
		$$new($ObjectArray, {
			"zgh"_s,
			u"стандардни марокански тамашек"_s
		})
	}));
	return data;
}

LocaleNames_sr_Cyrl_ME::LocaleNames_sr_Cyrl_ME() {
}

$Class* LocaleNames_sr_Cyrl_ME::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sr_Cyrl_ME, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sr_Cyrl_ME, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_sr_Cyrl_ME",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_sr_Cyrl_ME, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_sr_Cyrl_ME);
	});
	return class$;
}

$Class* LocaleNames_sr_Cyrl_ME::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun